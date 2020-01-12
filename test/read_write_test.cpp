 /* Copyright (c) 2018, NIF File Format Library and Tools 
 All rights reserved. Please see niflib.h for license. */

#include "test_utils.h"
#include "mikktspace.h"
#include "geometry.h"
#include <functional>
#include <bitset>
#include <boundingmesh.h>

#include <VHACD.h>

#include <filesystem>

//#include <gtest/gtest.h>
//
//#include <filesystem>
//
//#include <niflib.h>
//#include <obj\NiObject.h>
//#include <obj\BSFadeNode.h>
//#include <field_visitor.h>
//#include <interfaces\typed_visitor.h>
//#include <objTmpl.cpp>
//
////hierarchy
//#include <obj/NiTimeController.h>
//#include <obj/NiExtraData.h>
//#include <obj/NiCollisionObject.h>
//#include <obj/NiProperty.h>
//#include <obj/NiDynamicEffect.h>
//
//#include <algorithm>
//#include <iterator>
//#include <string>
//#include <fstream>
//#include <utility>

//#include <objTmpl.cpp>



TEST(ReadWriteTest, ReadWriteTest) {
	NifInfo info;
	NifInfo newinfo;
	vector<path> nifs;
	findFiles(test_nifs_in_path / "skyrim" , ".nif", nifs);
	ASSERT_TRUE(nifs.size() > 0);
	for (size_t i = 0; i < nifs.size(); i++) {
		string in_path = nifs[i].string();
		vector<NiObjectRef> objects = ReadNifList(in_path.c_str(), &info);
		//Chinese Officer weapon has UV2 == 34
		if (info.userVersion2 != 83)
			//Some Oblivion models somehow slipped into skyrim release
			continue;
		NiObjectRef root = GetFirstRoot(objects);
		path out_path = test_resources_path / "nifs" / "out" / "test.nif";
		WriteNifTree(out_path.string().c_str(), root, info);
		vector<NiObjectRef> new_objects = ReadNifList(out_path.string().c_str(), &newinfo);
		NiObjectRef new_root = GetFirstRoot(new_objects);
		ASSERT_TRUE(*root == *new_root);
		ASSERT_EQ(objects.size(), new_objects.size());
		for (int j = 0; j < objects.size(); j++) {
			ASSERT_EQ(*objects[j], *new_objects[j]) << "on Object[" << j << "], file " << in_path <<  std::endl;
		}
		ASSERT_EQ(compare_files(nifs[i].string().c_str(), out_path.string().c_str()), true) << "File corrupted: " + nifs[i].string();
	}
}

//TEST(Equals, Skyrim) {
//	NifInfo info;
//	vector<path> nifs;
//	findNifs(test_nifs_in_path / "skyrim", "nif", nifs);
//	path inpath;
//	path out_path;
//	NiObjectRef root;
//	NiObjectRef new_root;
//	vector<NiObjectRef> objects;
//	vector<NiObjectRef> new_objects;
//	for (size_t i = 0; i < nifs.size(); i++) {
//		inpath = nifs[i];
//		objects = ReadNifList(inpath.str(), &info);
//		root = GetFirstRoot(objects);
//		out_path = test_resources_path / "nifs" / "out" / nifs[i].filename();
//		WriteNifTree(out_path.str(), root, info);
//		new_objects = ReadNifList(out_path.str(), &info);
//		new_root = GetFirstRoot(new_objects);
//		ASSERT_TRUE(*root == *new_root);
//	}
//}

//TEST(Read, Last) {
//	NifInfo info;
//	vector<path> nifs;
//
//	findNifs(test_nifs_in_path / "oblivion", "nif", nifs);
//
//	for (size_t i = 0; i < nifs.size(); i++) {
//		NiObjectRef root = ReadNifTree(nifs[i].str(), &info);
//	}
//
//}

class TypeStackVisitor : public StackVisitor {	
public:
	std::set<string> paths;
	std::set<string> pathroots;

	virtual inline void start(NiObject& in, const NifInfo& info, NiObject& parent) {
		string hierarchyPath = "";
		string lastRoot = "";
		for (niobjects_queue::iterator it = stack.begin(); it != stack.end(); it++) {
			if (it->get().GetInternalType().IsSameType(NiNode::TYPE) || it->get().GetInternalType().IsSameType(BSFadeNode::TYPE)) {
				pathroots.insert(lastRoot);
				break;
			}
			lastRoot = it->get().GetInternalType().GetTypeName();
			hierarchyPath = lastRoot + "/"+ hierarchyPath;
		}
		if (in.GetRefs().empty())
			paths.insert(hierarchyPath);
	}
	virtual inline void end(NiObject& in, const NifInfo& info, NiObject& parent) {}
};

//class ClassStatsHolder {
//	path defaultPath;
//	vector<path> outliers;
//	TypeStackVisitor visitor;
//
//	void addTree(NiObjectRef rootObject) {
//		rootObject->accept(TypeStackVisitor(), NifInfo());
//	}
//
//	void addTree(NiObjectRef rootObject) {
//		rootObject->accept(TypeStackVisitor(), NifInfo());
//	}
//};

class CollectionStatsHolder : public FieldVisitorImpl<CollectionStatsHolder> {

public:
	std::set<string> collections_paths;
	std::set<string> typenames;
	int size = 0;
	int files = 0;
	std::map<string, int> classes_hits;
	std::map<string, std::vector<NiObjectRef>> classes;
	std::set<string> path_roots;
	std::map<string, set<string>> node_values;

	CollectionStatsHolder() : FieldVisitorImpl<CollectionStatsHolder>(*this) {}

	template<typename Ref/*, typename std::enable_if<IsVisitableRef<Ref>>::type* = nullptr */>
	inline void visit(Ref& obj, const unsigned int field_index) { /*NTD*/ }

