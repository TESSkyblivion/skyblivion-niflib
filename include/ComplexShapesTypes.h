/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

#ifndef _COMPLEX_SHAPE_TYPES_H_
#define _COMPLEX_SHAPE_TYPES_H_

#include "Ref.h"
#include "nif_math.h"
#include "nif_basic_types.h"
#include <vector>

namespace Niflib
{
	using namespace std;

	// Forward define of referenced classes
	class NiProperty;
	class NiNode;
	class NiAVObject;
	class NiTriBasedGeom;
	class NiSkinPartition;

	/*! Marks empty data indices */
	const unsigned int CS_NO_INDEX = 0xFFFFFFFF;

	/*!
	* Used by the ComplexShape::WeightedVertex strut to store a single
	* skin-weight/bone influence combination for a vertex.
	*/
	struct SkinInfluence
	{
		/*! Constructor */
		NIFLIB_API SkinInfluence() : influenceIndex(CS_NO_INDEX)
		{
		}

		/*! Destructor */
		NIFLIB_API ~SkinInfluence()
		{
		}

		/*!
		* Index into the ComplexShape::skinInfluences array of the bone
		* influence for this skin weight.
		*/
		unsigned int influenceIndex;
		/*!
		* The amount of influence the indexed bone has on this vertex, between
		* 0.0 and 1.0
		*/
		float weight;
	};

	/*!
	* Used by the ComplexShape class to store a single vertex and any
	* Associated skin weights
	*/
	struct WeightedVertex
	{
		/*! The 3D position of this vertex. */
		Vector3 position;
		/*! A list of weight/influence index pairs for this vertex. */
		vector<SkinInfluence> weights;
	};

	/*!
	* Used by the ComplexShape::ComplexPoint struct to store a single texture
	* cooridinate set/texture coordinate pair of indices.
	*/
	struct TexCoordIndex
	{
		/*! Constructor */
		NIFLIB_API TexCoordIndex() : texCoordSetIndex(CS_NO_INDEX), texCoordIndex(CS_NO_INDEX)
		{
		}

		/*! Destructor */
		NIFLIB_API ~TexCoordIndex()
		{
		}

		/*!
		* Index into the ComplexShape::texCoordSets array of texture
		* coordinate sets.
		*/
		unsigned int texCoordSetIndex;

		/*!
		* Index into the ComplexShape::TexCoordSet::texCoords array of the
		* texture coordinate set referenced by texCoordSetIndex.
		*/
		unsigned int texCoordIndex;
	};

	/*!
	* Used by ComplexShape::ComplexFace class to describe a single point in
	* the 3D model.  Points share their data in case of duplication, so all
	* information, such as position, normal vector, texture coordinates, etc.,
	* are stored as indices into the asociated data arrays.
	*/
	struct ComplexPoint
	{
		/*! Constructor */
		NIFLIB_API ComplexPoint() : vertexIndex(CS_NO_INDEX), normalIndex(CS_NO_INDEX), colorIndex(CS_NO_INDEX)
		{
		}

		/*! Destructor */
		NIFLIB_API ~ComplexPoint()
		{
		}

		/*!
		* Index into the ComplexShape::vertices array which stores the
		* position and any associated skin weights for this point.
		*/
		unsigned int vertexIndex;
		/*!
		* Index into the ComplexShape::normals array which stores the normal
		* vector for this point.
		*/
		unsigned int normalIndex;
		/*!
		* Index into the ComplexShape::colors array which stores the vertex
		* color for this point
		*/
		unsigned int colorIndex;
		/*!
		* An array of texture coordinate set/texture coordinate index pairs
		* describing all the UV coordinates for this point.
		*/
		vector<TexCoordIndex> texCoordIndices;
	};

	/*!
	* Used by ComplexShape to describe a single polygon.  Complex shape
	* polygons can have more than three points, unlike the triangels required
	* within the NIF format.  Each face may also be associated with a
	* different set of NiProperty classes, enabling each face to have unique
	* material settings.
	*/
	struct ComplexFace
	{
		/*! Constructor */
		NIFLIB_API ComplexFace() : propGroupIndex(CS_NO_INDEX)
		{
		}

		/*! Destructor */
		NIFLIB_API ~ComplexFace()
		{
		}

		/*! A list of points which make up this polygon */
		vector<ComplexPoint> points;
		/*!
		* Index into the ComplexShape::propGroups array which specifies which
		* set of NiProperty classes to apply to this face.
		*/
		unsigned int propGroupIndex;
	};

	/*!
	* Used by ComplexShape to store texture coordinate data and the
	* associated type of texture, such as base, detail, or dark map.
	*/
	struct TexCoordSet
	{
		/*!
		* The type of the texture such as base, detail, bump, etc.
		*/
		TexType texType;
		/*!
		* A list of all the texture cooridnates for this texture set.
		*/
		vector<TexCoord> texCoords;
	};

	struct SubSegment
	{
		unsigned int polygonOffset;
		unsigned int polygonCount;
	};

	struct Segment
	{
		unsigned int polygonOffset;
		unsigned int polygonCount;
		vector<SubSegment> subSegments;
	};
}

#endif
