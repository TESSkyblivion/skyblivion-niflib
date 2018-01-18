 /* Copyright (c) 2018, NIF File Format Library and Tools 
 All rights reserved. Please see niflib.h for license. */

#include "test_utils.h"
#include "mikktspace.h"

#include <functional>

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

Vector3 centeroid(const vector<Vector3>& in) {
	Vector3 centeroid = Vector3(0.0, 0.0, 0.0);
	for (Vector3 vertex : in) {
		centeroid += vertex;
	}
	centeroid = Vector3(centeroid.x / in.size(), centeroid.y / in.size(), centeroid.z / in.size()).Normalized();
	return centeroid;
}

void CalculateNormals(const vector<Vector3>& vertices, const vector<Triangle> faces,
	vector<Vector3>& normals, Vector3& COM) {

	std::map<unsigned int, vector<Vector3>> normalMap;

	if (normals.size()!=vertices.size())
		normals.resize(vertices.size());
	//test faces before start
	set<unsigned int> faceIndexes;
	for (Triangle face : faces) {
		faceIndexes.insert(face.v1); faceIndexes.insert(face.v2); faceIndexes.insert(face.v3);
	}

	for (size_t i = 0; i < vertices.size(); i++)
		if (faceIndexes.find(i) == faceIndexes.end())
			throw runtime_error("Found unindexed vertex: "+i);
	
	COM = centeroid(vertices);

	for (Triangle face : faces) {
		Vector3 v1 = vertices[face.v1].Normalized();
		Vector3 v2 = vertices[face.v2].Normalized();
		Vector3 v3 = vertices[face.v3].Normalized();

		Vector3 v12 = v2 - v1;
		Vector3 v13 = v3 - v1;
		Vector3 v23 = v3 - v2;

		//All the possible normals
		Vector3 n1 = v12 ^ v13;
		Vector3 n2 = v12 ^ v23;
		Vector3 n3 = v13 ^ v23;

		Vector3 COT = centeroid(vector<Vector3>({ v1,v2,v3 }));

		Vector3 COMtoCOT = Vector3(COT - COM).Normalized();

		//we always want a normal that is faced out of the body
		if (n1 * COMtoCOT < 0)
			n1 = Vector3(-n1.x, -n1.y, -n1.z);
		if (n2 * COMtoCOT < 0)
			n2 = Vector3(-n2.x, -n2.y, -n2.z);
		if (n3 * COMtoCOT < 0)
			n3 = Vector3(-n3.x, -n3.y, -n3.z);

		normalMap[face.v1].push_back(n1);
		normalMap[face.v2].push_back(n2);
		normalMap[face.v3].push_back(n3);
	}

	for (size_t i = 0; i < vertices.size(); i++) {
		normals[i] = centeroid(normalMap[i]).Normalized();
	}
}

bool CheckNormals(const vector<Vector3>& normals) {
	for (Vector3 v : normals)
		if (v != Vector3(0.0, 0.0, 0.0))
			return true;
	return false;
}

struct TriGeometryContext : SMikkTSpaceContext {
	//input
	const vector<Vector3>& vertices;
	const vector<Triangle>& faces;
	Vector3 COM;

	//output
	vector<Vector3> normals;

	//TSpace

	//input
	const vector<TexCoord>& uvs;

	//output
	vector<Vector3> tangents;
	vector<Vector3> bitangents;

	TriGeometryContext(const vector<Vector3>& in_vertices, const vector<Triangle>& in_faces,
		const vector<TexCoord>& in_uvs, vector<Vector3> in_normals) : vertices(in_vertices), faces(in_faces), uvs(in_uvs), normals(in_normals) {		
		//if (normals.size() == 0 && !CheckNormals(normals)) {
			normals.resize(vertices.size());
			CalculateNormals(vertices, faces, normals, COM);
		//}
		tangents.resize(vertices.size());
		bitangents.resize(vertices.size());
		calculate(this);
	}

	static int get_num_faces(const SMikkTSpaceContext *x) {
		return ((TriGeometryContext*)x)->faces.size();
	}

	static int get_num_vertices_of_face(const SMikkTSpaceContext *x, int f) {
		return 3;
	}

	static void get_position(const SMikkTSpaceContext *x, float *dst, int f, int v) {
		Triangle face = ((TriGeometryContext*)x)->faces[f];
		Vector3 v_out = (v == 0 ? ((TriGeometryContext*)x)->vertices[face.v1] : v == 1 ? ((TriGeometryContext*)x)->vertices[face.v2] : ((TriGeometryContext*)x)->vertices[face.v3]);
		memcpy(dst, &v_out, 3 * sizeof(float));
	}