	//template<typename Type, typename std::enable_if<!IsVisitableRef<Type>>::type* = nullptr >
	//inline void visit(Type& obj, const unsigned int field_index) {
	//	stringstream ss; ss << obj;
	//	ss.str();
	//}

	void addObject(NiObjectRef object) {
		string key = object->GetInternalType().GetTypeName();
		node_values[key].insert(object->asString(true));
		int hits = classes_hits[key] != NULL ? classes_hits[key] + 1 : 1;
		classes_hits[key] = hits;
		typenames.insert(key);
		size++;
	}

	void addObjects(std::vector<NiObjectRef> objects, const NifInfo& info) {
		for (NiObjectRef ref : objects)
			addObject(ref);
		set<NiObjectRef> roots = FindRoots(objects);
		TypeStackVisitor tv;
		for (NiObjectRef root : roots) {
			root->accept(tv, info);
		}
		path_roots.insert(tv.pathroots.begin(), tv.pathroots.end());
		collections_paths.insert(tv.paths.begin(), tv.paths.end());
		files++;
	}

	void scanPath(path in) {
		NifInfo info;
		addObjects(ReadNifList(in.string().c_str(), &info), info);
	}

	std::string toString() {
		std::stringstream out;
		out << "Collection holds info on " << size << " objects in " << files << " files." << endl;
		out << "Class statistics: per uses table" << std::endl;
		for_each(classes_hits.begin(), classes_hits.end(),
			[&out](pair<string, int> a) { out << "\t" << a.first << ":" << a.second << endl; });
		out << "Path Root Nodes after ninodes:" << endl;
		for_each(path_roots.begin(), path_roots.end(),
			[&out](string a) {out << "\t" << a << endl; });
		out << "Paths:" << endl;
		for_each(collections_paths.begin(), collections_paths.end(),
			[&out](string a) {out << "\t" << a << endl;});
		return out.str();
	}
};

void outFile(const string& file_content,const path& file_path) {
	std::ofstream out_file(file_path.string());  // write the file
	//csvFile.open("helloWorldTestFile.csv");
	if (out_file.is_open()) {
		out_file << file_content << std::endl;
		out_file.close();
	}
	else {
		throw runtime_error("Unable to write to " + file_path.string());
	}
}

TEST(Debug, outFile) {
	path out_path = test_nifs_in_path / "Statistics.txt";
	string file_content = "MAH";
	outFile(file_content, out_path);
}

TEST(Read, Stats) {
	using namespace std;
	NifInfo oblivion_info;
	NifInfo skyrim_info;
	vector<path> nifs;
	string log_text = "";

	CollectionStatsHolder oblivion_niobjects;
	CollectionStatsHolder skyrim_niobjects;

	path log_file = test_nifs_in_path / "Statistics.txt";

	findFiles(test_nifs_in_path / "oblivion", ".nif", nifs);
	//KF are really nif files
	findFiles(test_kf_in_path / "oblivion", ".kf", nifs);

	for (size_t i = 0; i < nifs.size(); i++) {
		oblivion_niobjects.addObjects(
			ReadNifList(nifs[i].string().c_str(), &oblivion_info), oblivion_info
		);
	}
	log_text += "Oblivion Collection:\n";
	log_text += oblivion_niobjects.toString();

	nifs.clear();

	findFiles(test_nifs_in_path / "skyrim", ".nif", nifs);
	for (size_t i = 0; i < nifs.size(); i++) {
		skyrim_niobjects.addObjects(
			ReadNifList(nifs[i].string().c_str(), &skyrim_info), skyrim_info
		);
		//NiObjectRef root = GetFirstRoot(objects);
	}
	log_text += "Skyrim Collection:\n";
	log_text += skyrim_niobjects.toString();

	set<string> games_intersection;
	set<string> oblivion_typenames = oblivion_niobjects.collections_paths;
	set<string> union_typenames = oblivion_niobjects.collections_paths;
	set<string> skyrim_typenames = skyrim_niobjects.collections_paths;
	union_typenames.insert(skyrim_typenames.begin(), skyrim_typenames.end());

	set<string> OblivionNotInSkyrim;
	set<string> SkyrimNotInOblivion;

	for (string u_typename : union_typenames) {
		set<string>::iterator oblivionPosition = oblivion_typenames.find(u_typename);
		set<string>::iterator skyrimPosition = skyrim_typenames.find(u_typename);
		if (oblivionPosition != oblivion_typenames.end() &&
			skyrimPosition != skyrim_typenames.end())
			games_intersection.insert(u_typename);
		else if (oblivionPosition != oblivion_typenames.end())
			OblivionNotInSkyrim.insert(u_typename);
		else if (skyrimPosition != skyrim_typenames.end())
			SkyrimNotInOblivion.insert(u_typename);
	}

	log_text += "Common Paths: " + to_string(games_intersection.size())+ "\n";
	for_each(games_intersection.begin(), games_intersection.end(),
		[&log_text](string a) { log_text += "\t" + a + "\n"; });
	log_text += "Oblivion Paths not in Skyrim: " + to_string(OblivionNotInSkyrim.size()) + "\n";
	for_each(OblivionNotInSkyrim.begin(), OblivionNotInSkyrim.end(),
		[&log_text](string a) { log_text += "\t" + a + "\n"; });
	log_text += "Skyrim Paths not in Oblivion: " + to_string(SkyrimNotInOblivion.size()) + "\n";
	for_each(SkyrimNotInOblivion.begin(), SkyrimNotInOblivion.end(),
		[&log_text](string a) { log_text += "\t" + a + "\n"; });
	outFile(log_text, log_file);
}

