/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#ifndef _BSVERTEXDATA_H_
#define _BSVERTEXDATA_H_

// Include structures
#include "gen/HalfVector3.h"
#include "gen/HalfTexCoord.h"
#include "gen/ByteVector3.h"
#include "nif_basic_types.h"
namespace Niflib {


/*!  */
struct BSVertexData : Native {
	/*! Default Constructor */
	NIFLIB_API BSVertexData();
	/*! Default Destructor */
	NIFLIB_API ~BSVertexData();
	/*! Copy Constructor */
	NIFLIB_API BSVertexData( const BSVertexData & src );
	/*! Copy Operator */
	NIFLIB_API BSVertexData & operator=( const BSVertexData & src );
	/*! Unknown. */
	HalfVector3 vertex;
	/*! Unknown. */
	hfloat bitangentX;
	/*! Normal nybble? */
	unsigned int unknownShort1;
	/*! Unknown. */
	Vector3 vertex2;
	/*! Unknown. */
	float bitangentX2;
	/*! Unknown. */
	HalfTexCoord uv;
	/*! Unknown. */
	ByteVector3 normal;
	/*! Unknown. */
	byte bitangentY;
	/*! Unknown. */
	ByteVector3 tangent;
	/*! Unknown. */
	byte bitangentZ;
	/*! Unknown. */
	ByteColor4 vertexColors;
	/*! Unknown. */
	array<4,hfloat > boneWeights;
	/*! Unknown. */
	array<4,byte > boneIndices;
	/*! Unknown. */
	unsigned int unknownInt2;
	//--BEGIN MISC CUSTOM CODE--//
	void Clear();

	Vector3 GetVertex() const;

	void SetVertex(const Vector3& v);
	void SetNormal(const Vector3& n);
	void SetUV(const TexCoord& tc);
	void SetVertexColor(const Color4& vc);
	void SetTangent(const Vector3& t);
	void SetBitangent(const Vector3& b);
	void SetBoneWeight(int idx, int bone, float weight);

	bool operator==(const BSVertexData& other) const;

	//--END CUSTOM CODE--//
};

}
#endif
