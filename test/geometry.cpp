#include "geometry.h"

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