TEST(Read, BSXFlagsStats) {
	using namespace std;
	NifInfo oblivion_info;
	NifInfo skyrim_info;
	vector<path> nifs;
	string log_text = "";

	std::set<unsigned int> oblivion_flags;
	std::map<unsigned int, std::set<path>> oblivion_files;
	std::map<unsigned int, std::set<string>> bsxflags_node_types;

	path log_file = test_nifs_in_path / "BSXFlags_Statistics.txt";

	findFiles(test_nifs_in_path / "oblivion", ".nif", nifs);
	//KF are really nif files
	//findFiles(test_kf_in_path / "oblivion", ".kf", nifs);

	for (size_t i = 0; i < nifs.size(); i++) {
		vector< Ref<NiObject> > objs = ReadNifList(nifs[i].string().c_str(), &oblivion_info);
		std::set<string> node_types;
		for (Ref<NiObject> ref : objs) {
			node_types.insert(ref->GetInternalType().GetTypeName());
		}
		bool found = false;
		for (Ref<NiObject> ref : objs) {
			if (ref->IsSameType(BSXFlags::TYPE)) {
				found = true;
				BSXFlags this_value = *DynamicCast<BSXFlags>(ref);
				int value = this_value.GetIntegerData();
				oblivion_flags.insert(value);
				std::map<unsigned int, std::set<path>>::iterator it = oblivion_files.find(value);
				if (it != oblivion_files.end()) {
					it->second.insert(nifs[i]);
				}
				else {
					std::set<path> this_value_paths;
					this_value_paths.insert(nifs[i]);
					oblivion_files[value] = this_value_paths;
				}
				std::map<unsigned int, std::set<string>>::iterator itb = bsxflags_node_types.find(value);
				if (itb != bsxflags_node_types.end()) {
					itb->second.insert(node_types.begin(),node_types.end());
				}
				else {
					bsxflags_node_types[value] = node_types;
				}
			}			
		}
		if (!found)
		{
			int value = 0;
			oblivion_flags.insert(value);
			std::map<unsigned int, std::set<path>>::iterator it = oblivion_files.find(value);
			if (it != oblivion_files.end()) {
				it->second.insert(nifs[i]);
			}
			else {
				std::set<path> this_value_paths;
				this_value_paths.insert(nifs[i]);
				oblivion_files[value] = this_value_paths;
			}
			std::map<unsigned int, std::set<string>>::iterator itb = bsxflags_node_types.find(value);
			if (itb != bsxflags_node_types.end()) {
				itb->second.insert(node_types.begin(), node_types.end());
			}
			else {
				bsxflags_node_types[value] = node_types;
			}
		}
	}
	for_each(oblivion_files.begin(), oblivion_files.end(),
		[&log_text, &bsxflags_node_types](pair<unsigned int, std::set<path>> a) {
		log_text += "BSXFlags: " + std::bitset<32>(a.first).to_string() + "\n";
		std::set<string> this_node_types = bsxflags_node_types[a.first];
		log_text += "Unique nodes from 0: \n";
		set<string> diff;
		set<string> base = bsxflags_node_types[0];
		std::set_difference(this_node_types.begin(), this_node_types.end(), base.begin(), base.end(),
			std::inserter(diff, diff.begin()));
		for (string node_class : diff)
			log_text += "\t" + node_class + "\n";
		log_text += "Node classes: \n";
		for (string node_class : this_node_types)
			log_text += "\t" + node_class + "\n";
		log_text += "Files: \n";
		for (path p : a.second)
			log_text += "\t" + p.string() + "\n";
	});

	outFile(log_text, log_file);
}

TEST(Read, SkyrimBSXFlagsStats) {
	using namespace std;
	NifInfo oblivion_info;
	NifInfo skyrim_info;
	vector<path> nifs;
	string log_text = "";

	std::set<unsigned int> oblivion_flags;
	std::map<unsigned int, std::set<path>> oblivion_files;
	std::map<unsigned int, std::set<string>> bsxflags_node_types;

	path log_file = test_nifs_in_path / "BSXFlags_Skyrim_Statistics.txt";

	findFiles(test_nifs_in_path / "skyrim", ".nif", nifs);
	//KF are really nif files
	//findFiles(test_kf_in_path / "oblivion", ".kf", nifs);

	for (size_t i = 0; i < nifs.size(); i++) {
		vector< Ref<NiObject> > objs = ReadNifList(nifs[i].string().c_str(), &oblivion_info);
		std::set<string> node_types;
		for (Ref<NiObject> ref : objs) {
			node_types.insert(ref->GetInternalType().GetTypeName());
		}
		bool found = false;
		for (Ref<NiObject> ref : objs) {
			if (ref->IsSameType(BSXFlags::TYPE)) {
				found = true;
				BSXFlags this_value = *DynamicCast<BSXFlags>(ref);
				int value = this_value.GetIntegerData();
				oblivion_flags.insert(value);
				std::map<unsigned int, std::set<path>>::iterator it = oblivion_files.find(value);
				if (it != oblivion_files.end()) {
					it->second.insert(nifs[i]);
				}
				else {
					std::set<path> this_value_paths;
					this_value_paths.insert(nifs[i]);
					oblivion_files[value] = this_value_paths;
				}
				std::map<unsigned int, std::set<string>>::iterator itb = bsxflags_node_types.find(value);
				if (itb != bsxflags_node_types.end()) {
					itb->second.insert(node_types.begin(), node_types.end());
				}
				else {
					bsxflags_node_types[value] = node_types;
				}
			}
		}
		if (!found)
		{
			int value = 0;
			oblivion_flags.insert(value);
			std::map<unsigned int, std::set<path>>::iterator it = oblivion_files.find(value);
			if (it != oblivion_files.end()) {
				it->second.insert(nifs[i]);
			}
			else {
				std::set<path> this_value_paths;
				this_value_paths.insert(nifs[i]);
				oblivion_files[value] = this_value_paths;
			}
			std::map<unsigned int, std::set<string>>::iterator itb = bsxflags_node_types.find(value);
			if (itb != bsxflags_node_types.end()) {
				itb->second.insert(node_types.begin(), node_types.end());
			}
			else {
				bsxflags_node_types[value] = node_types;
			}
		}
	}
	for_each(oblivion_files.begin(), oblivion_files.end(),
		[&log_text, &bsxflags_node_types](pair<unsigned int, std::set<path>> a) {
		log_text += "BSXFlags: " + std::bitset<32>(a.first).to_string() + "\n";
		std::set<string> this_node_types = bsxflags_node_types[a.first];
		log_text += "Unique nodes from 0: \n";
		set<string> diff;
		set<string> base = bsxflags_node_types[0];
		std::set_difference(this_node_types.begin(), this_node_types.end(), base.begin(), base.end(),
			std::inserter(diff, diff.begin()));
		for (string node_class : diff)
			log_text += "\t" + node_class + "\n";
		log_text += "Node classes: \n";
		for (string node_class : this_node_types)
			log_text += "\t" + node_class + "\n";
		log_text += "Files: \n";
		for (path p : a.second)
			log_text += "\t" + p.string() + "\n";
	});

	outFile(log_text, log_file);
}

