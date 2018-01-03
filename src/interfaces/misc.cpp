#include <interfaces\misc.h>

using namespace Niflib;
using namespace std;

template<> string Niflib::GetSubStr(const NiStringPalette& palette, short offset) {
	string out;

	// -1 is a null offset
	if (offset == -1) {
		return out;
	}

	for (unsigned int i = offset; i < palette.GetPalette().palette.size(); ++i) {
		if (palette.GetPalette().palette[i] == '\0') {
			break;
		}
		out.push_back(palette.GetPalette().palette[i]);
	}

	return out;
}

template<> unsigned int Niflib::AddSubStr(NiStringPalette& palette, const string & n) {
	//Search for the string
	//  When searching for strings also search for ending null.
	unsigned int offset = (unsigned int)palette.GetPalette().palette.find(n.c_str(), 0, n.size() + 1);

	//If string was not found, append it
	if (offset == 0xFFFFFFFF) {
		offset = (unsigned int)palette.GetPalette().palette.size();
		palette.GetPalette().palette.append(n + '\0');
	}

	//Return the offset where the string was found or appended
	return offset;
}
