 /* Copyright (c) 2018, NIF File Format Library and Tools 
 All rights reserved. Please see niflib.h for license. */

#include "test_utils.h"

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
	findFiles(test_nifs_in_path / "skyrim", ".nif", nifs);
	for (size_t i = 0; i < nifs.size(); i++) {
		string in_path = nifs[i].string();
		vector<NiObjectRef> objects = ReadNifList(in_path.c_str(), &info);
		if (info.userVersion2 == 32)
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