class SingleChunkFlagVerifier : public RecursiveFieldVisitor<SingleChunkFlagVerifier> {

	int n_collisions = 0;
	int n_phantoms = 0;
	int n_constraints = 0;
	bool hasBranches = false;
	bool branchesResult = true;
	set<pair<bhkEntity*, bhkEntity*>>& entitiesPair;
	const NifInfo& this_info;
	set<NiObject*>& alreadyVisitedNodes;

public:
	bool singleChunkVerified = false;

	SingleChunkFlagVerifier(NiObject& data, const NifInfo& info) :
		RecursiveFieldVisitor(*this, info), this_info(info), alreadyVisitedNodes(set<NiObject*>()), entitiesPair(set<pair<bhkEntity*, bhkEntity*>>())
	{
		data.accept(*this, info);

		bool singlechain = false;
		if (n_collisions - n_constraints == 1) {
			singlechain = true;
			singleChunkVerified = true;
		}
		if (n_phantoms > 0 && (singlechain || n_collisions == 0)) {
			singleChunkVerified = true;
		}

		if (hasBranches) {
			if (n_collisions == 0 && n_phantoms == 0)
				singleChunkVerified = singleChunkVerified || branchesResult;
			else
				singleChunkVerified = singleChunkVerified && branchesResult;
		}
	}

	SingleChunkFlagVerifier(NiObject& data, const NifInfo& info, set<NiObject*>& alreadyVisitedNodes, set<pair<bhkEntity*, bhkEntity*>>& entitiesPair) :
		RecursiveFieldVisitor(*this, info), this_info(info), alreadyVisitedNodes(alreadyVisitedNodes), entitiesPair(entitiesPair)
	{
		data.accept(*this, info);

		bool singlechain = false;
		if (n_collisions - n_constraints == 1) {
			singlechain = true;
			singleChunkVerified = true;
		}
		if (n_phantoms > 0 && (singlechain || n_collisions == 0)) {
			singleChunkVerified = true;
		}
		if (hasBranches) {
			if (n_collisions == 0 && n_phantoms == 0)
				singleChunkVerified = singleChunkVerified || branchesResult;
			else
				singleChunkVerified = singleChunkVerified && branchesResult;
		}
		
		if (n_phantoms == 0 && n_collisions == 0)
			singleChunkVerified = true;
	}

	template<class T>
	inline void visit_object(T& obj) {
		NiObject* ptr = (NiObject*)&obj;
		if (alreadyVisitedNodes.insert(ptr).second) {
			NiObjectRef ref = DynamicCast<NiObject>(ptr);
			if (ref->IsSameType(NiSwitchNode::TYPE)) {
				branchesResult = false;
				hasBranches = true;
				bool singleResult = true;
				NiSwitchNodeRef ref = DynamicCast<NiSwitchNode>(ptr);
				for (NiAVObjectRef child : ref->GetChildren()) {
					bool result = SingleChunkFlagVerifier(*child, this_info, alreadyVisitedNodes, entitiesPair).singleChunkVerified;
					singleResult = singleResult && result;
				}
				branchesResult = branchesResult || singleResult;
			}

			if (ref->IsDerivedType(bhkSPCollisionObject::TYPE)) {
				n_phantoms++;
			}
			if (ref->IsDerivedType(bhkCollisionObject::TYPE)) {
				n_collisions++;
			}

			if (ref->IsDerivedType(bhkConstraint::TYPE)) {
				bhkConstraintRef cref = DynamicCast<bhkConstraint>(ref);
				std::pair<bhkEntity*, bhkEntity*> p;
				p.first = *cref->GetEntities().begin();
				p.second = *(++cref->GetEntities().begin());
				if (entitiesPair.insert(p).second)
					n_constraints++;
			}
		}
	}

	template<class T>
	inline void visit_compound(T& obj) {}

	template<class T>
	inline void visit_field(T& obj) {}

};

