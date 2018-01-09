#pragma once

#include <gtest/gtest.h>

#include <filesystem>

#include <niflib.h>
#include <obj\NiObject.h>
#include <obj\BSFadeNode.h>

//TODO: FIX: get rid of template getters and redestibute on the classes
#include <objTmpl.cpp>
#include <field_visitor.h>
#include <interfaces\typed_visitor.h>

//hierarchy
#include <obj/NiTimeController.h>
#include <obj/NiExtraData.h>
#include <obj/NiCollisionObject.h>
#include <obj/NiProperty.h>
#include <obj/NiDynamicEffect.h>

#include <algorithm>
#include <iterator>
#include <string>
#include <fstream>
#include <utility>

using namespace std::experimental::filesystem;
using namespace Niflib;
using namespace std;

static const path test_resources_path = "..\\..\\..\\..\\resources\\";
static const path test_nifs_in_path = "..\\..\\..\\..\\resources\\nifs\\in\\";
static const path test_kf_in_path = "..\\..\\..\\..\\resources\\kfs\\in\\";

template<typename InputIterator1, typename InputIterator2>
bool
range_equal(InputIterator1 first1, InputIterator1 last1,
	InputIterator2 first2, InputIterator2 last2)
{
	while (first1 != last1 && first2 != last2)
	{
		if (*first1 != *first2) return false;
		++first1;
		++first2;
	}
	return (first1 == last1) && (first2 == last2);
}

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
	for (auto& dirEntry : std::experimental::filesystem::recursive_directory_iterator(startingDir))
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