	static void get_normal(const SMikkTSpaceContext *x, float *dst, int f, int v) {
		Triangle face = ((TriGeometryContext*)x)->faces[f];
		Vector3 n_out = (v == 0 ? ((TriGeometryContext*)x)->normals[face.v1] : v == 1 ? ((TriGeometryContext*)x)->normals[face.v2] : ((TriGeometryContext*)x)->normals[face.v3]);
		memcpy(dst, &n_out, 3 * sizeof(float));
	}

	static void get_tex_coord(const SMikkTSpaceContext *x, float *dst, int f, int v) {
		Triangle face = ((TriGeometryContext*)x)->faces[f];
		TexCoord uv_out = (v == 0 ? ((TriGeometryContext*)x)->uvs[face.v1] : v == 1 ? ((TriGeometryContext*)x)->uvs[face.v2] : ((TriGeometryContext*)x)->uvs[face.v3]);
		memcpy(dst, &uv_out, 2 * sizeof(float));
	}


	// bitangent = fSign * cross(vN, tangent);
	static void set_tspace_basic(
		const SMikkTSpaceContext *x,
		const float *t,
		float s,
		int f,
		int v
	) {
		Triangle face = ((TriGeometryContext*)x)->faces[f];
		unsigned short t_index = (v == 0 ? face.v1 : v == 1 ? face.v2 : face.v3);
		((TriGeometryContext*)x)->tangents[t_index] = Vector3(t[0], t[1], t[2]).Normalized();
		((TriGeometryContext*)x)->bitangents[t_index] = (((TriGeometryContext*)x)->vertices[t_index] ^ ((TriGeometryContext*)x)->tangents[t_index]);
		((TriGeometryContext*)x)->bitangents[t_index] *= s;
		((TriGeometryContext*)x)->bitangents[t_index] = ((TriGeometryContext*)x)->bitangents[t_index].Normalized();
	}

	static void set_tspace(
		const SMikkTSpaceContext *x,
		const float *t,
		const float *b,
		float mag_s,
		float mag_t,
		tbool op,
		int f,
		int v
	) {
		set_tspace_basic(x, t, op != 0 ? 1.0f : -1.0f, f, v);
	}

	static void calculate(TriGeometryContext* obj) {
		using namespace std::placeholders;

		SMikkTSpaceInterface interface;

		interface.m_getNumFaces = get_num_faces;

		interface.m_getNumVerticesOfFace = get_num_vertices_of_face;
		interface.m_getPosition = get_position;
		interface.m_getNormal = get_normal;
		interface.m_getTexCoord = get_tex_coord;
		interface.m_setTSpaceBasic = set_tspace_basic;
		interface.m_setTSpace = set_tspace;

		obj->m_pInterface = &interface;
		obj->m_pUserData = NULL;

		genTangSpaceDefault(obj);
	}

};

TEST(Calculate, Normals) {
	//calculate sane vertex normals for geometries
	NifInfo info;
	vector<path> nifs;
	findFiles(test_nifs_in_path, ".nif", nifs);
	for (size_t i = 0; i < nifs.size(); i++) {
		vector<NiObjectRef> blocks = ReadNifList(nifs[i].string().c_str(), &info);
		for (NiObjectRef block : blocks) {
			if (block->IsDerivedType(NiTriShapeData::TYPE)) {
				NiTriShapeDataRef ref = DynamicCast<NiTriShapeData>(block);
				vector<Vector3> vertices = ref->GetVertices();
				vector<Triangle> faces = ref->GetTriangles();
				
				vector<Vector3> normals = ref->GetNormals();
				if (vertices.size() != 0 && faces.size() != 0 && ref->GetUvSets().size()!=0) {
					vector<TexCoord> uvs = ref->GetUvSets()[0];
					Vector3 COM;					
					//Tangent Space
					TriGeometryContext g(vertices, faces, uvs, normals);
					ref->SetNormals(g.normals);
					ref->SetTangents(g.tangents);
					ref->SetBitangents(g.bitangents);
				}
			}
		}
		NiObjectRef root = GetFirstRoot(blocks);
		path out_path = test_resources_path / "nifs" / "out" / nifs[i].filename();
		WriteNifTree(out_path.string().c_str(), root, info);
	}

}



///Triangulation methods

vector<Triangle> triangulate(vector<unsigned short> strip)
{
	vector<Triangle> tris;
	unsigned short a, b = strip[0], c = strip[1];
	bool flip = false;

	for (int s = 2; s < strip.size(); s++) {
		a = b;
		b = c;
		c = strip[s];

		if (a != b && b != c && c != a) {
			if (!flip)
				tris.push_back(Triangle(a, b, c));
			else
				tris.push_back(Triangle(a, c, b));
		}

		flip = !flip;
	}

	return tris;
}

vector<Triangle> triangulate(vector<vector<unsigned short>> strips)
{
	vector<Triangle> tris;
	for (const vector<unsigned short>& strip : strips)
	{
		vector<Triangle> these_tris = triangulate(strip);
		tris.insert(tris.end(), these_tris.begin(), these_tris.end());
	}
	return tris;
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