TEST(Read, SkyrimBSXFlagsMO_QUAL_MOVING) {
	using namespace std;
	NifInfo oblivion_info;
	NifInfo skyrim_info;
	vector<path> nifs;
	string log_text = "";

	std::set<unsigned int> oblivion_flags;
	std::map<unsigned int, std::set<path>> oblivion_files;
	std::map<unsigned int, std::set<string>> bsxflags_node_types;

	path log_file = test_nifs_in_path / "BSXFlags_Skyrim_Statistics.txt";

	findFiles(test_nifs_in_path / "skyrim" / "meshes", ".nif", nifs);
	//path in_path = test_nifs_in_path / "skyrim" / "meshes" / "dlc01" / "landscape" / "trees" / "winteraspen01.nif";
	//findFiles(test_nifs_in_path, ".nif", nifs);
	//nifs.push_back(in_path);

	ASSERT_TRUE(nifs.size() > 0);

	std::set<path> error;


	for (size_t i = 0; i < nifs.size(); i++) {
		bool moving = false;
		bool movingVerified = false;
		bool bit3 = false;
		bool singleChunk = false;
		bool singleChunkVerified = false;
		bool hasList = false;
		path this_path = nifs[i];
		//bugged hair model with BSXFlags
		if (this_path.filename().string().find("hairshorthumanfold") != string::npos)
			continue;
		if (this_path.filename().string().find("hairlonghumanm") != string::npos)
			continue;
		//strange oblivion like bitset
		if (this_path.filename().string().find("markarthhousetemp01") != string::npos)
			continue;
		if (this_path.filename().string().find("markarthtemphouse") != string::npos)
			continue;
		if (this_path.filename().string().find("countercornerout01") != string::npos)
			continue;
		if (this_path.string().find("clutter") != string::npos && this_path.filename().string().find("table02") != string::npos)
			continue;
		//strange oblivion like bitset shader tests
		if (this_path.filename().string().find("testcaveepiccorner") != string::npos)
			continue;
		if (this_path.filename().string().find("testcaveepicinsidecorner") != string::npos)
			continue;
		if (this_path.filename().string().find("testcaveepicmid03") != string::npos)
			continue;
		if (this_path.filename().string().find("testcaveepicwall") != string::npos)
			continue;
		//strange dlc2 model
		if (this_path.filename().string().find("apoforbiddenbookact01") != string::npos)
			continue;
		//strange weapon model, same collision as the imperial but with different BSXFlags
		if (this_path.filename().string().find("imperialswordgo") != string::npos)
			continue;
		//bugged skeleton
		if (this_path.string().find("centaur") != string::npos)
			continue;
		//bugged model
		if (this_path.string().find("atronachfrost") != string::npos && this_path.filename().string().find("shield") != string::npos)
			continue;

		vector< Ref<NiObject> > objs = ReadNifList(nifs[i].string().c_str(), &oblivion_info);
		if (oblivion_info.userVersion2 != 83)
			//Some Oblivion models somehow slipped into skyrim release
			continue;
		std::set<string> node_types;
		int value = 0;
		for (Ref<NiObject> ref : objs) {
			if (ref->IsSameType(BSXFlags::TYPE)) {
				BSXFlags this_value = *DynamicCast<BSXFlags>(ref);
				value = this_value.GetIntegerData();
				if (value & (1 << 3)) bit3 = true;
				if (value & (1 << 6)) moving = true;
				if (value & (1 << 7)) singleChunk = true;
			}
		}
		if (value) {
			int n_collisions = 0;
			int n_phantoms = 0;
			int n_constraints = 0;
			set<pair<bhkEntity*, bhkEntity*>> entitiesPair;
			bool multiple = false;
			for (Ref<NiObject> ref : objs) {
				if (ref->IsDerivedType(bhkRigidBody::TYPE)) {
					bhkRigidBodyRef this_value = DynamicCast<bhkRigidBody>(ref);
					if (this_value->GetQualityType() != hkQualityType::MO_QUAL_INVALID 
						&& this_value->GetQualityType() != hkQualityType::MO_QUAL_FIXED)
						movingVerified = true;
				}
				if (ref->IsDerivedType(bhkBlendCollisionObject::TYPE)) {
					movingVerified = true;
				}
				/*if (ref->IsDerivedType(bhkSPCollisionObject::TYPE)) {
					n_phantoms++;
				}
				if (ref->IsDerivedType(bhkCollisionObject::TYPE)) {
					n_collisions++;
				}

				if (ref->IsDerivedType(bhkConstraint::TYPE)) {
					bhkConstraintRef cref = DynamicCast<bhkConstraint>(ref);
					std::pair<bhkEntity*, bhkEntity*> p;
					p.first = *cref->GetEntities().begin();
					p.second = *(++cref->GetEntities().begin());
					if (entitiesPair.insert(p).second)
						n_constraints++;
				}*/
			}
			//bool singlechain = false;
			//if (n_collisions - n_constraints == 1) {
			//	singlechain = true;
			//	singleChunkVerified = true;
			//}
			//if (n_phantoms > 0 && (singlechain || n_collisions == 0)) {
			//	singleChunkVerified = true;
			//}
			NiObjectRef root = GetFirstRoot(objs);
			singleChunkVerified = SingleChunkFlagVerifier(*root, oblivion_info).singleChunkVerified;

			ASSERT_TRUE(moving == movingVerified) << this_path.string() << " : " << std::bitset<32>(value) << " : " << (value & (1 << 6));
			ASSERT_TRUE(singleChunk == singleChunkVerified) << this_path.string() << " : " << std::bitset<32>(value) << " : " << (value & (1 << 7));

		}
	}

}

TEST(Read, KF) {
	using namespace std;
	NifInfo oblivion_info;
	NifInfo skyrim_info;
	vector<path> nifs;
	string log_text = "";

	path log_file = test_kf_in_path / "Statistics.txt";

	findFiles(test_kf_in_path / "oblivion", ".kf", nifs);
	for (size_t i = 0; i < nifs.size(); i++) {
		vector<NiObjectRef> blocks = ReadNifList(nifs[i].string().c_str(), &oblivion_info);
		int siz = blocks.size();
	}
}

