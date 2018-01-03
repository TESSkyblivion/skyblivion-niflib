/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#include <custom_types\BSVertexData.h>
#include "NIF_IO.h"

#include "../include/gen/HalfVector3.h"
#include "../include/gen/HalfTexCoord.h"
#include "../include/gen/ByteVector3.h"
#include "../include/gen/ByteVector3.h"
#include <nif_basic_types.h>
using namespace Niflib;

//Constructor
BSVertexData::BSVertexData() : bitangentX((hfloat)0), unknownShort1((unsigned int)0), bitangentX2(0.0f), bitangentY((byte)0), bitangentZ((byte)0), unknownInt2((unsigned int)0) {};

//Copy Constructor
BSVertexData::BSVertexData( const BSVertexData & src ) {
	*this = src;
};

//Copy Operator
BSVertexData & BSVertexData::operator=( const BSVertexData & src ) {
	this->vertex = src.vertex;
	this->bitangentX = src.bitangentX;
	this->unknownShort1 = src.unknownShort1;
	this->vertex2 = src.vertex2;
	this->bitangentX2 = src.bitangentX2;
	this->uv = src.uv;
	this->normal = src.normal;
	this->bitangentY = src.bitangentY;
	this->tangent = src.tangent;
	this->bitangentZ = src.bitangentZ;
	this->vertexColors = src.vertexColors;
	this->boneWeights = src.boneWeights;
	this->boneIndices = src.boneIndices;
	this->unknownInt2 = src.unknownInt2;
	return *this;
};

bool BSVertexData::operator==(const BSVertexData& src) const {
	return (
	this->vertex == src.vertex &&
	this->bitangentX == src.bitangentX &&
	this->unknownShort1 == src.unknownShort1 &&
	this->vertex2 == src.vertex2 &&
	this->bitangentX2 == src.bitangentX2 &&
	this->uv == src.uv &&
	this->normal == src.normal &&
	this->bitangentY == src.bitangentY &&
	this->tangent == src.tangent &&
	this->bitangentZ == src.bitangentZ &&
	this->vertexColors == src.vertexColors &&
	this->boneWeights == src.boneWeights &&
	this->boneIndices == src.boneIndices &&
	this->unknownInt2 == src.unknownInt2
	);
}

//Destructor
BSVertexData::~BSVertexData() {};

//--BEGIN MISC CUSTOM CODE--//

void BSVertexData::Clear()
{
	*this = BSVertexData();
}

Vector3 BSVertexData::GetVertex() const
{
	//return Vector3(ConvertHFloatToFloat(vertex.x), ConvertHFloatToFloat(vertex.y), ConvertHFloatToFloat(vertex.z));
	return vertex2;
}

void BSVertexData::SetVertex(const Vector3& v)
{
	vertex.x = ConvertFloatToHFloat(v.x);
	vertex.y = ConvertFloatToHFloat(v.y);
	vertex.z = ConvertFloatToHFloat(v.z);

	vertex2.x = v.x;
	vertex2.y = v.y;
	vertex2.z = v.z;
}

void BSVertexData::SetNormal(const Vector3& n)
{
	normal.x = ConvertFloatToByte(n.x);
	normal.y = ConvertFloatToByte(n.y);
	normal.z = ConvertFloatToByte(n.z);
}

void BSVertexData::SetUV(const TexCoord& tc)
{
	uv.u = ConvertFloatToHFloat(tc.u);
	uv.v = ConvertFloatToHFloat(tc.v);
}

void BSVertexData::SetVertexColor(const Color4& vc)
{
	vertexColors.r = ConvertFloatToByte(vc.r);
	vertexColors.g = ConvertFloatToByte(vc.g);
	vertexColors.b = ConvertFloatToByte(vc.b);
	vertexColors.a = ConvertFloatToByte(vc.a);
}

void BSVertexData::SetTangent(const Vector3& t)
{
	tangent.x = ConvertFloatToByte(t.x);
	tangent.y = ConvertFloatToByte(t.y);
	tangent.z = ConvertFloatToByte(t.z);
}

void BSVertexData::SetBitangent(const Vector3& b)
{
	bitangentX2 = b.x;
	bitangentX = ConvertFloatToHFloat(b.x);
	bitangentY = ConvertFloatToByte(b.y);
	bitangentZ = ConvertFloatToByte(b.z);
}

void BSVertexData::SetBoneWeight(int idx, int bone, float weight)
{
	boneIndices[idx] = byte(bone);
	boneWeights[idx] = ConvertFloatToHFloat(weight);
}

//--END CUSTOM CODE--//
