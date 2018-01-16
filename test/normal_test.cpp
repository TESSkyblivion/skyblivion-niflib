#include "../test/test_utils.h"

//slight modification to from read_write_test.
void outFile(const string& file_content, const path& file_path, bool append) {

	//modification allows us to append to a file aswell as wipe then write.
	std::ofstream out_file;
	if (append)
		std::ofstream out_file(file_path.string(), std::ios::app);
	else
		std::ofstream out_file(file_path.string());

	//write contents.
	if (out_file.is_open()) {
		out_file << file_content << std::endl;
		out_file.close();
	}
	else {
		throw runtime_error("Unable to write to " + file_path.string());
	}
}

//it's messy leaving this here.
bool hasNormals = NULL;

//visitor to allow us to read all NiTriShapes/NiTriStrips
class NormalCheckVisitor : public RecursiveFieldVisitor<NormalCheckVisitor> {
public:
	NormalCheckVisitor(const NifInfo& info) : RecursiveFieldVisitor(*this, info) {}

	template<class T>
	inline void visit_object(T& obj) {}

	template<class T>
	inline void visit_compound(T& obj) {}

	template<class T>
	inline void visit_field(T& obj) {
	}
	//could probably create a method instead of have duplicate code.
	template<>
	inline void visit_object(NiTriShape& obj) {
		//Check to see if "HasNormals" is enabled, then check the vector size, and finally the vectors inside the Normal vector.
		if (obj.GetData()->GetHasNormals())
		{
			if (obj.GetData()->GetNormals().size() > 0)
			{
				vector<Vector3> vectors = obj.GetData()->GetNormals();
				for (Vector3 vector : vectors)
				{
					if (vector.x == 0 && vector.z == 0 && vector.y == 0)
						hasNormals = false;
					else
						hasNormals = true;
				}
			}
			else
				hasNormals = false;
		}
		else
			hasNormals = false;
	}
	template<>
	inline void visit_object(NiTriStrips& obj) {
		//Same as NiTriShape.
		if (obj.GetData()->GetHasNormals())
		{
			if (obj.GetData()->GetNormals().size() > 0)
			{
				vector<Vector3> vectors = obj.GetData()->GetNormals();
				for (Vector3 vector : vectors)
				{
					if (vector.x == 0 && vector.z == 0 && vector.y == 0)
						hasNormals = false;
					else
						hasNormals = true;
				}
			}
			else
				hasNormals = false;
		}
		else
			hasNormals = false;
	}
};

//Test for checking normals.
TEST(NormalTests, CheckAllNifsForNormals)
{
	//get all nifs.
	NifInfo info;
	vector<path> nifs;
	findFiles(test_nifs_in_path, ".nif", nifs);

	//setup paths for text files.
	path out_path = test_nifs_in_path / "NormalStats.txt";
	path name_path = test_nifs_in_path / "ErroredNames.txt";

	//count and contents to store the names of nifs with missing normals.
	int count = 0;
	string file_contents;

	//loop through all nifs to check normals.
	for (int i = 0; i < nifs.size(); i++)
	{
		try
		{
			NiObjectRef root = ReadNifTree(nifs[i].string().c_str(), &info);
			NormalCheckVisitor fimpl(info);
			root->accept(fimpl, info);
			if (!hasNormals)
			{
				count++;
				file_contents += nifs[i].string().c_str();
				file_contents += "\n";
			}
			hasNormals = NULL;
		}
		catch (const std::exception& e)
		{
			//needed this try-catch block because some nifs throw a fit. Could be either too long of a path, or nif error. Nifs are saved in this file.
			outFile(nifs[i].string().c_str(), name_path, true);
		}
	}

	//save all results to a file.
	string sCount = std::to_string(count) += "\n";
	outFile(sCount += file_contents, out_path, false);
}