//
//TEST(Read, SingleFileMustBeEqualToWriteRead) {
//	NifInfo info;
//	NifInfo newinfo;
//	vector<path> nifs;
//	path in_path = test_resources_path / "nifs" / "in" / "skyrim" / "meshes" / "traps" / "bonealarm01" / "trapbonealarmhavok01.nif";
//	vector<NiObjectRef> objects = ReadNifList(in_path.str(), &info);
//	path out_path = test_resources_path / "nifs" / "out" / in_path.filename();
//	NiObjectRef root = GetFirstRoot(objects);
//	WriteNifTree(out_path.str(), root, info);
//	vector<NiObjectRef> new_objects = ReadNifList(out_path.str(), &newinfo);
//	NiObjectRef new_root = GetFirstRoot(new_objects);
//	ASSERT_TRUE(*root == *new_root);
//	ASSERT_EQ(objects.size(), new_objects.size());
//	for (int i = 0; i < objects.size(); i++) {
//		ASSERT_EQ(*objects[i], *new_objects[i]) << "on Object["<< i <<"]" << std::endl;
//	}
//	ASSERT_EQ(compare_files(in_path.str(), out_path.str()), true);
//}
//
TEST(Read, SingleFileMustBeEqualToWriteReadAlduin) {
	NifInfo info;
	NifInfo newinfo;
	vector<path> nifs;
	//D:\git\skyblivion\resources\nifs\in\skyrim\meshes\actors\character
	path in_path = test_resources_path / "nifs" / "in" / "skyrim" / "meshes" / "clutter" / "dwemer" / "dwechest01.nif";
	vector<NiObjectRef> objects = ReadNifList(in_path.string().c_str(), &info);
	path out_path = test_resources_path / "nifs" / "out" / in_path.filename();
	NiObjectRef root = GetFirstRoot(objects);
	WriteNifTree(out_path.string().c_str(), root, info);
	vector<NiObjectRef> new_objects = ReadNifList(out_path.string().c_str(), &newinfo);
	NiObjectRef new_root = GetFirstRoot(new_objects);
	ASSERT_TRUE(*root == *new_root);
	ASSERT_EQ(objects.size(), new_objects.size());
	for (int i = 0; i < objects.size(); i++) {
		bool result = *objects[i] == *new_objects[i];
		if (!result) {
			auto orig_obj = objects[i];
			auto new_obj = new_objects[i];
			*objects[i] == *new_objects[i];
			throw std::runtime_error("Object inequality");
		}
		ASSERT_EQ(*objects[i], *new_objects[i]) << "on Object[" << i << "]" << std::endl << objects[i]->asString() << std::endl << new_objects[i]->asString() << std::endl;
	}
	ASSERT_EQ(compare_files(in_path.string().c_str(), out_path.string().c_str()), true);
}

TEST(TEST, OblivionToSkyrimAssets) {
	NifInfo info;
	NifInfo newinfo;
	vector<path> oblivion_nifs;
	vector<path> skyblivion_nifs;
	//D:\git\skyblivion\resources\nifs\in\skyrim\meshes\actors\character
	path oblp = absolute(test_nifs_in_path / "oblivion" / "meshes");
	path skblp = absolute(test_nifs_in_path / "skyblivion_orig" / "tes4");
	current_path(oblp);
	findFiles(".", ".nif", oblivion_nifs);
	current_path(skblp);
	findFiles(".", ".nif", skyblivion_nifs);

	set<string> obl; 
	for (int i = 0; i < oblivion_nifs.size(); i++) {
		string data = oblivion_nifs[i].string();
		std::transform(data.begin(), data.end(), data.begin(), ::tolower);
		obl.insert(data);
	}
	set<string> skbl;
	for (int i = 0; i < skyblivion_nifs.size(); i++) {
		string data = skyblivion_nifs[i].string();
		std::transform(data.begin(), data.end(), data.begin(), ::tolower);
		skbl.insert(data);
	}

	std::set<string> v_intersection;

	std::set_intersection(obl.begin(), obl.end(),
		skbl.begin(), skbl.end(),
		std::inserter(v_intersection, v_intersection.begin()));

	set<string> diff;

	std::set_difference(skbl.begin(), skbl.end(), v_intersection.begin(), v_intersection.end(),
		std::inserter(diff, diff.begin()));


	ASSERT_TRUE(oblivion_nifs.size() + diff.size() == skyblivion_nifs.size()) << "Oblivion: " << oblivion_nifs.size() << " / Skyblivion " << skyblivion_nifs.size();

	//NiObjectRef root = GetFirstRoot(objects);
	//WriteNifTree(out_path.string().c_str(), root, info);
	//vector<NiObjectRef> new_objects = ReadNifList(out_path.string().c_str(), &newinfo);
	//NiObjectRef new_root = GetFirstRoot(new_objects);
	//ASSERT_TRUE(*root == *new_root);
	//ASSERT_EQ(objects.size(), new_objects.size());
	//for (int i = 0; i < objects.size(); i++) {
	//	bool result = *objects[i] == *new_objects[i];
	//	if (!result) {
	//		auto orig_obj = objects[i];
	//		auto new_obj = new_objects[i];
	//		*objects[i] == *new_objects[i];
	//		throw std::runtime_error("Object inequality");
	//	}
	//	ASSERT_EQ(*objects[i], *new_objects[i]) << "on Object[" << i << "]" << std::endl << objects[i]->asString() << std::endl << new_objects[i]->asString() << std::endl;
	//}
	//ASSERT_EQ(compare_files(in_path.string().c_str(), out_path.string().c_str()), true);
}
//
//class TemplateVisitor {
//	Visitor* visitor;
//public:
//
//	void setVisitor(Visitor* in) {
//		visitor = in;
//	}
//
//	inline void continueVisit(NiObject* obj, const NifInfo& info) {
//		for (Ref<NiObject> ref : obj->GetRefs())
//			ref->accept(*visitor, info);
//	}
//
//	template <typename nT> inline void visit(nT& obj, const NifInfo& info) {
//		continueVisit((NiObject*)&obj, info);
//	}
//
//	template<>
//	inline void TemplateVisitor::visit<BSFadeNode>(BSFadeNode& obj, const NifInfo& info) {
//		string s = obj.asString();
//		continueVisit(&obj, info);
//	}
//
//	template<>
//	inline void TemplateVisitor::visit<NiNode>(NiNode& obj, const NifInfo& info) {
//		string s = obj.asString();
//		continueVisit(&obj, info);
//	}
//};
//
////class StackVisitorImpl : public StackVisitor<TemplateVisitor>{
////public:
////	inline void start(NiObject& in, const NifInfo& info, NiObject& parent) {
////
////	}
////	inline void end(NiObject& in, const NifInfo& info, NiObject& parent) {
////	}
////
////	StackVisitorImpl(TemplateVisitor& in, NiObject& root, const NifInfo& info) : StackVisitor(in) {
////		stack.push(root);
////		in.setVisitor(this);
////		root.accept(*this, info);
////	}
////};
//
//TEST(ReadWriteTest, VisitorTest) {
//	NifInfo info;
//	vector<path> nifs;
//	findNifs(test_nifs_in_path, "nif", nifs);
//	if (nifs.empty()) return;
//	NiObjectRef root = ReadNifTree(nifs[0].str(), &info);
////	StackVisitorImpl testVisitor = StackVisitorImpl(TemplateVisitor(), *root, info);
//}


