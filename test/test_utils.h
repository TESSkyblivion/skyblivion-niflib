#pragma once

#include <gtest/gtest.h>

#include <filesystem>

#include <niflib.h>
#include <obj\NiObject.h>
#include <obj\BSFadeNode.h>

#include <objDecl.cpp>
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

using namespace std::filesystem;
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

bool compare_files(const std::string& filename1, const std::string& filename2);

bool replace(std::string& str, const std::string& from, const std::string& to);

void findFiles(path startingDir, string extension, vector<path>& results);