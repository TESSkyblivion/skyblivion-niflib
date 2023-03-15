#include "test_utils.h"

bool compare_files(const std::string& filename1, const std::string& filename2)
{
	std::ifstream file1(filename1);
	std::ifstream file2(filename2);

	std::istreambuf_iterator<char> begin1(file1);
	std::istreambuf_iterator<char> begin2(file2);

	std::istreambuf_iterator<char> end;

	return range_equal(begin1, end, begin2, end);
}

bool replace(std::string& str, const std::string& from, const std::string& to) {
	size_t start_pos = str.find(from);
	if (start_pos == std::string::npos)
		return false;
	str.replace(start_pos, from.length(), to);
	return true;
}

void findFiles(path startingDir, string extension, vector<path>& results) {
	if (!exists(startingDir) || !is_directory(startingDir)) return;
	for (auto& dirEntry : std::filesystem::recursive_directory_iterator(startingDir))
	{
		if (is_directory(dirEntry.path()))
			continue;
		std::string entry_extension = dirEntry.path().extension().string();
		transform(entry_extension.begin(), entry_extension.end(), entry_extension.begin(), ::tolower);
		if (entry_extension == extension) {
			results.push_back(dirEntry.path().string());
		}
	}
}