class TestFieldVisitor : public VisitorImpl<TestFieldVisitor>, public CompoundVisitorImpl<TestFieldVisitor> {
	NiObjectRef parent;

	class InnerFieldVisitor : public FieldVisitorImpl<InnerFieldVisitor> {
	public:
		template<class FieldT>
		inline void visit(FieldT& obj, const unsigned int field_index) {
			string type_name(typeid(obj).name());
			ASSERT_TRUE(type_name.size()>0);
		}
		InnerFieldVisitor() : FieldVisitorImpl<InnerFieldVisitor>(*this) {}
	};

	InnerFieldVisitor fVisitor;

public:

	TestFieldVisitor() : VisitorImpl<TestFieldVisitor>(*this), CompoundVisitorImpl<TestFieldVisitor>(*this) {}

	template<class ObjectT>
	inline void visit(ObjectT& obj, const NifInfo& info)
	{		
		obj.accept(fVisitor);
	}

	inline void start(NiObject&, const NifInfo&) {}
	inline void end(NiObject&, const NifInfo&) {}
};

TEST(ReadWriteTest, FieldVisitorTest) {
	NifInfo info;
	vector<path> nifs;
	findFiles(test_nifs_in_path, ".nif", nifs);
	if (nifs.empty()) return;
	NiObjectRef root = ReadNifTree(nifs[0].string().c_str(), &info);
	TestFieldVisitor fimpl;
	root->accept(fimpl, info);
}

