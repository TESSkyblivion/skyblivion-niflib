#pragma once

#include <dll_export.h>

#include <obj/NiStringPalette.h>


namespace Niflib {

	NIFLIB_API template<typename T> std::string GetSubStr(const T& palette, short offset);
	NIFLIB_API template<> std::string GetSubStr(const NiStringPalette& palette, short offset);

	NIFLIB_API template<typename T> unsigned int AddSubStr(T& palette, const string & n);
	NIFLIB_API template<> unsigned int AddSubStr(NiStringPalette& palette, const string & n);

}