TEST(Calculate, Normals) {
	//calculate sane vertex normals for geometries
	NifInfo info;
	vector<path> nifs;
	path in_path = test_resources_path / "nifs" / "in" / "nationalarchives_tri.nif";
	//findFiles(test_nifs_in_path, ".nif", nifs);
	nifs.push_back(in_path);
	for (size_t i = 0; i < nifs.size(); i++) {
		vector<NiObjectRef> blocks = ReadNifList(nifs[i].string().c_str(), &info);
		NiObjectRef root = GetFirstRoot(blocks);
		NiNodeRef nroot = DynamicCast<NiNode>(root);
		vector<NiTriShapeRef> bbs;
		//calculate bounding mesh
		for (NiObjectRef block : blocks) {
			if (block->IsDerivedType(NiTriShape::TYPE)) {
				NiTriShapeRef a_shape = DynamicCast<NiTriShape>(block);
				NiTriShapeDataRef refn = DynamicCast<NiTriShapeData>(a_shape->GetData());

				VHACD::IVHACD* interfaceVHACD = VHACD::CreateVHACD();

				vector<float> points;
				vector<int> triangles;

				//std::shared_ptr<boundingmesh::Mesh> mesh = make_shared<boundingmesh::Mesh>();
				for (Vector3 v : refn->GetVertices()) {
					points.push_back(v.x);
					points.push_back(v.y);
					points.push_back(v.z);
				}
				for (Triangle t : refn->GetTriangles()) {
					triangles.push_back(t.v1);
					triangles.push_back(t.v2);
					triangles.push_back(t.v3);
				}
				VHACD::IVHACD::Parameters params;
				bool res = interfaceVHACD->Compute(&points[0], (unsigned int)points.size() / 3,
					(const uint32_t *)&triangles[0], (unsigned int)triangles.size() / 3, params);

				//for (Triangle t : refn->GetTriangles()) {
				//	boundingmesh::Index indices[3];
				//	Vector3 v1 = refn->GetVertices()[t.v1];
				//	Vector3 v2 = refn->GetVertices()[t.v2];
				//	Vector3 v3 = refn->GetVertices()[t.v3];

				//	boundingmesh::Vector3 mv1(v1.x, v1.y, v1.z);
				//	boundingmesh::Vector3 mv2(v2.x, v2.y, v2.z);
				//	boundingmesh::Vector3 mv3(v3.x, v3.y, v3.z);
				//	
				//	indices[0] = mesh->addVertex(mv1);
				//	indices[1] = mesh->addVertex(mv2);
				//	indices[2] = mesh->addVertex(mv3);

				//	mesh->addTriangle(indices[0], indices[1], indices[2]);
				//}

				/*boundingmesh::Real bounding_box_diagonal = mesh->getBoundingBoxDiagonal();
				boundingmesh::Real alpha = 1;
				int voxels = 50000;
				mesh->closeHoles();

				boundingmesh::SegmenterDownsampling segmenter;
				segmenter.setMaxPasses(10);
				segmenter.setAlpha(alpha);
				segmenter.setDelta(alpha / 2);

				std::cout << "Voxelizing mesh..." << std::endl;
				segmenter.setMesh(mesh, voxels);
				std::cout << "Calculating bounding convex decomposition..." << std::endl;
				segmenter.compute();
				std::vector < std::shared_ptr<boundingmesh::Mesh> > decomposition = segmenter.getSegmentation();
*/


				if (res) {
					unsigned int nConvexHulls = interfaceVHACD->GetNConvexHulls();
					VHACD::IVHACD::ConvexHull ch;
					NiTriShapeDataRef bb_ref = new NiTriShapeData();
					vector<Vector3> bb_vertices;
					vector<Triangle> bb_faces;
					size_t bb_v_size = bb_vertices.size();
					for (unsigned int p = 0; p < nConvexHulls; ++p) {
						bb_v_size = bb_vertices.size();
						interfaceVHACD->GetConvexHull(p, ch);
						NiTriShapeDataRef ref = new NiTriShapeData();
						vector<Vector3> cvertices;
						for (int i = 0; i < ch.m_nPoints; i++) {
							cvertices.push_back(Vector3(ch.m_points[3*i], ch.m_points[3 * i+1], ch.m_points[3 * i + 2]));
							bb_vertices.push_back(Vector3(ch.m_points[3 * i], ch.m_points[3 * i + 1], ch.m_points[3 * i + 2]));
						}
						ref->SetVertices(cvertices);
						vector<Triangle> faces;
						for (int i = 0; i < ch.m_nTriangles; i++) {
							faces.push_back(Triangle(ch.m_triangles[3*i], ch.m_triangles[3 * i + 1], ch.m_triangles[3 * i + 2]));
							bb_faces.push_back(Triangle(bb_v_size + ch.m_triangles[3 * i], bb_v_size + ch.m_triangles[3 * i + 1], bb_v_size + ch.m_triangles[3 * i + 2]));
						}
						ref->SetNumTriangles(faces.size());
						ref->SetTriangles(faces);
						ref->SetHasTriangles(true);
						NiTriShapeRef shape = new NiTriShape();
						shape->SetData(StaticCast<NiGeometryData>(ref));
						BSLightingShaderPropertyRef lightingProperty = new BSLightingShaderProperty();
						BSShaderTextureSetRef textureSet = new BSShaderTextureSet();
						lightingProperty->SetTextureSet(textureSet);
						shape->SetShaderProperty(StaticCast<BSShaderProperty>(lightingProperty));
						IndexString s;
						s = a_shape->GetName() + "_BB_segment_"+to_string(p);
						shape->SetName(s);
						vector<NiAVObjectRef> children = nroot->GetChildren();
						children.push_back(StaticCast<NiAVObject>(shape));
						nroot->SetChildren(children);
					}
					bb_ref->SetVertices(bb_vertices);
					bb_ref->SetNumTriangles(bb_faces.size());
					bb_ref->SetTriangles(bb_faces);
					bb_ref->SetHasTriangles(true);
					NiTriShapeRef bb_shape = new NiTriShape();
					bb_shape->SetData(StaticCast<NiGeometryData>(bb_ref));
					BSLightingShaderPropertyRef lightingProperty = new BSLightingShaderProperty();
					BSShaderTextureSetRef textureSet = new BSShaderTextureSet();
					lightingProperty->SetTextureSet(textureSet);
					bb_shape->SetShaderProperty(StaticCast<BSShaderProperty>(lightingProperty));
					IndexString s;
					s = a_shape->GetName() + "_BB";
					bb_shape->SetName(s);
					vector<NiAVObjectRef> children = nroot->GetChildren();
					children.push_back(StaticCast<NiAVObject>(bb_shape));
					bbs.push_back(bb_shape);
					nroot->SetChildren(children);
				}
				//std::cout << "Simplifying bounding convex decomposition with the bounding mesh algorithm..." << std::endl;
				//std::vector < std::shared_ptr<boundingmesh::Mesh> > decomposition_decimated;
				//for (int i = 0; i < decomposition.size(); ++i)
				//{
				//	boundingmesh::Decimator decimator;
				//	decimator.setMesh(*decomposition[i]);
				//	decimator.setMaximumError(std::pow(target_error * bounding_box_diagonal, 2));
				//	decomposition_decimated.push_back(decimator.compute());
				//}
			}
		}

		for (NiTriShapeRef block : bbs) {

			//if (block->IsDerivedType(NiTriShapeData::TYPE)) {
				NiTriShapeDataRef ref = DynamicCast<NiTriShapeData>(block->GetData());
				vector<Vector3> vertices = ref->GetVertices();
				vector<Triangle> faces = ref->GetTriangles();
				vector<Vector3> normals;
				Vector3 COM;
				CalculateNormals(vertices, faces, normals, COM, false, false);
				ref->SetHasNormals(true);
				ref->SetNormals(normals);
//				vector<Vector3> normals = ref->GetNormals();
				//if (vertices.size() != 0 && faces.size() != 0 && ref->GetUvSets().size()!=0) {
				//	vector<TexCoord> uvs = ref->GetUvSets()[0];				
				//	//Tangent Space
				//	TriGeometryContext g(vertices, COM, faces, uvs, normals);
				//	;
				//	ref->SetTangents(g.tangents);
				//	ref->SetBitangents(g.bitangents);
				//}
			//}
		}
		//NiObjectRef root = GetFirstRoot(blocks);
		path out_path = test_resources_path / "nifs" / "out" / nifs[i].filename();
		WriteNifTree(out_path.string().c_str(), root, info);
	}

}

TEST(Calculate, Strippify) {
	//calculate sane vertex normals for geometries
	NifInfo info;
	vector<path> nifs;
	findFiles(test_nifs_in_path, ".nif", nifs);
	for (size_t i = 0; i < nifs.size(); i++) {
		vector<NiObjectRef> blocks = ReadNifList(nifs[i].string().c_str(), &info);
		for (NiObjectRef block : blocks) {

			if (block->IsDerivedType(NiTriStripsData::TYPE)) {
				NiTriStripsDataRef stripsData = DynamicCast<NiTriStripsData>(block);
				///Getting the points

				vector<Triangle> triangles = triangulate(stripsData->GetPoints());

			}
		}
		NiObjectRef root = GetFirstRoot(blocks);
		path out_path = test_resources_path / "nifs" / "out" / nifs[i].filename();
		WriteNifTree(out_path.string().c_str(), root, info);
	}
}