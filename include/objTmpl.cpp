/* Copyright (c) 2018, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#pragma once

#include <visitor.h>
#include <field_visitor.h>
#include <objDecl.cpp>

namespace Niflib {

	template<> const auto& ByteMatrix::get<ByteMatrix::FIELDS::dataSize1>() {return dataSize1;}
	template<> const auto& ByteMatrix::get<ByteMatrix::FIELDS::dataSize2>() {return dataSize2;}
	template<> const auto& ByteMatrix::get<ByteMatrix::FIELDS::data>() {return data;}
	void ByteMatrix::accept(class FieldVisitor& visitor) {
		visitor.visit(dataSize1, FIELDS::dataSize1);
		visitor.visit(dataSize2, FIELDS::dataSize2);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& ByteColor3::get<ByteColor3::FIELDS::r>() {return r;}
	template<> const auto& ByteColor3::get<ByteColor3::FIELDS::g>() {return g;}
	template<> const auto& ByteColor3::get<ByteColor3::FIELDS::b>() {return b;}
	void ByteColor3::accept(class FieldVisitor& visitor) {
		visitor.visit(r, FIELDS::r);
		visitor.visit(g, FIELDS::g);
		visitor.visit(b, FIELDS::b);
	}


	template<> const auto& LODRange::get<LODRange::FIELDS::nearExtent>() {return nearExtent;}
	template<> const auto& LODRange::get<LODRange::FIELDS::farExtent>() {return farExtent;}
	template<> const auto& LODRange::get<LODRange::FIELDS::unknownInts>() {return unknownInts;}
	void LODRange::accept(class FieldVisitor& visitor) {
		visitor.visit(nearExtent, FIELDS::nearExtent);
		visitor.visit(farExtent, FIELDS::farExtent);
		visitor.visit(unknownInts, FIELDS::unknownInts);
	}


	template<> const auto& MatchGroup::get<MatchGroup::FIELDS::numVertices>() {return numVertices;}
	template<> const auto& MatchGroup::get<MatchGroup::FIELDS::vertexIndices>() {return vertexIndices;}
	void MatchGroup::accept(class FieldVisitor& visitor) {
		visitor.visit(numVertices, FIELDS::numVertices);
		visitor.visit(vertexIndices, FIELDS::vertexIndices);
	}


	template<> const auto& ByteVector3::get<ByteVector3::FIELDS::x>() {return x;}
	template<> const auto& ByteVector3::get<ByteVector3::FIELDS::y>() {return y;}
	template<> const auto& ByteVector3::get<ByteVector3::FIELDS::z>() {return z;}
	void ByteVector3::accept(class FieldVisitor& visitor) {
		visitor.visit(x, FIELDS::x);
		visitor.visit(y, FIELDS::y);
		visitor.visit(z, FIELDS::z);
	}


	template<> const auto& HalfVector3::get<HalfVector3::FIELDS::x>() {return x;}
	template<> const auto& HalfVector3::get<HalfVector3::FIELDS::y>() {return y;}
	template<> const auto& HalfVector3::get<HalfVector3::FIELDS::z>() {return z;}
	void HalfVector3::accept(class FieldVisitor& visitor) {
		visitor.visit(x, FIELDS::x);
		visitor.visit(y, FIELDS::y);
		visitor.visit(z, FIELDS::z);
	}


	template<> const auto& hkQuaternion::get<hkQuaternion::FIELDS::x>() {return x;}
	template<> const auto& hkQuaternion::get<hkQuaternion::FIELDS::y>() {return y;}
	template<> const auto& hkQuaternion::get<hkQuaternion::FIELDS::z>() {return z;}
	template<> const auto& hkQuaternion::get<hkQuaternion::FIELDS::w>() {return w;}
	void hkQuaternion::accept(class FieldVisitor& visitor) {
		visitor.visit(x, FIELDS::x);
		visitor.visit(y, FIELDS::y);
		visitor.visit(z, FIELDS::z);
		visitor.visit(w, FIELDS::w);
	}


	template<> const auto& MipMap::get<MipMap::FIELDS::width>() {return width;}
	template<> const auto& MipMap::get<MipMap::FIELDS::height>() {return height;}
	template<> const auto& MipMap::get<MipMap::FIELDS::offset>() {return offset;}
	void MipMap::accept(class FieldVisitor& visitor) {
		visitor.visit(width, FIELDS::width);
		visitor.visit(height, FIELDS::height);
		visitor.visit(offset, FIELDS::offset);
	}


	template<> const auto& NodeSet::get<NodeSet::FIELDS::numNodes>() {return numNodes;}
	template<> const auto& NodeSet::get<NodeSet::FIELDS::nodes>() {return nodes;}
	void NodeSet::accept(class FieldVisitor& visitor) {
		visitor.visit(numNodes, FIELDS::numNodes);
		visitor.visit(nodes, FIELDS::nodes);
	}


	template<> const auto& SkinInfo::get<SkinInfo::FIELDS::shape>() {return shape;}
	template<> const auto& SkinInfo::get<SkinInfo::FIELDS::skinInstance>() {return skinInstance;}
	void SkinInfo::accept(class FieldVisitor& visitor) {
		visitor.visit(shape, FIELDS::shape);
		visitor.visit(skinInstance, FIELDS::skinInstance);
	}


	template<> const auto& SkinInfoSet::get<SkinInfoSet::FIELDS::numSkinInfo>() {return numSkinInfo;}
	template<> const auto& SkinInfoSet::get<SkinInfoSet::FIELDS::skinInfo>() {return skinInfo;}
	void SkinInfoSet::accept(class FieldVisitor& visitor) {
		visitor.visit(numSkinInfo, FIELDS::numSkinInfo);
		visitor.visit(skinInfo, FIELDS::skinInfo);
	}


	template<> const auto& BoneVertData::get<BoneVertData::FIELDS::index>() {return index;}
	template<> const auto& BoneVertData::get<BoneVertData::FIELDS::weight>() {return weight;}
	void BoneVertData::accept(class FieldVisitor& visitor) {
		visitor.visit(index, FIELDS::index);
		visitor.visit(weight, FIELDS::weight);
	}


	template<> const auto& AVObject::get<AVObject::FIELDS::name>() {return name;}
	template<> const auto& AVObject::get<AVObject::FIELDS::avObject>() {return avObject;}
	void AVObject::accept(class FieldVisitor& visitor) {
		visitor.visit(name, FIELDS::name);
		visitor.visit(avObject, FIELDS::avObject);
	}


	template<> const auto& ControlledBlock::get<ControlledBlock::FIELDS::targetName>() {return targetName;}
	template<> const auto& ControlledBlock::get<ControlledBlock::FIELDS::interpolator>() {return interpolator;}
	template<> const auto& ControlledBlock::get<ControlledBlock::FIELDS::controller>() {return controller;}
	template<> const auto& ControlledBlock::get<ControlledBlock::FIELDS::blendInterpolator>() {return blendInterpolator;}
	template<> const auto& ControlledBlock::get<ControlledBlock::FIELDS::blendIndex>() {return blendIndex;}
	template<> const auto& ControlledBlock::get<ControlledBlock::FIELDS::priority>() {return priority;}
	template<> const auto& ControlledBlock::get<ControlledBlock::FIELDS::nodeName>() {return nodeName;}
	template<> const auto& ControlledBlock::get<ControlledBlock::FIELDS::propertyType>() {return propertyType;}
	template<> const auto& ControlledBlock::get<ControlledBlock::FIELDS::controllerType>() {return controllerType;}
	template<> const auto& ControlledBlock::get<ControlledBlock::FIELDS::controllerId>() {return controllerId;}
	template<> const auto& ControlledBlock::get<ControlledBlock::FIELDS::interpolatorId>() {return interpolatorId;}
	template<> const auto& ControlledBlock::get<ControlledBlock::FIELDS::stringPalette>() {return stringPalette;}
	template<> const auto& ControlledBlock::get<ControlledBlock::FIELDS::nodeNameOffset>() {return nodeNameOffset;}
	template<> const auto& ControlledBlock::get<ControlledBlock::FIELDS::propertyTypeOffset>() {return propertyTypeOffset;}
	template<> const auto& ControlledBlock::get<ControlledBlock::FIELDS::controllerTypeOffset>() {return controllerTypeOffset;}
	template<> const auto& ControlledBlock::get<ControlledBlock::FIELDS::controllerIdOffset>() {return controllerIdOffset;}
	template<> const auto& ControlledBlock::get<ControlledBlock::FIELDS::interpolatorIdOffset>() {return interpolatorIdOffset;}
	void ControlledBlock::accept(class FieldVisitor& visitor) {
		visitor.visit(targetName, FIELDS::targetName);
		visitor.visit(interpolator, FIELDS::interpolator);
		visitor.visit(controller, FIELDS::controller);
		visitor.visit(blendInterpolator, FIELDS::blendInterpolator);
		visitor.visit(blendIndex, FIELDS::blendIndex);
		visitor.visit(priority, FIELDS::priority);
		visitor.visit(nodeName, FIELDS::nodeName);
		visitor.visit(propertyType, FIELDS::propertyType);
		visitor.visit(controllerType, FIELDS::controllerType);
		visitor.visit(controllerId, FIELDS::controllerId);
		visitor.visit(interpolatorId, FIELDS::interpolatorId);
		visitor.visit(stringPalette, FIELDS::stringPalette);
		visitor.visit(nodeNameOffset, FIELDS::nodeNameOffset);
		visitor.visit(propertyTypeOffset, FIELDS::propertyTypeOffset);
		visitor.visit(controllerTypeOffset, FIELDS::controllerTypeOffset);
		visitor.visit(controllerIdOffset, FIELDS::controllerIdOffset);
		visitor.visit(interpolatorIdOffset, FIELDS::interpolatorIdOffset);
	}


	template<> const auto& ExportInfo::get<ExportInfo::FIELDS::author>() {return author;}
	template<> const auto& ExportInfo::get<ExportInfo::FIELDS::processScript>() {return processScript;}
	template<> const auto& ExportInfo::get<ExportInfo::FIELDS::exportScript>() {return exportScript;}
	void ExportInfo::accept(class FieldVisitor& visitor) {
		visitor.visit(author, FIELDS::author);
		visitor.visit(processScript, FIELDS::processScript);
		visitor.visit(exportScript, FIELDS::exportScript);
	}


	template<> const auto& StringPalette::get<StringPalette::FIELDS::palette>() {return palette;}
	template<> const auto& StringPalette::get<StringPalette::FIELDS::length>() {return length;}
	void StringPalette::accept(class FieldVisitor& visitor) {
		visitor.visit(palette, FIELDS::palette);
		visitor.visit(length, FIELDS::length);
	}


	template<> const auto& TBC::get<TBC::FIELDS::t>() {return t;}
	template<> const auto& TBC::get<TBC::FIELDS::b>() {return b;}
	template<> const auto& TBC::get<TBC::FIELDS::c>() {return c;}
	void TBC::accept(class FieldVisitor& visitor) {
		visitor.visit(t, FIELDS::t);
		visitor.visit(b, FIELDS::b);
		visitor.visit(c, FIELDS::c);
	}


	template<> const auto& HalfTexCoord::get<HalfTexCoord::FIELDS::u>() {return u;}
	template<> const auto& HalfTexCoord::get<HalfTexCoord::FIELDS::v>() {return v;}
	void HalfTexCoord::accept(class FieldVisitor& visitor) {
		visitor.visit(u, FIELDS::u);
		visitor.visit(v, FIELDS::v);
	}


	template<> const auto& TexDesc::get<TexDesc::FIELDS::image>() {return image;}
	template<> const auto& TexDesc::get<TexDesc::FIELDS::source>() {return source;}
	template<> const auto& TexDesc::get<TexDesc::FIELDS::clampMode>() {return clampMode;}
	template<> const auto& TexDesc::get<TexDesc::FIELDS::filterMode>() {return filterMode;}
	template<> const auto& TexDesc::get<TexDesc::FIELDS::flags>() {return flags;}
	template<> const auto& TexDesc::get<TexDesc::FIELDS::maxAnisotropy>() {return maxAnisotropy;}
	template<> const auto& TexDesc::get<TexDesc::FIELDS::uvSet>() {return uvSet;}
	template<> const auto& TexDesc::get<TexDesc::FIELDS::ps2L>() {return ps2L;}
	template<> const auto& TexDesc::get<TexDesc::FIELDS::ps2K>() {return ps2K;}
	template<> const auto& TexDesc::get<TexDesc::FIELDS::unknown1>() {return unknown1;}
	template<> const auto& TexDesc::get<TexDesc::FIELDS::hasTextureTransform>() {return hasTextureTransform;}
	template<> const auto& TexDesc::get<TexDesc::FIELDS::translation>() {return translation;}
	template<> const auto& TexDesc::get<TexDesc::FIELDS::scale>() {return scale;}
	template<> const auto& TexDesc::get<TexDesc::FIELDS::rotation>() {return rotation;}
	template<> const auto& TexDesc::get<TexDesc::FIELDS::transformMethod>() {return transformMethod;}
	template<> const auto& TexDesc::get<TexDesc::FIELDS::center>() {return center;}
	void TexDesc::accept(class FieldVisitor& visitor) {
		visitor.visit(image, FIELDS::image);
		visitor.visit(source, FIELDS::source);
		visitor.visit(clampMode, FIELDS::clampMode);
		visitor.visit(filterMode, FIELDS::filterMode);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(maxAnisotropy, FIELDS::maxAnisotropy);
		visitor.visit(uvSet, FIELDS::uvSet);
		visitor.visit(ps2L, FIELDS::ps2L);
		visitor.visit(ps2K, FIELDS::ps2K);
		visitor.visit(unknown1, FIELDS::unknown1);
		visitor.visit(hasTextureTransform, FIELDS::hasTextureTransform);
		visitor.visit(translation, FIELDS::translation);
		visitor.visit(scale, FIELDS::scale);
		visitor.visit(rotation, FIELDS::rotation);
		visitor.visit(transformMethod, FIELDS::transformMethod);
		visitor.visit(center, FIELDS::center);
	}


	template<> const auto& ShaderTexDesc::get<ShaderTexDesc::FIELDS::hasMap>() {return hasMap;}
	template<> const auto& ShaderTexDesc::get<ShaderTexDesc::FIELDS::map>() {return map;}
	template<> const auto& ShaderTexDesc::get<ShaderTexDesc::FIELDS::mapId>() {return mapId;}
	void ShaderTexDesc::accept(class FieldVisitor& visitor) {
		visitor.visit(hasMap, FIELDS::hasMap);
		visitor.visit(map, FIELDS::map);
		visitor.visit(mapId, FIELDS::mapId);
	}


	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::numVertices>() {return numVertices;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::numTriangles>() {return numTriangles;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::numBones>() {return numBones;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::numStrips>() {return numStrips;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::numWeightsPerVertex>() {return numWeightsPerVertex;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::bones>() {return bones;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::hasVertexMap>() {return hasVertexMap;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::vertexMap>() {return vertexMap;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::hasVertexWeights>() {return hasVertexWeights;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::vertexWeights>() {return vertexWeights;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::stripLengths>() {return stripLengths;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::hasFaces>() {return hasFaces;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::strips>() {return strips;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::triangles>() {return triangles;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::hasBoneIndices>() {return hasBoneIndices;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::boneIndices>() {return boneIndices;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::unknownShort>() {return unknownShort;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::vertexDesc>() {return vertexDesc;}
	template<> const auto& SkinPartition::get<SkinPartition::FIELDS::trianglesCopy>() {return trianglesCopy;}
	void SkinPartition::accept(class FieldVisitor& visitor) {
		visitor.visit(numVertices, FIELDS::numVertices);
		visitor.visit(numTriangles, FIELDS::numTriangles);
		visitor.visit(numBones, FIELDS::numBones);
		visitor.visit(numStrips, FIELDS::numStrips);
		visitor.visit(numWeightsPerVertex, FIELDS::numWeightsPerVertex);
		visitor.visit(bones, FIELDS::bones);
		visitor.visit(hasVertexMap, FIELDS::hasVertexMap);
		visitor.visit(vertexMap, FIELDS::vertexMap);
		visitor.visit(hasVertexWeights, FIELDS::hasVertexWeights);
		visitor.visit(vertexWeights, FIELDS::vertexWeights);
		visitor.visit(stripLengths, FIELDS::stripLengths);
		visitor.visit(hasFaces, FIELDS::hasFaces);
		visitor.visit(strips, FIELDS::strips);
		visitor.visit(triangles, FIELDS::triangles);
		visitor.visit(hasBoneIndices, FIELDS::hasBoneIndices);
		visitor.visit(boneIndices, FIELDS::boneIndices);
		visitor.visit(unknownShort, FIELDS::unknownShort);
		visitor.visit(vertexDesc, FIELDS::vertexDesc);
		visitor.visit(trianglesCopy, FIELDS::trianglesCopy);
	}


	template<> const auto& NiPlane::get<NiPlane::FIELDS::normal>() {return normal;}
	template<> const auto& NiPlane::get<NiPlane::FIELDS::constant>() {return constant;}
	void NiPlane::accept(class FieldVisitor& visitor) {
		visitor.visit(normal, FIELDS::normal);
		visitor.visit(constant, FIELDS::constant);
	}


	template<> const auto& NiBound::get<NiBound::FIELDS::center>() {return center;}
	template<> const auto& NiBound::get<NiBound::FIELDS::radius>() {return radius;}
	void NiBound::accept(class FieldVisitor& visitor) {
		visitor.visit(center, FIELDS::center);
		visitor.visit(radius, FIELDS::radius);
	}


	template<> const auto& NiQuatTransform::get<NiQuatTransform::FIELDS::translation>() {return translation;}
	template<> const auto& NiQuatTransform::get<NiQuatTransform::FIELDS::rotation>() {return rotation;}
	template<> const auto& NiQuatTransform::get<NiQuatTransform::FIELDS::scale>() {return scale;}
	template<> const auto& NiQuatTransform::get<NiQuatTransform::FIELDS::trsValid>() {return trsValid;}
	void NiQuatTransform::accept(class FieldVisitor& visitor) {
		visitor.visit(translation, FIELDS::translation);
		visitor.visit(rotation, FIELDS::rotation);
		visitor.visit(scale, FIELDS::scale);
		visitor.visit(trsValid, FIELDS::trsValid);
	}


	template<> const auto& NiTransform::get<NiTransform::FIELDS::rotation>() {return rotation;}
	template<> const auto& NiTransform::get<NiTransform::FIELDS::translation>() {return translation;}
	template<> const auto& NiTransform::get<NiTransform::FIELDS::scale>() {return scale;}
	void NiTransform::accept(class FieldVisitor& visitor) {
		visitor.visit(rotation, FIELDS::rotation);
		visitor.visit(translation, FIELDS::translation);
		visitor.visit(scale, FIELDS::scale);
	}


	template<> const auto& FurniturePosition::get<FurniturePosition::FIELDS::offset>() {return offset;}
	template<> const auto& FurniturePosition::get<FurniturePosition::FIELDS::orientation>() {return orientation;}
	template<> const auto& FurniturePosition::get<FurniturePosition::FIELDS::positionRef1>() {return positionRef1;}
	template<> const auto& FurniturePosition::get<FurniturePosition::FIELDS::positionRef2>() {return positionRef2;}
	template<> const auto& FurniturePosition::get<FurniturePosition::FIELDS::heading>() {return heading;}
	template<> const auto& FurniturePosition::get<FurniturePosition::FIELDS::animationType>() {return animationType;}
	template<> const auto& FurniturePosition::get<FurniturePosition::FIELDS::entryProperties>() {return entryProperties;}
	void FurniturePosition::accept(class FieldVisitor& visitor) {
		visitor.visit(offset, FIELDS::offset);
		visitor.visit(orientation, FIELDS::orientation);
		visitor.visit(positionRef1, FIELDS::positionRef1);
		visitor.visit(positionRef2, FIELDS::positionRef2);
		visitor.visit(heading, FIELDS::heading);
		visitor.visit(animationType, FIELDS::animationType);
		visitor.visit(entryProperties, FIELDS::entryProperties);
	}


	template<> const auto& TriangleData::get<TriangleData::FIELDS::triangle>() {return triangle;}
	template<> const auto& TriangleData::get<TriangleData::FIELDS::weldingInfo>() {return weldingInfo;}
	template<> const auto& TriangleData::get<TriangleData::FIELDS::normal>() {return normal;}
	void TriangleData::accept(class FieldVisitor& visitor) {
		visitor.visit(triangle, FIELDS::triangle);
		visitor.visit(weldingInfo, FIELDS::weldingInfo);
		visitor.visit(normal, FIELDS::normal);
	}


	template<> const auto& Morph::get<Morph::FIELDS::frameName>() {return frameName;}
	template<> const auto& Morph::get<Morph::FIELDS::numKeys>() {return numKeys;}
	template<> const auto& Morph::get<Morph::FIELDS::interpolation>() {return interpolation;}
	template<> const auto& Morph::get<Morph::FIELDS::keys>() {return keys;}
	template<> const auto& Morph::get<Morph::FIELDS::legacyWeight>() {return legacyWeight;}
	template<> const auto& Morph::get<Morph::FIELDS::vectors>() {return vectors;}
	void Morph::accept(class FieldVisitor& visitor) {
		visitor.visit(frameName, FIELDS::frameName);
		visitor.visit(numKeys, FIELDS::numKeys);
		visitor.visit(interpolation, FIELDS::interpolation);
		visitor.visit(keys, FIELDS::keys);
		visitor.visit(legacyWeight, FIELDS::legacyWeight);
		visitor.visit(vectors, FIELDS::vectors);
	}


	template<> const auto& Particle::get<Particle::FIELDS::velocity>() {return velocity;}
	template<> const auto& Particle::get<Particle::FIELDS::unknownVector>() {return unknownVector;}
	template<> const auto& Particle::get<Particle::FIELDS::lifetime>() {return lifetime;}
	template<> const auto& Particle::get<Particle::FIELDS::lifespan>() {return lifespan;}
	template<> const auto& Particle::get<Particle::FIELDS::timestamp>() {return timestamp;}
	template<> const auto& Particle::get<Particle::FIELDS::unknownShort>() {return unknownShort;}
	template<> const auto& Particle::get<Particle::FIELDS::vertexId>() {return vertexId;}
	void Particle::accept(class FieldVisitor& visitor) {
		visitor.visit(velocity, FIELDS::velocity);
		visitor.visit(unknownVector, FIELDS::unknownVector);
		visitor.visit(lifetime, FIELDS::lifetime);
		visitor.visit(lifespan, FIELDS::lifespan);
		visitor.visit(timestamp, FIELDS::timestamp);
		visitor.visit(unknownShort, FIELDS::unknownShort);
		visitor.visit(vertexId, FIELDS::vertexId);
	}


	template<> const auto& BoneData::get<BoneData::FIELDS::skinTransform>() {return skinTransform;}
	template<> const auto& BoneData::get<BoneData::FIELDS::boundingSphereOffset>() {return boundingSphereOffset;}
	template<> const auto& BoneData::get<BoneData::FIELDS::boundingSphereRadius>() {return boundingSphereRadius;}
	template<> const auto& BoneData::get<BoneData::FIELDS::unknown13Shorts>() {return unknown13Shorts;}
	template<> const auto& BoneData::get<BoneData::FIELDS::numVertices>() {return numVertices;}
	template<> const auto& BoneData::get<BoneData::FIELDS::vertexWeights>() {return vertexWeights;}
	void BoneData::accept(class FieldVisitor& visitor) {
		visitor.visit(skinTransform, FIELDS::skinTransform);
		visitor.visit(boundingSphereOffset, FIELDS::boundingSphereOffset);
		visitor.visit(boundingSphereRadius, FIELDS::boundingSphereRadius);
		visitor.visit(unknown13Shorts, FIELDS::unknown13Shorts);
		visitor.visit(numVertices, FIELDS::numVertices);
		visitor.visit(vertexWeights, FIELDS::vertexWeights);
	}


	template<> const auto& HavokFilter::get<HavokFilter::FIELDS::layer_ob>() {return layer_ob;}
	template<> const auto& HavokFilter::get<HavokFilter::FIELDS::layer_fo>() {return layer_fo;}
	template<> const auto& HavokFilter::get<HavokFilter::FIELDS::layer_sk>() {return layer_sk;}
	template<> const auto& HavokFilter::get<HavokFilter::FIELDS::flagsAndPartNumber>() {return flagsAndPartNumber;}
	template<> const auto& HavokFilter::get<HavokFilter::FIELDS::group>() {return group;}
	void HavokFilter::accept(class FieldVisitor& visitor) {
		visitor.visit(layer_ob, FIELDS::layer_ob);
		visitor.visit(layer_fo, FIELDS::layer_fo);
		visitor.visit(layer_sk, FIELDS::layer_sk);
		visitor.visit(flagsAndPartNumber, FIELDS::flagsAndPartNumber);
		visitor.visit(group, FIELDS::group);
	}


	template<> const auto& HavokMaterial::get<HavokMaterial::FIELDS::unknownInt>() {return unknownInt;}
	template<> const auto& HavokMaterial::get<HavokMaterial::FIELDS::material_ob>() {return material_ob;}
	template<> const auto& HavokMaterial::get<HavokMaterial::FIELDS::material_fo>() {return material_fo;}
	template<> const auto& HavokMaterial::get<HavokMaterial::FIELDS::material_sk>() {return material_sk;}
	void HavokMaterial::accept(class FieldVisitor& visitor) {
		visitor.visit(unknownInt, FIELDS::unknownInt);
		visitor.visit(material_ob, FIELDS::material_ob);
		visitor.visit(material_fo, FIELDS::material_fo);
		visitor.visit(material_sk, FIELDS::material_sk);
	}


	template<> const auto& OblivionSubShape::get<OblivionSubShape::FIELDS::havokFilter>() {return havokFilter;}
	template<> const auto& OblivionSubShape::get<OblivionSubShape::FIELDS::numVertices>() {return numVertices;}
	template<> const auto& OblivionSubShape::get<OblivionSubShape::FIELDS::material>() {return material;}
	void OblivionSubShape::accept(class FieldVisitor& visitor) {
		visitor.visit(havokFilter, FIELDS::havokFilter);
		visitor.visit(numVertices, FIELDS::numVertices);
		visitor.visit(material, FIELDS::material);
	}


	template<> const auto& bhkPositionConstraintMotor::get<bhkPositionConstraintMotor::FIELDS::minForce>() {return minForce;}
	template<> const auto& bhkPositionConstraintMotor::get<bhkPositionConstraintMotor::FIELDS::maxForce>() {return maxForce;}
	template<> const auto& bhkPositionConstraintMotor::get<bhkPositionConstraintMotor::FIELDS::tau>() {return tau;}
	template<> const auto& bhkPositionConstraintMotor::get<bhkPositionConstraintMotor::FIELDS::damping>() {return damping;}
	template<> const auto& bhkPositionConstraintMotor::get<bhkPositionConstraintMotor::FIELDS::proportionalRecoveryVelocity>() {return proportionalRecoveryVelocity;}
	template<> const auto& bhkPositionConstraintMotor::get<bhkPositionConstraintMotor::FIELDS::constantRecoveryVelocity>() {return constantRecoveryVelocity;}
	template<> const auto& bhkPositionConstraintMotor::get<bhkPositionConstraintMotor::FIELDS::motorEnabled>() {return motorEnabled;}
	void bhkPositionConstraintMotor::accept(class FieldVisitor& visitor) {
		visitor.visit(minForce, FIELDS::minForce);
		visitor.visit(maxForce, FIELDS::maxForce);
		visitor.visit(tau, FIELDS::tau);
		visitor.visit(damping, FIELDS::damping);
		visitor.visit(proportionalRecoveryVelocity, FIELDS::proportionalRecoveryVelocity);
		visitor.visit(constantRecoveryVelocity, FIELDS::constantRecoveryVelocity);
		visitor.visit(motorEnabled, FIELDS::motorEnabled);
	}


	template<> const auto& bhkVelocityConstraintMotor::get<bhkVelocityConstraintMotor::FIELDS::minForce>() {return minForce;}
	template<> const auto& bhkVelocityConstraintMotor::get<bhkVelocityConstraintMotor::FIELDS::maxForce>() {return maxForce;}
	template<> const auto& bhkVelocityConstraintMotor::get<bhkVelocityConstraintMotor::FIELDS::tau>() {return tau;}
	template<> const auto& bhkVelocityConstraintMotor::get<bhkVelocityConstraintMotor::FIELDS::targetVelocity>() {return targetVelocity;}
	template<> const auto& bhkVelocityConstraintMotor::get<bhkVelocityConstraintMotor::FIELDS::useVelocityTarget>() {return useVelocityTarget;}
	template<> const auto& bhkVelocityConstraintMotor::get<bhkVelocityConstraintMotor::FIELDS::motorEnabled>() {return motorEnabled;}
	void bhkVelocityConstraintMotor::accept(class FieldVisitor& visitor) {
		visitor.visit(minForce, FIELDS::minForce);
		visitor.visit(maxForce, FIELDS::maxForce);
		visitor.visit(tau, FIELDS::tau);
		visitor.visit(targetVelocity, FIELDS::targetVelocity);
		visitor.visit(useVelocityTarget, FIELDS::useVelocityTarget);
		visitor.visit(motorEnabled, FIELDS::motorEnabled);
	}


	template<> const auto& bhkSpringDamperConstraintMotor::get<bhkSpringDamperConstraintMotor::FIELDS::minForce>() {return minForce;}
	template<> const auto& bhkSpringDamperConstraintMotor::get<bhkSpringDamperConstraintMotor::FIELDS::maxForce>() {return maxForce;}
	template<> const auto& bhkSpringDamperConstraintMotor::get<bhkSpringDamperConstraintMotor::FIELDS::springConstant>() {return springConstant;}
	template<> const auto& bhkSpringDamperConstraintMotor::get<bhkSpringDamperConstraintMotor::FIELDS::springDamping>() {return springDamping;}
	template<> const auto& bhkSpringDamperConstraintMotor::get<bhkSpringDamperConstraintMotor::FIELDS::motorEnabled>() {return motorEnabled;}
	void bhkSpringDamperConstraintMotor::accept(class FieldVisitor& visitor) {
		visitor.visit(minForce, FIELDS::minForce);
		visitor.visit(maxForce, FIELDS::maxForce);
		visitor.visit(springConstant, FIELDS::springConstant);
		visitor.visit(springDamping, FIELDS::springDamping);
		visitor.visit(motorEnabled, FIELDS::motorEnabled);
	}


	template<> const auto& MotorDescriptor::get<MotorDescriptor::FIELDS::type>() {return type;}
	template<> const auto& MotorDescriptor::get<MotorDescriptor::FIELDS::positionMotor>() {return positionMotor;}
	template<> const auto& MotorDescriptor::get<MotorDescriptor::FIELDS::velocityMotor>() {return velocityMotor;}
	template<> const auto& MotorDescriptor::get<MotorDescriptor::FIELDS::springDamperMotor>() {return springDamperMotor;}
	void MotorDescriptor::accept(class FieldVisitor& visitor) {
		visitor.visit(type, FIELDS::type);
		visitor.visit(positionMotor, FIELDS::positionMotor);
		visitor.visit(velocityMotor, FIELDS::velocityMotor);
		visitor.visit(springDamperMotor, FIELDS::springDamperMotor);
	}


	template<> const auto& ReferenceSystemDescriptor::get<ReferenceSystemDescriptor::FIELDS::xAxis>() {return xAxis;}
	template<> const auto& ReferenceSystemDescriptor::get<ReferenceSystemDescriptor::FIELDS::yAxis>() {return yAxis;}
	void ReferenceSystemDescriptor::accept(class FieldVisitor& visitor) {
		visitor.visit(xAxis, FIELDS::xAxis);
		visitor.visit(yAxis, FIELDS::yAxis);
	}


	template<> const auto& JointLinkPoint::get<JointLinkPoint::FIELDS::pivot>() {return pivot;}
	template<> const auto& JointLinkPoint::get<JointLinkPoint::FIELDS::referenceSystem>() {return referenceSystem;}
	void JointLinkPoint::accept(class FieldVisitor& visitor) {
		visitor.visit(pivot, FIELDS::pivot);
		visitor.visit(referenceSystem, FIELDS::referenceSystem);
	}


	template<> const auto& JointAxisPoint::get<JointAxisPoint::FIELDS::pivot>() {return pivot;}
	template<> const auto& JointAxisPoint::get<JointAxisPoint::FIELDS::axis>() {return axis;}
	void JointAxisPoint::accept(class FieldVisitor& visitor) {
		visitor.visit(pivot, FIELDS::pivot);
		visitor.visit(axis, FIELDS::axis);
	}


	template<> const auto& RagdollDescriptor::get<RagdollDescriptor::FIELDS::parentSpace>() {return parentSpace;}
	template<> const auto& RagdollDescriptor::get<RagdollDescriptor::FIELDS::childSpace>() {return childSpace;}
	template<> const auto& RagdollDescriptor::get<RagdollDescriptor::FIELDS::twistA>() {return twistA;}
	template<> const auto& RagdollDescriptor::get<RagdollDescriptor::FIELDS::planeA>() {return planeA;}
	template<> const auto& RagdollDescriptor::get<RagdollDescriptor::FIELDS::motorA>() {return motorA;}
	template<> const auto& RagdollDescriptor::get<RagdollDescriptor::FIELDS::pivotA>() {return pivotA;}
	template<> const auto& RagdollDescriptor::get<RagdollDescriptor::FIELDS::twistB>() {return twistB;}
	template<> const auto& RagdollDescriptor::get<RagdollDescriptor::FIELDS::planeB>() {return planeB;}
	template<> const auto& RagdollDescriptor::get<RagdollDescriptor::FIELDS::motorB>() {return motorB;}
	template<> const auto& RagdollDescriptor::get<RagdollDescriptor::FIELDS::pivotB>() {return pivotB;}
	template<> const auto& RagdollDescriptor::get<RagdollDescriptor::FIELDS::coneMaxAngle>() {return coneMaxAngle;}
	template<> const auto& RagdollDescriptor::get<RagdollDescriptor::FIELDS::planeMinAngle>() {return planeMinAngle;}
	template<> const auto& RagdollDescriptor::get<RagdollDescriptor::FIELDS::planeMaxAngle>() {return planeMaxAngle;}
	template<> const auto& RagdollDescriptor::get<RagdollDescriptor::FIELDS::twistMinAngle>() {return twistMinAngle;}
	template<> const auto& RagdollDescriptor::get<RagdollDescriptor::FIELDS::twistMaxAngle>() {return twistMaxAngle;}
	template<> const auto& RagdollDescriptor::get<RagdollDescriptor::FIELDS::maxFriction>() {return maxFriction;}
	template<> const auto& RagdollDescriptor::get<RagdollDescriptor::FIELDS::motor>() {return motor;}
	void RagdollDescriptor::accept(class FieldVisitor& visitor) {
		visitor.visit(parentSpace, FIELDS::parentSpace);
		visitor.visit(childSpace, FIELDS::childSpace);
		visitor.visit(twistA, FIELDS::twistA);
		visitor.visit(planeA, FIELDS::planeA);
		visitor.visit(motorA, FIELDS::motorA);
		visitor.visit(pivotA, FIELDS::pivotA);
		visitor.visit(twistB, FIELDS::twistB);
		visitor.visit(planeB, FIELDS::planeB);
		visitor.visit(motorB, FIELDS::motorB);
		visitor.visit(pivotB, FIELDS::pivotB);
		visitor.visit(coneMaxAngle, FIELDS::coneMaxAngle);
		visitor.visit(planeMinAngle, FIELDS::planeMinAngle);
		visitor.visit(planeMaxAngle, FIELDS::planeMaxAngle);
		visitor.visit(twistMinAngle, FIELDS::twistMinAngle);
		visitor.visit(twistMaxAngle, FIELDS::twistMaxAngle);
		visitor.visit(maxFriction, FIELDS::maxFriction);
		visitor.visit(motor, FIELDS::motor);
	}


	template<> const auto& LimitedHingeDescriptor::get<LimitedHingeDescriptor::FIELDS::parentSpace>() {return parentSpace;}
	template<> const auto& LimitedHingeDescriptor::get<LimitedHingeDescriptor::FIELDS::axis>() {return axis;}
	template<> const auto& LimitedHingeDescriptor::get<LimitedHingeDescriptor::FIELDS::childSpace>() {return childSpace;}
	template<> const auto& LimitedHingeDescriptor::get<LimitedHingeDescriptor::FIELDS::axleA>() {return axleA;}
	template<> const auto& LimitedHingeDescriptor::get<LimitedHingeDescriptor::FIELDS::perp2AxleInA1>() {return perp2AxleInA1;}
	template<> const auto& LimitedHingeDescriptor::get<LimitedHingeDescriptor::FIELDS::perp2AxleInA2>() {return perp2AxleInA2;}
	template<> const auto& LimitedHingeDescriptor::get<LimitedHingeDescriptor::FIELDS::pivotA>() {return pivotA;}
	template<> const auto& LimitedHingeDescriptor::get<LimitedHingeDescriptor::FIELDS::axleB>() {return axleB;}
	template<> const auto& LimitedHingeDescriptor::get<LimitedHingeDescriptor::FIELDS::perp2AxleInB1>() {return perp2AxleInB1;}
	template<> const auto& LimitedHingeDescriptor::get<LimitedHingeDescriptor::FIELDS::perp2AxleInB2>() {return perp2AxleInB2;}
	template<> const auto& LimitedHingeDescriptor::get<LimitedHingeDescriptor::FIELDS::pivotB>() {return pivotB;}
	template<> const auto& LimitedHingeDescriptor::get<LimitedHingeDescriptor::FIELDS::minAngle>() {return minAngle;}
	template<> const auto& LimitedHingeDescriptor::get<LimitedHingeDescriptor::FIELDS::maxAngle>() {return maxAngle;}
	template<> const auto& LimitedHingeDescriptor::get<LimitedHingeDescriptor::FIELDS::maxFriction>() {return maxFriction;}
	template<> const auto& LimitedHingeDescriptor::get<LimitedHingeDescriptor::FIELDS::motor>() {return motor;}
	void LimitedHingeDescriptor::accept(class FieldVisitor& visitor) {
		visitor.visit(parentSpace, FIELDS::parentSpace);
		visitor.visit(axis, FIELDS::axis);
		visitor.visit(childSpace, FIELDS::childSpace);
		visitor.visit(axleA, FIELDS::axleA);
		visitor.visit(perp2AxleInA1, FIELDS::perp2AxleInA1);
		visitor.visit(perp2AxleInA2, FIELDS::perp2AxleInA2);
		visitor.visit(pivotA, FIELDS::pivotA);
		visitor.visit(axleB, FIELDS::axleB);
		visitor.visit(perp2AxleInB1, FIELDS::perp2AxleInB1);
		visitor.visit(perp2AxleInB2, FIELDS::perp2AxleInB2);
		visitor.visit(pivotB, FIELDS::pivotB);
		visitor.visit(minAngle, FIELDS::minAngle);
		visitor.visit(maxAngle, FIELDS::maxAngle);
		visitor.visit(maxFriction, FIELDS::maxFriction);
		visitor.visit(motor, FIELDS::motor);
	}


	template<> const auto& HingeDescriptor::get<HingeDescriptor::FIELDS::parentSpace>() {return parentSpace;}
	template<> const auto& HingeDescriptor::get<HingeDescriptor::FIELDS::axis>() {return axis;}
	template<> const auto& HingeDescriptor::get<HingeDescriptor::FIELDS::childSpace>() {return childSpace;}
	template<> const auto& HingeDescriptor::get<HingeDescriptor::FIELDS::axleA>() {return axleA;}
	template<> const auto& HingeDescriptor::get<HingeDescriptor::FIELDS::perp2AxleInA1>() {return perp2AxleInA1;}
	template<> const auto& HingeDescriptor::get<HingeDescriptor::FIELDS::perp2AxleInA2>() {return perp2AxleInA2;}
	template<> const auto& HingeDescriptor::get<HingeDescriptor::FIELDS::pivotA>() {return pivotA;}
	template<> const auto& HingeDescriptor::get<HingeDescriptor::FIELDS::axleB>() {return axleB;}
	template<> const auto& HingeDescriptor::get<HingeDescriptor::FIELDS::perp2AxleInB1>() {return perp2AxleInB1;}
	template<> const auto& HingeDescriptor::get<HingeDescriptor::FIELDS::perp2AxleInB2>() {return perp2AxleInB2;}
	template<> const auto& HingeDescriptor::get<HingeDescriptor::FIELDS::pivotB>() {return pivotB;}
	void HingeDescriptor::accept(class FieldVisitor& visitor) {
		visitor.visit(parentSpace, FIELDS::parentSpace);
		visitor.visit(axis, FIELDS::axis);
		visitor.visit(childSpace, FIELDS::childSpace);
		visitor.visit(axleA, FIELDS::axleA);
		visitor.visit(perp2AxleInA1, FIELDS::perp2AxleInA1);
		visitor.visit(perp2AxleInA2, FIELDS::perp2AxleInA2);
		visitor.visit(pivotA, FIELDS::pivotA);
		visitor.visit(axleB, FIELDS::axleB);
		visitor.visit(perp2AxleInB1, FIELDS::perp2AxleInB1);
		visitor.visit(perp2AxleInB2, FIELDS::perp2AxleInB2);
		visitor.visit(pivotB, FIELDS::pivotB);
	}


	template<> const auto& BallAndSocketDescriptor::get<BallAndSocketDescriptor::FIELDS::pivotA>() {return pivotA;}
	template<> const auto& BallAndSocketDescriptor::get<BallAndSocketDescriptor::FIELDS::pivotB>() {return pivotB;}
	void BallAndSocketDescriptor::accept(class FieldVisitor& visitor) {
		visitor.visit(pivotA, FIELDS::pivotA);
		visitor.visit(pivotB, FIELDS::pivotB);
	}


	template<> const auto& PrismaticDescriptor::get<PrismaticDescriptor::FIELDS::parentSpace>() {return parentSpace;}
	template<> const auto& PrismaticDescriptor::get<PrismaticDescriptor::FIELDS::plane>() {return plane;}
	template<> const auto& PrismaticDescriptor::get<PrismaticDescriptor::FIELDS::childSpace>() {return childSpace;}
	template<> const auto& PrismaticDescriptor::get<PrismaticDescriptor::FIELDS::slidingA>() {return slidingA;}
	template<> const auto& PrismaticDescriptor::get<PrismaticDescriptor::FIELDS::rotationA>() {return rotationA;}
	template<> const auto& PrismaticDescriptor::get<PrismaticDescriptor::FIELDS::planeA>() {return planeA;}
	template<> const auto& PrismaticDescriptor::get<PrismaticDescriptor::FIELDS::pivotA>() {return pivotA;}
	template<> const auto& PrismaticDescriptor::get<PrismaticDescriptor::FIELDS::slidingB>() {return slidingB;}
	template<> const auto& PrismaticDescriptor::get<PrismaticDescriptor::FIELDS::rotationB>() {return rotationB;}
	template<> const auto& PrismaticDescriptor::get<PrismaticDescriptor::FIELDS::planeB>() {return planeB;}
	template<> const auto& PrismaticDescriptor::get<PrismaticDescriptor::FIELDS::pivotB>() {return pivotB;}
	template<> const auto& PrismaticDescriptor::get<PrismaticDescriptor::FIELDS::minDistance>() {return minDistance;}
	template<> const auto& PrismaticDescriptor::get<PrismaticDescriptor::FIELDS::maxDistance>() {return maxDistance;}
	template<> const auto& PrismaticDescriptor::get<PrismaticDescriptor::FIELDS::friction>() {return friction;}
	template<> const auto& PrismaticDescriptor::get<PrismaticDescriptor::FIELDS::motor>() {return motor;}
	void PrismaticDescriptor::accept(class FieldVisitor& visitor) {
		visitor.visit(parentSpace, FIELDS::parentSpace);
		visitor.visit(plane, FIELDS::plane);
		visitor.visit(childSpace, FIELDS::childSpace);
		visitor.visit(slidingA, FIELDS::slidingA);
		visitor.visit(rotationA, FIELDS::rotationA);
		visitor.visit(planeA, FIELDS::planeA);
		visitor.visit(pivotA, FIELDS::pivotA);
		visitor.visit(slidingB, FIELDS::slidingB);
		visitor.visit(rotationB, FIELDS::rotationB);
		visitor.visit(planeB, FIELDS::planeB);
		visitor.visit(pivotB, FIELDS::pivotB);
		visitor.visit(minDistance, FIELDS::minDistance);
		visitor.visit(maxDistance, FIELDS::maxDistance);
		visitor.visit(friction, FIELDS::friction);
		visitor.visit(motor, FIELDS::motor);
	}


	template<> const auto& StiffSpringDescriptor::get<StiffSpringDescriptor::FIELDS::pivotA>() {return pivotA;}
	template<> const auto& StiffSpringDescriptor::get<StiffSpringDescriptor::FIELDS::pivotB>() {return pivotB;}
	template<> const auto& StiffSpringDescriptor::get<StiffSpringDescriptor::FIELDS::length>() {return length;}
	void StiffSpringDescriptor::accept(class FieldVisitor& visitor) {
		visitor.visit(pivotA, FIELDS::pivotA);
		visitor.visit(pivotB, FIELDS::pivotB);
		visitor.visit(length, FIELDS::length);
	}


	template<> const auto& OldSkinData::get<OldSkinData::FIELDS::vertexWeight>() {return vertexWeight;}
	template<> const auto& OldSkinData::get<OldSkinData::FIELDS::vertexIndex>() {return vertexIndex;}
	template<> const auto& OldSkinData::get<OldSkinData::FIELDS::unknownVector>() {return unknownVector;}
	void OldSkinData::accept(class FieldVisitor& visitor) {
		visitor.visit(vertexWeight, FIELDS::vertexWeight);
		visitor.visit(vertexIndex, FIELDS::vertexIndex);
		visitor.visit(unknownVector, FIELDS::unknownVector);
	}


	template<> const auto& BoxBV::get<BoxBV::FIELDS::center>() {return center;}
	template<> const auto& BoxBV::get<BoxBV::FIELDS::axis>() {return axis;}
	template<> const auto& BoxBV::get<BoxBV::FIELDS::extent>() {return extent;}
	void BoxBV::accept(class FieldVisitor& visitor) {
		visitor.visit(center, FIELDS::center);
		visitor.visit(axis, FIELDS::axis);
		visitor.visit(extent, FIELDS::extent);
	}


	template<> const auto& CapsuleBV::get<CapsuleBV::FIELDS::center>() {return center;}
	template<> const auto& CapsuleBV::get<CapsuleBV::FIELDS::origin>() {return origin;}
	template<> const auto& CapsuleBV::get<CapsuleBV::FIELDS::extent>() {return extent;}
	template<> const auto& CapsuleBV::get<CapsuleBV::FIELDS::radius>() {return radius;}
	void CapsuleBV::accept(class FieldVisitor& visitor) {
		visitor.visit(center, FIELDS::center);
		visitor.visit(origin, FIELDS::origin);
		visitor.visit(extent, FIELDS::extent);
		visitor.visit(radius, FIELDS::radius);
	}


	template<> const auto& HalfSpaceBV::get<HalfSpaceBV::FIELDS::plane>() {return plane;}
	template<> const auto& HalfSpaceBV::get<HalfSpaceBV::FIELDS::center>() {return center;}
	void HalfSpaceBV::accept(class FieldVisitor& visitor) {
		visitor.visit(plane, FIELDS::plane);
		visitor.visit(center, FIELDS::center);
	}


	template<> const auto& BoundingVolume::get<BoundingVolume::FIELDS::collisionType>() {return collisionType;}
	template<> const auto& BoundingVolume::get<BoundingVolume::FIELDS::sphere>() {return sphere;}
	template<> const auto& BoundingVolume::get<BoundingVolume::FIELDS::box>() {return box;}
	template<> const auto& BoundingVolume::get<BoundingVolume::FIELDS::capsule>() {return capsule;}
	template<> const auto& BoundingVolume::get<BoundingVolume::FIELDS::halfSpace>() {return halfSpace;}
	void BoundingVolume::accept(class FieldVisitor& visitor) {
		visitor.visit(collisionType, FIELDS::collisionType);
		visitor.visit(sphere, FIELDS::sphere);
		visitor.visit(box, FIELDS::box);
		visitor.visit(capsule, FIELDS::capsule);
		visitor.visit(halfSpace, FIELDS::halfSpace);
	}


	template<> const auto& UnionBV::get<UnionBV::FIELDS::numBv>() {return numBv;}
	template<> const auto& UnionBV::get<UnionBV::FIELDS::boundingVolumes>() {return boundingVolumes;}
	void UnionBV::accept(class FieldVisitor& visitor) {
		visitor.visit(numBv, FIELDS::numBv);
		visitor.visit(boundingVolumes, FIELDS::boundingVolumes);
	}


	template<> const auto& MorphWeight::get<MorphWeight::FIELDS::interpolator>() {return interpolator;}
	template<> const auto& MorphWeight::get<MorphWeight::FIELDS::weight>() {return weight;}
	void MorphWeight::accept(class FieldVisitor& visitor) {
		visitor.visit(interpolator, FIELDS::interpolator);
		visitor.visit(weight, FIELDS::weight);
	}


	template<> const auto& BoneTransform::get<BoneTransform::FIELDS::translation>() {return translation;}
	template<> const auto& BoneTransform::get<BoneTransform::FIELDS::rotation>() {return rotation;}
	template<> const auto& BoneTransform::get<BoneTransform::FIELDS::scale>() {return scale;}
	void BoneTransform::accept(class FieldVisitor& visitor) {
		visitor.visit(translation, FIELDS::translation);
		visitor.visit(rotation, FIELDS::rotation);
		visitor.visit(scale, FIELDS::scale);
	}


	template<> const auto& BonePose::get<BonePose::FIELDS::numTransforms>() {return numTransforms;}
	template<> const auto& BonePose::get<BonePose::FIELDS::transforms>() {return transforms;}
	void BonePose::accept(class FieldVisitor& visitor) {
		visitor.visit(numTransforms, FIELDS::numTransforms);
		visitor.visit(transforms, FIELDS::transforms);
	}


	template<> const auto& DecalVectorArray::get<DecalVectorArray::FIELDS::numVectors>() {return numVectors;}
	template<> const auto& DecalVectorArray::get<DecalVectorArray::FIELDS::points>() {return points;}
	template<> const auto& DecalVectorArray::get<DecalVectorArray::FIELDS::normals>() {return normals;}
	void DecalVectorArray::accept(class FieldVisitor& visitor) {
		visitor.visit(numVectors, FIELDS::numVectors);
		visitor.visit(points, FIELDS::points);
		visitor.visit(normals, FIELDS::normals);
	}


	template<> const auto& BodyPartList::get<BodyPartList::FIELDS::partFlag>() {return partFlag;}
	template<> const auto& BodyPartList::get<BodyPartList::FIELDS::bodyPart>() {return bodyPart;}
	void BodyPartList::accept(class FieldVisitor& visitor) {
		visitor.visit(partFlag, FIELDS::partFlag);
		visitor.visit(bodyPart, FIELDS::bodyPart);
	}


	template<> const auto& BoneLOD::get<BoneLOD::FIELDS::distance>() {return distance;}
	template<> const auto& BoneLOD::get<BoneLOD::FIELDS::boneName>() {return boneName;}
	void BoneLOD::accept(class FieldVisitor& visitor) {
		visitor.visit(distance, FIELDS::distance);
		visitor.visit(boneName, FIELDS::boneName);
	}


	template<> const auto& bhkCMSDMaterial::get<bhkCMSDMaterial::FIELDS::material>() {return material;}
	template<> const auto& bhkCMSDMaterial::get<bhkCMSDMaterial::FIELDS::filter>() {return filter;}
	void bhkCMSDMaterial::accept(class FieldVisitor& visitor) {
		visitor.visit(material, FIELDS::material);
		visitor.visit(filter, FIELDS::filter);
	}


	template<> const auto& bhkCMSDBigTris::get<bhkCMSDBigTris::FIELDS::triangle1>() {return triangle1;}
	template<> const auto& bhkCMSDBigTris::get<bhkCMSDBigTris::FIELDS::triangle2>() {return triangle2;}
	template<> const auto& bhkCMSDBigTris::get<bhkCMSDBigTris::FIELDS::triangle3>() {return triangle3;}
	template<> const auto& bhkCMSDBigTris::get<bhkCMSDBigTris::FIELDS::material>() {return material;}
	template<> const auto& bhkCMSDBigTris::get<bhkCMSDBigTris::FIELDS::weldingInfo>() {return weldingInfo;}
	void bhkCMSDBigTris::accept(class FieldVisitor& visitor) {
		visitor.visit(triangle1, FIELDS::triangle1);
		visitor.visit(triangle2, FIELDS::triangle2);
		visitor.visit(triangle3, FIELDS::triangle3);
		visitor.visit(material, FIELDS::material);
		visitor.visit(weldingInfo, FIELDS::weldingInfo);
	}


	template<> const auto& bhkCMSDTransform::get<bhkCMSDTransform::FIELDS::translation>() {return translation;}
	template<> const auto& bhkCMSDTransform::get<bhkCMSDTransform::FIELDS::rotation>() {return rotation;}
	void bhkCMSDTransform::accept(class FieldVisitor& visitor) {
		visitor.visit(translation, FIELDS::translation);
		visitor.visit(rotation, FIELDS::rotation);
	}


	template<> const auto& bhkCMSDChunk::get<bhkCMSDChunk::FIELDS::translation>() {return translation;}
	template<> const auto& bhkCMSDChunk::get<bhkCMSDChunk::FIELDS::materialIndex>() {return materialIndex;}
	template<> const auto& bhkCMSDChunk::get<bhkCMSDChunk::FIELDS::reference>() {return reference;}
	template<> const auto& bhkCMSDChunk::get<bhkCMSDChunk::FIELDS::transformIndex>() {return transformIndex;}
	template<> const auto& bhkCMSDChunk::get<bhkCMSDChunk::FIELDS::numVertices>() {return numVertices;}
	template<> const auto& bhkCMSDChunk::get<bhkCMSDChunk::FIELDS::vertices>() {return vertices;}
	template<> const auto& bhkCMSDChunk::get<bhkCMSDChunk::FIELDS::numIndices>() {return numIndices;}
	template<> const auto& bhkCMSDChunk::get<bhkCMSDChunk::FIELDS::indices>() {return indices;}
	template<> const auto& bhkCMSDChunk::get<bhkCMSDChunk::FIELDS::numStrips>() {return numStrips;}
	template<> const auto& bhkCMSDChunk::get<bhkCMSDChunk::FIELDS::strips>() {return strips;}
	template<> const auto& bhkCMSDChunk::get<bhkCMSDChunk::FIELDS::numWeldingInfo>() {return numWeldingInfo;}
	template<> const auto& bhkCMSDChunk::get<bhkCMSDChunk::FIELDS::weldingInfo>() {return weldingInfo;}
	void bhkCMSDChunk::accept(class FieldVisitor& visitor) {
		visitor.visit(translation, FIELDS::translation);
		visitor.visit(materialIndex, FIELDS::materialIndex);
		visitor.visit(reference, FIELDS::reference);
		visitor.visit(transformIndex, FIELDS::transformIndex);
		visitor.visit(numVertices, FIELDS::numVertices);
		visitor.visit(vertices, FIELDS::vertices);
		visitor.visit(numIndices, FIELDS::numIndices);
		visitor.visit(indices, FIELDS::indices);
		visitor.visit(numStrips, FIELDS::numStrips);
		visitor.visit(strips, FIELDS::strips);
		visitor.visit(numWeldingInfo, FIELDS::numWeldingInfo);
		visitor.visit(weldingInfo, FIELDS::weldingInfo);
	}


	template<> const auto& MalleableDescriptor::get<MalleableDescriptor::FIELDS::type>() {return type;}
	template<> const auto& MalleableDescriptor::get<MalleableDescriptor::FIELDS::numEntities>() {return numEntities;}
	template<> const auto& MalleableDescriptor::get<MalleableDescriptor::FIELDS::entityA>() {return entityA;}
	template<> const auto& MalleableDescriptor::get<MalleableDescriptor::FIELDS::entityB>() {return entityB;}
	template<> const auto& MalleableDescriptor::get<MalleableDescriptor::FIELDS::priority>() {return priority;}
	template<> const auto& MalleableDescriptor::get<MalleableDescriptor::FIELDS::ballAndSocket>() {return ballAndSocket;}
	template<> const auto& MalleableDescriptor::get<MalleableDescriptor::FIELDS::hinge>() {return hinge;}
	template<> const auto& MalleableDescriptor::get<MalleableDescriptor::FIELDS::limitedHinge>() {return limitedHinge;}
	template<> const auto& MalleableDescriptor::get<MalleableDescriptor::FIELDS::prismatic>() {return prismatic;}
	template<> const auto& MalleableDescriptor::get<MalleableDescriptor::FIELDS::ragdoll>() {return ragdoll;}
	template<> const auto& MalleableDescriptor::get<MalleableDescriptor::FIELDS::stiffSpring>() {return stiffSpring;}
	template<> const auto& MalleableDescriptor::get<MalleableDescriptor::FIELDS::tau>() {return tau;}
	template<> const auto& MalleableDescriptor::get<MalleableDescriptor::FIELDS::damping>() {return damping;}
	template<> const auto& MalleableDescriptor::get<MalleableDescriptor::FIELDS::strength>() {return strength;}
	void MalleableDescriptor::accept(class FieldVisitor& visitor) {
		visitor.visit(type, FIELDS::type);
		visitor.visit(numEntities, FIELDS::numEntities);
		visitor.visit(entityA, FIELDS::entityA);
		visitor.visit(entityB, FIELDS::entityB);
		visitor.visit(priority, FIELDS::priority);
		visitor.visit(ballAndSocket, FIELDS::ballAndSocket);
		visitor.visit(hinge, FIELDS::hinge);
		visitor.visit(limitedHinge, FIELDS::limitedHinge);
		visitor.visit(prismatic, FIELDS::prismatic);
		visitor.visit(ragdoll, FIELDS::ragdoll);
		visitor.visit(stiffSpring, FIELDS::stiffSpring);
		visitor.visit(tau, FIELDS::tau);
		visitor.visit(damping, FIELDS::damping);
		visitor.visit(strength, FIELDS::strength);
	}


	template<> const auto& ConstraintData::get<ConstraintData::FIELDS::type>() {return type;}
	template<> const auto& ConstraintData::get<ConstraintData::FIELDS::numEntities2>() {return numEntities2;}
	template<> const auto& ConstraintData::get<ConstraintData::FIELDS::entityA>() {return entityA;}
	template<> const auto& ConstraintData::get<ConstraintData::FIELDS::entityB>() {return entityB;}
	template<> const auto& ConstraintData::get<ConstraintData::FIELDS::priority>() {return priority;}
	template<> const auto& ConstraintData::get<ConstraintData::FIELDS::ballAndSocket>() {return ballAndSocket;}
	template<> const auto& ConstraintData::get<ConstraintData::FIELDS::hinge>() {return hinge;}
	template<> const auto& ConstraintData::get<ConstraintData::FIELDS::limitedHinge>() {return limitedHinge;}
	template<> const auto& ConstraintData::get<ConstraintData::FIELDS::prismatic>() {return prismatic;}
	template<> const auto& ConstraintData::get<ConstraintData::FIELDS::ragdoll>() {return ragdoll;}
	template<> const auto& ConstraintData::get<ConstraintData::FIELDS::stiffSpring>() {return stiffSpring;}
	template<> const auto& ConstraintData::get<ConstraintData::FIELDS::malleable>() {return malleable;}
	void ConstraintData::accept(class FieldVisitor& visitor) {
		visitor.visit(type, FIELDS::type);
		visitor.visit(numEntities2, FIELDS::numEntities2);
		visitor.visit(entityA, FIELDS::entityA);
		visitor.visit(entityB, FIELDS::entityB);
		visitor.visit(priority, FIELDS::priority);
		visitor.visit(ballAndSocket, FIELDS::ballAndSocket);
		visitor.visit(hinge, FIELDS::hinge);
		visitor.visit(limitedHinge, FIELDS::limitedHinge);
		visitor.visit(prismatic, FIELDS::prismatic);
		visitor.visit(ragdoll, FIELDS::ragdoll);
		visitor.visit(stiffSpring, FIELDS::stiffSpring);
		visitor.visit(malleable, FIELDS::malleable);
	}


	template<> const auto& hkWorldObjCinfoProperty::get<hkWorldObjCinfoProperty::FIELDS::data>() {return data;}
	template<> const auto& hkWorldObjCinfoProperty::get<hkWorldObjCinfoProperty::FIELDS::size>() {return size;}
	template<> const auto& hkWorldObjCinfoProperty::get<hkWorldObjCinfoProperty::FIELDS::capacityAndFlags>() {return capacityAndFlags;}
	void hkWorldObjCinfoProperty::accept(class FieldVisitor& visitor) {
		visitor.visit(data, FIELDS::data);
		visitor.visit(size, FIELDS::size);
		visitor.visit(capacityAndFlags, FIELDS::capacityAndFlags);
	}


	template<> const auto& ConstraintInfo::get<ConstraintInfo::FIELDS::pivotInA>() {return pivotInA;}
	template<> const auto& ConstraintInfo::get<ConstraintInfo::FIELDS::pivotInB>() {return pivotInB;}
	void ConstraintInfo::accept(class FieldVisitor& visitor) {
		visitor.visit(pivotInA, FIELDS::pivotInA);
		visitor.visit(pivotInB, FIELDS::pivotInB);
	}


	template<> const auto& InterpBlendItem::get<InterpBlendItem::FIELDS::interpolator>() {return interpolator;}
	template<> const auto& InterpBlendItem::get<InterpBlendItem::FIELDS::weight>() {return weight;}
	template<> const auto& InterpBlendItem::get<InterpBlendItem::FIELDS::normalizedWeight>() {return normalizedWeight;}
	template<> const auto& InterpBlendItem::get<InterpBlendItem::FIELDS::priority>() {return priority;}
	template<> const auto& InterpBlendItem::get<InterpBlendItem::FIELDS::easeSpinner>() {return easeSpinner;}
	void InterpBlendItem::accept(class FieldVisitor& visitor) {
		visitor.visit(interpolator, FIELDS::interpolator);
		visitor.visit(weight, FIELDS::weight);
		visitor.visit(normalizedWeight, FIELDS::normalizedWeight);
		visitor.visit(priority, FIELDS::priority);
		visitor.visit(easeSpinner, FIELDS::easeSpinner);
	}


	template<> const auto& MaterialData::get<MaterialData::FIELDS::hasShader>() {return hasShader;}
	template<> const auto& MaterialData::get<MaterialData::FIELDS::shaderName>() {return shaderName;}
	template<> const auto& MaterialData::get<MaterialData::FIELDS::shaderExtraData>() {return shaderExtraData;}
	template<> const auto& MaterialData::get<MaterialData::FIELDS::numMaterials>() {return numMaterials;}
	template<> const auto& MaterialData::get<MaterialData::FIELDS::materialName>() {return materialName;}
	template<> const auto& MaterialData::get<MaterialData::FIELDS::materialExtraData>() {return materialExtraData;}
	template<> const auto& MaterialData::get<MaterialData::FIELDS::activeMaterial>() {return activeMaterial;}
	template<> const auto& MaterialData::get<MaterialData::FIELDS::unknownByte>() {return unknownByte;}
	template<> const auto& MaterialData::get<MaterialData::FIELDS::unknownInteger2>() {return unknownInteger2;}
	template<> const auto& MaterialData::get<MaterialData::FIELDS::materialNeedsUpdate>() {return materialNeedsUpdate;}
	void MaterialData::accept(class FieldVisitor& visitor) {
		visitor.visit(hasShader, FIELDS::hasShader);
		visitor.visit(shaderName, FIELDS::shaderName);
		visitor.visit(shaderExtraData, FIELDS::shaderExtraData);
		visitor.visit(numMaterials, FIELDS::numMaterials);
		visitor.visit(materialName, FIELDS::materialName);
		visitor.visit(materialExtraData, FIELDS::materialExtraData);
		visitor.visit(activeMaterial, FIELDS::activeMaterial);
		visitor.visit(unknownByte, FIELDS::unknownByte);
		visitor.visit(unknownInteger2, FIELDS::unknownInteger2);
		visitor.visit(materialNeedsUpdate, FIELDS::materialNeedsUpdate);
	}


	template<> const auto& ParticleDesc::get<ParticleDesc::FIELDS::translation>() {return translation;}
	template<> const auto& ParticleDesc::get<ParticleDesc::FIELDS::unknownFloats1>() {return unknownFloats1;}
	template<> const auto& ParticleDesc::get<ParticleDesc::FIELDS::unknownFloat1>() {return unknownFloat1;}
	template<> const auto& ParticleDesc::get<ParticleDesc::FIELDS::unknownFloat2>() {return unknownFloat2;}
	template<> const auto& ParticleDesc::get<ParticleDesc::FIELDS::unknownFloat3>() {return unknownFloat3;}
	template<> const auto& ParticleDesc::get<ParticleDesc::FIELDS::unknownInt1>() {return unknownInt1;}
	void ParticleDesc::accept(class FieldVisitor& visitor) {
		visitor.visit(translation, FIELDS::translation);
		visitor.visit(unknownFloats1, FIELDS::unknownFloats1);
		visitor.visit(unknownFloat1, FIELDS::unknownFloat1);
		visitor.visit(unknownFloat2, FIELDS::unknownFloat2);
		visitor.visit(unknownFloat3, FIELDS::unknownFloat3);
		visitor.visit(unknownInt1, FIELDS::unknownInt1);
	}


	template<> const auto& PixelFormatComponent::get<PixelFormatComponent::FIELDS::type>() {return type;}
	template<> const auto& PixelFormatComponent::get<PixelFormatComponent::FIELDS::convention>() {return convention;}
	template<> const auto& PixelFormatComponent::get<PixelFormatComponent::FIELDS::bitsPerChannel>() {return bitsPerChannel;}
	template<> const auto& PixelFormatComponent::get<PixelFormatComponent::FIELDS::isSigned>() {return isSigned;}
	void PixelFormatComponent::accept(class FieldVisitor& visitor) {
		visitor.visit(type, FIELDS::type);
		visitor.visit(convention, FIELDS::convention);
		visitor.visit(bitsPerChannel, FIELDS::bitsPerChannel);
		visitor.visit(isSigned, FIELDS::isSigned);
	}


	template<> const auto& FormatPrefs::get<FormatPrefs::FIELDS::pixelLayout>() {return pixelLayout;}
	template<> const auto& FormatPrefs::get<FormatPrefs::FIELDS::useMipmaps>() {return useMipmaps;}
	template<> const auto& FormatPrefs::get<FormatPrefs::FIELDS::alphaFormat>() {return alphaFormat;}
	void FormatPrefs::accept(class FieldVisitor& visitor) {
		visitor.visit(pixelLayout, FIELDS::pixelLayout);
		visitor.visit(useMipmaps, FIELDS::useMipmaps);
		visitor.visit(alphaFormat, FIELDS::alphaFormat);
	}


	template<> const auto& PhysXMaterialRef::get<PhysXMaterialRef::FIELDS::key>() {return key;}
	template<> const auto& PhysXMaterialRef::get<PhysXMaterialRef::FIELDS::materialDesc>() {return materialDesc;}
	void PhysXMaterialRef::accept(class FieldVisitor& visitor) {
		visitor.visit(key, FIELDS::key);
		visitor.visit(materialDesc, FIELDS::materialDesc);
	}


	template<> const auto& PhysXStateName::get<PhysXStateName::FIELDS::name>() {return name;}
	template<> const auto& PhysXStateName::get<PhysXStateName::FIELDS::index>() {return index;}
	void PhysXStateName::accept(class FieldVisitor& visitor) {
		visitor.visit(name, FIELDS::name);
		visitor.visit(index, FIELDS::index);
	}


	template<> const auto& PhysXBodyStoredVels::get<PhysXBodyStoredVels::FIELDS::linearVelocity>() {return linearVelocity;}
	template<> const auto& PhysXBodyStoredVels::get<PhysXBodyStoredVels::FIELDS::angularVelocity>() {return angularVelocity;}
	template<> const auto& PhysXBodyStoredVels::get<PhysXBodyStoredVels::FIELDS::sleep>() {return sleep;}
	void PhysXBodyStoredVels::accept(class FieldVisitor& visitor) {
		visitor.visit(linearVelocity, FIELDS::linearVelocity);
		visitor.visit(angularVelocity, FIELDS::angularVelocity);
		visitor.visit(sleep, FIELDS::sleep);
	}


	template<> const auto& NiPhysXJointActor::get<NiPhysXJointActor::FIELDS::actor>() {return actor;}
	template<> const auto& NiPhysXJointActor::get<NiPhysXJointActor::FIELDS::localNormal>() {return localNormal;}
	template<> const auto& NiPhysXJointActor::get<NiPhysXJointActor::FIELDS::localAxis>() {return localAxis;}
	template<> const auto& NiPhysXJointActor::get<NiPhysXJointActor::FIELDS::localAnchor>() {return localAnchor;}
	void NiPhysXJointActor::accept(class FieldVisitor& visitor) {
		visitor.visit(actor, FIELDS::actor);
		visitor.visit(localNormal, FIELDS::localNormal);
		visitor.visit(localAxis, FIELDS::localAxis);
		visitor.visit(localAnchor, FIELDS::localAnchor);
	}


	template<> const auto& NxJointLimitSoftDesc::get<NxJointLimitSoftDesc::FIELDS::value>() {return value;}
	template<> const auto& NxJointLimitSoftDesc::get<NxJointLimitSoftDesc::FIELDS::restitution>() {return restitution;}
	template<> const auto& NxJointLimitSoftDesc::get<NxJointLimitSoftDesc::FIELDS::spring>() {return spring;}
	template<> const auto& NxJointLimitSoftDesc::get<NxJointLimitSoftDesc::FIELDS::damping>() {return damping;}
	void NxJointLimitSoftDesc::accept(class FieldVisitor& visitor) {
		visitor.visit(value, FIELDS::value);
		visitor.visit(restitution, FIELDS::restitution);
		visitor.visit(spring, FIELDS::spring);
		visitor.visit(damping, FIELDS::damping);
	}


	template<> const auto& NxJointDriveDesc::get<NxJointDriveDesc::FIELDS::driveType>() {return driveType;}
	template<> const auto& NxJointDriveDesc::get<NxJointDriveDesc::FIELDS::restitution>() {return restitution;}
	template<> const auto& NxJointDriveDesc::get<NxJointDriveDesc::FIELDS::spring>() {return spring;}
	template<> const auto& NxJointDriveDesc::get<NxJointDriveDesc::FIELDS::damping>() {return damping;}
	void NxJointDriveDesc::accept(class FieldVisitor& visitor) {
		visitor.visit(driveType, FIELDS::driveType);
		visitor.visit(restitution, FIELDS::restitution);
		visitor.visit(spring, FIELDS::spring);
		visitor.visit(damping, FIELDS::damping);
	}


	template<> const auto& NiPhysXJointLimit::get<NiPhysXJointLimit::FIELDS::limitPlaneNormal>() {return limitPlaneNormal;}
	template<> const auto& NiPhysXJointLimit::get<NiPhysXJointLimit::FIELDS::limitPlaneD>() {return limitPlaneD;}
	template<> const auto& NiPhysXJointLimit::get<NiPhysXJointLimit::FIELDS::limitPlaneR>() {return limitPlaneR;}
	void NiPhysXJointLimit::accept(class FieldVisitor& visitor) {
		visitor.visit(limitPlaneNormal, FIELDS::limitPlaneNormal);
		visitor.visit(limitPlaneD, FIELDS::limitPlaneD);
		visitor.visit(limitPlaneR, FIELDS::limitPlaneR);
	}


	template<> const auto& NxPlane::get<NxPlane::FIELDS::val1>() {return val1;}
	template<> const auto& NxPlane::get<NxPlane::FIELDS::point1>() {return point1;}
	void NxPlane::accept(class FieldVisitor& visitor) {
		visitor.visit(val1, FIELDS::val1);
		visitor.visit(point1, FIELDS::point1);
	}


	template<> const auto& NxCapsule::get<NxCapsule::FIELDS::val1>() {return val1;}
	template<> const auto& NxCapsule::get<NxCapsule::FIELDS::val2>() {return val2;}
	template<> const auto& NxCapsule::get<NxCapsule::FIELDS::capsuleFlags>() {return capsuleFlags;}
	void NxCapsule::accept(class FieldVisitor& visitor) {
		visitor.visit(val1, FIELDS::val1);
		visitor.visit(val2, FIELDS::val2);
		visitor.visit(capsuleFlags, FIELDS::capsuleFlags);
	}


	template<> const auto& NxSpringDesc::get<NxSpringDesc::FIELDS::spring>() {return spring;}
	template<> const auto& NxSpringDesc::get<NxSpringDesc::FIELDS::damper>() {return damper;}
	template<> const auto& NxSpringDesc::get<NxSpringDesc::FIELDS::targetValue>() {return targetValue;}
	void NxSpringDesc::accept(class FieldVisitor& visitor) {
		visitor.visit(spring, FIELDS::spring);
		visitor.visit(damper, FIELDS::damper);
		visitor.visit(targetValue, FIELDS::targetValue);
	}


	template<> const auto& NxMaterialDesc::get<NxMaterialDesc::FIELDS::dynamicFriction>() {return dynamicFriction;}
	template<> const auto& NxMaterialDesc::get<NxMaterialDesc::FIELDS::staticFriction>() {return staticFriction;}
	template<> const auto& NxMaterialDesc::get<NxMaterialDesc::FIELDS::restitution>() {return restitution;}
	template<> const auto& NxMaterialDesc::get<NxMaterialDesc::FIELDS::dynamicFrictionV>() {return dynamicFrictionV;}
	template<> const auto& NxMaterialDesc::get<NxMaterialDesc::FIELDS::staticFrictionV>() {return staticFrictionV;}
	template<> const auto& NxMaterialDesc::get<NxMaterialDesc::FIELDS::directionOfAnisotropy>() {return directionOfAnisotropy;}
	template<> const auto& NxMaterialDesc::get<NxMaterialDesc::FIELDS::flags>() {return flags;}
	template<> const auto& NxMaterialDesc::get<NxMaterialDesc::FIELDS::frictionCombineMode>() {return frictionCombineMode;}
	template<> const auto& NxMaterialDesc::get<NxMaterialDesc::FIELDS::restitutionCombineMode>() {return restitutionCombineMode;}
	template<> const auto& NxMaterialDesc::get<NxMaterialDesc::FIELDS::hasSpring>() {return hasSpring;}
	template<> const auto& NxMaterialDesc::get<NxMaterialDesc::FIELDS::spring>() {return spring;}
	void NxMaterialDesc::accept(class FieldVisitor& visitor) {
		visitor.visit(dynamicFriction, FIELDS::dynamicFriction);
		visitor.visit(staticFriction, FIELDS::staticFriction);
		visitor.visit(restitution, FIELDS::restitution);
		visitor.visit(dynamicFrictionV, FIELDS::dynamicFrictionV);
		visitor.visit(staticFrictionV, FIELDS::staticFrictionV);
		visitor.visit(directionOfAnisotropy, FIELDS::directionOfAnisotropy);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(frictionCombineMode, FIELDS::frictionCombineMode);
		visitor.visit(restitutionCombineMode, FIELDS::restitutionCombineMode);
		visitor.visit(hasSpring, FIELDS::hasSpring);
		visitor.visit(spring, FIELDS::spring);
	}


	template<> const auto& Polygon::get<Polygon::FIELDS::numVertices>() {return numVertices;}
	template<> const auto& Polygon::get<Polygon::FIELDS::vertexOffset>() {return vertexOffset;}
	template<> const auto& Polygon::get<Polygon::FIELDS::numTriangles>() {return numTriangles;}
	template<> const auto& Polygon::get<Polygon::FIELDS::triangleOffset>() {return triangleOffset;}
	void Polygon::accept(class FieldVisitor& visitor) {
		visitor.visit(numVertices, FIELDS::numVertices);
		visitor.visit(vertexOffset, FIELDS::vertexOffset);
		visitor.visit(numTriangles, FIELDS::numTriangles);
		visitor.visit(triangleOffset, FIELDS::triangleOffset);
	}


	template<> const auto& BSTreadTransform::get<BSTreadTransform::FIELDS::name>() {return name;}
	template<> const auto& BSTreadTransform::get<BSTreadTransform::FIELDS::transform1>() {return transform1;}
	template<> const auto& BSTreadTransform::get<BSTreadTransform::FIELDS::transform2>() {return transform2;}
	void BSTreadTransform::accept(class FieldVisitor& visitor) {
		visitor.visit(name, FIELDS::name);
		visitor.visit(transform1, FIELDS::transform1);
		visitor.visit(transform2, FIELDS::transform2);
	}


	template<> const auto& BSGeometrySubSegment::get<BSGeometrySubSegment::FIELDS::startIndex>() {return startIndex;}
	template<> const auto& BSGeometrySubSegment::get<BSGeometrySubSegment::FIELDS::numPrimitives>() {return numPrimitives;}
	template<> const auto& BSGeometrySubSegment::get<BSGeometrySubSegment::FIELDS::parentArrayIndex>() {return parentArrayIndex;}
	template<> const auto& BSGeometrySubSegment::get<BSGeometrySubSegment::FIELDS::unused>() {return unused;}
	void BSGeometrySubSegment::accept(class FieldVisitor& visitor) {
		visitor.visit(startIndex, FIELDS::startIndex);
		visitor.visit(numPrimitives, FIELDS::numPrimitives);
		visitor.visit(parentArrayIndex, FIELDS::parentArrayIndex);
		visitor.visit(unused, FIELDS::unused);
	}


	template<> const auto& BSGeometrySegmentData::get<BSGeometrySegmentData::FIELDS::flags>() {return flags;}
	template<> const auto& BSGeometrySegmentData::get<BSGeometrySegmentData::FIELDS::index>() {return index;}
	template<> const auto& BSGeometrySegmentData::get<BSGeometrySegmentData::FIELDS::numTrisInSegment>() {return numTrisInSegment;}
	template<> const auto& BSGeometrySegmentData::get<BSGeometrySegmentData::FIELDS::startIndex>() {return startIndex;}
	template<> const auto& BSGeometrySegmentData::get<BSGeometrySegmentData::FIELDS::numPrimitives>() {return numPrimitives;}
	template<> const auto& BSGeometrySegmentData::get<BSGeometrySegmentData::FIELDS::parentArrayIndex>() {return parentArrayIndex;}
	template<> const auto& BSGeometrySegmentData::get<BSGeometrySegmentData::FIELDS::numSubSegments>() {return numSubSegments;}
	template<> const auto& BSGeometrySegmentData::get<BSGeometrySegmentData::FIELDS::subSegment>() {return subSegment;}
	void BSGeometrySegmentData::accept(class FieldVisitor& visitor) {
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(index, FIELDS::index);
		visitor.visit(numTrisInSegment, FIELDS::numTrisInSegment);
		visitor.visit(startIndex, FIELDS::startIndex);
		visitor.visit(numPrimitives, FIELDS::numPrimitives);
		visitor.visit(parentArrayIndex, FIELDS::parentArrayIndex);
		visitor.visit(numSubSegments, FIELDS::numSubSegments);
		visitor.visit(subSegment, FIELDS::subSegment);
	}


	template<> const auto& AdditionalDataInfo::get<AdditionalDataInfo::FIELDS::dataType>() {return dataType;}
	template<> const auto& AdditionalDataInfo::get<AdditionalDataInfo::FIELDS::numChannelBytesPerElement>() {return numChannelBytesPerElement;}
	template<> const auto& AdditionalDataInfo::get<AdditionalDataInfo::FIELDS::numChannelBytes>() {return numChannelBytes;}
	template<> const auto& AdditionalDataInfo::get<AdditionalDataInfo::FIELDS::numTotalBytesPerElement>() {return numTotalBytesPerElement;}
	template<> const auto& AdditionalDataInfo::get<AdditionalDataInfo::FIELDS::blockIndex>() {return blockIndex;}
	template<> const auto& AdditionalDataInfo::get<AdditionalDataInfo::FIELDS::channelOffset>() {return channelOffset;}
	template<> const auto& AdditionalDataInfo::get<AdditionalDataInfo::FIELDS::unknownByte1>() {return unknownByte1;}
	void AdditionalDataInfo::accept(class FieldVisitor& visitor) {
		visitor.visit(dataType, FIELDS::dataType);
		visitor.visit(numChannelBytesPerElement, FIELDS::numChannelBytesPerElement);
		visitor.visit(numChannelBytes, FIELDS::numChannelBytes);
		visitor.visit(numTotalBytesPerElement, FIELDS::numTotalBytesPerElement);
		visitor.visit(blockIndex, FIELDS::blockIndex);
		visitor.visit(channelOffset, FIELDS::channelOffset);
		visitor.visit(unknownByte1, FIELDS::unknownByte1);
	}


	template<> const auto& AdditionalDataBlock::get<AdditionalDataBlock::FIELDS::hasData>() {return hasData;}
	template<> const auto& AdditionalDataBlock::get<AdditionalDataBlock::FIELDS::blockSize>() {return blockSize;}
	template<> const auto& AdditionalDataBlock::get<AdditionalDataBlock::FIELDS::numBlocks>() {return numBlocks;}
	template<> const auto& AdditionalDataBlock::get<AdditionalDataBlock::FIELDS::blockOffsets>() {return blockOffsets;}
	template<> const auto& AdditionalDataBlock::get<AdditionalDataBlock::FIELDS::numData>() {return numData;}
	template<> const auto& AdditionalDataBlock::get<AdditionalDataBlock::FIELDS::dataSizes>() {return dataSizes;}
	template<> const auto& AdditionalDataBlock::get<AdditionalDataBlock::FIELDS::data>() {return data;}
	void AdditionalDataBlock::accept(class FieldVisitor& visitor) {
		visitor.visit(hasData, FIELDS::hasData);
		visitor.visit(blockSize, FIELDS::blockSize);
		visitor.visit(numBlocks, FIELDS::numBlocks);
		visitor.visit(blockOffsets, FIELDS::blockOffsets);
		visitor.visit(numData, FIELDS::numData);
		visitor.visit(dataSizes, FIELDS::dataSizes);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& BSPackedAdditionalDataBlock::get<BSPackedAdditionalDataBlock::FIELDS::hasData>() {return hasData;}
	template<> const auto& BSPackedAdditionalDataBlock::get<BSPackedAdditionalDataBlock::FIELDS::numTotalBytes>() {return numTotalBytes;}
	template<> const auto& BSPackedAdditionalDataBlock::get<BSPackedAdditionalDataBlock::FIELDS::numBlocks>() {return numBlocks;}
	template<> const auto& BSPackedAdditionalDataBlock::get<BSPackedAdditionalDataBlock::FIELDS::blockOffsets>() {return blockOffsets;}
	template<> const auto& BSPackedAdditionalDataBlock::get<BSPackedAdditionalDataBlock::FIELDS::numAtoms>() {return numAtoms;}
	template<> const auto& BSPackedAdditionalDataBlock::get<BSPackedAdditionalDataBlock::FIELDS::atomSizes>() {return atomSizes;}
	template<> const auto& BSPackedAdditionalDataBlock::get<BSPackedAdditionalDataBlock::FIELDS::data>() {return data;}
	template<> const auto& BSPackedAdditionalDataBlock::get<BSPackedAdditionalDataBlock::FIELDS::unknownInt1>() {return unknownInt1;}
	template<> const auto& BSPackedAdditionalDataBlock::get<BSPackedAdditionalDataBlock::FIELDS::numTotalBytesPerElement>() {return numTotalBytesPerElement;}
	void BSPackedAdditionalDataBlock::accept(class FieldVisitor& visitor) {
		visitor.visit(hasData, FIELDS::hasData);
		visitor.visit(numTotalBytes, FIELDS::numTotalBytes);
		visitor.visit(numBlocks, FIELDS::numBlocks);
		visitor.visit(blockOffsets, FIELDS::blockOffsets);
		visitor.visit(numAtoms, FIELDS::numAtoms);
		visitor.visit(atomSizes, FIELDS::atomSizes);
		visitor.visit(data, FIELDS::data);
		visitor.visit(unknownInt1, FIELDS::unknownInt1);
		visitor.visit(numTotalBytesPerElement, FIELDS::numTotalBytesPerElement);
	}


	template<> const auto& Region::get<Region::FIELDS::startIndex>() {return startIndex;}
	template<> const auto& Region::get<Region::FIELDS::numIndices>() {return numIndices;}
	void Region::accept(class FieldVisitor& visitor) {
		visitor.visit(startIndex, FIELDS::startIndex);
		visitor.visit(numIndices, FIELDS::numIndices);
	}


	template<> const auto& SemanticData::get<SemanticData::FIELDS::name>() {return name;}
	template<> const auto& SemanticData::get<SemanticData::FIELDS::index>() {return index;}
	void SemanticData::accept(class FieldVisitor& visitor) {
		visitor.visit(name, FIELDS::name);
		visitor.visit(index, FIELDS::index);
	}


	template<> const auto& DataStreamRef::get<DataStreamRef::FIELDS::stream>() {return stream;}
	template<> const auto& DataStreamRef::get<DataStreamRef::FIELDS::isPerInstance>() {return isPerInstance;}
	template<> const auto& DataStreamRef::get<DataStreamRef::FIELDS::numSubmeshes>() {return numSubmeshes;}
	template<> const auto& DataStreamRef::get<DataStreamRef::FIELDS::submeshToRegionMap>() {return submeshToRegionMap;}
	template<> const auto& DataStreamRef::get<DataStreamRef::FIELDS::numComponents>() {return numComponents;}
	template<> const auto& DataStreamRef::get<DataStreamRef::FIELDS::componentSemantics>() {return componentSemantics;}
	void DataStreamRef::accept(class FieldVisitor& visitor) {
		visitor.visit(stream, FIELDS::stream);
		visitor.visit(isPerInstance, FIELDS::isPerInstance);
		visitor.visit(numSubmeshes, FIELDS::numSubmeshes);
		visitor.visit(submeshToRegionMap, FIELDS::submeshToRegionMap);
		visitor.visit(numComponents, FIELDS::numComponents);
		visitor.visit(componentSemantics, FIELDS::componentSemantics);
	}


	template<> const auto& ExtraMeshDataEpicMickey::get<ExtraMeshDataEpicMickey::FIELDS::unknownInt1>() {return unknownInt1;}
	template<> const auto& ExtraMeshDataEpicMickey::get<ExtraMeshDataEpicMickey::FIELDS::unknownInt2>() {return unknownInt2;}
	template<> const auto& ExtraMeshDataEpicMickey::get<ExtraMeshDataEpicMickey::FIELDS::unknownInt3>() {return unknownInt3;}
	template<> const auto& ExtraMeshDataEpicMickey::get<ExtraMeshDataEpicMickey::FIELDS::unknownInt4>() {return unknownInt4;}
	template<> const auto& ExtraMeshDataEpicMickey::get<ExtraMeshDataEpicMickey::FIELDS::unknownInt5>() {return unknownInt5;}
	template<> const auto& ExtraMeshDataEpicMickey::get<ExtraMeshDataEpicMickey::FIELDS::unknownInt6>() {return unknownInt6;}
	void ExtraMeshDataEpicMickey::accept(class FieldVisitor& visitor) {
		visitor.visit(unknownInt1, FIELDS::unknownInt1);
		visitor.visit(unknownInt2, FIELDS::unknownInt2);
		visitor.visit(unknownInt3, FIELDS::unknownInt3);
		visitor.visit(unknownInt4, FIELDS::unknownInt4);
		visitor.visit(unknownInt5, FIELDS::unknownInt5);
		visitor.visit(unknownInt6, FIELDS::unknownInt6);
	}


	template<> const auto& ExtraMeshDataEpicMickey2::get<ExtraMeshDataEpicMickey2::FIELDS::start>() {return start;}
	template<> const auto& ExtraMeshDataEpicMickey2::get<ExtraMeshDataEpicMickey2::FIELDS::end>() {return end;}
	template<> const auto& ExtraMeshDataEpicMickey2::get<ExtraMeshDataEpicMickey2::FIELDS::unknownShorts>() {return unknownShorts;}
	void ExtraMeshDataEpicMickey2::accept(class FieldVisitor& visitor) {
		visitor.visit(start, FIELDS::start);
		visitor.visit(end, FIELDS::end);
		visitor.visit(unknownShorts, FIELDS::unknownShorts);
	}


	template<> const auto& ElementReference::get<ElementReference::FIELDS::semantic>() {return semantic;}
	template<> const auto& ElementReference::get<ElementReference::FIELDS::normalizeFlag>() {return normalizeFlag;}
	void ElementReference::accept(class FieldVisitor& visitor) {
		visitor.visit(semantic, FIELDS::semantic);
		visitor.visit(normalizeFlag, FIELDS::normalizeFlag);
	}


	template<> const auto& LODInfo::get<LODInfo::FIELDS::numBones>() {return numBones;}
	template<> const auto& LODInfo::get<LODInfo::FIELDS::numActiveSkins>() {return numActiveSkins;}
	template<> const auto& LODInfo::get<LODInfo::FIELDS::skinIndices>() {return skinIndices;}
	void LODInfo::accept(class FieldVisitor& visitor) {
		visitor.visit(numBones, FIELDS::numBones);
		visitor.visit(numActiveSkins, FIELDS::numActiveSkins);
		visitor.visit(skinIndices, FIELDS::skinIndices);
	}


	template<> const auto& PSSpawnRateKey::get<PSSpawnRateKey::FIELDS::value>() {return value;}
	template<> const auto& PSSpawnRateKey::get<PSSpawnRateKey::FIELDS::time>() {return time;}
	void PSSpawnRateKey::accept(class FieldVisitor& visitor) {
		visitor.visit(value, FIELDS::value);
		visitor.visit(time, FIELDS::time);
	}


	template<> const auto& BSGeometryPerSegmentSharedData::get<BSGeometryPerSegmentSharedData::FIELDS::userIndex>() {return userIndex;}
	template<> const auto& BSGeometryPerSegmentSharedData::get<BSGeometryPerSegmentSharedData::FIELDS::boneId>() {return boneId;}
	template<> const auto& BSGeometryPerSegmentSharedData::get<BSGeometryPerSegmentSharedData::FIELDS::numCutOffsets>() {return numCutOffsets;}
	template<> const auto& BSGeometryPerSegmentSharedData::get<BSGeometryPerSegmentSharedData::FIELDS::cutOffsets>() {return cutOffsets;}
	void BSGeometryPerSegmentSharedData::accept(class FieldVisitor& visitor) {
		visitor.visit(userIndex, FIELDS::userIndex);
		visitor.visit(boneId, FIELDS::boneId);
		visitor.visit(numCutOffsets, FIELDS::numCutOffsets);
		visitor.visit(cutOffsets, FIELDS::cutOffsets);
	}


	template<> const auto& BSGeometrySegmentSharedData::get<BSGeometrySegmentSharedData::FIELDS::numSegments>() {return numSegments;}
	template<> const auto& BSGeometrySegmentSharedData::get<BSGeometrySegmentSharedData::FIELDS::totalSegments>() {return totalSegments;}
	template<> const auto& BSGeometrySegmentSharedData::get<BSGeometrySegmentSharedData::FIELDS::segmentStarts>() {return segmentStarts;}
	template<> const auto& BSGeometrySegmentSharedData::get<BSGeometrySegmentSharedData::FIELDS::perSegmentData>() {return perSegmentData;}
	template<> const auto& BSGeometrySegmentSharedData::get<BSGeometrySegmentSharedData::FIELDS::ssfLength>() {return ssfLength;}
	template<> const auto& BSGeometrySegmentSharedData::get<BSGeometrySegmentSharedData::FIELDS::ssfFile>() {return ssfFile;}
	void BSGeometrySegmentSharedData::accept(class FieldVisitor& visitor) {
		visitor.visit(numSegments, FIELDS::numSegments);
		visitor.visit(totalSegments, FIELDS::totalSegments);
		visitor.visit(segmentStarts, FIELDS::segmentStarts);
		visitor.visit(perSegmentData, FIELDS::perSegmentData);
		visitor.visit(ssfLength, FIELDS::ssfLength);
		visitor.visit(ssfFile, FIELDS::ssfFile);
	}


	template<> const auto& BSSkinBoneTrans::get<BSSkinBoneTrans::FIELDS::boundingSphere>() {return boundingSphere;}
	template<> const auto& BSSkinBoneTrans::get<BSSkinBoneTrans::FIELDS::rotation>() {return rotation;}
	template<> const auto& BSSkinBoneTrans::get<BSSkinBoneTrans::FIELDS::translation>() {return translation;}
	template<> const auto& BSSkinBoneTrans::get<BSSkinBoneTrans::FIELDS::scale>() {return scale;}
	void BSSkinBoneTrans::accept(class FieldVisitor& visitor) {
		visitor.visit(boundingSphere, FIELDS::boundingSphere);
		visitor.visit(rotation, FIELDS::rotation);
		visitor.visit(translation, FIELDS::translation);
		visitor.visit(scale, FIELDS::scale);
	}


	template<> const auto& BSConnectPoint::get<BSConnectPoint::FIELDS::parent>() {return parent;}
	template<> const auto& BSConnectPoint::get<BSConnectPoint::FIELDS::name>() {return name;}
	template<> const auto& BSConnectPoint::get<BSConnectPoint::FIELDS::rotation>() {return rotation;}
	template<> const auto& BSConnectPoint::get<BSConnectPoint::FIELDS::translation>() {return translation;}
	template<> const auto& BSConnectPoint::get<BSConnectPoint::FIELDS::scale>() {return scale;}
	void BSConnectPoint::accept(class FieldVisitor& visitor) {
		visitor.visit(parent, FIELDS::parent);
		visitor.visit(name, FIELDS::name);
		visitor.visit(rotation, FIELDS::rotation);
		visitor.visit(translation, FIELDS::translation);
		visitor.visit(scale, FIELDS::scale);
	}


	template<> const auto& BSPackedGeomDataCombined::get<BSPackedGeomDataCombined::FIELDS::grayscaleToPaletteScale>() {return grayscaleToPaletteScale;}
	template<> const auto& BSPackedGeomDataCombined::get<BSPackedGeomDataCombined::FIELDS::transform>() {return transform;}
	template<> const auto& BSPackedGeomDataCombined::get<BSPackedGeomDataCombined::FIELDS::boundingSphere>() {return boundingSphere;}
	void BSPackedGeomDataCombined::accept(class FieldVisitor& visitor) {
		visitor.visit(grayscaleToPaletteScale, FIELDS::grayscaleToPaletteScale);
		visitor.visit(transform, FIELDS::transform);
		visitor.visit(boundingSphere, FIELDS::boundingSphere);
	}


	template<> const auto& BSPackedGeomData::get<BSPackedGeomData::FIELDS::numVerts>() {return numVerts;}
	template<> const auto& BSPackedGeomData::get<BSPackedGeomData::FIELDS::lodLevels>() {return lodLevels;}
	template<> const auto& BSPackedGeomData::get<BSPackedGeomData::FIELDS::triCountLod0>() {return triCountLod0;}
	template<> const auto& BSPackedGeomData::get<BSPackedGeomData::FIELDS::triOffsetLod0>() {return triOffsetLod0;}
	template<> const auto& BSPackedGeomData::get<BSPackedGeomData::FIELDS::triCountLod1>() {return triCountLod1;}
	template<> const auto& BSPackedGeomData::get<BSPackedGeomData::FIELDS::triOffsetLod1>() {return triOffsetLod1;}
	template<> const auto& BSPackedGeomData::get<BSPackedGeomData::FIELDS::triCountLod2>() {return triCountLod2;}
	template<> const auto& BSPackedGeomData::get<BSPackedGeomData::FIELDS::triOffsetLod2>() {return triOffsetLod2;}
	template<> const auto& BSPackedGeomData::get<BSPackedGeomData::FIELDS::numCombined>() {return numCombined;}
	template<> const auto& BSPackedGeomData::get<BSPackedGeomData::FIELDS::combined>() {return combined;}
	template<> const auto& BSPackedGeomData::get<BSPackedGeomData::FIELDS::vertexDesc>() {return vertexDesc;}
	template<> const auto& BSPackedGeomData::get<BSPackedGeomData::FIELDS::vertexData>() {return vertexData;}
	template<> const auto& BSPackedGeomData::get<BSPackedGeomData::FIELDS::triangles>() {return triangles;}
	void BSPackedGeomData::accept(class FieldVisitor& visitor) {
		visitor.visit(numVerts, FIELDS::numVerts);
		visitor.visit(lodLevels, FIELDS::lodLevels);
		visitor.visit(triCountLod0, FIELDS::triCountLod0);
		visitor.visit(triOffsetLod0, FIELDS::triOffsetLod0);
		visitor.visit(triCountLod1, FIELDS::triCountLod1);
		visitor.visit(triOffsetLod1, FIELDS::triOffsetLod1);
		visitor.visit(triCountLod2, FIELDS::triCountLod2);
		visitor.visit(triOffsetLod2, FIELDS::triOffsetLod2);
		visitor.visit(numCombined, FIELDS::numCombined);
		visitor.visit(combined, FIELDS::combined);
		visitor.visit(vertexDesc, FIELDS::vertexDesc);
		visitor.visit(vertexData, FIELDS::vertexData);
		visitor.visit(triangles, FIELDS::triangles);
	}


	template<> const auto& BSPackedSharedGeomData::get<BSPackedSharedGeomData::FIELDS::numVerts>() {return numVerts;}
	template<> const auto& BSPackedSharedGeomData::get<BSPackedSharedGeomData::FIELDS::lodLevels>() {return lodLevels;}
	template<> const auto& BSPackedSharedGeomData::get<BSPackedSharedGeomData::FIELDS::triCountLod0>() {return triCountLod0;}
	template<> const auto& BSPackedSharedGeomData::get<BSPackedSharedGeomData::FIELDS::triOffsetLod0>() {return triOffsetLod0;}
	template<> const auto& BSPackedSharedGeomData::get<BSPackedSharedGeomData::FIELDS::triCountLod1>() {return triCountLod1;}
	template<> const auto& BSPackedSharedGeomData::get<BSPackedSharedGeomData::FIELDS::triOffsetLod1>() {return triOffsetLod1;}
	template<> const auto& BSPackedSharedGeomData::get<BSPackedSharedGeomData::FIELDS::triCountLod2>() {return triCountLod2;}
	template<> const auto& BSPackedSharedGeomData::get<BSPackedSharedGeomData::FIELDS::triOffsetLod2>() {return triOffsetLod2;}
	template<> const auto& BSPackedSharedGeomData::get<BSPackedSharedGeomData::FIELDS::numCombined>() {return numCombined;}
	template<> const auto& BSPackedSharedGeomData::get<BSPackedSharedGeomData::FIELDS::combined>() {return combined;}
	template<> const auto& BSPackedSharedGeomData::get<BSPackedSharedGeomData::FIELDS::vertexDesc>() {return vertexDesc;}
	void BSPackedSharedGeomData::accept(class FieldVisitor& visitor) {
		visitor.visit(numVerts, FIELDS::numVerts);
		visitor.visit(lodLevels, FIELDS::lodLevels);
		visitor.visit(triCountLod0, FIELDS::triCountLod0);
		visitor.visit(triOffsetLod0, FIELDS::triOffsetLod0);
		visitor.visit(triCountLod1, FIELDS::triCountLod1);
		visitor.visit(triOffsetLod1, FIELDS::triOffsetLod1);
		visitor.visit(triCountLod2, FIELDS::triCountLod2);
		visitor.visit(triOffsetLod2, FIELDS::triOffsetLod2);
		visitor.visit(numCombined, FIELDS::numCombined);
		visitor.visit(combined, FIELDS::combined);
		visitor.visit(vertexDesc, FIELDS::vertexDesc);
	}


	template<> const auto& BSPackedGeomObject::get<BSPackedGeomObject::FIELDS::shapeId1>() {return shapeId1;}
	template<> const auto& BSPackedGeomObject::get<BSPackedGeomObject::FIELDS::shapeId2>() {return shapeId2;}
	void BSPackedGeomObject::accept(class FieldVisitor& visitor) {
		visitor.visit(shapeId1, FIELDS::shapeId1);
		visitor.visit(shapeId2, FIELDS::shapeId2);
	}


	void NiObject::accept(class FieldVisitor& visitor) {
	}


	template<> const auto& Ni3dsAlphaAnimator::get<Ni3dsAlphaAnimator::FIELDS::unknown1>() {return unknown1;}
	template<> const auto& Ni3dsAlphaAnimator::get<Ni3dsAlphaAnimator::FIELDS::parent>() {return parent;}
	template<> const auto& Ni3dsAlphaAnimator::get<Ni3dsAlphaAnimator::FIELDS::num1>() {return num1;}
	template<> const auto& Ni3dsAlphaAnimator::get<Ni3dsAlphaAnimator::FIELDS::num2>() {return num2;}
	template<> const auto& Ni3dsAlphaAnimator::get<Ni3dsAlphaAnimator::FIELDS::unknown2>() {return unknown2;}
	void Ni3dsAlphaAnimator::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(unknown1, FIELDS::unknown1);
		visitor.visit(parent, FIELDS::parent);
		visitor.visit(num1, FIELDS::num1);
		visitor.visit(num2, FIELDS::num2);
		visitor.visit(unknown2, FIELDS::unknown2);
	}


	template<> const auto& Ni3dsAnimationNode::get<Ni3dsAnimationNode::FIELDS::name>() {return name;}
	template<> const auto& Ni3dsAnimationNode::get<Ni3dsAnimationNode::FIELDS::hasData>() {return hasData;}
	template<> const auto& Ni3dsAnimationNode::get<Ni3dsAnimationNode::FIELDS::unknownFloats1>() {return unknownFloats1;}
	template<> const auto& Ni3dsAnimationNode::get<Ni3dsAnimationNode::FIELDS::unknownShort>() {return unknownShort;}
	template<> const auto& Ni3dsAnimationNode::get<Ni3dsAnimationNode::FIELDS::child>() {return child;}
	template<> const auto& Ni3dsAnimationNode::get<Ni3dsAnimationNode::FIELDS::unknownFloats2>() {return unknownFloats2;}
	template<> const auto& Ni3dsAnimationNode::get<Ni3dsAnimationNode::FIELDS::count>() {return count;}
	template<> const auto& Ni3dsAnimationNode::get<Ni3dsAnimationNode::FIELDS::unknownArray>() {return unknownArray;}
	void Ni3dsAnimationNode::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(name, FIELDS::name);
		visitor.visit(hasData, FIELDS::hasData);
		visitor.visit(unknownFloats1, FIELDS::unknownFloats1);
		visitor.visit(unknownShort, FIELDS::unknownShort);
		visitor.visit(child, FIELDS::child);
		visitor.visit(unknownFloats2, FIELDS::unknownFloats2);
		visitor.visit(count, FIELDS::count);
		visitor.visit(unknownArray, FIELDS::unknownArray);
	}


	template<> const auto& Ni3dsColorAnimator::get<Ni3dsColorAnimator::FIELDS::unknown1>() {return unknown1;}
	void Ni3dsColorAnimator::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(unknown1, FIELDS::unknown1);
	}


	template<> const auto& Ni3dsMorphShape::get<Ni3dsMorphShape::FIELDS::unknown1>() {return unknown1;}
	void Ni3dsMorphShape::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(unknown1, FIELDS::unknown1);
	}


	template<> const auto& Ni3dsParticleSystem::get<Ni3dsParticleSystem::FIELDS::unknown1>() {return unknown1;}
	void Ni3dsParticleSystem::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(unknown1, FIELDS::unknown1);
	}


	template<> const auto& Ni3dsPathController::get<Ni3dsPathController::FIELDS::unknown1>() {return unknown1;}
	void Ni3dsPathController::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(unknown1, FIELDS::unknown1);
	}


	template<> const auto& NiParticleModifier::get<NiParticleModifier::FIELDS::nextModifier>() {return nextModifier;}
	template<> const auto& NiParticleModifier::get<NiParticleModifier::FIELDS::controller>() {return controller;}
	void NiParticleModifier::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(nextModifier, FIELDS::nextModifier);
		visitor.visit(controller, FIELDS::controller);
	}


	template<> const auto& NiPSysCollider::get<NiPSysCollider::FIELDS::bounce>() {return bounce;}
	template<> const auto& NiPSysCollider::get<NiPSysCollider::FIELDS::spawnOnCollide>() {return spawnOnCollide;}
	template<> const auto& NiPSysCollider::get<NiPSysCollider::FIELDS::dieOnCollide>() {return dieOnCollide;}
	template<> const auto& NiPSysCollider::get<NiPSysCollider::FIELDS::spawnModifier>() {return spawnModifier;}
	template<> const auto& NiPSysCollider::get<NiPSysCollider::FIELDS::parent>() {return parent;}
	template<> const auto& NiPSysCollider::get<NiPSysCollider::FIELDS::nextCollider>() {return nextCollider;}
	template<> const auto& NiPSysCollider::get<NiPSysCollider::FIELDS::colliderObject>() {return colliderObject;}
	void NiPSysCollider::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(bounce, FIELDS::bounce);
		visitor.visit(spawnOnCollide, FIELDS::spawnOnCollide);
		visitor.visit(dieOnCollide, FIELDS::dieOnCollide);
		visitor.visit(spawnModifier, FIELDS::spawnModifier);
		visitor.visit(parent, FIELDS::parent);
		visitor.visit(nextCollider, FIELDS::nextCollider);
		visitor.visit(colliderObject, FIELDS::colliderObject);
	}


	void bhkRefObject::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
	}


	void bhkSerializable::accept(class FieldVisitor& visitor) {
		bhkRefObject::accept(visitor);
	}


	template<> const auto& bhkWorldObject::get<bhkWorldObject::FIELDS::shape>() {return shape;}
	template<> const auto& bhkWorldObject::get<bhkWorldObject::FIELDS::havokFilter>() {return havokFilter;}
	template<> const auto& bhkWorldObject::get<bhkWorldObject::FIELDS::unused>() {return unused;}
	template<> const auto& bhkWorldObject::get<bhkWorldObject::FIELDS::broadPhaseType>() {return broadPhaseType;}
	template<> const auto& bhkWorldObject::get<bhkWorldObject::FIELDS::unusedBytes>() {return unusedBytes;}
	template<> const auto& bhkWorldObject::get<bhkWorldObject::FIELDS::cinfoProperty>() {return cinfoProperty;}
	void bhkWorldObject::accept(class FieldVisitor& visitor) {
		bhkSerializable::accept(visitor);
		visitor.visit(shape, FIELDS::shape);
		visitor.visit(havokFilter, FIELDS::havokFilter);
		visitor.visit(unused, FIELDS::unused);
		visitor.visit(broadPhaseType, FIELDS::broadPhaseType);
		visitor.visit(unusedBytes, FIELDS::unusedBytes);
		visitor.visit(cinfoProperty, FIELDS::cinfoProperty);
	}


	void bhkPhantom::accept(class FieldVisitor& visitor) {
		bhkWorldObject::accept(visitor);
	}


	void bhkShapePhantom::accept(class FieldVisitor& visitor) {
		bhkPhantom::accept(visitor);
	}


	template<> const auto& bhkSimpleShapePhantom::get<bhkSimpleShapePhantom::FIELDS::unused2>() {return unused2;}
	template<> const auto& bhkSimpleShapePhantom::get<bhkSimpleShapePhantom::FIELDS::transform>() {return transform;}
	void bhkSimpleShapePhantom::accept(class FieldVisitor& visitor) {
		bhkShapePhantom::accept(visitor);
		visitor.visit(unused2, FIELDS::unused2);
		visitor.visit(transform, FIELDS::transform);
	}


	void bhkEntity::accept(class FieldVisitor& visitor) {
		bhkWorldObject::accept(visitor);
	}


	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::collisionResponse>() {return collisionResponse;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::unusedByte1>() {return unusedByte1;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::processContactCallbackDelay>() {return processContactCallbackDelay;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::unknownInt1>() {return unknownInt1;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::havokFilterCopy>() {return havokFilterCopy;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::unused2>() {return unused2;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::unknownInt2>() {return unknownInt2;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::collisionResponse2>() {return collisionResponse2;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::unusedByte2>() {return unusedByte2;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::processContactCallbackDelay2>() {return processContactCallbackDelay2;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::translation>() {return translation;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::rotation>() {return rotation;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::linearVelocity>() {return linearVelocity;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::angularVelocity>() {return angularVelocity;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::inertiaTensor>() {return inertiaTensor;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::center>() {return center;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::mass>() {return mass;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::linearDamping>() {return linearDamping;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::angularDamping>() {return angularDamping;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::timeFactor>() {return timeFactor;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::gravityFactor>() {return gravityFactor;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::friction>() {return friction;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::rollingFrictionMultiplier>() {return rollingFrictionMultiplier;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::restitution>() {return restitution;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::maxLinearVelocity>() {return maxLinearVelocity;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::maxAngularVelocity>() {return maxAngularVelocity;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::penetrationDepth>() {return penetrationDepth;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::motionSystem>() {return motionSystem;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::deactivatorType>() {return deactivatorType;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::enableDeactivation>() {return enableDeactivation;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::solverDeactivation>() {return solverDeactivation;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::qualityType>() {return qualityType;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::unknownFloat1>() {return unknownFloat1;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::unknownBytes1>() {return unknownBytes1;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::unknownBytes2>() {return unknownBytes2;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::numConstraints>() {return numConstraints;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::constraints>() {return constraints;}
	template<> const auto& bhkRigidBody::get<bhkRigidBody::FIELDS::bodyFlags>() {return bodyFlags;}
	void bhkRigidBody::accept(class FieldVisitor& visitor) {
		bhkEntity::accept(visitor);
		visitor.visit(collisionResponse, FIELDS::collisionResponse);
		visitor.visit(unusedByte1, FIELDS::unusedByte1);
		visitor.visit(processContactCallbackDelay, FIELDS::processContactCallbackDelay);
		visitor.visit(unknownInt1, FIELDS::unknownInt1);
		visitor.visit(havokFilterCopy, FIELDS::havokFilterCopy);
		visitor.visit(unused2, FIELDS::unused2);
		visitor.visit(unknownInt2, FIELDS::unknownInt2);
		visitor.visit(collisionResponse2, FIELDS::collisionResponse2);
		visitor.visit(unusedByte2, FIELDS::unusedByte2);
		visitor.visit(processContactCallbackDelay2, FIELDS::processContactCallbackDelay2);
		visitor.visit(translation, FIELDS::translation);
		visitor.visit(rotation, FIELDS::rotation);
		visitor.visit(linearVelocity, FIELDS::linearVelocity);
		visitor.visit(angularVelocity, FIELDS::angularVelocity);
		visitor.visit(inertiaTensor, FIELDS::inertiaTensor);
		visitor.visit(center, FIELDS::center);
		visitor.visit(mass, FIELDS::mass);
		visitor.visit(linearDamping, FIELDS::linearDamping);
		visitor.visit(angularDamping, FIELDS::angularDamping);
		visitor.visit(timeFactor, FIELDS::timeFactor);
		visitor.visit(gravityFactor, FIELDS::gravityFactor);
		visitor.visit(friction, FIELDS::friction);
		visitor.visit(rollingFrictionMultiplier, FIELDS::rollingFrictionMultiplier);
		visitor.visit(restitution, FIELDS::restitution);
		visitor.visit(maxLinearVelocity, FIELDS::maxLinearVelocity);
		visitor.visit(maxAngularVelocity, FIELDS::maxAngularVelocity);
		visitor.visit(penetrationDepth, FIELDS::penetrationDepth);
		visitor.visit(motionSystem, FIELDS::motionSystem);
		visitor.visit(deactivatorType, FIELDS::deactivatorType);
		visitor.visit(enableDeactivation, FIELDS::enableDeactivation);
		visitor.visit(solverDeactivation, FIELDS::solverDeactivation);
		visitor.visit(qualityType, FIELDS::qualityType);
		visitor.visit(unknownFloat1, FIELDS::unknownFloat1);
		visitor.visit(unknownBytes1, FIELDS::unknownBytes1);
		visitor.visit(unknownBytes2, FIELDS::unknownBytes2);
		visitor.visit(numConstraints, FIELDS::numConstraints);
		visitor.visit(constraints, FIELDS::constraints);
		visitor.visit(bodyFlags, FIELDS::bodyFlags);
	}


	void bhkRigidBodyT::accept(class FieldVisitor& visitor) {
		bhkRigidBody::accept(visitor);
	}


	template<> const auto& bhkConstraint::get<bhkConstraint::FIELDS::numEntities>() {return numEntities;}
	template<> const auto& bhkConstraint::get<bhkConstraint::FIELDS::entities>() {return entities;}
	template<> const auto& bhkConstraint::get<bhkConstraint::FIELDS::priority>() {return priority;}
	void bhkConstraint::accept(class FieldVisitor& visitor) {
		bhkSerializable::accept(visitor);
		visitor.visit(numEntities, FIELDS::numEntities);
		visitor.visit(entities, FIELDS::entities);
		visitor.visit(priority, FIELDS::priority);
	}


	template<> const auto& bhkLimitedHingeConstraint::get<bhkLimitedHingeConstraint::FIELDS::limitedHinge>() {return limitedHinge;}
	void bhkLimitedHingeConstraint::accept(class FieldVisitor& visitor) {
		bhkConstraint::accept(visitor);
		visitor.visit(limitedHinge, FIELDS::limitedHinge);
	}


	template<> const auto& bhkMalleableConstraint::get<bhkMalleableConstraint::FIELDS::malleable>() {return malleable;}
	void bhkMalleableConstraint::accept(class FieldVisitor& visitor) {
		bhkConstraint::accept(visitor);
		visitor.visit(malleable, FIELDS::malleable);
	}


	template<> const auto& bhkStiffSpringConstraint::get<bhkStiffSpringConstraint::FIELDS::stiffSpring>() {return stiffSpring;}
	void bhkStiffSpringConstraint::accept(class FieldVisitor& visitor) {
		bhkConstraint::accept(visitor);
		visitor.visit(stiffSpring, FIELDS::stiffSpring);
	}


	template<> const auto& bhkRagdollConstraint::get<bhkRagdollConstraint::FIELDS::ragdoll>() {return ragdoll;}
	void bhkRagdollConstraint::accept(class FieldVisitor& visitor) {
		bhkConstraint::accept(visitor);
		visitor.visit(ragdoll, FIELDS::ragdoll);
	}


	template<> const auto& bhkPrismaticConstraint::get<bhkPrismaticConstraint::FIELDS::prismatic>() {return prismatic;}
	void bhkPrismaticConstraint::accept(class FieldVisitor& visitor) {
		bhkConstraint::accept(visitor);
		visitor.visit(prismatic, FIELDS::prismatic);
	}


	template<> const auto& bhkHingeConstraint::get<bhkHingeConstraint::FIELDS::hinge>() {return hinge;}
	void bhkHingeConstraint::accept(class FieldVisitor& visitor) {
		bhkConstraint::accept(visitor);
		visitor.visit(hinge, FIELDS::hinge);
	}


	template<> const auto& bhkBallAndSocketConstraint::get<bhkBallAndSocketConstraint::FIELDS::ballAndSocket>() {return ballAndSocket;}
	void bhkBallAndSocketConstraint::accept(class FieldVisitor& visitor) {
		bhkConstraint::accept(visitor);
		visitor.visit(ballAndSocket, FIELDS::ballAndSocket);
	}


	template<> const auto& bhkBallSocketConstraintChain::get<bhkBallSocketConstraintChain::FIELDS::numPivots>() {return numPivots;}
	template<> const auto& bhkBallSocketConstraintChain::get<bhkBallSocketConstraintChain::FIELDS::pivots>() {return pivots;}
	template<> const auto& bhkBallSocketConstraintChain::get<bhkBallSocketConstraintChain::FIELDS::tau>() {return tau;}
	template<> const auto& bhkBallSocketConstraintChain::get<bhkBallSocketConstraintChain::FIELDS::damping>() {return damping;}
	template<> const auto& bhkBallSocketConstraintChain::get<bhkBallSocketConstraintChain::FIELDS::constraintForceMixing>() {return constraintForceMixing;}
	template<> const auto& bhkBallSocketConstraintChain::get<bhkBallSocketConstraintChain::FIELDS::maxErrorDistance>() {return maxErrorDistance;}
	template<> const auto& bhkBallSocketConstraintChain::get<bhkBallSocketConstraintChain::FIELDS::numEntitiesA>() {return numEntitiesA;}
	template<> const auto& bhkBallSocketConstraintChain::get<bhkBallSocketConstraintChain::FIELDS::entitiesA>() {return entitiesA;}
	template<> const auto& bhkBallSocketConstraintChain::get<bhkBallSocketConstraintChain::FIELDS::numEntities>() {return numEntities;}
	template<> const auto& bhkBallSocketConstraintChain::get<bhkBallSocketConstraintChain::FIELDS::entityA>() {return entityA;}
	template<> const auto& bhkBallSocketConstraintChain::get<bhkBallSocketConstraintChain::FIELDS::entityB>() {return entityB;}
	template<> const auto& bhkBallSocketConstraintChain::get<bhkBallSocketConstraintChain::FIELDS::priority>() {return priority;}
	void bhkBallSocketConstraintChain::accept(class FieldVisitor& visitor) {
		bhkSerializable::accept(visitor);
		visitor.visit(numPivots, FIELDS::numPivots);
		visitor.visit(pivots, FIELDS::pivots);
		visitor.visit(tau, FIELDS::tau);
		visitor.visit(damping, FIELDS::damping);
		visitor.visit(constraintForceMixing, FIELDS::constraintForceMixing);
		visitor.visit(maxErrorDistance, FIELDS::maxErrorDistance);
		visitor.visit(numEntitiesA, FIELDS::numEntitiesA);
		visitor.visit(entitiesA, FIELDS::entitiesA);
		visitor.visit(numEntities, FIELDS::numEntities);
		visitor.visit(entityA, FIELDS::entityA);
		visitor.visit(entityB, FIELDS::entityB);
		visitor.visit(priority, FIELDS::priority);
	}


	void bhkShape::accept(class FieldVisitor& visitor) {
		bhkSerializable::accept(visitor);
	}


	template<> const auto& bhkTransformShape::get<bhkTransformShape::FIELDS::shape>() {return shape;}
	template<> const auto& bhkTransformShape::get<bhkTransformShape::FIELDS::material>() {return material;}
	template<> const auto& bhkTransformShape::get<bhkTransformShape::FIELDS::radius>() {return radius;}
	template<> const auto& bhkTransformShape::get<bhkTransformShape::FIELDS::unused>() {return unused;}
	template<> const auto& bhkTransformShape::get<bhkTransformShape::FIELDS::transform>() {return transform;}
	void bhkTransformShape::accept(class FieldVisitor& visitor) {
		bhkShape::accept(visitor);
		visitor.visit(shape, FIELDS::shape);
		visitor.visit(material, FIELDS::material);
		visitor.visit(radius, FIELDS::radius);
		visitor.visit(unused, FIELDS::unused);
		visitor.visit(transform, FIELDS::transform);
	}


	template<> const auto& bhkSphereRepShape::get<bhkSphereRepShape::FIELDS::material>() {return material;}
	template<> const auto& bhkSphereRepShape::get<bhkSphereRepShape::FIELDS::radius>() {return radius;}
	void bhkSphereRepShape::accept(class FieldVisitor& visitor) {
		bhkShape::accept(visitor);
		visitor.visit(material, FIELDS::material);
		visitor.visit(radius, FIELDS::radius);
	}


	void bhkConvexShape::accept(class FieldVisitor& visitor) {
		bhkSphereRepShape::accept(visitor);
	}


	void bhkSphereShape::accept(class FieldVisitor& visitor) {
		bhkConvexShape::accept(visitor);
	}


	template<> const auto& bhkCapsuleShape::get<bhkCapsuleShape::FIELDS::unused>() {return unused;}
	template<> const auto& bhkCapsuleShape::get<bhkCapsuleShape::FIELDS::firstPoint>() {return firstPoint;}
	template<> const auto& bhkCapsuleShape::get<bhkCapsuleShape::FIELDS::radius1>() {return radius1;}
	template<> const auto& bhkCapsuleShape::get<bhkCapsuleShape::FIELDS::secondPoint>() {return secondPoint;}
	template<> const auto& bhkCapsuleShape::get<bhkCapsuleShape::FIELDS::radius2>() {return radius2;}
	void bhkCapsuleShape::accept(class FieldVisitor& visitor) {
		bhkConvexShape::accept(visitor);
		visitor.visit(unused, FIELDS::unused);
		visitor.visit(firstPoint, FIELDS::firstPoint);
		visitor.visit(radius1, FIELDS::radius1);
		visitor.visit(secondPoint, FIELDS::secondPoint);
		visitor.visit(radius2, FIELDS::radius2);
	}


	template<> const auto& bhkBoxShape::get<bhkBoxShape::FIELDS::unused>() {return unused;}
	template<> const auto& bhkBoxShape::get<bhkBoxShape::FIELDS::dimensions>() {return dimensions;}
	template<> const auto& bhkBoxShape::get<bhkBoxShape::FIELDS::unusedFloat>() {return unusedFloat;}
	void bhkBoxShape::accept(class FieldVisitor& visitor) {
		bhkConvexShape::accept(visitor);
		visitor.visit(unused, FIELDS::unused);
		visitor.visit(dimensions, FIELDS::dimensions);
		visitor.visit(unusedFloat, FIELDS::unusedFloat);
	}


	template<> const auto& bhkConvexVerticesShape::get<bhkConvexVerticesShape::FIELDS::verticesProperty>() {return verticesProperty;}
	template<> const auto& bhkConvexVerticesShape::get<bhkConvexVerticesShape::FIELDS::normalsProperty>() {return normalsProperty;}
	template<> const auto& bhkConvexVerticesShape::get<bhkConvexVerticesShape::FIELDS::numVertices>() {return numVertices;}
	template<> const auto& bhkConvexVerticesShape::get<bhkConvexVerticesShape::FIELDS::vertices>() {return vertices;}
	template<> const auto& bhkConvexVerticesShape::get<bhkConvexVerticesShape::FIELDS::numNormals>() {return numNormals;}
	template<> const auto& bhkConvexVerticesShape::get<bhkConvexVerticesShape::FIELDS::normals>() {return normals;}
	void bhkConvexVerticesShape::accept(class FieldVisitor& visitor) {
		bhkConvexShape::accept(visitor);
		visitor.visit(verticesProperty, FIELDS::verticesProperty);
		visitor.visit(normalsProperty, FIELDS::normalsProperty);
		visitor.visit(numVertices, FIELDS::numVertices);
		visitor.visit(vertices, FIELDS::vertices);
		visitor.visit(numNormals, FIELDS::numNormals);
		visitor.visit(normals, FIELDS::normals);
	}


	void bhkConvexTransformShape::accept(class FieldVisitor& visitor) {
		bhkTransformShape::accept(visitor);
	}


	template<> const auto& bhkConvexSweepShape::get<bhkConvexSweepShape::FIELDS::shape>() {return shape;}
	template<> const auto& bhkConvexSweepShape::get<bhkConvexSweepShape::FIELDS::material>() {return material;}
	template<> const auto& bhkConvexSweepShape::get<bhkConvexSweepShape::FIELDS::radius>() {return radius;}
	template<> const auto& bhkConvexSweepShape::get<bhkConvexSweepShape::FIELDS::unknown>() {return unknown;}
	void bhkConvexSweepShape::accept(class FieldVisitor& visitor) {
		bhkShape::accept(visitor);
		visitor.visit(shape, FIELDS::shape);
		visitor.visit(material, FIELDS::material);
		visitor.visit(radius, FIELDS::radius);
		visitor.visit(unknown, FIELDS::unknown);
	}


	template<> const auto& bhkMultiSphereShape::get<bhkMultiSphereShape::FIELDS::unknownFloat1>() {return unknownFloat1;}
	template<> const auto& bhkMultiSphereShape::get<bhkMultiSphereShape::FIELDS::unknownFloat2>() {return unknownFloat2;}
	template<> const auto& bhkMultiSphereShape::get<bhkMultiSphereShape::FIELDS::numSpheres>() {return numSpheres;}
	template<> const auto& bhkMultiSphereShape::get<bhkMultiSphereShape::FIELDS::spheres>() {return spheres;}
	void bhkMultiSphereShape::accept(class FieldVisitor& visitor) {
		bhkSphereRepShape::accept(visitor);
		visitor.visit(unknownFloat1, FIELDS::unknownFloat1);
		visitor.visit(unknownFloat2, FIELDS::unknownFloat2);
		visitor.visit(numSpheres, FIELDS::numSpheres);
		visitor.visit(spheres, FIELDS::spheres);
	}


	void bhkBvTreeShape::accept(class FieldVisitor& visitor) {
		bhkShape::accept(visitor);
	}


	template<> const auto& bhkMoppBvTreeShape::get<bhkMoppBvTreeShape::FIELDS::shape>() {return shape;}
	template<> const auto& bhkMoppBvTreeShape::get<bhkMoppBvTreeShape::FIELDS::unused>() {return unused;}
	template<> const auto& bhkMoppBvTreeShape::get<bhkMoppBvTreeShape::FIELDS::shapeScale>() {return shapeScale;}
	template<> const auto& bhkMoppBvTreeShape::get<bhkMoppBvTreeShape::FIELDS::moppDataSize>() {return moppDataSize;}
	template<> const auto& bhkMoppBvTreeShape::get<bhkMoppBvTreeShape::FIELDS::origin>() {return origin;}
	template<> const auto& bhkMoppBvTreeShape::get<bhkMoppBvTreeShape::FIELDS::scale>() {return scale;}
	template<> const auto& bhkMoppBvTreeShape::get<bhkMoppBvTreeShape::FIELDS::oldMoppData>() {return oldMoppData;}
	template<> const auto& bhkMoppBvTreeShape::get<bhkMoppBvTreeShape::FIELDS::buildType>() {return buildType;}
	template<> const auto& bhkMoppBvTreeShape::get<bhkMoppBvTreeShape::FIELDS::moppData>() {return moppData;}
	void bhkMoppBvTreeShape::accept(class FieldVisitor& visitor) {
		bhkBvTreeShape::accept(visitor);
		visitor.visit(shape, FIELDS::shape);
		visitor.visit(unused, FIELDS::unused);
		visitor.visit(shapeScale, FIELDS::shapeScale);
		visitor.visit(moppDataSize, FIELDS::moppDataSize);
		visitor.visit(origin, FIELDS::origin);
		visitor.visit(scale, FIELDS::scale);
		visitor.visit(oldMoppData, FIELDS::oldMoppData);
		visitor.visit(buildType, FIELDS::buildType);
		visitor.visit(moppData, FIELDS::moppData);
	}


	void bhkShapeCollection::accept(class FieldVisitor& visitor) {
		bhkShape::accept(visitor);
	}


	template<> const auto& bhkListShape::get<bhkListShape::FIELDS::numSubShapes>() {return numSubShapes;}
	template<> const auto& bhkListShape::get<bhkListShape::FIELDS::subShapes>() {return subShapes;}
	template<> const auto& bhkListShape::get<bhkListShape::FIELDS::material>() {return material;}
	template<> const auto& bhkListShape::get<bhkListShape::FIELDS::childShapeProperty>() {return childShapeProperty;}
	template<> const auto& bhkListShape::get<bhkListShape::FIELDS::childFilterProperty>() {return childFilterProperty;}
	template<> const auto& bhkListShape::get<bhkListShape::FIELDS::numUnknownInts>() {return numUnknownInts;}
	template<> const auto& bhkListShape::get<bhkListShape::FIELDS::unknownInts>() {return unknownInts;}
	void bhkListShape::accept(class FieldVisitor& visitor) {
		bhkShapeCollection::accept(visitor);
		visitor.visit(numSubShapes, FIELDS::numSubShapes);
		visitor.visit(subShapes, FIELDS::subShapes);
		visitor.visit(material, FIELDS::material);
		visitor.visit(childShapeProperty, FIELDS::childShapeProperty);
		visitor.visit(childFilterProperty, FIELDS::childFilterProperty);
		visitor.visit(numUnknownInts, FIELDS::numUnknownInts);
		visitor.visit(unknownInts, FIELDS::unknownInts);
	}


	template<> const auto& bhkMeshShape::get<bhkMeshShape::FIELDS::unknowns>() {return unknowns;}
	template<> const auto& bhkMeshShape::get<bhkMeshShape::FIELDS::radius>() {return radius;}
	template<> const auto& bhkMeshShape::get<bhkMeshShape::FIELDS::unused2>() {return unused2;}
	template<> const auto& bhkMeshShape::get<bhkMeshShape::FIELDS::scale>() {return scale;}
	template<> const auto& bhkMeshShape::get<bhkMeshShape::FIELDS::numShapeProperties>() {return numShapeProperties;}
	template<> const auto& bhkMeshShape::get<bhkMeshShape::FIELDS::shapeProperties>() {return shapeProperties;}
	template<> const auto& bhkMeshShape::get<bhkMeshShape::FIELDS::unknown2>() {return unknown2;}
	template<> const auto& bhkMeshShape::get<bhkMeshShape::FIELDS::numStripsData>() {return numStripsData;}
	template<> const auto& bhkMeshShape::get<bhkMeshShape::FIELDS::stripsData>() {return stripsData;}
	void bhkMeshShape::accept(class FieldVisitor& visitor) {
		bhkShape::accept(visitor);
		visitor.visit(unknowns, FIELDS::unknowns);
		visitor.visit(radius, FIELDS::radius);
		visitor.visit(unused2, FIELDS::unused2);
		visitor.visit(scale, FIELDS::scale);
		visitor.visit(numShapeProperties, FIELDS::numShapeProperties);
		visitor.visit(shapeProperties, FIELDS::shapeProperties);
		visitor.visit(unknown2, FIELDS::unknown2);
		visitor.visit(numStripsData, FIELDS::numStripsData);
		visitor.visit(stripsData, FIELDS::stripsData);
	}


	template<> const auto& bhkPackedNiTriStripsShape::get<bhkPackedNiTriStripsShape::FIELDS::numSubShapes>() {return numSubShapes;}
	template<> const auto& bhkPackedNiTriStripsShape::get<bhkPackedNiTriStripsShape::FIELDS::subShapes>() {return subShapes;}
	template<> const auto& bhkPackedNiTriStripsShape::get<bhkPackedNiTriStripsShape::FIELDS::userData>() {return userData;}
	template<> const auto& bhkPackedNiTriStripsShape::get<bhkPackedNiTriStripsShape::FIELDS::unused1>() {return unused1;}
	template<> const auto& bhkPackedNiTriStripsShape::get<bhkPackedNiTriStripsShape::FIELDS::radius>() {return radius;}
	template<> const auto& bhkPackedNiTriStripsShape::get<bhkPackedNiTriStripsShape::FIELDS::unused2>() {return unused2;}
	template<> const auto& bhkPackedNiTriStripsShape::get<bhkPackedNiTriStripsShape::FIELDS::scale>() {return scale;}
	template<> const auto& bhkPackedNiTriStripsShape::get<bhkPackedNiTriStripsShape::FIELDS::radiusCopy>() {return radiusCopy;}
	template<> const auto& bhkPackedNiTriStripsShape::get<bhkPackedNiTriStripsShape::FIELDS::scaleCopy>() {return scaleCopy;}
	template<> const auto& bhkPackedNiTriStripsShape::get<bhkPackedNiTriStripsShape::FIELDS::data>() {return data;}
	void bhkPackedNiTriStripsShape::accept(class FieldVisitor& visitor) {
		bhkShapeCollection::accept(visitor);
		visitor.visit(numSubShapes, FIELDS::numSubShapes);
		visitor.visit(subShapes, FIELDS::subShapes);
		visitor.visit(userData, FIELDS::userData);
		visitor.visit(unused1, FIELDS::unused1);
		visitor.visit(radius, FIELDS::radius);
		visitor.visit(unused2, FIELDS::unused2);
		visitor.visit(scale, FIELDS::scale);
		visitor.visit(radiusCopy, FIELDS::radiusCopy);
		visitor.visit(scaleCopy, FIELDS::scaleCopy);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& bhkNiTriStripsShape::get<bhkNiTriStripsShape::FIELDS::material>() {return material;}
	template<> const auto& bhkNiTriStripsShape::get<bhkNiTriStripsShape::FIELDS::radius>() {return radius;}
	template<> const auto& bhkNiTriStripsShape::get<bhkNiTriStripsShape::FIELDS::unused>() {return unused;}
	template<> const auto& bhkNiTriStripsShape::get<bhkNiTriStripsShape::FIELDS::growBy>() {return growBy;}
	template<> const auto& bhkNiTriStripsShape::get<bhkNiTriStripsShape::FIELDS::scale>() {return scale;}
	template<> const auto& bhkNiTriStripsShape::get<bhkNiTriStripsShape::FIELDS::numStripsData>() {return numStripsData;}
	template<> const auto& bhkNiTriStripsShape::get<bhkNiTriStripsShape::FIELDS::stripsData>() {return stripsData;}
	template<> const auto& bhkNiTriStripsShape::get<bhkNiTriStripsShape::FIELDS::numDataLayers>() {return numDataLayers;}
	template<> const auto& bhkNiTriStripsShape::get<bhkNiTriStripsShape::FIELDS::dataLayers>() {return dataLayers;}
	void bhkNiTriStripsShape::accept(class FieldVisitor& visitor) {
		bhkShapeCollection::accept(visitor);
		visitor.visit(material, FIELDS::material);
		visitor.visit(radius, FIELDS::radius);
		visitor.visit(unused, FIELDS::unused);
		visitor.visit(growBy, FIELDS::growBy);
		visitor.visit(scale, FIELDS::scale);
		visitor.visit(numStripsData, FIELDS::numStripsData);
		visitor.visit(stripsData, FIELDS::stripsData);
		visitor.visit(numDataLayers, FIELDS::numDataLayers);
		visitor.visit(dataLayers, FIELDS::dataLayers);
	}


	template<> const auto& NiExtraData::get<NiExtraData::FIELDS::name>() {return name;}
	template<> const auto& NiExtraData::get<NiExtraData::FIELDS::nextExtraData>() {return nextExtraData;}
	void NiExtraData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(name, FIELDS::name);
		visitor.visit(nextExtraData, FIELDS::nextExtraData);
	}


	void NiInterpolator::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
	}


	void NiKeyBasedInterpolator::accept(class FieldVisitor& visitor) {
		NiInterpolator::accept(visitor);
	}


	template<> const auto& NiFloatInterpolator::get<NiFloatInterpolator::FIELDS::value>() {return value;}
	template<> const auto& NiFloatInterpolator::get<NiFloatInterpolator::FIELDS::data>() {return data;}
	void NiFloatInterpolator::accept(class FieldVisitor& visitor) {
		NiKeyBasedInterpolator::accept(visitor);
		visitor.visit(value, FIELDS::value);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiTransformInterpolator::get<NiTransformInterpolator::FIELDS::transform>() {return transform;}
	template<> const auto& NiTransformInterpolator::get<NiTransformInterpolator::FIELDS::data>() {return data;}
	void NiTransformInterpolator::accept(class FieldVisitor& visitor) {
		NiKeyBasedInterpolator::accept(visitor);
		visitor.visit(transform, FIELDS::transform);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiPoint3Interpolator::get<NiPoint3Interpolator::FIELDS::value>() {return value;}
	template<> const auto& NiPoint3Interpolator::get<NiPoint3Interpolator::FIELDS::data>() {return data;}
	void NiPoint3Interpolator::accept(class FieldVisitor& visitor) {
		NiKeyBasedInterpolator::accept(visitor);
		visitor.visit(value, FIELDS::value);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiPathInterpolator::get<NiPathInterpolator::FIELDS::flags>() {return flags;}
	template<> const auto& NiPathInterpolator::get<NiPathInterpolator::FIELDS::bankDir>() {return bankDir;}
	template<> const auto& NiPathInterpolator::get<NiPathInterpolator::FIELDS::maxBankAngle>() {return maxBankAngle;}
	template<> const auto& NiPathInterpolator::get<NiPathInterpolator::FIELDS::smoothing>() {return smoothing;}
	template<> const auto& NiPathInterpolator::get<NiPathInterpolator::FIELDS::followAxis>() {return followAxis;}
	template<> const auto& NiPathInterpolator::get<NiPathInterpolator::FIELDS::pathData>() {return pathData;}
	template<> const auto& NiPathInterpolator::get<NiPathInterpolator::FIELDS::percentData>() {return percentData;}
	void NiPathInterpolator::accept(class FieldVisitor& visitor) {
		NiKeyBasedInterpolator::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(bankDir, FIELDS::bankDir);
		visitor.visit(maxBankAngle, FIELDS::maxBankAngle);
		visitor.visit(smoothing, FIELDS::smoothing);
		visitor.visit(followAxis, FIELDS::followAxis);
		visitor.visit(pathData, FIELDS::pathData);
		visitor.visit(percentData, FIELDS::percentData);
	}


	template<> const auto& NiBoolInterpolator::get<NiBoolInterpolator::FIELDS::value>() {return value;}
	template<> const auto& NiBoolInterpolator::get<NiBoolInterpolator::FIELDS::data>() {return data;}
	void NiBoolInterpolator::accept(class FieldVisitor& visitor) {
		NiKeyBasedInterpolator::accept(visitor);
		visitor.visit(value, FIELDS::value);
		visitor.visit(data, FIELDS::data);
	}


	void NiBoolTimelineInterpolator::accept(class FieldVisitor& visitor) {
		NiBoolInterpolator::accept(visitor);
	}


	template<> const auto& NiBlendInterpolator::get<NiBlendInterpolator::FIELDS::flags>() {return flags;}
	template<> const auto& NiBlendInterpolator::get<NiBlendInterpolator::FIELDS::arraySize>() {return arraySize;}
	template<> const auto& NiBlendInterpolator::get<NiBlendInterpolator::FIELDS::arrayGrowBy>() {return arrayGrowBy;}
	template<> const auto& NiBlendInterpolator::get<NiBlendInterpolator::FIELDS::unknownByte>() {return unknownByte;}
	template<> const auto& NiBlendInterpolator::get<NiBlendInterpolator::FIELDS::weightThreshold>() {return weightThreshold;}
	template<> const auto& NiBlendInterpolator::get<NiBlendInterpolator::FIELDS::interpCount>() {return interpCount;}
	template<> const auto& NiBlendInterpolator::get<NiBlendInterpolator::FIELDS::singleIndex>() {return singleIndex;}
	template<> const auto& NiBlendInterpolator::get<NiBlendInterpolator::FIELDS::highPriority>() {return highPriority;}
	template<> const auto& NiBlendInterpolator::get<NiBlendInterpolator::FIELDS::nextHighPriority>() {return nextHighPriority;}
	template<> const auto& NiBlendInterpolator::get<NiBlendInterpolator::FIELDS::singleTime>() {return singleTime;}
	template<> const auto& NiBlendInterpolator::get<NiBlendInterpolator::FIELDS::highWeightsSum>() {return highWeightsSum;}
	template<> const auto& NiBlendInterpolator::get<NiBlendInterpolator::FIELDS::nextHighWeightsSum>() {return nextHighWeightsSum;}
	template<> const auto& NiBlendInterpolator::get<NiBlendInterpolator::FIELDS::highEaseSpinner>() {return highEaseSpinner;}
	template<> const auto& NiBlendInterpolator::get<NiBlendInterpolator::FIELDS::interpArrayItems>() {return interpArrayItems;}
	template<> const auto& NiBlendInterpolator::get<NiBlendInterpolator::FIELDS::managedControlled>() {return managedControlled;}
	template<> const auto& NiBlendInterpolator::get<NiBlendInterpolator::FIELDS::onlyUseHighestWeight>() {return onlyUseHighestWeight;}
	template<> const auto& NiBlendInterpolator::get<NiBlendInterpolator::FIELDS::singleInterpolator>() {return singleInterpolator;}
	void NiBlendInterpolator::accept(class FieldVisitor& visitor) {
		NiInterpolator::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(arraySize, FIELDS::arraySize);
		visitor.visit(arrayGrowBy, FIELDS::arrayGrowBy);
		visitor.visit(unknownByte, FIELDS::unknownByte);
		visitor.visit(weightThreshold, FIELDS::weightThreshold);
		visitor.visit(interpCount, FIELDS::interpCount);
		visitor.visit(singleIndex, FIELDS::singleIndex);
		visitor.visit(highPriority, FIELDS::highPriority);
		visitor.visit(nextHighPriority, FIELDS::nextHighPriority);
		visitor.visit(singleTime, FIELDS::singleTime);
		visitor.visit(highWeightsSum, FIELDS::highWeightsSum);
		visitor.visit(nextHighWeightsSum, FIELDS::nextHighWeightsSum);
		visitor.visit(highEaseSpinner, FIELDS::highEaseSpinner);
		visitor.visit(interpArrayItems, FIELDS::interpArrayItems);
		visitor.visit(managedControlled, FIELDS::managedControlled);
		visitor.visit(onlyUseHighestWeight, FIELDS::onlyUseHighestWeight);
		visitor.visit(singleInterpolator, FIELDS::singleInterpolator);
	}


	template<> const auto& NiBSplineInterpolator::get<NiBSplineInterpolator::FIELDS::startTime>() {return startTime;}
	template<> const auto& NiBSplineInterpolator::get<NiBSplineInterpolator::FIELDS::stopTime>() {return stopTime;}
	template<> const auto& NiBSplineInterpolator::get<NiBSplineInterpolator::FIELDS::splineData>() {return splineData;}
	template<> const auto& NiBSplineInterpolator::get<NiBSplineInterpolator::FIELDS::basisData>() {return basisData;}
	void NiBSplineInterpolator::accept(class FieldVisitor& visitor) {
		NiInterpolator::accept(visitor);
		visitor.visit(startTime, FIELDS::startTime);
		visitor.visit(stopTime, FIELDS::stopTime);
		visitor.visit(splineData, FIELDS::splineData);
		visitor.visit(basisData, FIELDS::basisData);
	}


	template<> const auto& NiObjectNET::get<NiObjectNET::FIELDS::skyrimShaderType>() {return skyrimShaderType;}
	template<> const auto& NiObjectNET::get<NiObjectNET::FIELDS::name>() {return name;}
	template<> const auto& NiObjectNET::get<NiObjectNET::FIELDS::hasOldExtraData>() {return hasOldExtraData;}
	template<> const auto& NiObjectNET::get<NiObjectNET::FIELDS::oldExtraPropName>() {return oldExtraPropName;}
	template<> const auto& NiObjectNET::get<NiObjectNET::FIELDS::oldExtraInternalId>() {return oldExtraInternalId;}
	template<> const auto& NiObjectNET::get<NiObjectNET::FIELDS::oldExtraString>() {return oldExtraString;}
	template<> const auto& NiObjectNET::get<NiObjectNET::FIELDS::unknownByte>() {return unknownByte;}
	template<> const auto& NiObjectNET::get<NiObjectNET::FIELDS::extraData>() {return extraData;}
	template<> const auto& NiObjectNET::get<NiObjectNET::FIELDS::numExtraDataList>() {return numExtraDataList;}
	template<> const auto& NiObjectNET::get<NiObjectNET::FIELDS::extraDataList>() {return extraDataList;}
	template<> const auto& NiObjectNET::get<NiObjectNET::FIELDS::controller>() {return controller;}
	void NiObjectNET::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(skyrimShaderType, FIELDS::skyrimShaderType);
		visitor.visit(name, FIELDS::name);
		visitor.visit(hasOldExtraData, FIELDS::hasOldExtraData);
		visitor.visit(oldExtraPropName, FIELDS::oldExtraPropName);
		visitor.visit(oldExtraInternalId, FIELDS::oldExtraInternalId);
		visitor.visit(oldExtraString, FIELDS::oldExtraString);
		visitor.visit(unknownByte, FIELDS::unknownByte);
		visitor.visit(extraData, FIELDS::extraData);
		visitor.visit(numExtraDataList, FIELDS::numExtraDataList);
		visitor.visit(extraDataList, FIELDS::extraDataList);
		visitor.visit(controller, FIELDS::controller);
	}


	template<> const auto& NiCollisionObject::get<NiCollisionObject::FIELDS::target>() {return target;}
	void NiCollisionObject::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(target, FIELDS::target);
	}


	template<> const auto& NiCollisionData::get<NiCollisionData::FIELDS::propagationMode>() {return propagationMode;}
	template<> const auto& NiCollisionData::get<NiCollisionData::FIELDS::collisionMode>() {return collisionMode;}
	template<> const auto& NiCollisionData::get<NiCollisionData::FIELDS::useAbv>() {return useAbv;}
	template<> const auto& NiCollisionData::get<NiCollisionData::FIELDS::boundingVolume>() {return boundingVolume;}
	void NiCollisionData::accept(class FieldVisitor& visitor) {
		NiCollisionObject::accept(visitor);
		visitor.visit(propagationMode, FIELDS::propagationMode);
		visitor.visit(collisionMode, FIELDS::collisionMode);
		visitor.visit(useAbv, FIELDS::useAbv);
		visitor.visit(boundingVolume, FIELDS::boundingVolume);
	}


	template<> const auto& bhkNiCollisionObject::get<bhkNiCollisionObject::FIELDS::flags>() {return flags;}
	template<> const auto& bhkNiCollisionObject::get<bhkNiCollisionObject::FIELDS::body>() {return body;}
	void bhkNiCollisionObject::accept(class FieldVisitor& visitor) {
		NiCollisionObject::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(body, FIELDS::body);
	}


	void bhkCollisionObject::accept(class FieldVisitor& visitor) {
		bhkNiCollisionObject::accept(visitor);
	}


	template<> const auto& bhkBlendCollisionObject::get<bhkBlendCollisionObject::FIELDS::heirGain>() {return heirGain;}
	template<> const auto& bhkBlendCollisionObject::get<bhkBlendCollisionObject::FIELDS::velGain>() {return velGain;}
	template<> const auto& bhkBlendCollisionObject::get<bhkBlendCollisionObject::FIELDS::unkFloat1>() {return unkFloat1;}
	template<> const auto& bhkBlendCollisionObject::get<bhkBlendCollisionObject::FIELDS::unkFloat2>() {return unkFloat2;}
	void bhkBlendCollisionObject::accept(class FieldVisitor& visitor) {
		bhkCollisionObject::accept(visitor);
		visitor.visit(heirGain, FIELDS::heirGain);
		visitor.visit(velGain, FIELDS::velGain);
		visitor.visit(unkFloat1, FIELDS::unkFloat1);
		visitor.visit(unkFloat2, FIELDS::unkFloat2);
	}


	void bhkPCollisionObject::accept(class FieldVisitor& visitor) {
		bhkNiCollisionObject::accept(visitor);
	}


	void bhkSPCollisionObject::accept(class FieldVisitor& visitor) {
		bhkPCollisionObject::accept(visitor);
	}


	template<> const auto& NiAVObject::get<NiAVObject::FIELDS::flags>() {return flags;}
	template<> const auto& NiAVObject::get<NiAVObject::FIELDS::translation>() {return translation;}
	template<> const auto& NiAVObject::get<NiAVObject::FIELDS::rotation>() {return rotation;}
	template<> const auto& NiAVObject::get<NiAVObject::FIELDS::scale>() {return scale;}
	template<> const auto& NiAVObject::get<NiAVObject::FIELDS::velocity>() {return velocity;}
	template<> const auto& NiAVObject::get<NiAVObject::FIELDS::numProperties>() {return numProperties;}
	template<> const auto& NiAVObject::get<NiAVObject::FIELDS::properties>() {return properties;}
	template<> const auto& NiAVObject::get<NiAVObject::FIELDS::unknown1>() {return unknown1;}
	template<> const auto& NiAVObject::get<NiAVObject::FIELDS::unknown2>() {return unknown2;}
	template<> const auto& NiAVObject::get<NiAVObject::FIELDS::hasBoundingVolume>() {return hasBoundingVolume;}
	template<> const auto& NiAVObject::get<NiAVObject::FIELDS::boundingVolume>() {return boundingVolume;}
	template<> const auto& NiAVObject::get<NiAVObject::FIELDS::collisionObject>() {return collisionObject;}
	void NiAVObject::accept(class FieldVisitor& visitor) {
		NiObjectNET::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(translation, FIELDS::translation);
		visitor.visit(rotation, FIELDS::rotation);
		visitor.visit(scale, FIELDS::scale);
		visitor.visit(velocity, FIELDS::velocity);
		visitor.visit(numProperties, FIELDS::numProperties);
		visitor.visit(properties, FIELDS::properties);
		visitor.visit(unknown1, FIELDS::unknown1);
		visitor.visit(unknown2, FIELDS::unknown2);
		visitor.visit(hasBoundingVolume, FIELDS::hasBoundingVolume);
		visitor.visit(boundingVolume, FIELDS::boundingVolume);
		visitor.visit(collisionObject, FIELDS::collisionObject);
	}


	template<> const auto& NiDynamicEffect::get<NiDynamicEffect::FIELDS::switchState>() {return switchState;}
	template<> const auto& NiDynamicEffect::get<NiDynamicEffect::FIELDS::numAffectedNodes>() {return numAffectedNodes;}
	template<> const auto& NiDynamicEffect::get<NiDynamicEffect::FIELDS::affectedNodes>() {return affectedNodes;}
	template<> const auto& NiDynamicEffect::get<NiDynamicEffect::FIELDS::affectedNodePointers>() {return affectedNodePointers;}
	void NiDynamicEffect::accept(class FieldVisitor& visitor) {
		NiAVObject::accept(visitor);
		visitor.visit(switchState, FIELDS::switchState);
		visitor.visit(numAffectedNodes, FIELDS::numAffectedNodes);
		visitor.visit(affectedNodes, FIELDS::affectedNodes);
		visitor.visit(affectedNodePointers, FIELDS::affectedNodePointers);
	}


	template<> const auto& NiLight::get<NiLight::FIELDS::dimmer>() {return dimmer;}
	template<> const auto& NiLight::get<NiLight::FIELDS::ambientColor>() {return ambientColor;}
	template<> const auto& NiLight::get<NiLight::FIELDS::diffuseColor>() {return diffuseColor;}
	template<> const auto& NiLight::get<NiLight::FIELDS::specularColor>() {return specularColor;}
	void NiLight::accept(class FieldVisitor& visitor) {
		NiDynamicEffect::accept(visitor);
		visitor.visit(dimmer, FIELDS::dimmer);
		visitor.visit(ambientColor, FIELDS::ambientColor);
		visitor.visit(diffuseColor, FIELDS::diffuseColor);
		visitor.visit(specularColor, FIELDS::specularColor);
	}


	void NiProperty::accept(class FieldVisitor& visitor) {
		NiObjectNET::accept(visitor);
	}


	template<> const auto& NiTransparentProperty::get<NiTransparentProperty::FIELDS::unknown>() {return unknown;}
	void NiTransparentProperty::accept(class FieldVisitor& visitor) {
		NiProperty::accept(visitor);
		visitor.visit(unknown, FIELDS::unknown);
	}


	template<> const auto& NiPSysModifier::get<NiPSysModifier::FIELDS::name>() {return name;}
	template<> const auto& NiPSysModifier::get<NiPSysModifier::FIELDS::order>() {return order;}
	template<> const auto& NiPSysModifier::get<NiPSysModifier::FIELDS::target>() {return target;}
	template<> const auto& NiPSysModifier::get<NiPSysModifier::FIELDS::active>() {return active;}
	void NiPSysModifier::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(name, FIELDS::name);
		visitor.visit(order, FIELDS::order);
		visitor.visit(target, FIELDS::target);
		visitor.visit(active, FIELDS::active);
	}


	template<> const auto& NiPSysEmitter::get<NiPSysEmitter::FIELDS::speed>() {return speed;}
	template<> const auto& NiPSysEmitter::get<NiPSysEmitter::FIELDS::speedVariation>() {return speedVariation;}
	template<> const auto& NiPSysEmitter::get<NiPSysEmitter::FIELDS::declination>() {return declination;}
	template<> const auto& NiPSysEmitter::get<NiPSysEmitter::FIELDS::declinationVariation>() {return declinationVariation;}
	template<> const auto& NiPSysEmitter::get<NiPSysEmitter::FIELDS::planarAngle>() {return planarAngle;}
	template<> const auto& NiPSysEmitter::get<NiPSysEmitter::FIELDS::planarAngleVariation>() {return planarAngleVariation;}
	template<> const auto& NiPSysEmitter::get<NiPSysEmitter::FIELDS::initialColor>() {return initialColor;}
	template<> const auto& NiPSysEmitter::get<NiPSysEmitter::FIELDS::initialRadius>() {return initialRadius;}
	template<> const auto& NiPSysEmitter::get<NiPSysEmitter::FIELDS::radiusVariation>() {return radiusVariation;}
	template<> const auto& NiPSysEmitter::get<NiPSysEmitter::FIELDS::lifeSpan>() {return lifeSpan;}
	template<> const auto& NiPSysEmitter::get<NiPSysEmitter::FIELDS::lifeSpanVariation>() {return lifeSpanVariation;}
	void NiPSysEmitter::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(speed, FIELDS::speed);
		visitor.visit(speedVariation, FIELDS::speedVariation);
		visitor.visit(declination, FIELDS::declination);
		visitor.visit(declinationVariation, FIELDS::declinationVariation);
		visitor.visit(planarAngle, FIELDS::planarAngle);
		visitor.visit(planarAngleVariation, FIELDS::planarAngleVariation);
		visitor.visit(initialColor, FIELDS::initialColor);
		visitor.visit(initialRadius, FIELDS::initialRadius);
		visitor.visit(radiusVariation, FIELDS::radiusVariation);
		visitor.visit(lifeSpan, FIELDS::lifeSpan);
		visitor.visit(lifeSpanVariation, FIELDS::lifeSpanVariation);
	}


	template<> const auto& NiPSysVolumeEmitter::get<NiPSysVolumeEmitter::FIELDS::emitterObject>() {return emitterObject;}
	void NiPSysVolumeEmitter::accept(class FieldVisitor& visitor) {
		NiPSysEmitter::accept(visitor);
		visitor.visit(emitterObject, FIELDS::emitterObject);
	}


	template<> const auto& NiTimeController::get<NiTimeController::FIELDS::nextController>() {return nextController;}
	template<> const auto& NiTimeController::get<NiTimeController::FIELDS::flags>() {return flags;}
	template<> const auto& NiTimeController::get<NiTimeController::FIELDS::frequency>() {return frequency;}
	template<> const auto& NiTimeController::get<NiTimeController::FIELDS::phase>() {return phase;}
	template<> const auto& NiTimeController::get<NiTimeController::FIELDS::startTime>() {return startTime;}
	template<> const auto& NiTimeController::get<NiTimeController::FIELDS::stopTime>() {return stopTime;}
	template<> const auto& NiTimeController::get<NiTimeController::FIELDS::target>() {return target;}
	template<> const auto& NiTimeController::get<NiTimeController::FIELDS::unknownInteger>() {return unknownInteger;}
	void NiTimeController::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(nextController, FIELDS::nextController);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(frequency, FIELDS::frequency);
		visitor.visit(phase, FIELDS::phase);
		visitor.visit(startTime, FIELDS::startTime);
		visitor.visit(stopTime, FIELDS::stopTime);
		visitor.visit(target, FIELDS::target);
		visitor.visit(unknownInteger, FIELDS::unknownInteger);
	}


	template<> const auto& NiInterpController::get<NiInterpController::FIELDS::managerControlled>() {return managerControlled;}
	void NiInterpController::accept(class FieldVisitor& visitor) {
		NiTimeController::accept(visitor);
		visitor.visit(managerControlled, FIELDS::managerControlled);
	}


	template<> const auto& NiMultiTargetTransformController::get<NiMultiTargetTransformController::FIELDS::numExtraTargets>() {return numExtraTargets;}
	template<> const auto& NiMultiTargetTransformController::get<NiMultiTargetTransformController::FIELDS::extraTargets>() {return extraTargets;}
	void NiMultiTargetTransformController::accept(class FieldVisitor& visitor) {
		NiInterpController::accept(visitor);
		visitor.visit(numExtraTargets, FIELDS::numExtraTargets);
		visitor.visit(extraTargets, FIELDS::extraTargets);
	}


	template<> const auto& NiGeomMorpherController::get<NiGeomMorpherController::FIELDS::extraFlags>() {return extraFlags;}
	template<> const auto& NiGeomMorpherController::get<NiGeomMorpherController::FIELDS::data>() {return data;}
	template<> const auto& NiGeomMorpherController::get<NiGeomMorpherController::FIELDS::alwaysUpdate>() {return alwaysUpdate;}
	template<> const auto& NiGeomMorpherController::get<NiGeomMorpherController::FIELDS::numInterpolators>() {return numInterpolators;}
	template<> const auto& NiGeomMorpherController::get<NiGeomMorpherController::FIELDS::interpolators>() {return interpolators;}
	template<> const auto& NiGeomMorpherController::get<NiGeomMorpherController::FIELDS::interpolatorWeights>() {return interpolatorWeights;}
	template<> const auto& NiGeomMorpherController::get<NiGeomMorpherController::FIELDS::numUnknownInts>() {return numUnknownInts;}
	template<> const auto& NiGeomMorpherController::get<NiGeomMorpherController::FIELDS::unknownInts>() {return unknownInts;}
	void NiGeomMorpherController::accept(class FieldVisitor& visitor) {
		NiInterpController::accept(visitor);
		visitor.visit(extraFlags, FIELDS::extraFlags);
		visitor.visit(data, FIELDS::data);
		visitor.visit(alwaysUpdate, FIELDS::alwaysUpdate);
		visitor.visit(numInterpolators, FIELDS::numInterpolators);
		visitor.visit(interpolators, FIELDS::interpolators);
		visitor.visit(interpolatorWeights, FIELDS::interpolatorWeights);
		visitor.visit(numUnknownInts, FIELDS::numUnknownInts);
		visitor.visit(unknownInts, FIELDS::unknownInts);
	}


	void NiMorphController::accept(class FieldVisitor& visitor) {
		NiInterpController::accept(visitor);
	}


	template<> const auto& NiMorpherController::get<NiMorpherController::FIELDS::data>() {return data;}
	void NiMorpherController::accept(class FieldVisitor& visitor) {
		NiInterpController::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiSingleInterpController::get<NiSingleInterpController::FIELDS::interpolator>() {return interpolator;}
	void NiSingleInterpController::accept(class FieldVisitor& visitor) {
		NiInterpController::accept(visitor);
		visitor.visit(interpolator, FIELDS::interpolator);
	}


	template<> const auto& NiKeyframeController::get<NiKeyframeController::FIELDS::data>() {return data;}
	void NiKeyframeController::accept(class FieldVisitor& visitor) {
		NiSingleInterpController::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	void NiTransformController::accept(class FieldVisitor& visitor) {
		NiKeyframeController::accept(visitor);
	}


	template<> const auto& NiPSysModifierCtlr::get<NiPSysModifierCtlr::FIELDS::modifierName>() {return modifierName;}
	void NiPSysModifierCtlr::accept(class FieldVisitor& visitor) {
		NiSingleInterpController::accept(visitor);
		visitor.visit(modifierName, FIELDS::modifierName);
	}


	template<> const auto& NiPSysEmitterCtlr::get<NiPSysEmitterCtlr::FIELDS::visibilityInterpolator>() {return visibilityInterpolator;}
	template<> const auto& NiPSysEmitterCtlr::get<NiPSysEmitterCtlr::FIELDS::data>() {return data;}
	void NiPSysEmitterCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierCtlr::accept(visitor);
		visitor.visit(visibilityInterpolator, FIELDS::visibilityInterpolator);
		visitor.visit(data, FIELDS::data);
	}


	void NiPSysModifierBoolCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierCtlr::accept(visitor);
	}


	template<> const auto& NiPSysModifierActiveCtlr::get<NiPSysModifierActiveCtlr::FIELDS::data>() {return data;}
	void NiPSysModifierActiveCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierBoolCtlr::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiPSysModifierFloatCtlr::get<NiPSysModifierFloatCtlr::FIELDS::data>() {return data;}
	void NiPSysModifierFloatCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierCtlr::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	void NiPSysEmitterDeclinationCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	void NiPSysEmitterDeclinationVarCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	void NiPSysEmitterInitialRadiusCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	void NiPSysEmitterLifeSpanCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	void NiPSysEmitterSpeedCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	void NiPSysGravityStrengthCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	void NiFloatInterpController::accept(class FieldVisitor& visitor) {
		NiSingleInterpController::accept(visitor);
	}


	template<> const auto& NiFlipController::get<NiFlipController::FIELDS::textureSlot>() {return textureSlot;}
	template<> const auto& NiFlipController::get<NiFlipController::FIELDS::startTime>() {return startTime;}
	template<> const auto& NiFlipController::get<NiFlipController::FIELDS::delta>() {return delta;}
	template<> const auto& NiFlipController::get<NiFlipController::FIELDS::numSources>() {return numSources;}
	template<> const auto& NiFlipController::get<NiFlipController::FIELDS::sources>() {return sources;}
	template<> const auto& NiFlipController::get<NiFlipController::FIELDS::images>() {return images;}
	void NiFlipController::accept(class FieldVisitor& visitor) {
		NiFloatInterpController::accept(visitor);
		visitor.visit(textureSlot, FIELDS::textureSlot);
		visitor.visit(startTime, FIELDS::startTime);
		visitor.visit(delta, FIELDS::delta);
		visitor.visit(numSources, FIELDS::numSources);
		visitor.visit(sources, FIELDS::sources);
		visitor.visit(images, FIELDS::images);
	}


	template<> const auto& NiAlphaController::get<NiAlphaController::FIELDS::data>() {return data;}
	void NiAlphaController::accept(class FieldVisitor& visitor) {
		NiFloatInterpController::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiTextureTransformController::get<NiTextureTransformController::FIELDS::shaderMap>() {return shaderMap;}
	template<> const auto& NiTextureTransformController::get<NiTextureTransformController::FIELDS::textureSlot>() {return textureSlot;}
	template<> const auto& NiTextureTransformController::get<NiTextureTransformController::FIELDS::operation>() {return operation;}
	template<> const auto& NiTextureTransformController::get<NiTextureTransformController::FIELDS::data>() {return data;}
	void NiTextureTransformController::accept(class FieldVisitor& visitor) {
		NiFloatInterpController::accept(visitor);
		visitor.visit(shaderMap, FIELDS::shaderMap);
		visitor.visit(textureSlot, FIELDS::textureSlot);
		visitor.visit(operation, FIELDS::operation);
		visitor.visit(data, FIELDS::data);
	}


	void NiLightDimmerController::accept(class FieldVisitor& visitor) {
		NiFloatInterpController::accept(visitor);
	}


	void NiBoolInterpController::accept(class FieldVisitor& visitor) {
		NiSingleInterpController::accept(visitor);
	}


	template<> const auto& NiVisController::get<NiVisController::FIELDS::data>() {return data;}
	void NiVisController::accept(class FieldVisitor& visitor) {
		NiBoolInterpController::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	void NiPoint3InterpController::accept(class FieldVisitor& visitor) {
		NiSingleInterpController::accept(visitor);
	}


	template<> const auto& NiMaterialColorController::get<NiMaterialColorController::FIELDS::targetColor>() {return targetColor;}
	template<> const auto& NiMaterialColorController::get<NiMaterialColorController::FIELDS::data>() {return data;}
	void NiMaterialColorController::accept(class FieldVisitor& visitor) {
		NiPoint3InterpController::accept(visitor);
		visitor.visit(targetColor, FIELDS::targetColor);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiLightColorController::get<NiLightColorController::FIELDS::targetColor>() {return targetColor;}
	template<> const auto& NiLightColorController::get<NiLightColorController::FIELDS::data>() {return data;}
	void NiLightColorController::accept(class FieldVisitor& visitor) {
		NiPoint3InterpController::accept(visitor);
		visitor.visit(targetColor, FIELDS::targetColor);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiExtraDataController::get<NiExtraDataController::FIELDS::extraDataName>() {return extraDataName;}
	void NiExtraDataController::accept(class FieldVisitor& visitor) {
		NiSingleInterpController::accept(visitor);
		visitor.visit(extraDataName, FIELDS::extraDataName);
	}


	template<> const auto& NiFloatExtraDataController::get<NiFloatExtraDataController::FIELDS::numExtraBytes>() {return numExtraBytes;}
	template<> const auto& NiFloatExtraDataController::get<NiFloatExtraDataController::FIELDS::unknownBytes>() {return unknownBytes;}
	template<> const auto& NiFloatExtraDataController::get<NiFloatExtraDataController::FIELDS::unknownExtraBytes>() {return unknownExtraBytes;}
	template<> const auto& NiFloatExtraDataController::get<NiFloatExtraDataController::FIELDS::data>() {return data;}
	void NiFloatExtraDataController::accept(class FieldVisitor& visitor) {
		NiExtraDataController::accept(visitor);
		visitor.visit(numExtraBytes, FIELDS::numExtraBytes);
		visitor.visit(unknownBytes, FIELDS::unknownBytes);
		visitor.visit(unknownExtraBytes, FIELDS::unknownExtraBytes);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiFloatsExtraDataController::get<NiFloatsExtraDataController::FIELDS::floatsExtraDataIndex>() {return floatsExtraDataIndex;}
	template<> const auto& NiFloatsExtraDataController::get<NiFloatsExtraDataController::FIELDS::data>() {return data;}
	void NiFloatsExtraDataController::accept(class FieldVisitor& visitor) {
		NiExtraDataController::accept(visitor);
		visitor.visit(floatsExtraDataIndex, FIELDS::floatsExtraDataIndex);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiFloatsExtraDataPoint3Controller::get<NiFloatsExtraDataPoint3Controller::FIELDS::floatsExtraDataIndex>() {return floatsExtraDataIndex;}
	void NiFloatsExtraDataPoint3Controller::accept(class FieldVisitor& visitor) {
		NiExtraDataController::accept(visitor);
		visitor.visit(floatsExtraDataIndex, FIELDS::floatsExtraDataIndex);
	}


	template<> const auto& NiBoneLODController::get<NiBoneLODController::FIELDS::lod>() {return lod;}
	template<> const auto& NiBoneLODController::get<NiBoneLODController::FIELDS::numLods>() {return numLods;}
	template<> const auto& NiBoneLODController::get<NiBoneLODController::FIELDS::numNodeGroups>() {return numNodeGroups;}
	template<> const auto& NiBoneLODController::get<NiBoneLODController::FIELDS::nodeGroups>() {return nodeGroups;}
	template<> const auto& NiBoneLODController::get<NiBoneLODController::FIELDS::numShapeGroups>() {return numShapeGroups;}
	template<> const auto& NiBoneLODController::get<NiBoneLODController::FIELDS::shapeGroups1>() {return shapeGroups1;}
	template<> const auto& NiBoneLODController::get<NiBoneLODController::FIELDS::numShapeGroups2>() {return numShapeGroups2;}
	template<> const auto& NiBoneLODController::get<NiBoneLODController::FIELDS::shapeGroups2>() {return shapeGroups2;}
	template<> const auto& NiBoneLODController::get<NiBoneLODController::FIELDS::unknownInt2>() {return unknownInt2;}
	template<> const auto& NiBoneLODController::get<NiBoneLODController::FIELDS::unknownInt3>() {return unknownInt3;}
	void NiBoneLODController::accept(class FieldVisitor& visitor) {
		NiTimeController::accept(visitor);
		visitor.visit(lod, FIELDS::lod);
		visitor.visit(numLods, FIELDS::numLods);
		visitor.visit(numNodeGroups, FIELDS::numNodeGroups);
		visitor.visit(nodeGroups, FIELDS::nodeGroups);
		visitor.visit(numShapeGroups, FIELDS::numShapeGroups);
		visitor.visit(shapeGroups1, FIELDS::shapeGroups1);
		visitor.visit(numShapeGroups2, FIELDS::numShapeGroups2);
		visitor.visit(shapeGroups2, FIELDS::shapeGroups2);
		visitor.visit(unknownInt2, FIELDS::unknownInt2);
		visitor.visit(unknownInt3, FIELDS::unknownInt3);
	}


	void NiBSBoneLODController::accept(class FieldVisitor& visitor) {
		NiBoneLODController::accept(visitor);
	}


	template<> const auto& NiGeometry::get<NiGeometry::FIELDS::bound>() {return bound;}
	template<> const auto& NiGeometry::get<NiGeometry::FIELDS::skin>() {return skin;}
	template<> const auto& NiGeometry::get<NiGeometry::FIELDS::data>() {return data;}
	template<> const auto& NiGeometry::get<NiGeometry::FIELDS::skinInstance>() {return skinInstance;}
	template<> const auto& NiGeometry::get<NiGeometry::FIELDS::materialData>() {return materialData;}
	template<> const auto& NiGeometry::get<NiGeometry::FIELDS::shaderProperty>() {return shaderProperty;}
	template<> const auto& NiGeometry::get<NiGeometry::FIELDS::alphaProperty>() {return alphaProperty;}
	void NiGeometry::accept(class FieldVisitor& visitor) {
		NiAVObject::accept(visitor);
		visitor.visit(bound, FIELDS::bound);
		visitor.visit(skin, FIELDS::skin);
		visitor.visit(data, FIELDS::data);
		visitor.visit(skinInstance, FIELDS::skinInstance);
		visitor.visit(materialData, FIELDS::materialData);
		visitor.visit(shaderProperty, FIELDS::shaderProperty);
		visitor.visit(alphaProperty, FIELDS::alphaProperty);
	}


	void NiTriBasedGeom::accept(class FieldVisitor& visitor) {
		NiGeometry::accept(visitor);
	}


	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::groupId>() {return groupId;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::numVertices>() {return numVertices;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::bsMaxVertices>() {return bsMaxVertices;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::keepFlags>() {return keepFlags;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::compressFlags>() {return compressFlags;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::hasVertices>() {return hasVertices;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::vertices>() {return vertices;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::vectorFlags>() {return vectorFlags;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::bsVectorFlags>() {return bsVectorFlags;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::materialCrc>() {return materialCrc;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::hasNormals>() {return hasNormals;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::normals>() {return normals;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::tangents>() {return tangents;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::bitangents>() {return bitangents;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::center>() {return center;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::radius>() {return radius;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::unknown13Shorts>() {return unknown13Shorts;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::hasVertexColors>() {return hasVertexColors;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::vertexColors>() {return vertexColors;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::numUvSets>() {return numUvSets;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::hasUv>() {return hasUv;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::uvSets>() {return uvSets;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::consistencyFlags>() {return consistencyFlags;}
	template<> const auto& NiGeometryData::get<NiGeometryData::FIELDS::additionalData>() {return additionalData;}
	void NiGeometryData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(groupId, FIELDS::groupId);
		visitor.visit(numVertices, FIELDS::numVertices);
		visitor.visit(bsMaxVertices, FIELDS::bsMaxVertices);
		visitor.visit(keepFlags, FIELDS::keepFlags);
		visitor.visit(compressFlags, FIELDS::compressFlags);
		visitor.visit(hasVertices, FIELDS::hasVertices);
		visitor.visit(vertices, FIELDS::vertices);
		visitor.visit(vectorFlags, FIELDS::vectorFlags);
		visitor.visit(bsVectorFlags, FIELDS::bsVectorFlags);
		visitor.visit(materialCrc, FIELDS::materialCrc);
		visitor.visit(hasNormals, FIELDS::hasNormals);
		visitor.visit(normals, FIELDS::normals);
		visitor.visit(tangents, FIELDS::tangents);
		visitor.visit(bitangents, FIELDS::bitangents);
		visitor.visit(center, FIELDS::center);
		visitor.visit(radius, FIELDS::radius);
		visitor.visit(unknown13Shorts, FIELDS::unknown13Shorts);
		visitor.visit(hasVertexColors, FIELDS::hasVertexColors);
		visitor.visit(vertexColors, FIELDS::vertexColors);
		visitor.visit(numUvSets, FIELDS::numUvSets);
		visitor.visit(hasUv, FIELDS::hasUv);
		visitor.visit(uvSets, FIELDS::uvSets);
		visitor.visit(consistencyFlags, FIELDS::consistencyFlags);
		visitor.visit(additionalData, FIELDS::additionalData);
	}


	void AbstractAdditionalGeometryData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
	}


	template<> const auto& NiTriBasedGeomData::get<NiTriBasedGeomData::FIELDS::numTriangles>() {return numTriangles;}
	void NiTriBasedGeomData::accept(class FieldVisitor& visitor) {
		NiGeometryData::accept(visitor);
		visitor.visit(numTriangles, FIELDS::numTriangles);
	}


	template<> const auto& bhkBlendController::get<bhkBlendController::FIELDS::keys>() {return keys;}
	void bhkBlendController::accept(class FieldVisitor& visitor) {
		NiTimeController::accept(visitor);
		visitor.visit(keys, FIELDS::keys);
	}


	template<> const auto& BSBound::get<BSBound::FIELDS::center>() {return center;}
	template<> const auto& BSBound::get<BSBound::FIELDS::dimensions>() {return dimensions;}
	void BSBound::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(center, FIELDS::center);
		visitor.visit(dimensions, FIELDS::dimensions);
	}


	template<> const auto& BSFurnitureMarker::get<BSFurnitureMarker::FIELDS::numPositions>() {return numPositions;}
	template<> const auto& BSFurnitureMarker::get<BSFurnitureMarker::FIELDS::positions>() {return positions;}
	void BSFurnitureMarker::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(numPositions, FIELDS::numPositions);
		visitor.visit(positions, FIELDS::positions);
	}


	template<> const auto& BSParentVelocityModifier::get<BSParentVelocityModifier::FIELDS::damping>() {return damping;}
	void BSParentVelocityModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(damping, FIELDS::damping);
	}


	void BSPSysArrayEmitter::accept(class FieldVisitor& visitor) {
		NiPSysVolumeEmitter::accept(visitor);
	}


	template<> const auto& BSWindModifier::get<BSWindModifier::FIELDS::strength>() {return strength;}
	void BSWindModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(strength, FIELDS::strength);
	}


	template<> const auto& hkPackedNiTriStripsData::get<hkPackedNiTriStripsData::FIELDS::numTriangles>() {return numTriangles;}
	template<> const auto& hkPackedNiTriStripsData::get<hkPackedNiTriStripsData::FIELDS::triangles>() {return triangles;}
	template<> const auto& hkPackedNiTriStripsData::get<hkPackedNiTriStripsData::FIELDS::numVertices>() {return numVertices;}
	template<> const auto& hkPackedNiTriStripsData::get<hkPackedNiTriStripsData::FIELDS::unknownByte1>() {return unknownByte1;}
	template<> const auto& hkPackedNiTriStripsData::get<hkPackedNiTriStripsData::FIELDS::vertices>() {return vertices;}
	template<> const auto& hkPackedNiTriStripsData::get<hkPackedNiTriStripsData::FIELDS::numSubShapes>() {return numSubShapes;}
	template<> const auto& hkPackedNiTriStripsData::get<hkPackedNiTriStripsData::FIELDS::subShapes>() {return subShapes;}
	void hkPackedNiTriStripsData::accept(class FieldVisitor& visitor) {
		bhkShapeCollection::accept(visitor);
		visitor.visit(numTriangles, FIELDS::numTriangles);
		visitor.visit(triangles, FIELDS::triangles);
		visitor.visit(numVertices, FIELDS::numVertices);
		visitor.visit(unknownByte1, FIELDS::unknownByte1);
		visitor.visit(vertices, FIELDS::vertices);
		visitor.visit(numSubShapes, FIELDS::numSubShapes);
		visitor.visit(subShapes, FIELDS::subShapes);
	}


	template<> const auto& NiAlphaProperty::get<NiAlphaProperty::FIELDS::flags>() {return flags;}
	template<> const auto& NiAlphaProperty::get<NiAlphaProperty::FIELDS::threshold>() {return threshold;}
	template<> const auto& NiAlphaProperty::get<NiAlphaProperty::FIELDS::unknownShort1>() {return unknownShort1;}
	template<> const auto& NiAlphaProperty::get<NiAlphaProperty::FIELDS::unknownInt2>() {return unknownInt2;}
	void NiAlphaProperty::accept(class FieldVisitor& visitor) {
		NiProperty::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(threshold, FIELDS::threshold);
		visitor.visit(unknownShort1, FIELDS::unknownShort1);
		visitor.visit(unknownInt2, FIELDS::unknownInt2);
	}


	void NiAmbientLight::accept(class FieldVisitor& visitor) {
		NiLight::accept(visitor);
	}


	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::numParticles>() {return numParticles;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::particleRadius>() {return particleRadius;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::hasRadii>() {return hasRadii;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::radii>() {return radii;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::numActive>() {return numActive;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::hasSizes>() {return hasSizes;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::sizes>() {return sizes;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::hasRotations>() {return hasRotations;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::rotations>() {return rotations;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::hasRotationAngles>() {return hasRotationAngles;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::rotationAngles>() {return rotationAngles;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::hasRotationAxes>() {return hasRotationAxes;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::rotationAxes>() {return rotationAxes;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::hasTextureIndices>() {return hasTextureIndices;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::numSubtextureOffsets>() {return numSubtextureOffsets;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::subtextureOffsets>() {return subtextureOffsets;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::aspectRatio>() {return aspectRatio;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::aspectFlags>() {return aspectFlags;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::speedToAspectAspect2>() {return speedToAspectAspect2;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::speedToAspectSpeed1>() {return speedToAspectSpeed1;}
	template<> const auto& NiParticlesData::get<NiParticlesData::FIELDS::speedToAspectSpeed2>() {return speedToAspectSpeed2;}
	void NiParticlesData::accept(class FieldVisitor& visitor) {
		NiGeometryData::accept(visitor);
		visitor.visit(numParticles, FIELDS::numParticles);
		visitor.visit(particleRadius, FIELDS::particleRadius);
		visitor.visit(hasRadii, FIELDS::hasRadii);
		visitor.visit(radii, FIELDS::radii);
		visitor.visit(numActive, FIELDS::numActive);
		visitor.visit(hasSizes, FIELDS::hasSizes);
		visitor.visit(sizes, FIELDS::sizes);
		visitor.visit(hasRotations, FIELDS::hasRotations);
		visitor.visit(rotations, FIELDS::rotations);
		visitor.visit(hasRotationAngles, FIELDS::hasRotationAngles);
		visitor.visit(rotationAngles, FIELDS::rotationAngles);
		visitor.visit(hasRotationAxes, FIELDS::hasRotationAxes);
		visitor.visit(rotationAxes, FIELDS::rotationAxes);
		visitor.visit(hasTextureIndices, FIELDS::hasTextureIndices);
		visitor.visit(numSubtextureOffsets, FIELDS::numSubtextureOffsets);
		visitor.visit(subtextureOffsets, FIELDS::subtextureOffsets);
		visitor.visit(aspectRatio, FIELDS::aspectRatio);
		visitor.visit(aspectFlags, FIELDS::aspectFlags);
		visitor.visit(speedToAspectAspect2, FIELDS::speedToAspectAspect2);
		visitor.visit(speedToAspectSpeed1, FIELDS::speedToAspectSpeed1);
		visitor.visit(speedToAspectSpeed2, FIELDS::speedToAspectSpeed2);
	}


	template<> const auto& NiRotatingParticlesData::get<NiRotatingParticlesData::FIELDS::hasRotations2>() {return hasRotations2;}
	template<> const auto& NiRotatingParticlesData::get<NiRotatingParticlesData::FIELDS::rotations2>() {return rotations2;}
	void NiRotatingParticlesData::accept(class FieldVisitor& visitor) {
		NiParticlesData::accept(visitor);
		visitor.visit(hasRotations2, FIELDS::hasRotations2);
		visitor.visit(rotations2, FIELDS::rotations2);
	}


	void NiAutoNormalParticlesData::accept(class FieldVisitor& visitor) {
		NiParticlesData::accept(visitor);
	}


	template<> const auto& NiPSysData::get<NiPSysData::FIELDS::particleDescriptions>() {return particleDescriptions;}
	template<> const auto& NiPSysData::get<NiPSysData::FIELDS::hasRotationSpeeds>() {return hasRotationSpeeds;}
	template<> const auto& NiPSysData::get<NiPSysData::FIELDS::rotationSpeeds>() {return rotationSpeeds;}
	template<> const auto& NiPSysData::get<NiPSysData::FIELDS::numAddedParticles>() {return numAddedParticles;}
	template<> const auto& NiPSysData::get<NiPSysData::FIELDS::addedParticlesBase>() {return addedParticlesBase;}
	void NiPSysData::accept(class FieldVisitor& visitor) {
		NiParticlesData::accept(visitor);
		visitor.visit(particleDescriptions, FIELDS::particleDescriptions);
		visitor.visit(hasRotationSpeeds, FIELDS::hasRotationSpeeds);
		visitor.visit(rotationSpeeds, FIELDS::rotationSpeeds);
		visitor.visit(numAddedParticles, FIELDS::numAddedParticles);
		visitor.visit(addedParticlesBase, FIELDS::addedParticlesBase);
	}


	template<> const auto& NiMeshPSysData::get<NiMeshPSysData::FIELDS::defaultPoolSize>() {return defaultPoolSize;}
	template<> const auto& NiMeshPSysData::get<NiMeshPSysData::FIELDS::fillPoolsOnLoad>() {return fillPoolsOnLoad;}
	template<> const auto& NiMeshPSysData::get<NiMeshPSysData::FIELDS::numGenerations>() {return numGenerations;}
	template<> const auto& NiMeshPSysData::get<NiMeshPSysData::FIELDS::generations>() {return generations;}
	template<> const auto& NiMeshPSysData::get<NiMeshPSysData::FIELDS::particleMeshes>() {return particleMeshes;}
	void NiMeshPSysData::accept(class FieldVisitor& visitor) {
		NiPSysData::accept(visitor);
		visitor.visit(defaultPoolSize, FIELDS::defaultPoolSize);
		visitor.visit(fillPoolsOnLoad, FIELDS::fillPoolsOnLoad);
		visitor.visit(numGenerations, FIELDS::numGenerations);
		visitor.visit(generations, FIELDS::generations);
		visitor.visit(particleMeshes, FIELDS::particleMeshes);
	}


	template<> const auto& NiBinaryExtraData::get<NiBinaryExtraData::FIELDS::binaryData>() {return binaryData;}
	void NiBinaryExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(binaryData, FIELDS::binaryData);
	}


	template<> const auto& NiBinaryVoxelExtraData::get<NiBinaryVoxelExtraData::FIELDS::unknownInt>() {return unknownInt;}
	template<> const auto& NiBinaryVoxelExtraData::get<NiBinaryVoxelExtraData::FIELDS::data>() {return data;}
	void NiBinaryVoxelExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(unknownInt, FIELDS::unknownInt);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiBinaryVoxelData::get<NiBinaryVoxelData::FIELDS::unknownShort1>() {return unknownShort1;}
	template<> const auto& NiBinaryVoxelData::get<NiBinaryVoxelData::FIELDS::unknownShort2>() {return unknownShort2;}
	template<> const auto& NiBinaryVoxelData::get<NiBinaryVoxelData::FIELDS::unknownShort3>() {return unknownShort3;}
	template<> const auto& NiBinaryVoxelData::get<NiBinaryVoxelData::FIELDS::unknown7Floats>() {return unknown7Floats;}
	template<> const auto& NiBinaryVoxelData::get<NiBinaryVoxelData::FIELDS::unknownBytes1>() {return unknownBytes1;}
	template<> const auto& NiBinaryVoxelData::get<NiBinaryVoxelData::FIELDS::numUnknownVectors>() {return numUnknownVectors;}
	template<> const auto& NiBinaryVoxelData::get<NiBinaryVoxelData::FIELDS::unknownVectors>() {return unknownVectors;}
	template<> const auto& NiBinaryVoxelData::get<NiBinaryVoxelData::FIELDS::numUnknownBytes2>() {return numUnknownBytes2;}
	template<> const auto& NiBinaryVoxelData::get<NiBinaryVoxelData::FIELDS::unknownBytes2>() {return unknownBytes2;}
	template<> const auto& NiBinaryVoxelData::get<NiBinaryVoxelData::FIELDS::unknown5Ints>() {return unknown5Ints;}
	void NiBinaryVoxelData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(unknownShort1, FIELDS::unknownShort1);
		visitor.visit(unknownShort2, FIELDS::unknownShort2);
		visitor.visit(unknownShort3, FIELDS::unknownShort3);
		visitor.visit(unknown7Floats, FIELDS::unknown7Floats);
		visitor.visit(unknownBytes1, FIELDS::unknownBytes1);
		visitor.visit(numUnknownVectors, FIELDS::numUnknownVectors);
		visitor.visit(unknownVectors, FIELDS::unknownVectors);
		visitor.visit(numUnknownBytes2, FIELDS::numUnknownBytes2);
		visitor.visit(unknownBytes2, FIELDS::unknownBytes2);
		visitor.visit(unknown5Ints, FIELDS::unknown5Ints);
	}


	template<> const auto& NiBlendBoolInterpolator::get<NiBlendBoolInterpolator::FIELDS::value>() {return value;}
	void NiBlendBoolInterpolator::accept(class FieldVisitor& visitor) {
		NiBlendInterpolator::accept(visitor);
		visitor.visit(value, FIELDS::value);
	}


	template<> const auto& NiBlendFloatInterpolator::get<NiBlendFloatInterpolator::FIELDS::value>() {return value;}
	void NiBlendFloatInterpolator::accept(class FieldVisitor& visitor) {
		NiBlendInterpolator::accept(visitor);
		visitor.visit(value, FIELDS::value);
	}


	template<> const auto& NiBlendPoint3Interpolator::get<NiBlendPoint3Interpolator::FIELDS::value>() {return value;}
	void NiBlendPoint3Interpolator::accept(class FieldVisitor& visitor) {
		NiBlendInterpolator::accept(visitor);
		visitor.visit(value, FIELDS::value);
	}


	template<> const auto& NiBlendTransformInterpolator::get<NiBlendTransformInterpolator::FIELDS::value>() {return value;}
	void NiBlendTransformInterpolator::accept(class FieldVisitor& visitor) {
		NiBlendInterpolator::accept(visitor);
		visitor.visit(value, FIELDS::value);
	}


	template<> const auto& NiBoolData::get<NiBoolData::FIELDS::data>() {return data;}
	void NiBoolData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiBooleanExtraData::get<NiBooleanExtraData::FIELDS::booleanData>() {return booleanData;}
	void NiBooleanExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(booleanData, FIELDS::booleanData);
	}


	template<> const auto& NiBSplineBasisData::get<NiBSplineBasisData::FIELDS::numControlPoints>() {return numControlPoints;}
	void NiBSplineBasisData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(numControlPoints, FIELDS::numControlPoints);
	}


	template<> const auto& NiBSplineFloatInterpolator::get<NiBSplineFloatInterpolator::FIELDS::value>() {return value;}
	template<> const auto& NiBSplineFloatInterpolator::get<NiBSplineFloatInterpolator::FIELDS::handle>() {return handle;}
	void NiBSplineFloatInterpolator::accept(class FieldVisitor& visitor) {
		NiBSplineInterpolator::accept(visitor);
		visitor.visit(value, FIELDS::value);
		visitor.visit(handle, FIELDS::handle);
	}


	template<> const auto& NiBSplineCompFloatInterpolator::get<NiBSplineCompFloatInterpolator::FIELDS::floatOffset>() {return floatOffset;}
	template<> const auto& NiBSplineCompFloatInterpolator::get<NiBSplineCompFloatInterpolator::FIELDS::floatHalfRange>() {return floatHalfRange;}
	void NiBSplineCompFloatInterpolator::accept(class FieldVisitor& visitor) {
		NiBSplineFloatInterpolator::accept(visitor);
		visitor.visit(floatOffset, FIELDS::floatOffset);
		visitor.visit(floatHalfRange, FIELDS::floatHalfRange);
	}


	template<> const auto& NiBSplinePoint3Interpolator::get<NiBSplinePoint3Interpolator::FIELDS::value>() {return value;}
	template<> const auto& NiBSplinePoint3Interpolator::get<NiBSplinePoint3Interpolator::FIELDS::handle>() {return handle;}
	void NiBSplinePoint3Interpolator::accept(class FieldVisitor& visitor) {
		NiBSplineInterpolator::accept(visitor);
		visitor.visit(value, FIELDS::value);
		visitor.visit(handle, FIELDS::handle);
	}


	template<> const auto& NiBSplineCompPoint3Interpolator::get<NiBSplineCompPoint3Interpolator::FIELDS::positionOffset>() {return positionOffset;}
	template<> const auto& NiBSplineCompPoint3Interpolator::get<NiBSplineCompPoint3Interpolator::FIELDS::positionHalfRange>() {return positionHalfRange;}
	void NiBSplineCompPoint3Interpolator::accept(class FieldVisitor& visitor) {
		NiBSplinePoint3Interpolator::accept(visitor);
		visitor.visit(positionOffset, FIELDS::positionOffset);
		visitor.visit(positionHalfRange, FIELDS::positionHalfRange);
	}


	template<> const auto& NiBSplineTransformInterpolator::get<NiBSplineTransformInterpolator::FIELDS::transform>() {return transform;}
	template<> const auto& NiBSplineTransformInterpolator::get<NiBSplineTransformInterpolator::FIELDS::translationHandle>() {return translationHandle;}
	template<> const auto& NiBSplineTransformInterpolator::get<NiBSplineTransformInterpolator::FIELDS::rotationHandle>() {return rotationHandle;}
	template<> const auto& NiBSplineTransformInterpolator::get<NiBSplineTransformInterpolator::FIELDS::scaleHandle>() {return scaleHandle;}
	void NiBSplineTransformInterpolator::accept(class FieldVisitor& visitor) {
		NiBSplineInterpolator::accept(visitor);
		visitor.visit(transform, FIELDS::transform);
		visitor.visit(translationHandle, FIELDS::translationHandle);
		visitor.visit(rotationHandle, FIELDS::rotationHandle);
		visitor.visit(scaleHandle, FIELDS::scaleHandle);
	}


	template<> const auto& NiBSplineCompTransformInterpolator::get<NiBSplineCompTransformInterpolator::FIELDS::translationOffset>() {return translationOffset;}
	template<> const auto& NiBSplineCompTransformInterpolator::get<NiBSplineCompTransformInterpolator::FIELDS::translationHalfRange>() {return translationHalfRange;}
	template<> const auto& NiBSplineCompTransformInterpolator::get<NiBSplineCompTransformInterpolator::FIELDS::rotationOffset>() {return rotationOffset;}
	template<> const auto& NiBSplineCompTransformInterpolator::get<NiBSplineCompTransformInterpolator::FIELDS::rotationHalfRange>() {return rotationHalfRange;}
	template<> const auto& NiBSplineCompTransformInterpolator::get<NiBSplineCompTransformInterpolator::FIELDS::scaleOffset>() {return scaleOffset;}
	template<> const auto& NiBSplineCompTransformInterpolator::get<NiBSplineCompTransformInterpolator::FIELDS::scaleHalfRange>() {return scaleHalfRange;}
	void NiBSplineCompTransformInterpolator::accept(class FieldVisitor& visitor) {
		NiBSplineTransformInterpolator::accept(visitor);
		visitor.visit(translationOffset, FIELDS::translationOffset);
		visitor.visit(translationHalfRange, FIELDS::translationHalfRange);
		visitor.visit(rotationOffset, FIELDS::rotationOffset);
		visitor.visit(rotationHalfRange, FIELDS::rotationHalfRange);
		visitor.visit(scaleOffset, FIELDS::scaleOffset);
		visitor.visit(scaleHalfRange, FIELDS::scaleHalfRange);
	}


	void BSRotAccumTransfInterpolator::accept(class FieldVisitor& visitor) {
		NiTransformInterpolator::accept(visitor);
	}


	template<> const auto& NiBSplineData::get<NiBSplineData::FIELDS::numFloatControlPoints>() {return numFloatControlPoints;}
	template<> const auto& NiBSplineData::get<NiBSplineData::FIELDS::floatControlPoints>() {return floatControlPoints;}
	template<> const auto& NiBSplineData::get<NiBSplineData::FIELDS::numCompactControlPoints>() {return numCompactControlPoints;}
	template<> const auto& NiBSplineData::get<NiBSplineData::FIELDS::compactControlPoints>() {return compactControlPoints;}
	void NiBSplineData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(numFloatControlPoints, FIELDS::numFloatControlPoints);
		visitor.visit(floatControlPoints, FIELDS::floatControlPoints);
		visitor.visit(numCompactControlPoints, FIELDS::numCompactControlPoints);
		visitor.visit(compactControlPoints, FIELDS::compactControlPoints);
	}


	template<> const auto& NiCamera::get<NiCamera::FIELDS::cameraFlags>() {return cameraFlags;}
	template<> const auto& NiCamera::get<NiCamera::FIELDS::frustumLeft>() {return frustumLeft;}
	template<> const auto& NiCamera::get<NiCamera::FIELDS::frustumRight>() {return frustumRight;}
	template<> const auto& NiCamera::get<NiCamera::FIELDS::frustumTop>() {return frustumTop;}
	template<> const auto& NiCamera::get<NiCamera::FIELDS::frustumBottom>() {return frustumBottom;}
	template<> const auto& NiCamera::get<NiCamera::FIELDS::frustumNear>() {return frustumNear;}
	template<> const auto& NiCamera::get<NiCamera::FIELDS::frustumFar>() {return frustumFar;}
	template<> const auto& NiCamera::get<NiCamera::FIELDS::useOrthographicProjection>() {return useOrthographicProjection;}
	template<> const auto& NiCamera::get<NiCamera::FIELDS::viewportLeft>() {return viewportLeft;}
	template<> const auto& NiCamera::get<NiCamera::FIELDS::viewportRight>() {return viewportRight;}
	template<> const auto& NiCamera::get<NiCamera::FIELDS::viewportTop>() {return viewportTop;}
	template<> const auto& NiCamera::get<NiCamera::FIELDS::viewportBottom>() {return viewportBottom;}
	template<> const auto& NiCamera::get<NiCamera::FIELDS::lodAdjust>() {return lodAdjust;}
	template<> const auto& NiCamera::get<NiCamera::FIELDS::scene>() {return scene;}
	template<> const auto& NiCamera::get<NiCamera::FIELDS::numScreenPolygons>() {return numScreenPolygons;}
	template<> const auto& NiCamera::get<NiCamera::FIELDS::numScreenTextures>() {return numScreenTextures;}
	template<> const auto& NiCamera::get<NiCamera::FIELDS::unknownInt3>() {return unknownInt3;}
	void NiCamera::accept(class FieldVisitor& visitor) {
		NiAVObject::accept(visitor);
		visitor.visit(cameraFlags, FIELDS::cameraFlags);
		visitor.visit(frustumLeft, FIELDS::frustumLeft);
		visitor.visit(frustumRight, FIELDS::frustumRight);
		visitor.visit(frustumTop, FIELDS::frustumTop);
		visitor.visit(frustumBottom, FIELDS::frustumBottom);
		visitor.visit(frustumNear, FIELDS::frustumNear);
		visitor.visit(frustumFar, FIELDS::frustumFar);
		visitor.visit(useOrthographicProjection, FIELDS::useOrthographicProjection);
		visitor.visit(viewportLeft, FIELDS::viewportLeft);
		visitor.visit(viewportRight, FIELDS::viewportRight);
		visitor.visit(viewportTop, FIELDS::viewportTop);
		visitor.visit(viewportBottom, FIELDS::viewportBottom);
		visitor.visit(lodAdjust, FIELDS::lodAdjust);
		visitor.visit(scene, FIELDS::scene);
		visitor.visit(numScreenPolygons, FIELDS::numScreenPolygons);
		visitor.visit(numScreenTextures, FIELDS::numScreenTextures);
		visitor.visit(unknownInt3, FIELDS::unknownInt3);
	}


	template<> const auto& NiColorData::get<NiColorData::FIELDS::data>() {return data;}
	void NiColorData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiColorExtraData::get<NiColorExtraData::FIELDS::data>() {return data;}
	void NiColorExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiControllerManager::get<NiControllerManager::FIELDS::cumulative>() {return cumulative;}
	template<> const auto& NiControllerManager::get<NiControllerManager::FIELDS::numControllerSequences>() {return numControllerSequences;}
	template<> const auto& NiControllerManager::get<NiControllerManager::FIELDS::controllerSequences>() {return controllerSequences;}
	template<> const auto& NiControllerManager::get<NiControllerManager::FIELDS::objectPalette>() {return objectPalette;}
	void NiControllerManager::accept(class FieldVisitor& visitor) {
		NiTimeController::accept(visitor);
		visitor.visit(cumulative, FIELDS::cumulative);
		visitor.visit(numControllerSequences, FIELDS::numControllerSequences);
		visitor.visit(controllerSequences, FIELDS::controllerSequences);
		visitor.visit(objectPalette, FIELDS::objectPalette);
	}


	template<> const auto& NiSequence::get<NiSequence::FIELDS::name>() {return name;}
	template<> const auto& NiSequence::get<NiSequence::FIELDS::accumRootName>() {return accumRootName;}
	template<> const auto& NiSequence::get<NiSequence::FIELDS::textKeys>() {return textKeys;}
	template<> const auto& NiSequence::get<NiSequence::FIELDS::unknownInt4>() {return unknownInt4;}
	template<> const auto& NiSequence::get<NiSequence::FIELDS::unknownInt5>() {return unknownInt5;}
	template<> const auto& NiSequence::get<NiSequence::FIELDS::numControlledBlocks>() {return numControlledBlocks;}
	template<> const auto& NiSequence::get<NiSequence::FIELDS::arrayGrowBy>() {return arrayGrowBy;}
	template<> const auto& NiSequence::get<NiSequence::FIELDS::controlledBlocks>() {return controlledBlocks;}
	void NiSequence::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(name, FIELDS::name);
		visitor.visit(accumRootName, FIELDS::accumRootName);
		visitor.visit(textKeys, FIELDS::textKeys);
		visitor.visit(unknownInt4, FIELDS::unknownInt4);
		visitor.visit(unknownInt5, FIELDS::unknownInt5);
		visitor.visit(numControlledBlocks, FIELDS::numControlledBlocks);
		visitor.visit(arrayGrowBy, FIELDS::arrayGrowBy);
		visitor.visit(controlledBlocks, FIELDS::controlledBlocks);
	}


	template<> const auto& NiControllerSequence::get<NiControllerSequence::FIELDS::weight>() {return weight;}
	template<> const auto& NiControllerSequence::get<NiControllerSequence::FIELDS::textKeys>() {return textKeys;}
	template<> const auto& NiControllerSequence::get<NiControllerSequence::FIELDS::cycleType>() {return cycleType;}
	template<> const auto& NiControllerSequence::get<NiControllerSequence::FIELDS::frequency>() {return frequency;}
	template<> const auto& NiControllerSequence::get<NiControllerSequence::FIELDS::phase>() {return phase;}
	template<> const auto& NiControllerSequence::get<NiControllerSequence::FIELDS::startTime>() {return startTime;}
	template<> const auto& NiControllerSequence::get<NiControllerSequence::FIELDS::stopTime>() {return stopTime;}
	template<> const auto& NiControllerSequence::get<NiControllerSequence::FIELDS::playBackwards>() {return playBackwards;}
	template<> const auto& NiControllerSequence::get<NiControllerSequence::FIELDS::manager>() {return manager;}
	template<> const auto& NiControllerSequence::get<NiControllerSequence::FIELDS::accumRootName>() {return accumRootName;}
	template<> const auto& NiControllerSequence::get<NiControllerSequence::FIELDS::accumFlags>() {return accumFlags;}
	template<> const auto& NiControllerSequence::get<NiControllerSequence::FIELDS::stringPalette>() {return stringPalette;}
	template<> const auto& NiControllerSequence::get<NiControllerSequence::FIELDS::animNotes>() {return animNotes;}
	template<> const auto& NiControllerSequence::get<NiControllerSequence::FIELDS::numAnimNoteArrays>() {return numAnimNoteArrays;}
	template<> const auto& NiControllerSequence::get<NiControllerSequence::FIELDS::animNoteArrays>() {return animNoteArrays;}
	void NiControllerSequence::accept(class FieldVisitor& visitor) {
		NiSequence::accept(visitor);
		visitor.visit(weight, FIELDS::weight);
		visitor.visit(textKeys, FIELDS::textKeys);
		visitor.visit(cycleType, FIELDS::cycleType);
		visitor.visit(frequency, FIELDS::frequency);
		visitor.visit(phase, FIELDS::phase);
		visitor.visit(startTime, FIELDS::startTime);
		visitor.visit(stopTime, FIELDS::stopTime);
		visitor.visit(playBackwards, FIELDS::playBackwards);
		visitor.visit(manager, FIELDS::manager);
		visitor.visit(accumRootName, FIELDS::accumRootName);
		visitor.visit(accumFlags, FIELDS::accumFlags);
		visitor.visit(stringPalette, FIELDS::stringPalette);
		visitor.visit(animNotes, FIELDS::animNotes);
		visitor.visit(numAnimNoteArrays, FIELDS::numAnimNoteArrays);
		visitor.visit(animNoteArrays, FIELDS::animNoteArrays);
	}


	void NiAVObjectPalette::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
	}


	template<> const auto& NiDefaultAVObjectPalette::get<NiDefaultAVObjectPalette::FIELDS::scene>() {return scene;}
	template<> const auto& NiDefaultAVObjectPalette::get<NiDefaultAVObjectPalette::FIELDS::numObjs>() {return numObjs;}
	template<> const auto& NiDefaultAVObjectPalette::get<NiDefaultAVObjectPalette::FIELDS::objs>() {return objs;}
	void NiDefaultAVObjectPalette::accept(class FieldVisitor& visitor) {
		NiAVObjectPalette::accept(visitor);
		visitor.visit(scene, FIELDS::scene);
		visitor.visit(numObjs, FIELDS::numObjs);
		visitor.visit(objs, FIELDS::objs);
	}


	void NiDirectionalLight::accept(class FieldVisitor& visitor) {
		NiLight::accept(visitor);
	}


	template<> const auto& NiDitherProperty::get<NiDitherProperty::FIELDS::flags>() {return flags;}
	void NiDitherProperty::accept(class FieldVisitor& visitor) {
		NiProperty::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
	}


	template<> const auto& NiRollController::get<NiRollController::FIELDS::data>() {return data;}
	void NiRollController::accept(class FieldVisitor& visitor) {
		NiSingleInterpController::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiFloatData::get<NiFloatData::FIELDS::data>() {return data;}
	void NiFloatData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiFloatExtraData::get<NiFloatExtraData::FIELDS::floatData>() {return floatData;}
	void NiFloatExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(floatData, FIELDS::floatData);
	}


	template<> const auto& NiFloatsExtraData::get<NiFloatsExtraData::FIELDS::numFloats>() {return numFloats;}
	template<> const auto& NiFloatsExtraData::get<NiFloatsExtraData::FIELDS::data>() {return data;}
	void NiFloatsExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(numFloats, FIELDS::numFloats);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiFogProperty::get<NiFogProperty::FIELDS::flags>() {return flags;}
	template<> const auto& NiFogProperty::get<NiFogProperty::FIELDS::fogDepth>() {return fogDepth;}
	template<> const auto& NiFogProperty::get<NiFogProperty::FIELDS::fogColor>() {return fogColor;}
	void NiFogProperty::accept(class FieldVisitor& visitor) {
		NiProperty::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(fogDepth, FIELDS::fogDepth);
		visitor.visit(fogColor, FIELDS::fogColor);
	}


	template<> const auto& NiGravity::get<NiGravity::FIELDS::unknownFloat1>() {return unknownFloat1;}
	template<> const auto& NiGravity::get<NiGravity::FIELDS::force>() {return force;}
	template<> const auto& NiGravity::get<NiGravity::FIELDS::type>() {return type;}
	template<> const auto& NiGravity::get<NiGravity::FIELDS::position>() {return position;}
	template<> const auto& NiGravity::get<NiGravity::FIELDS::direction>() {return direction;}
	void NiGravity::accept(class FieldVisitor& visitor) {
		NiParticleModifier::accept(visitor);
		visitor.visit(unknownFloat1, FIELDS::unknownFloat1);
		visitor.visit(force, FIELDS::force);
		visitor.visit(type, FIELDS::type);
		visitor.visit(position, FIELDS::position);
		visitor.visit(direction, FIELDS::direction);
	}


	template<> const auto& NiIntegerExtraData::get<NiIntegerExtraData::FIELDS::integerData>() {return integerData;}
	void NiIntegerExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(integerData, FIELDS::integerData);
	}


	void BSXFlags::accept(class FieldVisitor& visitor) {
		NiIntegerExtraData::accept(visitor);
	}


	template<> const auto& NiIntegersExtraData::get<NiIntegersExtraData::FIELDS::numIntegers>() {return numIntegers;}
	template<> const auto& NiIntegersExtraData::get<NiIntegersExtraData::FIELDS::data>() {return data;}
	void NiIntegersExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(numIntegers, FIELDS::numIntegers);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& BSKeyframeController::get<BSKeyframeController::FIELDS::data2>() {return data2;}
	void BSKeyframeController::accept(class FieldVisitor& visitor) {
		NiKeyframeController::accept(visitor);
		visitor.visit(data2, FIELDS::data2);
	}


	template<> const auto& NiKeyframeData::get<NiKeyframeData::FIELDS::numRotationKeys>() {return numRotationKeys;}
	template<> const auto& NiKeyframeData::get<NiKeyframeData::FIELDS::rotationType>() {return rotationType;}
	template<> const auto& NiKeyframeData::get<NiKeyframeData::FIELDS::quaternionKeys>() {return quaternionKeys;}
	template<> const auto& NiKeyframeData::get<NiKeyframeData::FIELDS::order>() {return order;}
	template<> const auto& NiKeyframeData::get<NiKeyframeData::FIELDS::xyzRotations>() {return xyzRotations;}
	template<> const auto& NiKeyframeData::get<NiKeyframeData::FIELDS::translations>() {return translations;}
	template<> const auto& NiKeyframeData::get<NiKeyframeData::FIELDS::scales>() {return scales;}
	void NiKeyframeData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(numRotationKeys, FIELDS::numRotationKeys);
		visitor.visit(rotationType, FIELDS::rotationType);
		visitor.visit(quaternionKeys, FIELDS::quaternionKeys);
		visitor.visit(order, FIELDS::order);
		visitor.visit(xyzRotations, FIELDS::xyzRotations);
		visitor.visit(translations, FIELDS::translations);
		visitor.visit(scales, FIELDS::scales);
	}


	template<> const auto& NiLookAtController::get<NiLookAtController::FIELDS::flags>() {return flags;}
	template<> const auto& NiLookAtController::get<NiLookAtController::FIELDS::lookAt>() {return lookAt;}
	void NiLookAtController::accept(class FieldVisitor& visitor) {
		NiTimeController::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(lookAt, FIELDS::lookAt);
	}


	template<> const auto& NiLookAtInterpolator::get<NiLookAtInterpolator::FIELDS::flags>() {return flags;}
	template<> const auto& NiLookAtInterpolator::get<NiLookAtInterpolator::FIELDS::lookAt>() {return lookAt;}
	template<> const auto& NiLookAtInterpolator::get<NiLookAtInterpolator::FIELDS::lookAtName>() {return lookAtName;}
	template<> const auto& NiLookAtInterpolator::get<NiLookAtInterpolator::FIELDS::transform>() {return transform;}
	template<> const auto& NiLookAtInterpolator::get<NiLookAtInterpolator::FIELDS::interpolator_Translation>() {return interpolator_Translation;}
	template<> const auto& NiLookAtInterpolator::get<NiLookAtInterpolator::FIELDS::interpolator_Roll>() {return interpolator_Roll;}
	template<> const auto& NiLookAtInterpolator::get<NiLookAtInterpolator::FIELDS::interpolator_Scale>() {return interpolator_Scale;}
	void NiLookAtInterpolator::accept(class FieldVisitor& visitor) {
		NiInterpolator::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(lookAt, FIELDS::lookAt);
		visitor.visit(lookAtName, FIELDS::lookAtName);
		visitor.visit(transform, FIELDS::transform);
		visitor.visit(interpolator_Translation, FIELDS::interpolator_Translation);
		visitor.visit(interpolator_Roll, FIELDS::interpolator_Roll);
		visitor.visit(interpolator_Scale, FIELDS::interpolator_Scale);
	}


	template<> const auto& NiMaterialProperty::get<NiMaterialProperty::FIELDS::flags>() {return flags;}
	template<> const auto& NiMaterialProperty::get<NiMaterialProperty::FIELDS::ambientColor>() {return ambientColor;}
	template<> const auto& NiMaterialProperty::get<NiMaterialProperty::FIELDS::diffuseColor>() {return diffuseColor;}
	template<> const auto& NiMaterialProperty::get<NiMaterialProperty::FIELDS::specularColor>() {return specularColor;}
	template<> const auto& NiMaterialProperty::get<NiMaterialProperty::FIELDS::emissiveColor>() {return emissiveColor;}
	template<> const auto& NiMaterialProperty::get<NiMaterialProperty::FIELDS::glossiness>() {return glossiness;}
	template<> const auto& NiMaterialProperty::get<NiMaterialProperty::FIELDS::alpha>() {return alpha;}
	template<> const auto& NiMaterialProperty::get<NiMaterialProperty::FIELDS::emissiveMult>() {return emissiveMult;}
	void NiMaterialProperty::accept(class FieldVisitor& visitor) {
		NiProperty::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(ambientColor, FIELDS::ambientColor);
		visitor.visit(diffuseColor, FIELDS::diffuseColor);
		visitor.visit(specularColor, FIELDS::specularColor);
		visitor.visit(emissiveColor, FIELDS::emissiveColor);
		visitor.visit(glossiness, FIELDS::glossiness);
		visitor.visit(alpha, FIELDS::alpha);
		visitor.visit(emissiveMult, FIELDS::emissiveMult);
	}


	template<> const auto& NiMorphData::get<NiMorphData::FIELDS::numMorphs>() {return numMorphs;}
	template<> const auto& NiMorphData::get<NiMorphData::FIELDS::numVertices>() {return numVertices;}
	template<> const auto& NiMorphData::get<NiMorphData::FIELDS::relativeTargets>() {return relativeTargets;}
	template<> const auto& NiMorphData::get<NiMorphData::FIELDS::morphs>() {return morphs;}
	void NiMorphData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(numMorphs, FIELDS::numMorphs);
		visitor.visit(numVertices, FIELDS::numVertices);
		visitor.visit(relativeTargets, FIELDS::relativeTargets);
		visitor.visit(morphs, FIELDS::morphs);
	}


	template<> const auto& NiNode::get<NiNode::FIELDS::numChildren>() {return numChildren;}
	template<> const auto& NiNode::get<NiNode::FIELDS::children>() {return children;}
	template<> const auto& NiNode::get<NiNode::FIELDS::numEffects>() {return numEffects;}
	template<> const auto& NiNode::get<NiNode::FIELDS::effects>() {return effects;}
	void NiNode::accept(class FieldVisitor& visitor) {
		NiAVObject::accept(visitor);
		visitor.visit(numChildren, FIELDS::numChildren);
		visitor.visit(children, FIELDS::children);
		visitor.visit(numEffects, FIELDS::numEffects);
		visitor.visit(effects, FIELDS::effects);
	}


	void NiBone::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
	}


	void AvoidNode::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
	}


	template<> const auto& FxWidget::get<FxWidget::FIELDS::unknown3>() {return unknown3;}
	template<> const auto& FxWidget::get<FxWidget::FIELDS::unknown292Bytes>() {return unknown292Bytes;}
	void FxWidget::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
		visitor.visit(unknown3, FIELDS::unknown3);
		visitor.visit(unknown292Bytes, FIELDS::unknown292Bytes);
	}


	void FxButton::accept(class FieldVisitor& visitor) {
		FxWidget::accept(visitor);
	}


	template<> const auto& FxRadioButton::get<FxRadioButton::FIELDS::unknownInt1>() {return unknownInt1;}
	template<> const auto& FxRadioButton::get<FxRadioButton::FIELDS::unknownInt2>() {return unknownInt2;}
	template<> const auto& FxRadioButton::get<FxRadioButton::FIELDS::unknownInt3>() {return unknownInt3;}
	template<> const auto& FxRadioButton::get<FxRadioButton::FIELDS::numButtons>() {return numButtons;}
	template<> const auto& FxRadioButton::get<FxRadioButton::FIELDS::buttons>() {return buttons;}
	void FxRadioButton::accept(class FieldVisitor& visitor) {
		FxWidget::accept(visitor);
		visitor.visit(unknownInt1, FIELDS::unknownInt1);
		visitor.visit(unknownInt2, FIELDS::unknownInt2);
		visitor.visit(unknownInt3, FIELDS::unknownInt3);
		visitor.visit(numButtons, FIELDS::numButtons);
		visitor.visit(buttons, FIELDS::buttons);
	}


	template<> const auto& NiBillboardNode::get<NiBillboardNode::FIELDS::billboardMode>() {return billboardMode;}
	void NiBillboardNode::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
		visitor.visit(billboardMode, FIELDS::billboardMode);
	}


	void NiBSAnimationNode::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
	}


	void NiBSParticleNode::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
	}


	template<> const auto& NiSwitchNode::get<NiSwitchNode::FIELDS::switchNodeFlags>() {return switchNodeFlags;}
	template<> const auto& NiSwitchNode::get<NiSwitchNode::FIELDS::index>() {return index;}
	void NiSwitchNode::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
		visitor.visit(switchNodeFlags, FIELDS::switchNodeFlags);
		visitor.visit(index, FIELDS::index);
	}


	template<> const auto& NiLODNode::get<NiLODNode::FIELDS::lodCenter>() {return lodCenter;}
	template<> const auto& NiLODNode::get<NiLODNode::FIELDS::numLodLevels>() {return numLodLevels;}
	template<> const auto& NiLODNode::get<NiLODNode::FIELDS::lodLevels>() {return lodLevels;}
	template<> const auto& NiLODNode::get<NiLODNode::FIELDS::lodLevelData>() {return lodLevelData;}
	void NiLODNode::accept(class FieldVisitor& visitor) {
		NiSwitchNode::accept(visitor);
		visitor.visit(lodCenter, FIELDS::lodCenter);
		visitor.visit(numLodLevels, FIELDS::numLodLevels);
		visitor.visit(lodLevels, FIELDS::lodLevels);
		visitor.visit(lodLevelData, FIELDS::lodLevelData);
	}


	template<> const auto& NiPalette::get<NiPalette::FIELDS::hasAlpha>() {return hasAlpha;}
	template<> const auto& NiPalette::get<NiPalette::FIELDS::numEntries>() {return numEntries;}
	template<> const auto& NiPalette::get<NiPalette::FIELDS::palette>() {return palette;}
	void NiPalette::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(hasAlpha, FIELDS::hasAlpha);
		visitor.visit(numEntries, FIELDS::numEntries);
		visitor.visit(palette, FIELDS::palette);
	}


	template<> const auto& NiParticleBomb::get<NiParticleBomb::FIELDS::decay>() {return decay;}
	template<> const auto& NiParticleBomb::get<NiParticleBomb::FIELDS::duration>() {return duration;}
	template<> const auto& NiParticleBomb::get<NiParticleBomb::FIELDS::deltav>() {return deltav;}
	template<> const auto& NiParticleBomb::get<NiParticleBomb::FIELDS::start>() {return start;}
	template<> const auto& NiParticleBomb::get<NiParticleBomb::FIELDS::decayType>() {return decayType;}
	template<> const auto& NiParticleBomb::get<NiParticleBomb::FIELDS::symmetryType>() {return symmetryType;}
	template<> const auto& NiParticleBomb::get<NiParticleBomb::FIELDS::position>() {return position;}
	template<> const auto& NiParticleBomb::get<NiParticleBomb::FIELDS::direction>() {return direction;}
	void NiParticleBomb::accept(class FieldVisitor& visitor) {
		NiParticleModifier::accept(visitor);
		visitor.visit(decay, FIELDS::decay);
		visitor.visit(duration, FIELDS::duration);
		visitor.visit(deltav, FIELDS::deltav);
		visitor.visit(start, FIELDS::start);
		visitor.visit(decayType, FIELDS::decayType);
		visitor.visit(symmetryType, FIELDS::symmetryType);
		visitor.visit(position, FIELDS::position);
		visitor.visit(direction, FIELDS::direction);
	}


	template<> const auto& NiParticleColorModifier::get<NiParticleColorModifier::FIELDS::colorData>() {return colorData;}
	void NiParticleColorModifier::accept(class FieldVisitor& visitor) {
		NiParticleModifier::accept(visitor);
		visitor.visit(colorData, FIELDS::colorData);
	}


	template<> const auto& NiParticleGrowFade::get<NiParticleGrowFade::FIELDS::grow>() {return grow;}
	template<> const auto& NiParticleGrowFade::get<NiParticleGrowFade::FIELDS::fade>() {return fade;}
	void NiParticleGrowFade::accept(class FieldVisitor& visitor) {
		NiParticleModifier::accept(visitor);
		visitor.visit(grow, FIELDS::grow);
		visitor.visit(fade, FIELDS::fade);
	}


	template<> const auto& NiParticleMeshModifier::get<NiParticleMeshModifier::FIELDS::numParticleMeshes>() {return numParticleMeshes;}
	template<> const auto& NiParticleMeshModifier::get<NiParticleMeshModifier::FIELDS::particleMeshes>() {return particleMeshes;}
	void NiParticleMeshModifier::accept(class FieldVisitor& visitor) {
		NiParticleModifier::accept(visitor);
		visitor.visit(numParticleMeshes, FIELDS::numParticleMeshes);
		visitor.visit(particleMeshes, FIELDS::particleMeshes);
	}


	template<> const auto& NiParticleRotation::get<NiParticleRotation::FIELDS::randomInitialAxis>() {return randomInitialAxis;}
	template<> const auto& NiParticleRotation::get<NiParticleRotation::FIELDS::initialAxis>() {return initialAxis;}
	template<> const auto& NiParticleRotation::get<NiParticleRotation::FIELDS::rotationSpeed>() {return rotationSpeed;}
	void NiParticleRotation::accept(class FieldVisitor& visitor) {
		NiParticleModifier::accept(visitor);
		visitor.visit(randomInitialAxis, FIELDS::randomInitialAxis);
		visitor.visit(initialAxis, FIELDS::initialAxis);
		visitor.visit(rotationSpeed, FIELDS::rotationSpeed);
	}


	template<> const auto& NiParticles::get<NiParticles::FIELDS::vertexDesc>() {return vertexDesc;}
	void NiParticles::accept(class FieldVisitor& visitor) {
		NiGeometry::accept(visitor);
		visitor.visit(vertexDesc, FIELDS::vertexDesc);
	}


	void NiAutoNormalParticles::accept(class FieldVisitor& visitor) {
		NiParticles::accept(visitor);
	}


	void NiParticleMeshes::accept(class FieldVisitor& visitor) {
		NiParticles::accept(visitor);
	}


	template<> const auto& NiParticleMeshesData::get<NiParticleMeshesData::FIELDS::unknownLink2>() {return unknownLink2;}
	void NiParticleMeshesData::accept(class FieldVisitor& visitor) {
		NiRotatingParticlesData::accept(visitor);
		visitor.visit(unknownLink2, FIELDS::unknownLink2);
	}


	template<> const auto& NiParticleSystem::get<NiParticleSystem::FIELDS::farBegin>() {return farBegin;}
	template<> const auto& NiParticleSystem::get<NiParticleSystem::FIELDS::farEnd>() {return farEnd;}
	template<> const auto& NiParticleSystem::get<NiParticleSystem::FIELDS::nearBegin>() {return nearBegin;}
	template<> const auto& NiParticleSystem::get<NiParticleSystem::FIELDS::nearEnd>() {return nearEnd;}
	template<> const auto& NiParticleSystem::get<NiParticleSystem::FIELDS::data>() {return data;}
	template<> const auto& NiParticleSystem::get<NiParticleSystem::FIELDS::worldSpace>() {return worldSpace;}
	template<> const auto& NiParticleSystem::get<NiParticleSystem::FIELDS::numModifiers>() {return numModifiers;}
	template<> const auto& NiParticleSystem::get<NiParticleSystem::FIELDS::modifiers>() {return modifiers;}
	void NiParticleSystem::accept(class FieldVisitor& visitor) {
		NiParticles::accept(visitor);
		visitor.visit(farBegin, FIELDS::farBegin);
		visitor.visit(farEnd, FIELDS::farEnd);
		visitor.visit(nearBegin, FIELDS::nearBegin);
		visitor.visit(nearEnd, FIELDS::nearEnd);
		visitor.visit(data, FIELDS::data);
		visitor.visit(worldSpace, FIELDS::worldSpace);
		visitor.visit(numModifiers, FIELDS::numModifiers);
		visitor.visit(modifiers, FIELDS::modifiers);
	}


	void NiMeshParticleSystem::accept(class FieldVisitor& visitor) {
		NiParticleSystem::accept(visitor);
	}


	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::oldSpeed>() {return oldSpeed;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::speed>() {return speed;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::speedRandom>() {return speedRandom;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::verticalDirection>() {return verticalDirection;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::verticalAngle>() {return verticalAngle;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::horizontalDirection>() {return horizontalDirection;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::horizontalAngle>() {return horizontalAngle;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::unknownNormal_>() {return unknownNormal_;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::unknownColor_>() {return unknownColor_;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::size>() {return size;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::emitStartTime>() {return emitStartTime;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::emitStopTime>() {return emitStopTime;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::unknownByte>() {return unknownByte;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::oldEmitRate>() {return oldEmitRate;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::emitRate>() {return emitRate;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::lifetime>() {return lifetime;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::lifetimeRandom>() {return lifetimeRandom;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::emitFlags>() {return emitFlags;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::startRandom>() {return startRandom;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::emitter>() {return emitter;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::unknownShort2_>() {return unknownShort2_;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::unknownFloat13_>() {return unknownFloat13_;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::unknownInt1_>() {return unknownInt1_;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::unknownInt2_>() {return unknownInt2_;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::unknownShort3_>() {return unknownShort3_;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::particleVelocity>() {return particleVelocity;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::particleUnknownVector>() {return particleUnknownVector;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::particleLifetime>() {return particleLifetime;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::particleLink>() {return particleLink;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::particleTimestamp>() {return particleTimestamp;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::particleUnknownShort>() {return particleUnknownShort;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::particleVertexId>() {return particleVertexId;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::numParticles>() {return numParticles;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::numValid>() {return numValid;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::particles>() {return particles;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::unknownLink>() {return unknownLink;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::particleExtra>() {return particleExtra;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::unknownLink2>() {return unknownLink2;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::trailer>() {return trailer;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::colorData>() {return colorData;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::unknownFloat1>() {return unknownFloat1;}
	template<> const auto& NiParticleSystemController::get<NiParticleSystemController::FIELDS::unknownFloats2>() {return unknownFloats2;}
	void NiParticleSystemController::accept(class FieldVisitor& visitor) {
		NiTimeController::accept(visitor);
		visitor.visit(oldSpeed, FIELDS::oldSpeed);
		visitor.visit(speed, FIELDS::speed);
		visitor.visit(speedRandom, FIELDS::speedRandom);
		visitor.visit(verticalDirection, FIELDS::verticalDirection);
		visitor.visit(verticalAngle, FIELDS::verticalAngle);
		visitor.visit(horizontalDirection, FIELDS::horizontalDirection);
		visitor.visit(horizontalAngle, FIELDS::horizontalAngle);
		visitor.visit(unknownNormal_, FIELDS::unknownNormal_);
		visitor.visit(unknownColor_, FIELDS::unknownColor_);
		visitor.visit(size, FIELDS::size);
		visitor.visit(emitStartTime, FIELDS::emitStartTime);
		visitor.visit(emitStopTime, FIELDS::emitStopTime);
		visitor.visit(unknownByte, FIELDS::unknownByte);
		visitor.visit(oldEmitRate, FIELDS::oldEmitRate);
		visitor.visit(emitRate, FIELDS::emitRate);
		visitor.visit(lifetime, FIELDS::lifetime);
		visitor.visit(lifetimeRandom, FIELDS::lifetimeRandom);
		visitor.visit(emitFlags, FIELDS::emitFlags);
		visitor.visit(startRandom, FIELDS::startRandom);
		visitor.visit(emitter, FIELDS::emitter);
		visitor.visit(unknownShort2_, FIELDS::unknownShort2_);
		visitor.visit(unknownFloat13_, FIELDS::unknownFloat13_);
		visitor.visit(unknownInt1_, FIELDS::unknownInt1_);
		visitor.visit(unknownInt2_, FIELDS::unknownInt2_);
		visitor.visit(unknownShort3_, FIELDS::unknownShort3_);
		visitor.visit(particleVelocity, FIELDS::particleVelocity);
		visitor.visit(particleUnknownVector, FIELDS::particleUnknownVector);
		visitor.visit(particleLifetime, FIELDS::particleLifetime);
		visitor.visit(particleLink, FIELDS::particleLink);
		visitor.visit(particleTimestamp, FIELDS::particleTimestamp);
		visitor.visit(particleUnknownShort, FIELDS::particleUnknownShort);
		visitor.visit(particleVertexId, FIELDS::particleVertexId);
		visitor.visit(numParticles, FIELDS::numParticles);
		visitor.visit(numValid, FIELDS::numValid);
		visitor.visit(particles, FIELDS::particles);
		visitor.visit(unknownLink, FIELDS::unknownLink);
		visitor.visit(particleExtra, FIELDS::particleExtra);
		visitor.visit(unknownLink2, FIELDS::unknownLink2);
		visitor.visit(trailer, FIELDS::trailer);
		visitor.visit(colorData, FIELDS::colorData);
		visitor.visit(unknownFloat1, FIELDS::unknownFloat1);
		visitor.visit(unknownFloats2, FIELDS::unknownFloats2);
	}


	void NiBSPArrayController::accept(class FieldVisitor& visitor) {
		NiParticleSystemController::accept(visitor);
	}


	template<> const auto& NiPathController::get<NiPathController::FIELDS::pathFlags>() {return pathFlags;}
	template<> const auto& NiPathController::get<NiPathController::FIELDS::bankDir>() {return bankDir;}
	template<> const auto& NiPathController::get<NiPathController::FIELDS::maxBankAngle>() {return maxBankAngle;}
	template<> const auto& NiPathController::get<NiPathController::FIELDS::smoothing>() {return smoothing;}
	template<> const auto& NiPathController::get<NiPathController::FIELDS::followAxis>() {return followAxis;}
	template<> const auto& NiPathController::get<NiPathController::FIELDS::pathData>() {return pathData;}
	template<> const auto& NiPathController::get<NiPathController::FIELDS::percentData>() {return percentData;}
	void NiPathController::accept(class FieldVisitor& visitor) {
		NiTimeController::accept(visitor);
		visitor.visit(pathFlags, FIELDS::pathFlags);
		visitor.visit(bankDir, FIELDS::bankDir);
		visitor.visit(maxBankAngle, FIELDS::maxBankAngle);
		visitor.visit(smoothing, FIELDS::smoothing);
		visitor.visit(followAxis, FIELDS::followAxis);
		visitor.visit(pathData, FIELDS::pathData);
		visitor.visit(percentData, FIELDS::percentData);
	}


	template<> const auto& NiPixelFormat::get<NiPixelFormat::FIELDS::pixelFormat>() {return pixelFormat;}
	template<> const auto& NiPixelFormat::get<NiPixelFormat::FIELDS::redMask>() {return redMask;}
	template<> const auto& NiPixelFormat::get<NiPixelFormat::FIELDS::greenMask>() {return greenMask;}
	template<> const auto& NiPixelFormat::get<NiPixelFormat::FIELDS::blueMask>() {return blueMask;}
	template<> const auto& NiPixelFormat::get<NiPixelFormat::FIELDS::alphaMask>() {return alphaMask;}
	template<> const auto& NiPixelFormat::get<NiPixelFormat::FIELDS::bitsPerPixel>() {return bitsPerPixel;}
	template<> const auto& NiPixelFormat::get<NiPixelFormat::FIELDS::oldFastCompare>() {return oldFastCompare;}
	template<> const auto& NiPixelFormat::get<NiPixelFormat::FIELDS::tiling>() {return tiling;}
	template<> const auto& NiPixelFormat::get<NiPixelFormat::FIELDS::rendererHint>() {return rendererHint;}
	template<> const auto& NiPixelFormat::get<NiPixelFormat::FIELDS::extraData>() {return extraData;}
	template<> const auto& NiPixelFormat::get<NiPixelFormat::FIELDS::flags>() {return flags;}
	template<> const auto& NiPixelFormat::get<NiPixelFormat::FIELDS::srgbSpace>() {return srgbSpace;}
	template<> const auto& NiPixelFormat::get<NiPixelFormat::FIELDS::channels>() {return channels;}
	void NiPixelFormat::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(pixelFormat, FIELDS::pixelFormat);
		visitor.visit(redMask, FIELDS::redMask);
		visitor.visit(greenMask, FIELDS::greenMask);
		visitor.visit(blueMask, FIELDS::blueMask);
		visitor.visit(alphaMask, FIELDS::alphaMask);
		visitor.visit(bitsPerPixel, FIELDS::bitsPerPixel);
		visitor.visit(oldFastCompare, FIELDS::oldFastCompare);
		visitor.visit(tiling, FIELDS::tiling);
		visitor.visit(rendererHint, FIELDS::rendererHint);
		visitor.visit(extraData, FIELDS::extraData);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(srgbSpace, FIELDS::srgbSpace);
		visitor.visit(channels, FIELDS::channels);
	}


	template<> const auto& NiPersistentSrcTextureRendererData::get<NiPersistentSrcTextureRendererData::FIELDS::palette>() {return palette;}
	template<> const auto& NiPersistentSrcTextureRendererData::get<NiPersistentSrcTextureRendererData::FIELDS::numMipmaps>() {return numMipmaps;}
	template<> const auto& NiPersistentSrcTextureRendererData::get<NiPersistentSrcTextureRendererData::FIELDS::bytesPerPixel>() {return bytesPerPixel;}
	template<> const auto& NiPersistentSrcTextureRendererData::get<NiPersistentSrcTextureRendererData::FIELDS::mipmaps>() {return mipmaps;}
	template<> const auto& NiPersistentSrcTextureRendererData::get<NiPersistentSrcTextureRendererData::FIELDS::numPixels>() {return numPixels;}
	template<> const auto& NiPersistentSrcTextureRendererData::get<NiPersistentSrcTextureRendererData::FIELDS::padNumPixels>() {return padNumPixels;}
	template<> const auto& NiPersistentSrcTextureRendererData::get<NiPersistentSrcTextureRendererData::FIELDS::numFaces>() {return numFaces;}
	template<> const auto& NiPersistentSrcTextureRendererData::get<NiPersistentSrcTextureRendererData::FIELDS::platform>() {return platform;}
	template<> const auto& NiPersistentSrcTextureRendererData::get<NiPersistentSrcTextureRendererData::FIELDS::renderer>() {return renderer;}
	template<> const auto& NiPersistentSrcTextureRendererData::get<NiPersistentSrcTextureRendererData::FIELDS::pixelData>() {return pixelData;}
	void NiPersistentSrcTextureRendererData::accept(class FieldVisitor& visitor) {
		NiPixelFormat::accept(visitor);
		visitor.visit(palette, FIELDS::palette);
		visitor.visit(numMipmaps, FIELDS::numMipmaps);
		visitor.visit(bytesPerPixel, FIELDS::bytesPerPixel);
		visitor.visit(mipmaps, FIELDS::mipmaps);
		visitor.visit(numPixels, FIELDS::numPixels);
		visitor.visit(padNumPixels, FIELDS::padNumPixels);
		visitor.visit(numFaces, FIELDS::numFaces);
		visitor.visit(platform, FIELDS::platform);
		visitor.visit(renderer, FIELDS::renderer);
		visitor.visit(pixelData, FIELDS::pixelData);
	}


	template<> const auto& NiPixelData::get<NiPixelData::FIELDS::palette>() {return palette;}
	template<> const auto& NiPixelData::get<NiPixelData::FIELDS::numMipmaps>() {return numMipmaps;}
	template<> const auto& NiPixelData::get<NiPixelData::FIELDS::bytesPerPixel>() {return bytesPerPixel;}
	template<> const auto& NiPixelData::get<NiPixelData::FIELDS::mipmaps>() {return mipmaps;}
	template<> const auto& NiPixelData::get<NiPixelData::FIELDS::numPixels>() {return numPixels;}
	template<> const auto& NiPixelData::get<NiPixelData::FIELDS::numFaces>() {return numFaces;}
	template<> const auto& NiPixelData::get<NiPixelData::FIELDS::pixelData>() {return pixelData;}
	void NiPixelData::accept(class FieldVisitor& visitor) {
		NiPixelFormat::accept(visitor);
		visitor.visit(palette, FIELDS::palette);
		visitor.visit(numMipmaps, FIELDS::numMipmaps);
		visitor.visit(bytesPerPixel, FIELDS::bytesPerPixel);
		visitor.visit(mipmaps, FIELDS::mipmaps);
		visitor.visit(numPixels, FIELDS::numPixels);
		visitor.visit(numFaces, FIELDS::numFaces);
		visitor.visit(pixelData, FIELDS::pixelData);
	}


	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownShort>() {return unknownShort;}
	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownFloat1>() {return unknownFloat1;}
	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownFloat2>() {return unknownFloat2;}
	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownShort2>() {return unknownShort2;}
	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownFloat3>() {return unknownFloat3;}
	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownFloat4>() {return unknownFloat4;}
	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownFloat5>() {return unknownFloat5;}
	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownFloat6>() {return unknownFloat6;}
	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownFloat7>() {return unknownFloat7;}
	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownFloat8>() {return unknownFloat8;}
	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownFloat9>() {return unknownFloat9;}
	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownFloat10>() {return unknownFloat10;}
	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownFloat11>() {return unknownFloat11;}
	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownFloat12>() {return unknownFloat12;}
	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownFloat13>() {return unknownFloat13;}
	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownFloat14>() {return unknownFloat14;}
	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownFloat15>() {return unknownFloat15;}
	template<> const auto& NiPlanarCollider::get<NiPlanarCollider::FIELDS::unknownFloat16>() {return unknownFloat16;}
	void NiPlanarCollider::accept(class FieldVisitor& visitor) {
		NiParticleModifier::accept(visitor);
		visitor.visit(unknownShort, FIELDS::unknownShort);
		visitor.visit(unknownFloat1, FIELDS::unknownFloat1);
		visitor.visit(unknownFloat2, FIELDS::unknownFloat2);
		visitor.visit(unknownShort2, FIELDS::unknownShort2);
		visitor.visit(unknownFloat3, FIELDS::unknownFloat3);
		visitor.visit(unknownFloat4, FIELDS::unknownFloat4);
		visitor.visit(unknownFloat5, FIELDS::unknownFloat5);
		visitor.visit(unknownFloat6, FIELDS::unknownFloat6);
		visitor.visit(unknownFloat7, FIELDS::unknownFloat7);
		visitor.visit(unknownFloat8, FIELDS::unknownFloat8);
		visitor.visit(unknownFloat9, FIELDS::unknownFloat9);
		visitor.visit(unknownFloat10, FIELDS::unknownFloat10);
		visitor.visit(unknownFloat11, FIELDS::unknownFloat11);
		visitor.visit(unknownFloat12, FIELDS::unknownFloat12);
		visitor.visit(unknownFloat13, FIELDS::unknownFloat13);
		visitor.visit(unknownFloat14, FIELDS::unknownFloat14);
		visitor.visit(unknownFloat15, FIELDS::unknownFloat15);
		visitor.visit(unknownFloat16, FIELDS::unknownFloat16);
	}


	template<> const auto& NiPointLight::get<NiPointLight::FIELDS::constantAttenuation>() {return constantAttenuation;}
	template<> const auto& NiPointLight::get<NiPointLight::FIELDS::linearAttenuation>() {return linearAttenuation;}
	template<> const auto& NiPointLight::get<NiPointLight::FIELDS::quadraticAttenuation>() {return quadraticAttenuation;}
	void NiPointLight::accept(class FieldVisitor& visitor) {
		NiLight::accept(visitor);
		visitor.visit(constantAttenuation, FIELDS::constantAttenuation);
		visitor.visit(linearAttenuation, FIELDS::linearAttenuation);
		visitor.visit(quadraticAttenuation, FIELDS::quadraticAttenuation);
	}


	template<> const auto& NiPosData::get<NiPosData::FIELDS::data>() {return data;}
	void NiPosData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiRotData::get<NiRotData::FIELDS::numRotationKeys>() {return numRotationKeys;}
	template<> const auto& NiRotData::get<NiRotData::FIELDS::rotationType>() {return rotationType;}
	template<> const auto& NiRotData::get<NiRotData::FIELDS::quaternionKeys>() {return quaternionKeys;}
	template<> const auto& NiRotData::get<NiRotData::FIELDS::xyzRotations>() {return xyzRotations;}
	void NiRotData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(numRotationKeys, FIELDS::numRotationKeys);
		visitor.visit(rotationType, FIELDS::rotationType);
		visitor.visit(quaternionKeys, FIELDS::quaternionKeys);
		visitor.visit(xyzRotations, FIELDS::xyzRotations);
	}


	template<> const auto& NiPSysAgeDeathModifier::get<NiPSysAgeDeathModifier::FIELDS::spawnOnDeath>() {return spawnOnDeath;}
	template<> const auto& NiPSysAgeDeathModifier::get<NiPSysAgeDeathModifier::FIELDS::spawnModifier>() {return spawnModifier;}
	void NiPSysAgeDeathModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(spawnOnDeath, FIELDS::spawnOnDeath);
		visitor.visit(spawnModifier, FIELDS::spawnModifier);
	}


	template<> const auto& NiPSysBombModifier::get<NiPSysBombModifier::FIELDS::bombObject>() {return bombObject;}
	template<> const auto& NiPSysBombModifier::get<NiPSysBombModifier::FIELDS::bombAxis>() {return bombAxis;}
	template<> const auto& NiPSysBombModifier::get<NiPSysBombModifier::FIELDS::decay>() {return decay;}
	template<> const auto& NiPSysBombModifier::get<NiPSysBombModifier::FIELDS::deltaV>() {return deltaV;}
	template<> const auto& NiPSysBombModifier::get<NiPSysBombModifier::FIELDS::decayType>() {return decayType;}
	template<> const auto& NiPSysBombModifier::get<NiPSysBombModifier::FIELDS::symmetryType>() {return symmetryType;}
	void NiPSysBombModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(bombObject, FIELDS::bombObject);
		visitor.visit(bombAxis, FIELDS::bombAxis);
		visitor.visit(decay, FIELDS::decay);
		visitor.visit(deltaV, FIELDS::deltaV);
		visitor.visit(decayType, FIELDS::decayType);
		visitor.visit(symmetryType, FIELDS::symmetryType);
	}


	template<> const auto& NiPSysBoundUpdateModifier::get<NiPSysBoundUpdateModifier::FIELDS::updateSkip>() {return updateSkip;}
	void NiPSysBoundUpdateModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(updateSkip, FIELDS::updateSkip);
	}


	template<> const auto& NiPSysBoxEmitter::get<NiPSysBoxEmitter::FIELDS::width>() {return width;}
	template<> const auto& NiPSysBoxEmitter::get<NiPSysBoxEmitter::FIELDS::height>() {return height;}
	template<> const auto& NiPSysBoxEmitter::get<NiPSysBoxEmitter::FIELDS::depth>() {return depth;}
	void NiPSysBoxEmitter::accept(class FieldVisitor& visitor) {
		NiPSysVolumeEmitter::accept(visitor);
		visitor.visit(width, FIELDS::width);
		visitor.visit(height, FIELDS::height);
		visitor.visit(depth, FIELDS::depth);
	}


	template<> const auto& NiPSysColliderManager::get<NiPSysColliderManager::FIELDS::collider>() {return collider;}
	void NiPSysColliderManager::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(collider, FIELDS::collider);
	}


	template<> const auto& NiPSysColorModifier::get<NiPSysColorModifier::FIELDS::data>() {return data;}
	void NiPSysColorModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiPSysCylinderEmitter::get<NiPSysCylinderEmitter::FIELDS::radius>() {return radius;}
	template<> const auto& NiPSysCylinderEmitter::get<NiPSysCylinderEmitter::FIELDS::height>() {return height;}
	void NiPSysCylinderEmitter::accept(class FieldVisitor& visitor) {
		NiPSysVolumeEmitter::accept(visitor);
		visitor.visit(radius, FIELDS::radius);
		visitor.visit(height, FIELDS::height);
	}


	template<> const auto& NiPSysDragModifier::get<NiPSysDragModifier::FIELDS::dragObject>() {return dragObject;}
	template<> const auto& NiPSysDragModifier::get<NiPSysDragModifier::FIELDS::dragAxis>() {return dragAxis;}
	template<> const auto& NiPSysDragModifier::get<NiPSysDragModifier::FIELDS::percentage>() {return percentage;}
	template<> const auto& NiPSysDragModifier::get<NiPSysDragModifier::FIELDS::range>() {return range;}
	template<> const auto& NiPSysDragModifier::get<NiPSysDragModifier::FIELDS::rangeFalloff>() {return rangeFalloff;}
	void NiPSysDragModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(dragObject, FIELDS::dragObject);
		visitor.visit(dragAxis, FIELDS::dragAxis);
		visitor.visit(percentage, FIELDS::percentage);
		visitor.visit(range, FIELDS::range);
		visitor.visit(rangeFalloff, FIELDS::rangeFalloff);
	}


	template<> const auto& NiPSysEmitterCtlrData::get<NiPSysEmitterCtlrData::FIELDS::birthRateKeys>() {return birthRateKeys;}
	template<> const auto& NiPSysEmitterCtlrData::get<NiPSysEmitterCtlrData::FIELDS::numActiveKeys>() {return numActiveKeys;}
	template<> const auto& NiPSysEmitterCtlrData::get<NiPSysEmitterCtlrData::FIELDS::activeKeys>() {return activeKeys;}
	void NiPSysEmitterCtlrData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(birthRateKeys, FIELDS::birthRateKeys);
		visitor.visit(numActiveKeys, FIELDS::numActiveKeys);
		visitor.visit(activeKeys, FIELDS::activeKeys);
	}


	template<> const auto& NiPSysGravityModifier::get<NiPSysGravityModifier::FIELDS::gravityObject>() {return gravityObject;}
	template<> const auto& NiPSysGravityModifier::get<NiPSysGravityModifier::FIELDS::gravityAxis>() {return gravityAxis;}
	template<> const auto& NiPSysGravityModifier::get<NiPSysGravityModifier::FIELDS::decay>() {return decay;}
	template<> const auto& NiPSysGravityModifier::get<NiPSysGravityModifier::FIELDS::strength>() {return strength;}
	template<> const auto& NiPSysGravityModifier::get<NiPSysGravityModifier::FIELDS::forceType>() {return forceType;}
	template<> const auto& NiPSysGravityModifier::get<NiPSysGravityModifier::FIELDS::turbulence>() {return turbulence;}
	template<> const auto& NiPSysGravityModifier::get<NiPSysGravityModifier::FIELDS::turbulenceScale>() {return turbulenceScale;}
	template<> const auto& NiPSysGravityModifier::get<NiPSysGravityModifier::FIELDS::worldAligned>() {return worldAligned;}
	void NiPSysGravityModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(gravityObject, FIELDS::gravityObject);
		visitor.visit(gravityAxis, FIELDS::gravityAxis);
		visitor.visit(decay, FIELDS::decay);
		visitor.visit(strength, FIELDS::strength);
		visitor.visit(forceType, FIELDS::forceType);
		visitor.visit(turbulence, FIELDS::turbulence);
		visitor.visit(turbulenceScale, FIELDS::turbulenceScale);
		visitor.visit(worldAligned, FIELDS::worldAligned);
	}


	template<> const auto& NiPSysGrowFadeModifier::get<NiPSysGrowFadeModifier::FIELDS::growTime>() {return growTime;}
	template<> const auto& NiPSysGrowFadeModifier::get<NiPSysGrowFadeModifier::FIELDS::growGeneration>() {return growGeneration;}
	template<> const auto& NiPSysGrowFadeModifier::get<NiPSysGrowFadeModifier::FIELDS::fadeTime>() {return fadeTime;}
	template<> const auto& NiPSysGrowFadeModifier::get<NiPSysGrowFadeModifier::FIELDS::fadeGeneration>() {return fadeGeneration;}
	template<> const auto& NiPSysGrowFadeModifier::get<NiPSysGrowFadeModifier::FIELDS::baseScale>() {return baseScale;}
	void NiPSysGrowFadeModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(growTime, FIELDS::growTime);
		visitor.visit(growGeneration, FIELDS::growGeneration);
		visitor.visit(fadeTime, FIELDS::fadeTime);
		visitor.visit(fadeGeneration, FIELDS::fadeGeneration);
		visitor.visit(baseScale, FIELDS::baseScale);
	}


	template<> const auto& NiPSysMeshEmitter::get<NiPSysMeshEmitter::FIELDS::numEmitterMeshes>() {return numEmitterMeshes;}
	template<> const auto& NiPSysMeshEmitter::get<NiPSysMeshEmitter::FIELDS::emitterMeshes>() {return emitterMeshes;}
	template<> const auto& NiPSysMeshEmitter::get<NiPSysMeshEmitter::FIELDS::initialVelocityType>() {return initialVelocityType;}
	template<> const auto& NiPSysMeshEmitter::get<NiPSysMeshEmitter::FIELDS::emissionType>() {return emissionType;}
	template<> const auto& NiPSysMeshEmitter::get<NiPSysMeshEmitter::FIELDS::emissionAxis>() {return emissionAxis;}
	void NiPSysMeshEmitter::accept(class FieldVisitor& visitor) {
		NiPSysEmitter::accept(visitor);
		visitor.visit(numEmitterMeshes, FIELDS::numEmitterMeshes);
		visitor.visit(emitterMeshes, FIELDS::emitterMeshes);
		visitor.visit(initialVelocityType, FIELDS::initialVelocityType);
		visitor.visit(emissionType, FIELDS::emissionType);
		visitor.visit(emissionAxis, FIELDS::emissionAxis);
	}


	template<> const auto& NiPSysMeshUpdateModifier::get<NiPSysMeshUpdateModifier::FIELDS::numMeshes>() {return numMeshes;}
	template<> const auto& NiPSysMeshUpdateModifier::get<NiPSysMeshUpdateModifier::FIELDS::meshes>() {return meshes;}
	void NiPSysMeshUpdateModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(numMeshes, FIELDS::numMeshes);
		visitor.visit(meshes, FIELDS::meshes);
	}


	template<> const auto& BSPSysInheritVelocityModifier::get<BSPSysInheritVelocityModifier::FIELDS::target>() {return target;}
	template<> const auto& BSPSysInheritVelocityModifier::get<BSPSysInheritVelocityModifier::FIELDS::chanceToInherit>() {return chanceToInherit;}
	template<> const auto& BSPSysInheritVelocityModifier::get<BSPSysInheritVelocityModifier::FIELDS::velocityMultiplier>() {return velocityMultiplier;}
	template<> const auto& BSPSysInheritVelocityModifier::get<BSPSysInheritVelocityModifier::FIELDS::velocityVariation>() {return velocityVariation;}
	void BSPSysInheritVelocityModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(target, FIELDS::target);
		visitor.visit(chanceToInherit, FIELDS::chanceToInherit);
		visitor.visit(velocityMultiplier, FIELDS::velocityMultiplier);
		visitor.visit(velocityVariation, FIELDS::velocityVariation);
	}


	template<> const auto& BSPSysHavokUpdateModifier::get<BSPSysHavokUpdateModifier::FIELDS::numNodes>() {return numNodes;}
	template<> const auto& BSPSysHavokUpdateModifier::get<BSPSysHavokUpdateModifier::FIELDS::nodes>() {return nodes;}
	template<> const auto& BSPSysHavokUpdateModifier::get<BSPSysHavokUpdateModifier::FIELDS::modifier>() {return modifier;}
	void BSPSysHavokUpdateModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(numNodes, FIELDS::numNodes);
		visitor.visit(nodes, FIELDS::nodes);
		visitor.visit(modifier, FIELDS::modifier);
	}


	template<> const auto& BSPSysRecycleBoundModifier::get<BSPSysRecycleBoundModifier::FIELDS::boundOffset>() {return boundOffset;}
	template<> const auto& BSPSysRecycleBoundModifier::get<BSPSysRecycleBoundModifier::FIELDS::boundExtent>() {return boundExtent;}
	template<> const auto& BSPSysRecycleBoundModifier::get<BSPSysRecycleBoundModifier::FIELDS::target>() {return target;}
	void BSPSysRecycleBoundModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(boundOffset, FIELDS::boundOffset);
		visitor.visit(boundExtent, FIELDS::boundExtent);
		visitor.visit(target, FIELDS::target);
	}


	template<> const auto& BSPSysSubTexModifier::get<BSPSysSubTexModifier::FIELDS::startFrame>() {return startFrame;}
	template<> const auto& BSPSysSubTexModifier::get<BSPSysSubTexModifier::FIELDS::startFrameFudge>() {return startFrameFudge;}
	template<> const auto& BSPSysSubTexModifier::get<BSPSysSubTexModifier::FIELDS::endFrame>() {return endFrame;}
	template<> const auto& BSPSysSubTexModifier::get<BSPSysSubTexModifier::FIELDS::loopStartFrame>() {return loopStartFrame;}
	template<> const auto& BSPSysSubTexModifier::get<BSPSysSubTexModifier::FIELDS::loopStartFrameFudge>() {return loopStartFrameFudge;}
	template<> const auto& BSPSysSubTexModifier::get<BSPSysSubTexModifier::FIELDS::frameCount>() {return frameCount;}
	template<> const auto& BSPSysSubTexModifier::get<BSPSysSubTexModifier::FIELDS::frameCountFudge>() {return frameCountFudge;}
	void BSPSysSubTexModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(startFrame, FIELDS::startFrame);
		visitor.visit(startFrameFudge, FIELDS::startFrameFudge);
		visitor.visit(endFrame, FIELDS::endFrame);
		visitor.visit(loopStartFrame, FIELDS::loopStartFrame);
		visitor.visit(loopStartFrameFudge, FIELDS::loopStartFrameFudge);
		visitor.visit(frameCount, FIELDS::frameCount);
		visitor.visit(frameCountFudge, FIELDS::frameCountFudge);
	}


	template<> const auto& NiPSysPlanarCollider::get<NiPSysPlanarCollider::FIELDS::width>() {return width;}
	template<> const auto& NiPSysPlanarCollider::get<NiPSysPlanarCollider::FIELDS::height>() {return height;}
	template<> const auto& NiPSysPlanarCollider::get<NiPSysPlanarCollider::FIELDS::xAxis>() {return xAxis;}
	template<> const auto& NiPSysPlanarCollider::get<NiPSysPlanarCollider::FIELDS::yAxis>() {return yAxis;}
	void NiPSysPlanarCollider::accept(class FieldVisitor& visitor) {
		NiPSysCollider::accept(visitor);
		visitor.visit(width, FIELDS::width);
		visitor.visit(height, FIELDS::height);
		visitor.visit(xAxis, FIELDS::xAxis);
		visitor.visit(yAxis, FIELDS::yAxis);
	}


	template<> const auto& NiPSysSphericalCollider::get<NiPSysSphericalCollider::FIELDS::radius>() {return radius;}
	void NiPSysSphericalCollider::accept(class FieldVisitor& visitor) {
		NiPSysCollider::accept(visitor);
		visitor.visit(radius, FIELDS::radius);
	}


	void NiPSysPositionModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
	}


	void NiPSysResetOnLoopCtlr::accept(class FieldVisitor& visitor) {
		NiTimeController::accept(visitor);
	}


	template<> const auto& NiPSysRotationModifier::get<NiPSysRotationModifier::FIELDS::rotationSpeed>() {return rotationSpeed;}
	template<> const auto& NiPSysRotationModifier::get<NiPSysRotationModifier::FIELDS::rotationSpeedVariation>() {return rotationSpeedVariation;}
	template<> const auto& NiPSysRotationModifier::get<NiPSysRotationModifier::FIELDS::rotationAngle>() {return rotationAngle;}
	template<> const auto& NiPSysRotationModifier::get<NiPSysRotationModifier::FIELDS::rotationAngleVariation>() {return rotationAngleVariation;}
	template<> const auto& NiPSysRotationModifier::get<NiPSysRotationModifier::FIELDS::randomRotSpeedSign>() {return randomRotSpeedSign;}
	template<> const auto& NiPSysRotationModifier::get<NiPSysRotationModifier::FIELDS::randomAxis>() {return randomAxis;}
	template<> const auto& NiPSysRotationModifier::get<NiPSysRotationModifier::FIELDS::axis>() {return axis;}
	void NiPSysRotationModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(rotationSpeed, FIELDS::rotationSpeed);
		visitor.visit(rotationSpeedVariation, FIELDS::rotationSpeedVariation);
		visitor.visit(rotationAngle, FIELDS::rotationAngle);
		visitor.visit(rotationAngleVariation, FIELDS::rotationAngleVariation);
		visitor.visit(randomRotSpeedSign, FIELDS::randomRotSpeedSign);
		visitor.visit(randomAxis, FIELDS::randomAxis);
		visitor.visit(axis, FIELDS::axis);
	}


	template<> const auto& NiPSysSpawnModifier::get<NiPSysSpawnModifier::FIELDS::numSpawnGenerations>() {return numSpawnGenerations;}
	template<> const auto& NiPSysSpawnModifier::get<NiPSysSpawnModifier::FIELDS::percentageSpawned>() {return percentageSpawned;}
	template<> const auto& NiPSysSpawnModifier::get<NiPSysSpawnModifier::FIELDS::minNumToSpawn>() {return minNumToSpawn;}
	template<> const auto& NiPSysSpawnModifier::get<NiPSysSpawnModifier::FIELDS::maxNumToSpawn>() {return maxNumToSpawn;}
	template<> const auto& NiPSysSpawnModifier::get<NiPSysSpawnModifier::FIELDS::unknownInt>() {return unknownInt;}
	template<> const auto& NiPSysSpawnModifier::get<NiPSysSpawnModifier::FIELDS::spawnSpeedVariation>() {return spawnSpeedVariation;}
	template<> const auto& NiPSysSpawnModifier::get<NiPSysSpawnModifier::FIELDS::spawnDirVariation>() {return spawnDirVariation;}
	template<> const auto& NiPSysSpawnModifier::get<NiPSysSpawnModifier::FIELDS::lifeSpan>() {return lifeSpan;}
	template<> const auto& NiPSysSpawnModifier::get<NiPSysSpawnModifier::FIELDS::lifeSpanVariation>() {return lifeSpanVariation;}
	void NiPSysSpawnModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(numSpawnGenerations, FIELDS::numSpawnGenerations);
		visitor.visit(percentageSpawned, FIELDS::percentageSpawned);
		visitor.visit(minNumToSpawn, FIELDS::minNumToSpawn);
		visitor.visit(maxNumToSpawn, FIELDS::maxNumToSpawn);
		visitor.visit(unknownInt, FIELDS::unknownInt);
		visitor.visit(spawnSpeedVariation, FIELDS::spawnSpeedVariation);
		visitor.visit(spawnDirVariation, FIELDS::spawnDirVariation);
		visitor.visit(lifeSpan, FIELDS::lifeSpan);
		visitor.visit(lifeSpanVariation, FIELDS::lifeSpanVariation);
	}


	template<> const auto& NiPSysSphereEmitter::get<NiPSysSphereEmitter::FIELDS::radius>() {return radius;}
	void NiPSysSphereEmitter::accept(class FieldVisitor& visitor) {
		NiPSysVolumeEmitter::accept(visitor);
		visitor.visit(radius, FIELDS::radius);
	}


	void NiPSysUpdateCtlr::accept(class FieldVisitor& visitor) {
		NiTimeController::accept(visitor);
	}


	template<> const auto& NiPSysFieldModifier::get<NiPSysFieldModifier::FIELDS::fieldObject>() {return fieldObject;}
	template<> const auto& NiPSysFieldModifier::get<NiPSysFieldModifier::FIELDS::magnitude>() {return magnitude;}
	template<> const auto& NiPSysFieldModifier::get<NiPSysFieldModifier::FIELDS::attenuation>() {return attenuation;}
	template<> const auto& NiPSysFieldModifier::get<NiPSysFieldModifier::FIELDS::useMaxDistance>() {return useMaxDistance;}
	template<> const auto& NiPSysFieldModifier::get<NiPSysFieldModifier::FIELDS::maxDistance>() {return maxDistance;}
	void NiPSysFieldModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(fieldObject, FIELDS::fieldObject);
		visitor.visit(magnitude, FIELDS::magnitude);
		visitor.visit(attenuation, FIELDS::attenuation);
		visitor.visit(useMaxDistance, FIELDS::useMaxDistance);
		visitor.visit(maxDistance, FIELDS::maxDistance);
	}


	template<> const auto& NiPSysVortexFieldModifier::get<NiPSysVortexFieldModifier::FIELDS::direction>() {return direction;}
	void NiPSysVortexFieldModifier::accept(class FieldVisitor& visitor) {
		NiPSysFieldModifier::accept(visitor);
		visitor.visit(direction, FIELDS::direction);
	}


	template<> const auto& NiPSysGravityFieldModifier::get<NiPSysGravityFieldModifier::FIELDS::direction>() {return direction;}
	void NiPSysGravityFieldModifier::accept(class FieldVisitor& visitor) {
		NiPSysFieldModifier::accept(visitor);
		visitor.visit(direction, FIELDS::direction);
	}


	template<> const auto& NiPSysDragFieldModifier::get<NiPSysDragFieldModifier::FIELDS::useDirection>() {return useDirection;}
	template<> const auto& NiPSysDragFieldModifier::get<NiPSysDragFieldModifier::FIELDS::direction>() {return direction;}
	void NiPSysDragFieldModifier::accept(class FieldVisitor& visitor) {
		NiPSysFieldModifier::accept(visitor);
		visitor.visit(useDirection, FIELDS::useDirection);
		visitor.visit(direction, FIELDS::direction);
	}


	template<> const auto& NiPSysTurbulenceFieldModifier::get<NiPSysTurbulenceFieldModifier::FIELDS::frequency>() {return frequency;}
	void NiPSysTurbulenceFieldModifier::accept(class FieldVisitor& visitor) {
		NiPSysFieldModifier::accept(visitor);
		visitor.visit(frequency, FIELDS::frequency);
	}


	template<> const auto& BSPSysLODModifier::get<BSPSysLODModifier::FIELDS::lodBeginDistance>() {return lodBeginDistance;}
	template<> const auto& BSPSysLODModifier::get<BSPSysLODModifier::FIELDS::lodEndDistance>() {return lodEndDistance;}
	template<> const auto& BSPSysLODModifier::get<BSPSysLODModifier::FIELDS::endEmitScale>() {return endEmitScale;}
	template<> const auto& BSPSysLODModifier::get<BSPSysLODModifier::FIELDS::endSize>() {return endSize;}
	void BSPSysLODModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(lodBeginDistance, FIELDS::lodBeginDistance);
		visitor.visit(lodEndDistance, FIELDS::lodEndDistance);
		visitor.visit(endEmitScale, FIELDS::endEmitScale);
		visitor.visit(endSize, FIELDS::endSize);
	}


	template<> const auto& BSPSysScaleModifier::get<BSPSysScaleModifier::FIELDS::numScales>() {return numScales;}
	template<> const auto& BSPSysScaleModifier::get<BSPSysScaleModifier::FIELDS::scales>() {return scales;}
	void BSPSysScaleModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(numScales, FIELDS::numScales);
		visitor.visit(scales, FIELDS::scales);
	}


	void NiPSysFieldMagnitudeCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	void NiPSysFieldAttenuationCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	void NiPSysFieldMaxDistanceCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	void NiPSysAirFieldAirFrictionCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	void NiPSysAirFieldInheritVelocityCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	void NiPSysAirFieldSpreadCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	void NiPSysInitialRotSpeedCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	void NiPSysInitialRotSpeedVarCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	void NiPSysInitialRotAngleCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	void NiPSysInitialRotAngleVarCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	void NiPSysEmitterPlanarAngleCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	void NiPSysEmitterPlanarAngleVarCtlr::accept(class FieldVisitor& visitor) {
		NiPSysModifierFloatCtlr::accept(visitor);
	}


	template<> const auto& NiPSysAirFieldModifier::get<NiPSysAirFieldModifier::FIELDS::direction>() {return direction;}
	template<> const auto& NiPSysAirFieldModifier::get<NiPSysAirFieldModifier::FIELDS::airFriction>() {return airFriction;}
	template<> const auto& NiPSysAirFieldModifier::get<NiPSysAirFieldModifier::FIELDS::inheritVelocity>() {return inheritVelocity;}
	template<> const auto& NiPSysAirFieldModifier::get<NiPSysAirFieldModifier::FIELDS::inheritRotation>() {return inheritRotation;}
	template<> const auto& NiPSysAirFieldModifier::get<NiPSysAirFieldModifier::FIELDS::componentOnly>() {return componentOnly;}
	template<> const auto& NiPSysAirFieldModifier::get<NiPSysAirFieldModifier::FIELDS::enableSpread>() {return enableSpread;}
	template<> const auto& NiPSysAirFieldModifier::get<NiPSysAirFieldModifier::FIELDS::spread>() {return spread;}
	void NiPSysAirFieldModifier::accept(class FieldVisitor& visitor) {
		NiPSysFieldModifier::accept(visitor);
		visitor.visit(direction, FIELDS::direction);
		visitor.visit(airFriction, FIELDS::airFriction);
		visitor.visit(inheritVelocity, FIELDS::inheritVelocity);
		visitor.visit(inheritRotation, FIELDS::inheritRotation);
		visitor.visit(componentOnly, FIELDS::componentOnly);
		visitor.visit(enableSpread, FIELDS::enableSpread);
		visitor.visit(spread, FIELDS::spread);
	}


	template<> const auto& NiPSysTrailEmitter::get<NiPSysTrailEmitter::FIELDS::unknownInt1>() {return unknownInt1;}
	template<> const auto& NiPSysTrailEmitter::get<NiPSysTrailEmitter::FIELDS::unknownFloat1>() {return unknownFloat1;}
	template<> const auto& NiPSysTrailEmitter::get<NiPSysTrailEmitter::FIELDS::unknownFloat2>() {return unknownFloat2;}
	template<> const auto& NiPSysTrailEmitter::get<NiPSysTrailEmitter::FIELDS::unknownFloat3>() {return unknownFloat3;}
	template<> const auto& NiPSysTrailEmitter::get<NiPSysTrailEmitter::FIELDS::unknownInt2>() {return unknownInt2;}
	template<> const auto& NiPSysTrailEmitter::get<NiPSysTrailEmitter::FIELDS::unknownFloat4>() {return unknownFloat4;}
	template<> const auto& NiPSysTrailEmitter::get<NiPSysTrailEmitter::FIELDS::unknownInt3>() {return unknownInt3;}
	template<> const auto& NiPSysTrailEmitter::get<NiPSysTrailEmitter::FIELDS::unknownFloat5>() {return unknownFloat5;}
	template<> const auto& NiPSysTrailEmitter::get<NiPSysTrailEmitter::FIELDS::unknownInt4>() {return unknownInt4;}
	template<> const auto& NiPSysTrailEmitter::get<NiPSysTrailEmitter::FIELDS::unknownFloat6>() {return unknownFloat6;}
	template<> const auto& NiPSysTrailEmitter::get<NiPSysTrailEmitter::FIELDS::unknownFloat7>() {return unknownFloat7;}
	void NiPSysTrailEmitter::accept(class FieldVisitor& visitor) {
		NiPSysEmitter::accept(visitor);
		visitor.visit(unknownInt1, FIELDS::unknownInt1);
		visitor.visit(unknownFloat1, FIELDS::unknownFloat1);
		visitor.visit(unknownFloat2, FIELDS::unknownFloat2);
		visitor.visit(unknownFloat3, FIELDS::unknownFloat3);
		visitor.visit(unknownInt2, FIELDS::unknownInt2);
		visitor.visit(unknownFloat4, FIELDS::unknownFloat4);
		visitor.visit(unknownInt3, FIELDS::unknownInt3);
		visitor.visit(unknownFloat5, FIELDS::unknownFloat5);
		visitor.visit(unknownInt4, FIELDS::unknownInt4);
		visitor.visit(unknownFloat6, FIELDS::unknownFloat6);
		visitor.visit(unknownFloat7, FIELDS::unknownFloat7);
	}


	void NiLightIntensityController::accept(class FieldVisitor& visitor) {
		NiFloatInterpController::accept(visitor);
	}


	template<> const auto& NiPSysRadialFieldModifier::get<NiPSysRadialFieldModifier::FIELDS::radialType>() {return radialType;}
	void NiPSysRadialFieldModifier::accept(class FieldVisitor& visitor) {
		NiPSysFieldModifier::accept(visitor);
		visitor.visit(radialType, FIELDS::radialType);
	}


	void NiLODData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
	}


	template<> const auto& NiRangeLODData::get<NiRangeLODData::FIELDS::lodCenter>() {return lodCenter;}
	template<> const auto& NiRangeLODData::get<NiRangeLODData::FIELDS::numLodLevels>() {return numLodLevels;}
	template<> const auto& NiRangeLODData::get<NiRangeLODData::FIELDS::lodLevels>() {return lodLevels;}
	void NiRangeLODData::accept(class FieldVisitor& visitor) {
		NiLODData::accept(visitor);
		visitor.visit(lodCenter, FIELDS::lodCenter);
		visitor.visit(numLodLevels, FIELDS::numLodLevels);
		visitor.visit(lodLevels, FIELDS::lodLevels);
	}


	template<> const auto& NiScreenLODData::get<NiScreenLODData::FIELDS::bound>() {return bound;}
	template<> const auto& NiScreenLODData::get<NiScreenLODData::FIELDS::worldBound>() {return worldBound;}
	template<> const auto& NiScreenLODData::get<NiScreenLODData::FIELDS::numProportions>() {return numProportions;}
	template<> const auto& NiScreenLODData::get<NiScreenLODData::FIELDS::proportionLevels>() {return proportionLevels;}
	void NiScreenLODData::accept(class FieldVisitor& visitor) {
		NiLODData::accept(visitor);
		visitor.visit(bound, FIELDS::bound);
		visitor.visit(worldBound, FIELDS::worldBound);
		visitor.visit(numProportions, FIELDS::numProportions);
		visitor.visit(proportionLevels, FIELDS::proportionLevels);
	}


	void NiRotatingParticles::accept(class FieldVisitor& visitor) {
		NiParticles::accept(visitor);
	}


	void NiSequenceStreamHelper::accept(class FieldVisitor& visitor) {
		NiObjectNET::accept(visitor);
	}


	template<> const auto& NiShadeProperty::get<NiShadeProperty::FIELDS::flags>() {return flags;}
	void NiShadeProperty::accept(class FieldVisitor& visitor) {
		NiProperty::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
	}


	template<> const auto& NiSkinData::get<NiSkinData::FIELDS::skinTransform>() {return skinTransform;}
	template<> const auto& NiSkinData::get<NiSkinData::FIELDS::numBones>() {return numBones;}
	template<> const auto& NiSkinData::get<NiSkinData::FIELDS::skinPartition>() {return skinPartition;}
	template<> const auto& NiSkinData::get<NiSkinData::FIELDS::hasVertexWeights>() {return hasVertexWeights;}
	template<> const auto& NiSkinData::get<NiSkinData::FIELDS::boneList>() {return boneList;}
	void NiSkinData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(skinTransform, FIELDS::skinTransform);
		visitor.visit(numBones, FIELDS::numBones);
		visitor.visit(skinPartition, FIELDS::skinPartition);
		visitor.visit(hasVertexWeights, FIELDS::hasVertexWeights);
		visitor.visit(boneList, FIELDS::boneList);
	}


	template<> const auto& NiSkinInstance::get<NiSkinInstance::FIELDS::data>() {return data;}
	template<> const auto& NiSkinInstance::get<NiSkinInstance::FIELDS::skinPartition>() {return skinPartition;}
	template<> const auto& NiSkinInstance::get<NiSkinInstance::FIELDS::skeletonRoot>() {return skeletonRoot;}
	template<> const auto& NiSkinInstance::get<NiSkinInstance::FIELDS::numBones>() {return numBones;}
	template<> const auto& NiSkinInstance::get<NiSkinInstance::FIELDS::bones>() {return bones;}
	void NiSkinInstance::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(data, FIELDS::data);
		visitor.visit(skinPartition, FIELDS::skinPartition);
		visitor.visit(skeletonRoot, FIELDS::skeletonRoot);
		visitor.visit(numBones, FIELDS::numBones);
		visitor.visit(bones, FIELDS::bones);
	}


	template<> const auto& NiTriShapeSkinController::get<NiTriShapeSkinController::FIELDS::numBones>() {return numBones;}
	template<> const auto& NiTriShapeSkinController::get<NiTriShapeSkinController::FIELDS::vertexCounts>() {return vertexCounts;}
	template<> const auto& NiTriShapeSkinController::get<NiTriShapeSkinController::FIELDS::bones>() {return bones;}
	template<> const auto& NiTriShapeSkinController::get<NiTriShapeSkinController::FIELDS::boneData>() {return boneData;}
	void NiTriShapeSkinController::accept(class FieldVisitor& visitor) {
		NiTimeController::accept(visitor);
		visitor.visit(numBones, FIELDS::numBones);
		visitor.visit(vertexCounts, FIELDS::vertexCounts);
		visitor.visit(bones, FIELDS::bones);
		visitor.visit(boneData, FIELDS::boneData);
	}


	void NiClodSkinInstance::accept(class FieldVisitor& visitor) {
		NiSkinInstance::accept(visitor);
	}


	template<> const auto& NiSkinPartition::get<NiSkinPartition::FIELDS::numSkinPartitionBlocks>() {return numSkinPartitionBlocks;}
	template<> const auto& NiSkinPartition::get<NiSkinPartition::FIELDS::skinPartitionBlocks>() {return skinPartitionBlocks;}
	template<> const auto& NiSkinPartition::get<NiSkinPartition::FIELDS::dataSize>() {return dataSize;}
	template<> const auto& NiSkinPartition::get<NiSkinPartition::FIELDS::vertexSize>() {return vertexSize;}
	template<> const auto& NiSkinPartition::get<NiSkinPartition::FIELDS::vertexDesc>() {return vertexDesc;}
	template<> const auto& NiSkinPartition::get<NiSkinPartition::FIELDS::vertexData>() {return vertexData;}
	template<> const auto& NiSkinPartition::get<NiSkinPartition::FIELDS::partition>() {return partition;}
	void NiSkinPartition::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(numSkinPartitionBlocks, FIELDS::numSkinPartitionBlocks);
		visitor.visit(skinPartitionBlocks, FIELDS::skinPartitionBlocks);
		visitor.visit(dataSize, FIELDS::dataSize);
		visitor.visit(vertexSize, FIELDS::vertexSize);
		visitor.visit(vertexDesc, FIELDS::vertexDesc);
		visitor.visit(vertexData, FIELDS::vertexData);
		visitor.visit(partition, FIELDS::partition);
	}


	void NiTexture::accept(class FieldVisitor& visitor) {
		NiObjectNET::accept(visitor);
	}


	template<> const auto& NiSourceTexture::get<NiSourceTexture::FIELDS::useExternal>() {return useExternal;}
	template<> const auto& NiSourceTexture::get<NiSourceTexture::FIELDS::fileName>() {return fileName;}
	template<> const auto& NiSourceTexture::get<NiSourceTexture::FIELDS::unknownLink>() {return unknownLink;}
	template<> const auto& NiSourceTexture::get<NiSourceTexture::FIELDS::unknownByte>() {return unknownByte;}
	template<> const auto& NiSourceTexture::get<NiSourceTexture::FIELDS::pixelData>() {return pixelData;}
	template<> const auto& NiSourceTexture::get<NiSourceTexture::FIELDS::formatPrefs>() {return formatPrefs;}
	template<> const auto& NiSourceTexture::get<NiSourceTexture::FIELDS::isStatic>() {return isStatic;}
	template<> const auto& NiSourceTexture::get<NiSourceTexture::FIELDS::directRender>() {return directRender;}
	template<> const auto& NiSourceTexture::get<NiSourceTexture::FIELDS::persistRenderData>() {return persistRenderData;}
	void NiSourceTexture::accept(class FieldVisitor& visitor) {
		NiTexture::accept(visitor);
		visitor.visit(useExternal, FIELDS::useExternal);
		visitor.visit(fileName, FIELDS::fileName);
		visitor.visit(unknownLink, FIELDS::unknownLink);
		visitor.visit(unknownByte, FIELDS::unknownByte);
		visitor.visit(pixelData, FIELDS::pixelData);
		visitor.visit(formatPrefs, FIELDS::formatPrefs);
		visitor.visit(isStatic, FIELDS::isStatic);
		visitor.visit(directRender, FIELDS::directRender);
		visitor.visit(persistRenderData, FIELDS::persistRenderData);
	}


	template<> const auto& NiSpecularProperty::get<NiSpecularProperty::FIELDS::flags>() {return flags;}
	void NiSpecularProperty::accept(class FieldVisitor& visitor) {
		NiProperty::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
	}


	template<> const auto& NiSphericalCollider::get<NiSphericalCollider::FIELDS::unknownFloat1>() {return unknownFloat1;}
	template<> const auto& NiSphericalCollider::get<NiSphericalCollider::FIELDS::unknownShort1>() {return unknownShort1;}
	template<> const auto& NiSphericalCollider::get<NiSphericalCollider::FIELDS::unknownFloat2>() {return unknownFloat2;}
	template<> const auto& NiSphericalCollider::get<NiSphericalCollider::FIELDS::unknownShort2>() {return unknownShort2;}
	template<> const auto& NiSphericalCollider::get<NiSphericalCollider::FIELDS::unknownFloat3>() {return unknownFloat3;}
	template<> const auto& NiSphericalCollider::get<NiSphericalCollider::FIELDS::unknownFloat4>() {return unknownFloat4;}
	template<> const auto& NiSphericalCollider::get<NiSphericalCollider::FIELDS::unknownFloat5>() {return unknownFloat5;}
	void NiSphericalCollider::accept(class FieldVisitor& visitor) {
		NiParticleModifier::accept(visitor);
		visitor.visit(unknownFloat1, FIELDS::unknownFloat1);
		visitor.visit(unknownShort1, FIELDS::unknownShort1);
		visitor.visit(unknownFloat2, FIELDS::unknownFloat2);
		visitor.visit(unknownShort2, FIELDS::unknownShort2);
		visitor.visit(unknownFloat3, FIELDS::unknownFloat3);
		visitor.visit(unknownFloat4, FIELDS::unknownFloat4);
		visitor.visit(unknownFloat5, FIELDS::unknownFloat5);
	}


	template<> const auto& NiSpotLight::get<NiSpotLight::FIELDS::outerSpotAngle>() {return outerSpotAngle;}
	template<> const auto& NiSpotLight::get<NiSpotLight::FIELDS::innerSpotAngle>() {return innerSpotAngle;}
	template<> const auto& NiSpotLight::get<NiSpotLight::FIELDS::exponent>() {return exponent;}
	void NiSpotLight::accept(class FieldVisitor& visitor) {
		NiPointLight::accept(visitor);
		visitor.visit(outerSpotAngle, FIELDS::outerSpotAngle);
		visitor.visit(innerSpotAngle, FIELDS::innerSpotAngle);
		visitor.visit(exponent, FIELDS::exponent);
	}


	template<> const auto& NiStencilProperty::get<NiStencilProperty::FIELDS::flags>() {return flags;}
	template<> const auto& NiStencilProperty::get<NiStencilProperty::FIELDS::stencilEnabled>() {return stencilEnabled;}
	template<> const auto& NiStencilProperty::get<NiStencilProperty::FIELDS::stencilFunction>() {return stencilFunction;}
	template<> const auto& NiStencilProperty::get<NiStencilProperty::FIELDS::stencilRef>() {return stencilRef;}
	template<> const auto& NiStencilProperty::get<NiStencilProperty::FIELDS::stencilMask>() {return stencilMask;}
	template<> const auto& NiStencilProperty::get<NiStencilProperty::FIELDS::failAction>() {return failAction;}
	template<> const auto& NiStencilProperty::get<NiStencilProperty::FIELDS::zFailAction>() {return zFailAction;}
	template<> const auto& NiStencilProperty::get<NiStencilProperty::FIELDS::passAction>() {return passAction;}
	template<> const auto& NiStencilProperty::get<NiStencilProperty::FIELDS::drawMode>() {return drawMode;}
	void NiStencilProperty::accept(class FieldVisitor& visitor) {
		NiProperty::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(stencilEnabled, FIELDS::stencilEnabled);
		visitor.visit(stencilFunction, FIELDS::stencilFunction);
		visitor.visit(stencilRef, FIELDS::stencilRef);
		visitor.visit(stencilMask, FIELDS::stencilMask);
		visitor.visit(failAction, FIELDS::failAction);
		visitor.visit(zFailAction, FIELDS::zFailAction);
		visitor.visit(passAction, FIELDS::passAction);
		visitor.visit(drawMode, FIELDS::drawMode);
	}


	template<> const auto& NiStringExtraData::get<NiStringExtraData::FIELDS::bytesRemaining>() {return bytesRemaining;}
	template<> const auto& NiStringExtraData::get<NiStringExtraData::FIELDS::stringData>() {return stringData;}
	void NiStringExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(bytesRemaining, FIELDS::bytesRemaining);
		visitor.visit(stringData, FIELDS::stringData);
	}


	template<> const auto& NiStringPalette::get<NiStringPalette::FIELDS::palette>() {return palette;}
	void NiStringPalette::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(palette, FIELDS::palette);
	}


	template<> const auto& NiStringsExtraData::get<NiStringsExtraData::FIELDS::numStrings>() {return numStrings;}
	template<> const auto& NiStringsExtraData::get<NiStringsExtraData::FIELDS::data>() {return data;}
	void NiStringsExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(numStrings, FIELDS::numStrings);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiTextKeyExtraData::get<NiTextKeyExtraData::FIELDS::unknownInt1>() {return unknownInt1;}
	template<> const auto& NiTextKeyExtraData::get<NiTextKeyExtraData::FIELDS::numTextKeys>() {return numTextKeys;}
	template<> const auto& NiTextKeyExtraData::get<NiTextKeyExtraData::FIELDS::textKeys>() {return textKeys;}
	void NiTextKeyExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(unknownInt1, FIELDS::unknownInt1);
		visitor.visit(numTextKeys, FIELDS::numTextKeys);
		visitor.visit(textKeys, FIELDS::textKeys);
	}


	template<> const auto& NiTextureEffect::get<NiTextureEffect::FIELDS::modelProjectionMatrix>() {return modelProjectionMatrix;}
	template<> const auto& NiTextureEffect::get<NiTextureEffect::FIELDS::modelProjectionTransform>() {return modelProjectionTransform;}
	template<> const auto& NiTextureEffect::get<NiTextureEffect::FIELDS::textureFiltering>() {return textureFiltering;}
	template<> const auto& NiTextureEffect::get<NiTextureEffect::FIELDS::maxAnisotropy>() {return maxAnisotropy;}
	template<> const auto& NiTextureEffect::get<NiTextureEffect::FIELDS::textureClamping>() {return textureClamping;}
	template<> const auto& NiTextureEffect::get<NiTextureEffect::FIELDS::textureType>() {return textureType;}
	template<> const auto& NiTextureEffect::get<NiTextureEffect::FIELDS::coordinateGenerationType>() {return coordinateGenerationType;}
	template<> const auto& NiTextureEffect::get<NiTextureEffect::FIELDS::image>() {return image;}
	template<> const auto& NiTextureEffect::get<NiTextureEffect::FIELDS::sourceTexture>() {return sourceTexture;}
	template<> const auto& NiTextureEffect::get<NiTextureEffect::FIELDS::enablePlane>() {return enablePlane;}
	template<> const auto& NiTextureEffect::get<NiTextureEffect::FIELDS::plane>() {return plane;}
	template<> const auto& NiTextureEffect::get<NiTextureEffect::FIELDS::ps2L>() {return ps2L;}
	template<> const auto& NiTextureEffect::get<NiTextureEffect::FIELDS::ps2K>() {return ps2K;}
	template<> const auto& NiTextureEffect::get<NiTextureEffect::FIELDS::unknownShort>() {return unknownShort;}
	void NiTextureEffect::accept(class FieldVisitor& visitor) {
		NiDynamicEffect::accept(visitor);
		visitor.visit(modelProjectionMatrix, FIELDS::modelProjectionMatrix);
		visitor.visit(modelProjectionTransform, FIELDS::modelProjectionTransform);
		visitor.visit(textureFiltering, FIELDS::textureFiltering);
		visitor.visit(maxAnisotropy, FIELDS::maxAnisotropy);
		visitor.visit(textureClamping, FIELDS::textureClamping);
		visitor.visit(textureType, FIELDS::textureType);
		visitor.visit(coordinateGenerationType, FIELDS::coordinateGenerationType);
		visitor.visit(image, FIELDS::image);
		visitor.visit(sourceTexture, FIELDS::sourceTexture);
		visitor.visit(enablePlane, FIELDS::enablePlane);
		visitor.visit(plane, FIELDS::plane);
		visitor.visit(ps2L, FIELDS::ps2L);
		visitor.visit(ps2K, FIELDS::ps2K);
		visitor.visit(unknownShort, FIELDS::unknownShort);
	}


	template<> const auto& NiTextureModeProperty::get<NiTextureModeProperty::FIELDS::unknownInts>() {return unknownInts;}
	template<> const auto& NiTextureModeProperty::get<NiTextureModeProperty::FIELDS::unknownShort>() {return unknownShort;}
	template<> const auto& NiTextureModeProperty::get<NiTextureModeProperty::FIELDS::ps2L>() {return ps2L;}
	template<> const auto& NiTextureModeProperty::get<NiTextureModeProperty::FIELDS::ps2K>() {return ps2K;}
	void NiTextureModeProperty::accept(class FieldVisitor& visitor) {
		NiProperty::accept(visitor);
		visitor.visit(unknownInts, FIELDS::unknownInts);
		visitor.visit(unknownShort, FIELDS::unknownShort);
		visitor.visit(ps2L, FIELDS::ps2L);
		visitor.visit(ps2K, FIELDS::ps2K);
	}


	template<> const auto& NiImage::get<NiImage::FIELDS::useExternal>() {return useExternal;}
	template<> const auto& NiImage::get<NiImage::FIELDS::fileName>() {return fileName;}
	template<> const auto& NiImage::get<NiImage::FIELDS::imageData>() {return imageData;}
	template<> const auto& NiImage::get<NiImage::FIELDS::unknownInt>() {return unknownInt;}
	template<> const auto& NiImage::get<NiImage::FIELDS::unknownFloat>() {return unknownFloat;}
	void NiImage::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(useExternal, FIELDS::useExternal);
		visitor.visit(fileName, FIELDS::fileName);
		visitor.visit(imageData, FIELDS::imageData);
		visitor.visit(unknownInt, FIELDS::unknownInt);
		visitor.visit(unknownFloat, FIELDS::unknownFloat);
	}


	template<> const auto& NiTextureProperty::get<NiTextureProperty::FIELDS::unknownInts1>() {return unknownInts1;}
	template<> const auto& NiTextureProperty::get<NiTextureProperty::FIELDS::flags>() {return flags;}
	template<> const auto& NiTextureProperty::get<NiTextureProperty::FIELDS::image>() {return image;}
	template<> const auto& NiTextureProperty::get<NiTextureProperty::FIELDS::unknownInts2>() {return unknownInts2;}
	void NiTextureProperty::accept(class FieldVisitor& visitor) {
		NiProperty::accept(visitor);
		visitor.visit(unknownInts1, FIELDS::unknownInts1);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(image, FIELDS::image);
		visitor.visit(unknownInts2, FIELDS::unknownInts2);
	}


	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::flags>() {return flags;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::applyMode>() {return applyMode;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::textureCount>() {return textureCount;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::hasBaseTexture>() {return hasBaseTexture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::baseTexture>() {return baseTexture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::hasDarkTexture>() {return hasDarkTexture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::darkTexture>() {return darkTexture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::hasDetailTexture>() {return hasDetailTexture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::detailTexture>() {return detailTexture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::hasGlossTexture>() {return hasGlossTexture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::glossTexture>() {return glossTexture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::hasGlowTexture>() {return hasGlowTexture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::glowTexture>() {return glowTexture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::hasBumpMapTexture>() {return hasBumpMapTexture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::bumpMapTexture>() {return bumpMapTexture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::bumpMapLumaScale>() {return bumpMapLumaScale;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::bumpMapLumaOffset>() {return bumpMapLumaOffset;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::bumpMapMatrix>() {return bumpMapMatrix;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::hasNormalTexture>() {return hasNormalTexture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::normalTexture>() {return normalTexture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::hasParallaxTexture>() {return hasParallaxTexture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::parallaxTexture>() {return parallaxTexture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::parallaxOffset>() {return parallaxOffset;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::hasDecal0Texture>() {return hasDecal0Texture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::decal0Texture>() {return decal0Texture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::hasDecal1Texture>() {return hasDecal1Texture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::decal1Texture>() {return decal1Texture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::hasDecal2Texture>() {return hasDecal2Texture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::decal2Texture>() {return decal2Texture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::hasDecal3Texture>() {return hasDecal3Texture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::decal3Texture>() {return decal3Texture;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::numShaderTextures>() {return numShaderTextures;}
	template<> const auto& NiTexturingProperty::get<NiTexturingProperty::FIELDS::shaderTextures>() {return shaderTextures;}
	void NiTexturingProperty::accept(class FieldVisitor& visitor) {
		NiProperty::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(applyMode, FIELDS::applyMode);
		visitor.visit(textureCount, FIELDS::textureCount);
		visitor.visit(hasBaseTexture, FIELDS::hasBaseTexture);
		visitor.visit(baseTexture, FIELDS::baseTexture);
		visitor.visit(hasDarkTexture, FIELDS::hasDarkTexture);
		visitor.visit(darkTexture, FIELDS::darkTexture);
		visitor.visit(hasDetailTexture, FIELDS::hasDetailTexture);
		visitor.visit(detailTexture, FIELDS::detailTexture);
		visitor.visit(hasGlossTexture, FIELDS::hasGlossTexture);
		visitor.visit(glossTexture, FIELDS::glossTexture);
		visitor.visit(hasGlowTexture, FIELDS::hasGlowTexture);
		visitor.visit(glowTexture, FIELDS::glowTexture);
		visitor.visit(hasBumpMapTexture, FIELDS::hasBumpMapTexture);
		visitor.visit(bumpMapTexture, FIELDS::bumpMapTexture);
		visitor.visit(bumpMapLumaScale, FIELDS::bumpMapLumaScale);
		visitor.visit(bumpMapLumaOffset, FIELDS::bumpMapLumaOffset);
		visitor.visit(bumpMapMatrix, FIELDS::bumpMapMatrix);
		visitor.visit(hasNormalTexture, FIELDS::hasNormalTexture);
		visitor.visit(normalTexture, FIELDS::normalTexture);
		visitor.visit(hasParallaxTexture, FIELDS::hasParallaxTexture);
		visitor.visit(parallaxTexture, FIELDS::parallaxTexture);
		visitor.visit(parallaxOffset, FIELDS::parallaxOffset);
		visitor.visit(hasDecal0Texture, FIELDS::hasDecal0Texture);
		visitor.visit(decal0Texture, FIELDS::decal0Texture);
		visitor.visit(hasDecal1Texture, FIELDS::hasDecal1Texture);
		visitor.visit(decal1Texture, FIELDS::decal1Texture);
		visitor.visit(hasDecal2Texture, FIELDS::hasDecal2Texture);
		visitor.visit(decal2Texture, FIELDS::decal2Texture);
		visitor.visit(hasDecal3Texture, FIELDS::hasDecal3Texture);
		visitor.visit(decal3Texture, FIELDS::decal3Texture);
		visitor.visit(numShaderTextures, FIELDS::numShaderTextures);
		visitor.visit(shaderTextures, FIELDS::shaderTextures);
	}


	void NiMultiTextureProperty::accept(class FieldVisitor& visitor) {
		NiTexturingProperty::accept(visitor);
	}


	void NiTransformData::accept(class FieldVisitor& visitor) {
		NiKeyframeData::accept(visitor);
	}


	void NiTriShape::accept(class FieldVisitor& visitor) {
		NiTriBasedGeom::accept(visitor);
	}


	template<> const auto& NiTriShapeData::get<NiTriShapeData::FIELDS::numTrianglePoints>() {return numTrianglePoints;}
	template<> const auto& NiTriShapeData::get<NiTriShapeData::FIELDS::hasTriangles>() {return hasTriangles;}
	template<> const auto& NiTriShapeData::get<NiTriShapeData::FIELDS::triangles>() {return triangles;}
	template<> const auto& NiTriShapeData::get<NiTriShapeData::FIELDS::numMatchGroups>() {return numMatchGroups;}
	template<> const auto& NiTriShapeData::get<NiTriShapeData::FIELDS::matchGroups>() {return matchGroups;}
	void NiTriShapeData::accept(class FieldVisitor& visitor) {
		NiTriBasedGeomData::accept(visitor);
		visitor.visit(numTrianglePoints, FIELDS::numTrianglePoints);
		visitor.visit(hasTriangles, FIELDS::hasTriangles);
		visitor.visit(triangles, FIELDS::triangles);
		visitor.visit(numMatchGroups, FIELDS::numMatchGroups);
		visitor.visit(matchGroups, FIELDS::matchGroups);
	}


	void NiTriStrips::accept(class FieldVisitor& visitor) {
		NiTriBasedGeom::accept(visitor);
	}


	template<> const auto& NiTriStripsData::get<NiTriStripsData::FIELDS::numStrips>() {return numStrips;}
	template<> const auto& NiTriStripsData::get<NiTriStripsData::FIELDS::stripLengths>() {return stripLengths;}
	template<> const auto& NiTriStripsData::get<NiTriStripsData::FIELDS::hasPoints>() {return hasPoints;}
	template<> const auto& NiTriStripsData::get<NiTriStripsData::FIELDS::points>() {return points;}
	void NiTriStripsData::accept(class FieldVisitor& visitor) {
		NiTriBasedGeomData::accept(visitor);
		visitor.visit(numStrips, FIELDS::numStrips);
		visitor.visit(stripLengths, FIELDS::stripLengths);
		visitor.visit(hasPoints, FIELDS::hasPoints);
		visitor.visit(points, FIELDS::points);
	}


	template<> const auto& NiEnvMappedTriShape::get<NiEnvMappedTriShape::FIELDS::unknown1>() {return unknown1;}
	template<> const auto& NiEnvMappedTriShape::get<NiEnvMappedTriShape::FIELDS::unknownMatrix>() {return unknownMatrix;}
	template<> const auto& NiEnvMappedTriShape::get<NiEnvMappedTriShape::FIELDS::numChildren>() {return numChildren;}
	template<> const auto& NiEnvMappedTriShape::get<NiEnvMappedTriShape::FIELDS::children>() {return children;}
	template<> const auto& NiEnvMappedTriShape::get<NiEnvMappedTriShape::FIELDS::child2>() {return child2;}
	template<> const auto& NiEnvMappedTriShape::get<NiEnvMappedTriShape::FIELDS::child3>() {return child3;}
	void NiEnvMappedTriShape::accept(class FieldVisitor& visitor) {
		NiObjectNET::accept(visitor);
		visitor.visit(unknown1, FIELDS::unknown1);
		visitor.visit(unknownMatrix, FIELDS::unknownMatrix);
		visitor.visit(numChildren, FIELDS::numChildren);
		visitor.visit(children, FIELDS::children);
		visitor.visit(child2, FIELDS::child2);
		visitor.visit(child3, FIELDS::child3);
	}


	void NiEnvMappedTriShapeData::accept(class FieldVisitor& visitor) {
		NiTriShapeData::accept(visitor);
	}


	template<> const auto& NiBezierTriangle4::get<NiBezierTriangle4::FIELDS::unknown1>() {return unknown1;}
	template<> const auto& NiBezierTriangle4::get<NiBezierTriangle4::FIELDS::unknown2>() {return unknown2;}
	template<> const auto& NiBezierTriangle4::get<NiBezierTriangle4::FIELDS::matrix>() {return matrix;}
	template<> const auto& NiBezierTriangle4::get<NiBezierTriangle4::FIELDS::vector1>() {return vector1;}
	template<> const auto& NiBezierTriangle4::get<NiBezierTriangle4::FIELDS::vector2>() {return vector2;}
	template<> const auto& NiBezierTriangle4::get<NiBezierTriangle4::FIELDS::unknown3>() {return unknown3;}
	template<> const auto& NiBezierTriangle4::get<NiBezierTriangle4::FIELDS::unknown4>() {return unknown4;}
	template<> const auto& NiBezierTriangle4::get<NiBezierTriangle4::FIELDS::unknown5>() {return unknown5;}
	template<> const auto& NiBezierTriangle4::get<NiBezierTriangle4::FIELDS::unknown6>() {return unknown6;}
	void NiBezierTriangle4::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(unknown1, FIELDS::unknown1);
		visitor.visit(unknown2, FIELDS::unknown2);
		visitor.visit(matrix, FIELDS::matrix);
		visitor.visit(vector1, FIELDS::vector1);
		visitor.visit(vector2, FIELDS::vector2);
		visitor.visit(unknown3, FIELDS::unknown3);
		visitor.visit(unknown4, FIELDS::unknown4);
		visitor.visit(unknown5, FIELDS::unknown5);
		visitor.visit(unknown6, FIELDS::unknown6);
	}


	template<> const auto& NiBezierMesh::get<NiBezierMesh::FIELDS::numBezierTriangles>() {return numBezierTriangles;}
	template<> const auto& NiBezierMesh::get<NiBezierMesh::FIELDS::bezierTriangle>() {return bezierTriangle;}
	template<> const auto& NiBezierMesh::get<NiBezierMesh::FIELDS::unknown3>() {return unknown3;}
	template<> const auto& NiBezierMesh::get<NiBezierMesh::FIELDS::count1>() {return count1;}
	template<> const auto& NiBezierMesh::get<NiBezierMesh::FIELDS::unknown4>() {return unknown4;}
	template<> const auto& NiBezierMesh::get<NiBezierMesh::FIELDS::points1>() {return points1;}
	template<> const auto& NiBezierMesh::get<NiBezierMesh::FIELDS::unknown5>() {return unknown5;}
	template<> const auto& NiBezierMesh::get<NiBezierMesh::FIELDS::points2>() {return points2;}
	template<> const auto& NiBezierMesh::get<NiBezierMesh::FIELDS::unknown6>() {return unknown6;}
	template<> const auto& NiBezierMesh::get<NiBezierMesh::FIELDS::count2>() {return count2;}
	template<> const auto& NiBezierMesh::get<NiBezierMesh::FIELDS::data2>() {return data2;}
	void NiBezierMesh::accept(class FieldVisitor& visitor) {
		NiAVObject::accept(visitor);
		visitor.visit(numBezierTriangles, FIELDS::numBezierTriangles);
		visitor.visit(bezierTriangle, FIELDS::bezierTriangle);
		visitor.visit(unknown3, FIELDS::unknown3);
		visitor.visit(count1, FIELDS::count1);
		visitor.visit(unknown4, FIELDS::unknown4);
		visitor.visit(points1, FIELDS::points1);
		visitor.visit(unknown5, FIELDS::unknown5);
		visitor.visit(points2, FIELDS::points2);
		visitor.visit(unknown6, FIELDS::unknown6);
		visitor.visit(count2, FIELDS::count2);
		visitor.visit(data2, FIELDS::data2);
	}


	void NiClod::accept(class FieldVisitor& visitor) {
		NiTriBasedGeom::accept(visitor);
	}


	template<> const auto& NiClodData::get<NiClodData::FIELDS::unknownShorts>() {return unknownShorts;}
	template<> const auto& NiClodData::get<NiClodData::FIELDS::unknownCount1>() {return unknownCount1;}
	template<> const auto& NiClodData::get<NiClodData::FIELDS::unknownCount2>() {return unknownCount2;}
	template<> const auto& NiClodData::get<NiClodData::FIELDS::unknownCount3>() {return unknownCount3;}
	template<> const auto& NiClodData::get<NiClodData::FIELDS::unknownFloat>() {return unknownFloat;}
	template<> const auto& NiClodData::get<NiClodData::FIELDS::unknownShort>() {return unknownShort;}
	template<> const auto& NiClodData::get<NiClodData::FIELDS::unknownClodShorts1>() {return unknownClodShorts1;}
	template<> const auto& NiClodData::get<NiClodData::FIELDS::unknownClodShorts2>() {return unknownClodShorts2;}
	template<> const auto& NiClodData::get<NiClodData::FIELDS::unknownClodShorts3>() {return unknownClodShorts3;}
	void NiClodData::accept(class FieldVisitor& visitor) {
		NiTriBasedGeomData::accept(visitor);
		visitor.visit(unknownShorts, FIELDS::unknownShorts);
		visitor.visit(unknownCount1, FIELDS::unknownCount1);
		visitor.visit(unknownCount2, FIELDS::unknownCount2);
		visitor.visit(unknownCount3, FIELDS::unknownCount3);
		visitor.visit(unknownFloat, FIELDS::unknownFloat);
		visitor.visit(unknownShort, FIELDS::unknownShort);
		visitor.visit(unknownClodShorts1, FIELDS::unknownClodShorts1);
		visitor.visit(unknownClodShorts2, FIELDS::unknownClodShorts2);
		visitor.visit(unknownClodShorts3, FIELDS::unknownClodShorts3);
	}


	template<> const auto& NiUVController::get<NiUVController::FIELDS::unknownShort>() {return unknownShort;}
	template<> const auto& NiUVController::get<NiUVController::FIELDS::data>() {return data;}
	void NiUVController::accept(class FieldVisitor& visitor) {
		NiTimeController::accept(visitor);
		visitor.visit(unknownShort, FIELDS::unknownShort);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiUVData::get<NiUVData::FIELDS::uvGroups>() {return uvGroups;}
	void NiUVData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(uvGroups, FIELDS::uvGroups);
	}


	template<> const auto& NiVectorExtraData::get<NiVectorExtraData::FIELDS::vectorData>() {return vectorData;}
	void NiVectorExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(vectorData, FIELDS::vectorData);
	}


	template<> const auto& NiVertexColorProperty::get<NiVertexColorProperty::FIELDS::flags>() {return flags;}
	template<> const auto& NiVertexColorProperty::get<NiVertexColorProperty::FIELDS::vertexMode>() {return vertexMode;}
	template<> const auto& NiVertexColorProperty::get<NiVertexColorProperty::FIELDS::lightingMode>() {return lightingMode;}
	void NiVertexColorProperty::accept(class FieldVisitor& visitor) {
		NiProperty::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(vertexMode, FIELDS::vertexMode);
		visitor.visit(lightingMode, FIELDS::lightingMode);
	}


	template<> const auto& NiVertWeightsExtraData::get<NiVertWeightsExtraData::FIELDS::numBytes>() {return numBytes;}
	template<> const auto& NiVertWeightsExtraData::get<NiVertWeightsExtraData::FIELDS::numVertices>() {return numVertices;}
	template<> const auto& NiVertWeightsExtraData::get<NiVertWeightsExtraData::FIELDS::weight>() {return weight;}
	void NiVertWeightsExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(numBytes, FIELDS::numBytes);
		visitor.visit(numVertices, FIELDS::numVertices);
		visitor.visit(weight, FIELDS::weight);
	}


	template<> const auto& NiVisData::get<NiVisData::FIELDS::numKeys>() {return numKeys;}
	template<> const auto& NiVisData::get<NiVisData::FIELDS::keys>() {return keys;}
	void NiVisData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(numKeys, FIELDS::numKeys);
		visitor.visit(keys, FIELDS::keys);
	}


	template<> const auto& NiWireframeProperty::get<NiWireframeProperty::FIELDS::flags>() {return flags;}
	void NiWireframeProperty::accept(class FieldVisitor& visitor) {
		NiProperty::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
	}


	template<> const auto& NiZBufferProperty::get<NiZBufferProperty::FIELDS::flags>() {return flags;}
	template<> const auto& NiZBufferProperty::get<NiZBufferProperty::FIELDS::function>() {return function;}
	void NiZBufferProperty::accept(class FieldVisitor& visitor) {
		NiProperty::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(function, FIELDS::function);
	}


	void RootCollisionNode::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
	}


	template<> const auto& NiRawImageData::get<NiRawImageData::FIELDS::width>() {return width;}
	template<> const auto& NiRawImageData::get<NiRawImageData::FIELDS::height>() {return height;}
	template<> const auto& NiRawImageData::get<NiRawImageData::FIELDS::imageType>() {return imageType;}
	template<> const auto& NiRawImageData::get<NiRawImageData::FIELDS::rgbImageData>() {return rgbImageData;}
	template<> const auto& NiRawImageData::get<NiRawImageData::FIELDS::rgbaImageData>() {return rgbaImageData;}
	void NiRawImageData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(width, FIELDS::width);
		visitor.visit(height, FIELDS::height);
		visitor.visit(imageType, FIELDS::imageType);
		visitor.visit(rgbImageData, FIELDS::rgbImageData);
		visitor.visit(rgbaImageData, FIELDS::rgbaImageData);
	}


	void NiAccumulator::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
	}


	template<> const auto& NiSortAdjustNode::get<NiSortAdjustNode::FIELDS::sortingMode>() {return sortingMode;}
	template<> const auto& NiSortAdjustNode::get<NiSortAdjustNode::FIELDS::accumulator>() {return accumulator;}
	void NiSortAdjustNode::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
		visitor.visit(sortingMode, FIELDS::sortingMode);
		visitor.visit(accumulator, FIELDS::accumulator);
	}


	void NiSourceCubeMap::accept(class FieldVisitor& visitor) {
		NiSourceTexture::accept(visitor);
	}


	template<> const auto& NiPhysXProp::get<NiPhysXProp::FIELDS::physxToWorldScale>() {return physxToWorldScale;}
	template<> const auto& NiPhysXProp::get<NiPhysXProp::FIELDS::numSources>() {return numSources;}
	template<> const auto& NiPhysXProp::get<NiPhysXProp::FIELDS::sources>() {return sources;}
	template<> const auto& NiPhysXProp::get<NiPhysXProp::FIELDS::numDests>() {return numDests;}
	template<> const auto& NiPhysXProp::get<NiPhysXProp::FIELDS::dests>() {return dests;}
	template<> const auto& NiPhysXProp::get<NiPhysXProp::FIELDS::numModifiedMeshes>() {return numModifiedMeshes;}
	template<> const auto& NiPhysXProp::get<NiPhysXProp::FIELDS::modifiedMeshes>() {return modifiedMeshes;}
	template<> const auto& NiPhysXProp::get<NiPhysXProp::FIELDS::tempName>() {return tempName;}
	template<> const auto& NiPhysXProp::get<NiPhysXProp::FIELDS::keepMeshes>() {return keepMeshes;}
	template<> const auto& NiPhysXProp::get<NiPhysXProp::FIELDS::propDescription>() {return propDescription;}
	void NiPhysXProp::accept(class FieldVisitor& visitor) {
		NiObjectNET::accept(visitor);
		visitor.visit(physxToWorldScale, FIELDS::physxToWorldScale);
		visitor.visit(numSources, FIELDS::numSources);
		visitor.visit(sources, FIELDS::sources);
		visitor.visit(numDests, FIELDS::numDests);
		visitor.visit(dests, FIELDS::dests);
		visitor.visit(numModifiedMeshes, FIELDS::numModifiedMeshes);
		visitor.visit(modifiedMeshes, FIELDS::modifiedMeshes);
		visitor.visit(tempName, FIELDS::tempName);
		visitor.visit(keepMeshes, FIELDS::keepMeshes);
		visitor.visit(propDescription, FIELDS::propDescription);
	}


	template<> const auto& NiPhysXPropDesc::get<NiPhysXPropDesc::FIELDS::numActors>() {return numActors;}
	template<> const auto& NiPhysXPropDesc::get<NiPhysXPropDesc::FIELDS::actors>() {return actors;}
	template<> const auto& NiPhysXPropDesc::get<NiPhysXPropDesc::FIELDS::numJoints>() {return numJoints;}
	template<> const auto& NiPhysXPropDesc::get<NiPhysXPropDesc::FIELDS::joints>() {return joints;}
	template<> const auto& NiPhysXPropDesc::get<NiPhysXPropDesc::FIELDS::numClothes>() {return numClothes;}
	template<> const auto& NiPhysXPropDesc::get<NiPhysXPropDesc::FIELDS::clothes>() {return clothes;}
	template<> const auto& NiPhysXPropDesc::get<NiPhysXPropDesc::FIELDS::numMaterials>() {return numMaterials;}
	template<> const auto& NiPhysXPropDesc::get<NiPhysXPropDesc::FIELDS::materials>() {return materials;}
	template<> const auto& NiPhysXPropDesc::get<NiPhysXPropDesc::FIELDS::numStates>() {return numStates;}
	template<> const auto& NiPhysXPropDesc::get<NiPhysXPropDesc::FIELDS::numStateNames>() {return numStateNames;}
	template<> const auto& NiPhysXPropDesc::get<NiPhysXPropDesc::FIELDS::stateNames>() {return stateNames;}
	template<> const auto& NiPhysXPropDesc::get<NiPhysXPropDesc::FIELDS::flags>() {return flags;}
	void NiPhysXPropDesc::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(numActors, FIELDS::numActors);
		visitor.visit(actors, FIELDS::actors);
		visitor.visit(numJoints, FIELDS::numJoints);
		visitor.visit(joints, FIELDS::joints);
		visitor.visit(numClothes, FIELDS::numClothes);
		visitor.visit(clothes, FIELDS::clothes);
		visitor.visit(numMaterials, FIELDS::numMaterials);
		visitor.visit(materials, FIELDS::materials);
		visitor.visit(numStates, FIELDS::numStates);
		visitor.visit(numStateNames, FIELDS::numStateNames);
		visitor.visit(stateNames, FIELDS::stateNames);
		visitor.visit(flags, FIELDS::flags);
	}


	template<> const auto& NiPhysXActorDesc::get<NiPhysXActorDesc::FIELDS::actorName>() {return actorName;}
	template<> const auto& NiPhysXActorDesc::get<NiPhysXActorDesc::FIELDS::numPoses>() {return numPoses;}
	template<> const auto& NiPhysXActorDesc::get<NiPhysXActorDesc::FIELDS::poses>() {return poses;}
	template<> const auto& NiPhysXActorDesc::get<NiPhysXActorDesc::FIELDS::bodyDesc>() {return bodyDesc;}
	template<> const auto& NiPhysXActorDesc::get<NiPhysXActorDesc::FIELDS::density>() {return density;}
	template<> const auto& NiPhysXActorDesc::get<NiPhysXActorDesc::FIELDS::actorFlags>() {return actorFlags;}
	template<> const auto& NiPhysXActorDesc::get<NiPhysXActorDesc::FIELDS::actorGroup>() {return actorGroup;}
	template<> const auto& NiPhysXActorDesc::get<NiPhysXActorDesc::FIELDS::dominanceGroup>() {return dominanceGroup;}
	template<> const auto& NiPhysXActorDesc::get<NiPhysXActorDesc::FIELDS::contactReportFlags>() {return contactReportFlags;}
	template<> const auto& NiPhysXActorDesc::get<NiPhysXActorDesc::FIELDS::forceFieldMaterial>() {return forceFieldMaterial;}
	template<> const auto& NiPhysXActorDesc::get<NiPhysXActorDesc::FIELDS::dummy>() {return dummy;}
	template<> const auto& NiPhysXActorDesc::get<NiPhysXActorDesc::FIELDS::numShapeDescs>() {return numShapeDescs;}
	template<> const auto& NiPhysXActorDesc::get<NiPhysXActorDesc::FIELDS::shapeDescriptions>() {return shapeDescriptions;}
	template<> const auto& NiPhysXActorDesc::get<NiPhysXActorDesc::FIELDS::actorParent>() {return actorParent;}
	template<> const auto& NiPhysXActorDesc::get<NiPhysXActorDesc::FIELDS::source>() {return source;}
	template<> const auto& NiPhysXActorDesc::get<NiPhysXActorDesc::FIELDS::dest>() {return dest;}
	void NiPhysXActorDesc::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(actorName, FIELDS::actorName);
		visitor.visit(numPoses, FIELDS::numPoses);
		visitor.visit(poses, FIELDS::poses);
		visitor.visit(bodyDesc, FIELDS::bodyDesc);
		visitor.visit(density, FIELDS::density);
		visitor.visit(actorFlags, FIELDS::actorFlags);
		visitor.visit(actorGroup, FIELDS::actorGroup);
		visitor.visit(dominanceGroup, FIELDS::dominanceGroup);
		visitor.visit(contactReportFlags, FIELDS::contactReportFlags);
		visitor.visit(forceFieldMaterial, FIELDS::forceFieldMaterial);
		visitor.visit(dummy, FIELDS::dummy);
		visitor.visit(numShapeDescs, FIELDS::numShapeDescs);
		visitor.visit(shapeDescriptions, FIELDS::shapeDescriptions);
		visitor.visit(actorParent, FIELDS::actorParent);
		visitor.visit(source, FIELDS::source);
		visitor.visit(dest, FIELDS::dest);
	}


	template<> const auto& NiPhysXBodyDesc::get<NiPhysXBodyDesc::FIELDS::localPose>() {return localPose;}
	template<> const auto& NiPhysXBodyDesc::get<NiPhysXBodyDesc::FIELDS::spaceInertia>() {return spaceInertia;}
	template<> const auto& NiPhysXBodyDesc::get<NiPhysXBodyDesc::FIELDS::mass>() {return mass;}
	template<> const auto& NiPhysXBodyDesc::get<NiPhysXBodyDesc::FIELDS::numVels>() {return numVels;}
	template<> const auto& NiPhysXBodyDesc::get<NiPhysXBodyDesc::FIELDS::vels>() {return vels;}
	template<> const auto& NiPhysXBodyDesc::get<NiPhysXBodyDesc::FIELDS::wakeUpCounter>() {return wakeUpCounter;}
	template<> const auto& NiPhysXBodyDesc::get<NiPhysXBodyDesc::FIELDS::linearDamping>() {return linearDamping;}
	template<> const auto& NiPhysXBodyDesc::get<NiPhysXBodyDesc::FIELDS::angularDamping>() {return angularDamping;}
	template<> const auto& NiPhysXBodyDesc::get<NiPhysXBodyDesc::FIELDS::maxAngularVelocity>() {return maxAngularVelocity;}
	template<> const auto& NiPhysXBodyDesc::get<NiPhysXBodyDesc::FIELDS::ccdMotionThreshold>() {return ccdMotionThreshold;}
	template<> const auto& NiPhysXBodyDesc::get<NiPhysXBodyDesc::FIELDS::flags>() {return flags;}
	template<> const auto& NiPhysXBodyDesc::get<NiPhysXBodyDesc::FIELDS::sleepLinearVelocity>() {return sleepLinearVelocity;}
	template<> const auto& NiPhysXBodyDesc::get<NiPhysXBodyDesc::FIELDS::sleepAngularVelocity>() {return sleepAngularVelocity;}
	template<> const auto& NiPhysXBodyDesc::get<NiPhysXBodyDesc::FIELDS::solverIterationCount>() {return solverIterationCount;}
	template<> const auto& NiPhysXBodyDesc::get<NiPhysXBodyDesc::FIELDS::sleepEnergyThreshold>() {return sleepEnergyThreshold;}
	template<> const auto& NiPhysXBodyDesc::get<NiPhysXBodyDesc::FIELDS::sleepDamping>() {return sleepDamping;}
	template<> const auto& NiPhysXBodyDesc::get<NiPhysXBodyDesc::FIELDS::contactReportThreshold>() {return contactReportThreshold;}
	void NiPhysXBodyDesc::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(localPose, FIELDS::localPose);
		visitor.visit(spaceInertia, FIELDS::spaceInertia);
		visitor.visit(mass, FIELDS::mass);
		visitor.visit(numVels, FIELDS::numVels);
		visitor.visit(vels, FIELDS::vels);
		visitor.visit(wakeUpCounter, FIELDS::wakeUpCounter);
		visitor.visit(linearDamping, FIELDS::linearDamping);
		visitor.visit(angularDamping, FIELDS::angularDamping);
		visitor.visit(maxAngularVelocity, FIELDS::maxAngularVelocity);
		visitor.visit(ccdMotionThreshold, FIELDS::ccdMotionThreshold);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(sleepLinearVelocity, FIELDS::sleepLinearVelocity);
		visitor.visit(sleepAngularVelocity, FIELDS::sleepAngularVelocity);
		visitor.visit(solverIterationCount, FIELDS::solverIterationCount);
		visitor.visit(sleepEnergyThreshold, FIELDS::sleepEnergyThreshold);
		visitor.visit(sleepDamping, FIELDS::sleepDamping);
		visitor.visit(contactReportThreshold, FIELDS::contactReportThreshold);
	}


	template<> const auto& NiPhysXJointDesc::get<NiPhysXJointDesc::FIELDS::jointType>() {return jointType;}
	template<> const auto& NiPhysXJointDesc::get<NiPhysXJointDesc::FIELDS::jointName>() {return jointName;}
	template<> const auto& NiPhysXJointDesc::get<NiPhysXJointDesc::FIELDS::actors>() {return actors;}
	template<> const auto& NiPhysXJointDesc::get<NiPhysXJointDesc::FIELDS::maxForce>() {return maxForce;}
	template<> const auto& NiPhysXJointDesc::get<NiPhysXJointDesc::FIELDS::maxTorque>() {return maxTorque;}
	template<> const auto& NiPhysXJointDesc::get<NiPhysXJointDesc::FIELDS::solverExtrapolationFactor>() {return solverExtrapolationFactor;}
	template<> const auto& NiPhysXJointDesc::get<NiPhysXJointDesc::FIELDS::useAccelerationSpring>() {return useAccelerationSpring;}
	template<> const auto& NiPhysXJointDesc::get<NiPhysXJointDesc::FIELDS::jointFlags>() {return jointFlags;}
	template<> const auto& NiPhysXJointDesc::get<NiPhysXJointDesc::FIELDS::limitPoint>() {return limitPoint;}
	template<> const auto& NiPhysXJointDesc::get<NiPhysXJointDesc::FIELDS::numLimits>() {return numLimits;}
	template<> const auto& NiPhysXJointDesc::get<NiPhysXJointDesc::FIELDS::limits>() {return limits;}
	void NiPhysXJointDesc::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(jointType, FIELDS::jointType);
		visitor.visit(jointName, FIELDS::jointName);
		visitor.visit(actors, FIELDS::actors);
		visitor.visit(maxForce, FIELDS::maxForce);
		visitor.visit(maxTorque, FIELDS::maxTorque);
		visitor.visit(solverExtrapolationFactor, FIELDS::solverExtrapolationFactor);
		visitor.visit(useAccelerationSpring, FIELDS::useAccelerationSpring);
		visitor.visit(jointFlags, FIELDS::jointFlags);
		visitor.visit(limitPoint, FIELDS::limitPoint);
		visitor.visit(numLimits, FIELDS::numLimits);
		visitor.visit(limits, FIELDS::limits);
	}


	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::xMotion>() {return xMotion;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::yMotion>() {return yMotion;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::zMotion>() {return zMotion;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::swing1Motion>() {return swing1Motion;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::swing2Motion>() {return swing2Motion;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::twistMotion>() {return twistMotion;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::linearLimit>() {return linearLimit;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::swing1Limit>() {return swing1Limit;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::swing2Limit>() {return swing2Limit;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::twistLowLimit>() {return twistLowLimit;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::twistHighLimit>() {return twistHighLimit;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::xDrive>() {return xDrive;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::yDrive>() {return yDrive;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::zDrive>() {return zDrive;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::swingDrive>() {return swingDrive;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::twistDrive>() {return twistDrive;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::slerpDrive>() {return slerpDrive;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::drivePosition>() {return drivePosition;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::driveOrientation>() {return driveOrientation;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::driveLinearVelocity>() {return driveLinearVelocity;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::driveAngularVelocity>() {return driveAngularVelocity;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::projectionMode>() {return projectionMode;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::projectionDistance>() {return projectionDistance;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::projectionAngle>() {return projectionAngle;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::gearRatio>() {return gearRatio;}
	template<> const auto& NiPhysXD6JointDesc::get<NiPhysXD6JointDesc::FIELDS::flags>() {return flags;}
	void NiPhysXD6JointDesc::accept(class FieldVisitor& visitor) {
		NiPhysXJointDesc::accept(visitor);
		visitor.visit(xMotion, FIELDS::xMotion);
		visitor.visit(yMotion, FIELDS::yMotion);
		visitor.visit(zMotion, FIELDS::zMotion);
		visitor.visit(swing1Motion, FIELDS::swing1Motion);
		visitor.visit(swing2Motion, FIELDS::swing2Motion);
		visitor.visit(twistMotion, FIELDS::twistMotion);
		visitor.visit(linearLimit, FIELDS::linearLimit);
		visitor.visit(swing1Limit, FIELDS::swing1Limit);
		visitor.visit(swing2Limit, FIELDS::swing2Limit);
		visitor.visit(twistLowLimit, FIELDS::twistLowLimit);
		visitor.visit(twistHighLimit, FIELDS::twistHighLimit);
		visitor.visit(xDrive, FIELDS::xDrive);
		visitor.visit(yDrive, FIELDS::yDrive);
		visitor.visit(zDrive, FIELDS::zDrive);
		visitor.visit(swingDrive, FIELDS::swingDrive);
		visitor.visit(twistDrive, FIELDS::twistDrive);
		visitor.visit(slerpDrive, FIELDS::slerpDrive);
		visitor.visit(drivePosition, FIELDS::drivePosition);
		visitor.visit(driveOrientation, FIELDS::driveOrientation);
		visitor.visit(driveLinearVelocity, FIELDS::driveLinearVelocity);
		visitor.visit(driveAngularVelocity, FIELDS::driveAngularVelocity);
		visitor.visit(projectionMode, FIELDS::projectionMode);
		visitor.visit(projectionDistance, FIELDS::projectionDistance);
		visitor.visit(projectionAngle, FIELDS::projectionAngle);
		visitor.visit(gearRatio, FIELDS::gearRatio);
		visitor.visit(flags, FIELDS::flags);
	}


	template<> const auto& NiPhysXShapeDesc::get<NiPhysXShapeDesc::FIELDS::shapeType>() {return shapeType;}
	template<> const auto& NiPhysXShapeDesc::get<NiPhysXShapeDesc::FIELDS::localPose>() {return localPose;}
	template<> const auto& NiPhysXShapeDesc::get<NiPhysXShapeDesc::FIELDS::shapeFlags>() {return shapeFlags;}
	template<> const auto& NiPhysXShapeDesc::get<NiPhysXShapeDesc::FIELDS::collisionGroup>() {return collisionGroup;}
	template<> const auto& NiPhysXShapeDesc::get<NiPhysXShapeDesc::FIELDS::materialIndex>() {return materialIndex;}
	template<> const auto& NiPhysXShapeDesc::get<NiPhysXShapeDesc::FIELDS::density>() {return density;}
	template<> const auto& NiPhysXShapeDesc::get<NiPhysXShapeDesc::FIELDS::mass>() {return mass;}
	template<> const auto& NiPhysXShapeDesc::get<NiPhysXShapeDesc::FIELDS::skinWidth>() {return skinWidth;}
	template<> const auto& NiPhysXShapeDesc::get<NiPhysXShapeDesc::FIELDS::shapeName>() {return shapeName;}
	template<> const auto& NiPhysXShapeDesc::get<NiPhysXShapeDesc::FIELDS::non_interactingCompartmentTypes>() {return non_interactingCompartmentTypes;}
	template<> const auto& NiPhysXShapeDesc::get<NiPhysXShapeDesc::FIELDS::collisionBits>() {return collisionBits;}
	template<> const auto& NiPhysXShapeDesc::get<NiPhysXShapeDesc::FIELDS::plane>() {return plane;}
	template<> const auto& NiPhysXShapeDesc::get<NiPhysXShapeDesc::FIELDS::sphereRadius>() {return sphereRadius;}
	template<> const auto& NiPhysXShapeDesc::get<NiPhysXShapeDesc::FIELDS::boxHalfExtents>() {return boxHalfExtents;}
	template<> const auto& NiPhysXShapeDesc::get<NiPhysXShapeDesc::FIELDS::capsule>() {return capsule;}
	template<> const auto& NiPhysXShapeDesc::get<NiPhysXShapeDesc::FIELDS::mesh>() {return mesh;}
	void NiPhysXShapeDesc::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(shapeType, FIELDS::shapeType);
		visitor.visit(localPose, FIELDS::localPose);
		visitor.visit(shapeFlags, FIELDS::shapeFlags);
		visitor.visit(collisionGroup, FIELDS::collisionGroup);
		visitor.visit(materialIndex, FIELDS::materialIndex);
		visitor.visit(density, FIELDS::density);
		visitor.visit(mass, FIELDS::mass);
		visitor.visit(skinWidth, FIELDS::skinWidth);
		visitor.visit(shapeName, FIELDS::shapeName);
		visitor.visit(non_interactingCompartmentTypes, FIELDS::non_interactingCompartmentTypes);
		visitor.visit(collisionBits, FIELDS::collisionBits);
		visitor.visit(plane, FIELDS::plane);
		visitor.visit(sphereRadius, FIELDS::sphereRadius);
		visitor.visit(boxHalfExtents, FIELDS::boxHalfExtents);
		visitor.visit(capsule, FIELDS::capsule);
		visitor.visit(mesh, FIELDS::mesh);
	}


	template<> const auto& NiPhysXMeshDesc::get<NiPhysXMeshDesc::FIELDS::isConvex>() {return isConvex;}
	template<> const auto& NiPhysXMeshDesc::get<NiPhysXMeshDesc::FIELDS::meshName>() {return meshName;}
	template<> const auto& NiPhysXMeshDesc::get<NiPhysXMeshDesc::FIELDS::meshData>() {return meshData;}
	template<> const auto& NiPhysXMeshDesc::get<NiPhysXMeshDesc::FIELDS::meshSize>() {return meshSize;}
	template<> const auto& NiPhysXMeshDesc::get<NiPhysXMeshDesc::FIELDS::meshFlags>() {return meshFlags;}
	template<> const auto& NiPhysXMeshDesc::get<NiPhysXMeshDesc::FIELDS::meshPagingMode>() {return meshPagingMode;}
	template<> const auto& NiPhysXMeshDesc::get<NiPhysXMeshDesc::FIELDS::isHardware>() {return isHardware;}
	template<> const auto& NiPhysXMeshDesc::get<NiPhysXMeshDesc::FIELDS::flags>() {return flags;}
	void NiPhysXMeshDesc::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(isConvex, FIELDS::isConvex);
		visitor.visit(meshName, FIELDS::meshName);
		visitor.visit(meshData, FIELDS::meshData);
		visitor.visit(meshSize, FIELDS::meshSize);
		visitor.visit(meshFlags, FIELDS::meshFlags);
		visitor.visit(meshPagingMode, FIELDS::meshPagingMode);
		visitor.visit(isHardware, FIELDS::isHardware);
		visitor.visit(flags, FIELDS::flags);
	}


	template<> const auto& NiPhysXMaterialDesc::get<NiPhysXMaterialDesc::FIELDS::index>() {return index;}
	template<> const auto& NiPhysXMaterialDesc::get<NiPhysXMaterialDesc::FIELDS::numStates>() {return numStates;}
	template<> const auto& NiPhysXMaterialDesc::get<NiPhysXMaterialDesc::FIELDS::materialDescs>() {return materialDescs;}
	void NiPhysXMaterialDesc::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(index, FIELDS::index);
		visitor.visit(numStates, FIELDS::numStates);
		visitor.visit(materialDescs, FIELDS::materialDescs);
	}


	template<> const auto& NiPhysXDest::get<NiPhysXDest::FIELDS::active>() {return active;}
	template<> const auto& NiPhysXDest::get<NiPhysXDest::FIELDS::interpolate>() {return interpolate;}
	void NiPhysXDest::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(active, FIELDS::active);
		visitor.visit(interpolate, FIELDS::interpolate);
	}


	void NiPhysXRigidBodyDest::accept(class FieldVisitor& visitor) {
		NiPhysXDest::accept(visitor);
	}


	template<> const auto& NiPhysXTransformDest::get<NiPhysXTransformDest::FIELDS::target>() {return target;}
	void NiPhysXTransformDest::accept(class FieldVisitor& visitor) {
		NiPhysXRigidBodyDest::accept(visitor);
		visitor.visit(target, FIELDS::target);
	}


	template<> const auto& NiPhysXSrc::get<NiPhysXSrc::FIELDS::active>() {return active;}
	template<> const auto& NiPhysXSrc::get<NiPhysXSrc::FIELDS::interpolate>() {return interpolate;}
	void NiPhysXSrc::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(active, FIELDS::active);
		visitor.visit(interpolate, FIELDS::interpolate);
	}


	template<> const auto& NiPhysXRigidBodySrc::get<NiPhysXRigidBodySrc::FIELDS::source>() {return source;}
	void NiPhysXRigidBodySrc::accept(class FieldVisitor& visitor) {
		NiPhysXSrc::accept(visitor);
		visitor.visit(source, FIELDS::source);
	}


	void NiPhysXKinematicSrc::accept(class FieldVisitor& visitor) {
		NiPhysXRigidBodySrc::accept(visitor);
	}


	void NiPhysXDynamicSrc::accept(class FieldVisitor& visitor) {
		NiPhysXRigidBodySrc::accept(visitor);
	}


	void NiLines::accept(class FieldVisitor& visitor) {
		NiTriBasedGeom::accept(visitor);
	}


	template<> const auto& NiLinesData::get<NiLinesData::FIELDS::lines>() {return lines;}
	void NiLinesData::accept(class FieldVisitor& visitor) {
		NiGeometryData::accept(visitor);
		visitor.visit(lines, FIELDS::lines);
	}


	template<> const auto& NiScreenElementsData::get<NiScreenElementsData::FIELDS::maxPolygons>() {return maxPolygons;}
	template<> const auto& NiScreenElementsData::get<NiScreenElementsData::FIELDS::polygons>() {return polygons;}
	template<> const auto& NiScreenElementsData::get<NiScreenElementsData::FIELDS::polygonIndices>() {return polygonIndices;}
	template<> const auto& NiScreenElementsData::get<NiScreenElementsData::FIELDS::polygonGrowBy>() {return polygonGrowBy;}
	template<> const auto& NiScreenElementsData::get<NiScreenElementsData::FIELDS::numPolygons>() {return numPolygons;}
	template<> const auto& NiScreenElementsData::get<NiScreenElementsData::FIELDS::maxVertices>() {return maxVertices;}
	template<> const auto& NiScreenElementsData::get<NiScreenElementsData::FIELDS::verticesGrowBy>() {return verticesGrowBy;}
	template<> const auto& NiScreenElementsData::get<NiScreenElementsData::FIELDS::maxIndices>() {return maxIndices;}
	template<> const auto& NiScreenElementsData::get<NiScreenElementsData::FIELDS::indicesGrowBy>() {return indicesGrowBy;}
	void NiScreenElementsData::accept(class FieldVisitor& visitor) {
		NiTriShapeData::accept(visitor);
		visitor.visit(maxPolygons, FIELDS::maxPolygons);
		visitor.visit(polygons, FIELDS::polygons);
		visitor.visit(polygonIndices, FIELDS::polygonIndices);
		visitor.visit(polygonGrowBy, FIELDS::polygonGrowBy);
		visitor.visit(numPolygons, FIELDS::numPolygons);
		visitor.visit(maxVertices, FIELDS::maxVertices);
		visitor.visit(verticesGrowBy, FIELDS::verticesGrowBy);
		visitor.visit(maxIndices, FIELDS::maxIndices);
		visitor.visit(indicesGrowBy, FIELDS::indicesGrowBy);
	}


	void NiScreenElements::accept(class FieldVisitor& visitor) {
		NiTriShape::accept(visitor);
	}


	template<> const auto& NiRoomGroup::get<NiRoomGroup::FIELDS::shell>() {return shell;}
	template<> const auto& NiRoomGroup::get<NiRoomGroup::FIELDS::numRooms>() {return numRooms;}
	template<> const auto& NiRoomGroup::get<NiRoomGroup::FIELDS::rooms>() {return rooms;}
	void NiRoomGroup::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
		visitor.visit(shell, FIELDS::shell);
		visitor.visit(numRooms, FIELDS::numRooms);
		visitor.visit(rooms, FIELDS::rooms);
	}


	template<> const auto& NiRoom::get<NiRoom::FIELDS::numWalls>() {return numWalls;}
	template<> const auto& NiRoom::get<NiRoom::FIELDS::wallPlanes>() {return wallPlanes;}
	template<> const auto& NiRoom::get<NiRoom::FIELDS::numInPortals>() {return numInPortals;}
	template<> const auto& NiRoom::get<NiRoom::FIELDS::inPortals>() {return inPortals;}
	template<> const auto& NiRoom::get<NiRoom::FIELDS::numOutPortals>() {return numOutPortals;}
	template<> const auto& NiRoom::get<NiRoom::FIELDS::outPortals>() {return outPortals;}
	template<> const auto& NiRoom::get<NiRoom::FIELDS::numFixtures>() {return numFixtures;}
	template<> const auto& NiRoom::get<NiRoom::FIELDS::fixtures>() {return fixtures;}
	void NiRoom::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
		visitor.visit(numWalls, FIELDS::numWalls);
		visitor.visit(wallPlanes, FIELDS::wallPlanes);
		visitor.visit(numInPortals, FIELDS::numInPortals);
		visitor.visit(inPortals, FIELDS::inPortals);
		visitor.visit(numOutPortals, FIELDS::numOutPortals);
		visitor.visit(outPortals, FIELDS::outPortals);
		visitor.visit(numFixtures, FIELDS::numFixtures);
		visitor.visit(fixtures, FIELDS::fixtures);
	}


	template<> const auto& NiPortal::get<NiPortal::FIELDS::portalFlags>() {return portalFlags;}
	template<> const auto& NiPortal::get<NiPortal::FIELDS::planeCount>() {return planeCount;}
	template<> const auto& NiPortal::get<NiPortal::FIELDS::numVertices>() {return numVertices;}
	template<> const auto& NiPortal::get<NiPortal::FIELDS::vertices>() {return vertices;}
	template<> const auto& NiPortal::get<NiPortal::FIELDS::adjoiner>() {return adjoiner;}
	void NiPortal::accept(class FieldVisitor& visitor) {
		NiAVObject::accept(visitor);
		visitor.visit(portalFlags, FIELDS::portalFlags);
		visitor.visit(planeCount, FIELDS::planeCount);
		visitor.visit(numVertices, FIELDS::numVertices);
		visitor.visit(vertices, FIELDS::vertices);
		visitor.visit(adjoiner, FIELDS::adjoiner);
	}


	void BSFadeNode::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
	}


	template<> const auto& BSShaderProperty::get<BSShaderProperty::FIELDS::shaderType>() {return shaderType;}
	template<> const auto& BSShaderProperty::get<BSShaderProperty::FIELDS::shaderFlags>() {return shaderFlags;}
	template<> const auto& BSShaderProperty::get<BSShaderProperty::FIELDS::shaderFlags2>() {return shaderFlags2;}
	template<> const auto& BSShaderProperty::get<BSShaderProperty::FIELDS::environmentMapScale>() {return environmentMapScale;}
	void BSShaderProperty::accept(class FieldVisitor& visitor) {
		NiShadeProperty::accept(visitor);
		visitor.visit(shaderType, FIELDS::shaderType);
		visitor.visit(shaderFlags, FIELDS::shaderFlags);
		visitor.visit(shaderFlags2, FIELDS::shaderFlags2);
		visitor.visit(environmentMapScale, FIELDS::environmentMapScale);
	}


	template<> const auto& BSShaderLightingProperty::get<BSShaderLightingProperty::FIELDS::textureClampMode>() {return textureClampMode;}
	void BSShaderLightingProperty::accept(class FieldVisitor& visitor) {
		BSShaderProperty::accept(visitor);
		visitor.visit(textureClampMode, FIELDS::textureClampMode);
	}


	template<> const auto& BSShaderNoLightingProperty::get<BSShaderNoLightingProperty::FIELDS::fileName>() {return fileName;}
	template<> const auto& BSShaderNoLightingProperty::get<BSShaderNoLightingProperty::FIELDS::falloffStartAngle>() {return falloffStartAngle;}
	template<> const auto& BSShaderNoLightingProperty::get<BSShaderNoLightingProperty::FIELDS::falloffStopAngle>() {return falloffStopAngle;}
	template<> const auto& BSShaderNoLightingProperty::get<BSShaderNoLightingProperty::FIELDS::falloffStartOpacity>() {return falloffStartOpacity;}
	template<> const auto& BSShaderNoLightingProperty::get<BSShaderNoLightingProperty::FIELDS::falloffStopOpacity>() {return falloffStopOpacity;}
	void BSShaderNoLightingProperty::accept(class FieldVisitor& visitor) {
		BSShaderLightingProperty::accept(visitor);
		visitor.visit(fileName, FIELDS::fileName);
		visitor.visit(falloffStartAngle, FIELDS::falloffStartAngle);
		visitor.visit(falloffStopAngle, FIELDS::falloffStopAngle);
		visitor.visit(falloffStartOpacity, FIELDS::falloffStartOpacity);
		visitor.visit(falloffStopOpacity, FIELDS::falloffStopOpacity);
	}


	template<> const auto& BSShaderPPLightingProperty::get<BSShaderPPLightingProperty::FIELDS::textureSet>() {return textureSet;}
	template<> const auto& BSShaderPPLightingProperty::get<BSShaderPPLightingProperty::FIELDS::refractionStrength>() {return refractionStrength;}
	template<> const auto& BSShaderPPLightingProperty::get<BSShaderPPLightingProperty::FIELDS::refractionFirePeriod>() {return refractionFirePeriod;}
	template<> const auto& BSShaderPPLightingProperty::get<BSShaderPPLightingProperty::FIELDS::parallaxMaxPasses>() {return parallaxMaxPasses;}
	template<> const auto& BSShaderPPLightingProperty::get<BSShaderPPLightingProperty::FIELDS::parallaxScale>() {return parallaxScale;}
	template<> const auto& BSShaderPPLightingProperty::get<BSShaderPPLightingProperty::FIELDS::emissiveColor>() {return emissiveColor;}
	void BSShaderPPLightingProperty::accept(class FieldVisitor& visitor) {
		BSShaderLightingProperty::accept(visitor);
		visitor.visit(textureSet, FIELDS::textureSet);
		visitor.visit(refractionStrength, FIELDS::refractionStrength);
		visitor.visit(refractionFirePeriod, FIELDS::refractionFirePeriod);
		visitor.visit(parallaxMaxPasses, FIELDS::parallaxMaxPasses);
		visitor.visit(parallaxScale, FIELDS::parallaxScale);
		visitor.visit(emissiveColor, FIELDS::emissiveColor);
	}


	template<> const auto& BSEffectShaderPropertyFloatController::get<BSEffectShaderPropertyFloatController::FIELDS::typeOfControlledVariable>() {return typeOfControlledVariable;}
	void BSEffectShaderPropertyFloatController::accept(class FieldVisitor& visitor) {
		NiFloatInterpController::accept(visitor);
		visitor.visit(typeOfControlledVariable, FIELDS::typeOfControlledVariable);
	}


	template<> const auto& BSEffectShaderPropertyColorController::get<BSEffectShaderPropertyColorController::FIELDS::typeOfControlledColor>() {return typeOfControlledColor;}
	void BSEffectShaderPropertyColorController::accept(class FieldVisitor& visitor) {
		NiPoint3InterpController::accept(visitor);
		visitor.visit(typeOfControlledColor, FIELDS::typeOfControlledColor);
	}


	template<> const auto& BSLightingShaderPropertyFloatController::get<BSLightingShaderPropertyFloatController::FIELDS::typeOfControlledVariable>() {return typeOfControlledVariable;}
	void BSLightingShaderPropertyFloatController::accept(class FieldVisitor& visitor) {
		NiFloatInterpController::accept(visitor);
		visitor.visit(typeOfControlledVariable, FIELDS::typeOfControlledVariable);
	}


	template<> const auto& BSLightingShaderPropertyColorController::get<BSLightingShaderPropertyColorController::FIELDS::typeOfControlledColor>() {return typeOfControlledColor;}
	void BSLightingShaderPropertyColorController::accept(class FieldVisitor& visitor) {
		NiPoint3InterpController::accept(visitor);
		visitor.visit(typeOfControlledColor, FIELDS::typeOfControlledColor);
	}


	void BSNiAlphaPropertyTestRefController::accept(class FieldVisitor& visitor) {
		NiFloatInterpController::accept(visitor);
	}


	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::interpolator1_Generation>() {return interpolator1_Generation;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::interpolator2_Mutation>() {return interpolator2_Mutation;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::interpolator3_Subdivision>() {return interpolator3_Subdivision;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::interpolator4_NumBranches>() {return interpolator4_NumBranches;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::interpolator5_NumBranchesVar>() {return interpolator5_NumBranchesVar;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::interpolator6_Length>() {return interpolator6_Length;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::interpolator7_LengthVar>() {return interpolator7_LengthVar;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::interpolator8_Width>() {return interpolator8_Width;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::interpolator9_ArcOffset>() {return interpolator9_ArcOffset;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::subdivisions>() {return subdivisions;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::numBranches>() {return numBranches;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::numBranchesVariation>() {return numBranchesVariation;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::length>() {return length;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::lengthVariation>() {return lengthVariation;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::width>() {return width;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::childWidthMult>() {return childWidthMult;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::arcOffset>() {return arcOffset;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::fadeMainBolt>() {return fadeMainBolt;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::fadeChildBolts>() {return fadeChildBolts;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::animateArcOffset>() {return animateArcOffset;}
	template<> const auto& BSProceduralLightningController::get<BSProceduralLightningController::FIELDS::shaderProperty>() {return shaderProperty;}
	void BSProceduralLightningController::accept(class FieldVisitor& visitor) {
		NiTimeController::accept(visitor);
		visitor.visit(interpolator1_Generation, FIELDS::interpolator1_Generation);
		visitor.visit(interpolator2_Mutation, FIELDS::interpolator2_Mutation);
		visitor.visit(interpolator3_Subdivision, FIELDS::interpolator3_Subdivision);
		visitor.visit(interpolator4_NumBranches, FIELDS::interpolator4_NumBranches);
		visitor.visit(interpolator5_NumBranchesVar, FIELDS::interpolator5_NumBranchesVar);
		visitor.visit(interpolator6_Length, FIELDS::interpolator6_Length);
		visitor.visit(interpolator7_LengthVar, FIELDS::interpolator7_LengthVar);
		visitor.visit(interpolator8_Width, FIELDS::interpolator8_Width);
		visitor.visit(interpolator9_ArcOffset, FIELDS::interpolator9_ArcOffset);
		visitor.visit(subdivisions, FIELDS::subdivisions);
		visitor.visit(numBranches, FIELDS::numBranches);
		visitor.visit(numBranchesVariation, FIELDS::numBranchesVariation);
		visitor.visit(length, FIELDS::length);
		visitor.visit(lengthVariation, FIELDS::lengthVariation);
		visitor.visit(width, FIELDS::width);
		visitor.visit(childWidthMult, FIELDS::childWidthMult);
		visitor.visit(arcOffset, FIELDS::arcOffset);
		visitor.visit(fadeMainBolt, FIELDS::fadeMainBolt);
		visitor.visit(fadeChildBolts, FIELDS::fadeChildBolts);
		visitor.visit(animateArcOffset, FIELDS::animateArcOffset);
		visitor.visit(shaderProperty, FIELDS::shaderProperty);
	}


	template<> const auto& BSShaderTextureSet::get<BSShaderTextureSet::FIELDS::numTextures>() {return numTextures;}
	template<> const auto& BSShaderTextureSet::get<BSShaderTextureSet::FIELDS::textures>() {return textures;}
	void BSShaderTextureSet::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(numTextures, FIELDS::numTextures);
		visitor.visit(textures, FIELDS::textures);
	}


	void WaterShaderProperty::accept(class FieldVisitor& visitor) {
		BSShaderProperty::accept(visitor);
	}


	template<> const auto& SkyShaderProperty::get<SkyShaderProperty::FIELDS::fileName>() {return fileName;}
	template<> const auto& SkyShaderProperty::get<SkyShaderProperty::FIELDS::skyObjectType>() {return skyObjectType;}
	void SkyShaderProperty::accept(class FieldVisitor& visitor) {
		BSShaderLightingProperty::accept(visitor);
		visitor.visit(fileName, FIELDS::fileName);
		visitor.visit(skyObjectType, FIELDS::skyObjectType);
	}


	template<> const auto& TileShaderProperty::get<TileShaderProperty::FIELDS::fileName>() {return fileName;}
	void TileShaderProperty::accept(class FieldVisitor& visitor) {
		BSShaderLightingProperty::accept(visitor);
		visitor.visit(fileName, FIELDS::fileName);
	}


	void DistantLODShaderProperty::accept(class FieldVisitor& visitor) {
		BSShaderProperty::accept(visitor);
	}


	void BSDistantTreeShaderProperty::accept(class FieldVisitor& visitor) {
		BSShaderProperty::accept(visitor);
	}


	template<> const auto& TallGrassShaderProperty::get<TallGrassShaderProperty::FIELDS::fileName>() {return fileName;}
	void TallGrassShaderProperty::accept(class FieldVisitor& visitor) {
		BSShaderProperty::accept(visitor);
		visitor.visit(fileName, FIELDS::fileName);
	}


	void VolumetricFogShaderProperty::accept(class FieldVisitor& visitor) {
		BSShaderProperty::accept(visitor);
	}


	void HairShaderProperty::accept(class FieldVisitor& visitor) {
		BSShaderProperty::accept(visitor);
	}


	void Lighting30ShaderProperty::accept(class FieldVisitor& visitor) {
		BSShaderPPLightingProperty::accept(visitor);
	}


	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::shaderFlags1_sk>() {return shaderFlags1_sk;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::shaderFlags2_sk>() {return shaderFlags2_sk;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::shaderFlags1_fo4>() {return shaderFlags1_fo4;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::shaderFlags2_fo4>() {return shaderFlags2_fo4;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::uvOffset>() {return uvOffset;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::uvScale>() {return uvScale;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::textureSet>() {return textureSet;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::emissiveColor>() {return emissiveColor;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::emissiveMultiple>() {return emissiveMultiple;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::wetMaterial>() {return wetMaterial;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::textureClampMode>() {return textureClampMode;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::alpha>() {return alpha;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::refractionStrength>() {return refractionStrength;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::glossiness>() {return glossiness;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::smoothness>() {return smoothness;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::specularColor>() {return specularColor;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::specularStrength>() {return specularStrength;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::lightingEffect1>() {return lightingEffect1;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::lightingEffect2>() {return lightingEffect2;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::subsurfaceRolloff>() {return subsurfaceRolloff;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::rimlightPower>() {return rimlightPower;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::backlightPower>() {return backlightPower;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::grayscaleToPaletteScale>() {return grayscaleToPaletteScale;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::fresnelPower>() {return fresnelPower;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::wetnessSpecScale>() {return wetnessSpecScale;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::wetnessSpecPower>() {return wetnessSpecPower;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::wetnessMinVar>() {return wetnessMinVar;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::wetnessEnvMapScale>() {return wetnessEnvMapScale;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::wetnessFresnelPower>() {return wetnessFresnelPower;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::wetnessMetalness>() {return wetnessMetalness;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::environmentMapScale>() {return environmentMapScale;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::unknownEnvMapShort>() {return unknownEnvMapShort;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::skinTintColor>() {return skinTintColor;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::unknownSkinTintInt>() {return unknownSkinTintInt;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::hairTintColor>() {return hairTintColor;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::maxPasses>() {return maxPasses;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::scale>() {return scale;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::parallaxInnerLayerThickness>() {return parallaxInnerLayerThickness;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::parallaxRefractionScale>() {return parallaxRefractionScale;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::parallaxInnerLayerTextureScale>() {return parallaxInnerLayerTextureScale;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::parallaxEnvmapStrength>() {return parallaxEnvmapStrength;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::sparkleParameters>() {return sparkleParameters;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::eyeCubemapScale>() {return eyeCubemapScale;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::leftEyeReflectionCenter>() {return leftEyeReflectionCenter;}
	template<> const auto& BSLightingShaderProperty::get<BSLightingShaderProperty::FIELDS::rightEyeReflectionCenter>() {return rightEyeReflectionCenter;}
	void BSLightingShaderProperty::accept(class FieldVisitor& visitor) {
		BSShaderProperty::accept(visitor);
		visitor.visit(shaderFlags1_sk, FIELDS::shaderFlags1_sk);
		visitor.visit(shaderFlags2_sk, FIELDS::shaderFlags2_sk);
		visitor.visit(shaderFlags1_fo4, FIELDS::shaderFlags1_fo4);
		visitor.visit(shaderFlags2_fo4, FIELDS::shaderFlags2_fo4);
		visitor.visit(uvOffset, FIELDS::uvOffset);
		visitor.visit(uvScale, FIELDS::uvScale);
		visitor.visit(textureSet, FIELDS::textureSet);
		visitor.visit(emissiveColor, FIELDS::emissiveColor);
		visitor.visit(emissiveMultiple, FIELDS::emissiveMultiple);
		visitor.visit(wetMaterial, FIELDS::wetMaterial);
		visitor.visit(textureClampMode, FIELDS::textureClampMode);
		visitor.visit(alpha, FIELDS::alpha);
		visitor.visit(refractionStrength, FIELDS::refractionStrength);
		visitor.visit(glossiness, FIELDS::glossiness);
		visitor.visit(smoothness, FIELDS::smoothness);
		visitor.visit(specularColor, FIELDS::specularColor);
		visitor.visit(specularStrength, FIELDS::specularStrength);
		visitor.visit(lightingEffect1, FIELDS::lightingEffect1);
		visitor.visit(lightingEffect2, FIELDS::lightingEffect2);
		visitor.visit(subsurfaceRolloff, FIELDS::subsurfaceRolloff);
		visitor.visit(rimlightPower, FIELDS::rimlightPower);
		visitor.visit(backlightPower, FIELDS::backlightPower);
		visitor.visit(grayscaleToPaletteScale, FIELDS::grayscaleToPaletteScale);
		visitor.visit(fresnelPower, FIELDS::fresnelPower);
		visitor.visit(wetnessSpecScale, FIELDS::wetnessSpecScale);
		visitor.visit(wetnessSpecPower, FIELDS::wetnessSpecPower);
		visitor.visit(wetnessMinVar, FIELDS::wetnessMinVar);
		visitor.visit(wetnessEnvMapScale, FIELDS::wetnessEnvMapScale);
		visitor.visit(wetnessFresnelPower, FIELDS::wetnessFresnelPower);
		visitor.visit(wetnessMetalness, FIELDS::wetnessMetalness);
		visitor.visit(environmentMapScale, FIELDS::environmentMapScale);
		visitor.visit(unknownEnvMapShort, FIELDS::unknownEnvMapShort);
		visitor.visit(skinTintColor, FIELDS::skinTintColor);
		visitor.visit(unknownSkinTintInt, FIELDS::unknownSkinTintInt);
		visitor.visit(hairTintColor, FIELDS::hairTintColor);
		visitor.visit(maxPasses, FIELDS::maxPasses);
		visitor.visit(scale, FIELDS::scale);
		visitor.visit(parallaxInnerLayerThickness, FIELDS::parallaxInnerLayerThickness);
		visitor.visit(parallaxRefractionScale, FIELDS::parallaxRefractionScale);
		visitor.visit(parallaxInnerLayerTextureScale, FIELDS::parallaxInnerLayerTextureScale);
		visitor.visit(parallaxEnvmapStrength, FIELDS::parallaxEnvmapStrength);
		visitor.visit(sparkleParameters, FIELDS::sparkleParameters);
		visitor.visit(eyeCubemapScale, FIELDS::eyeCubemapScale);
		visitor.visit(leftEyeReflectionCenter, FIELDS::leftEyeReflectionCenter);
		visitor.visit(rightEyeReflectionCenter, FIELDS::rightEyeReflectionCenter);
	}


	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::shaderFlags1_sk>() {return shaderFlags1_sk;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::shaderFlags2_sk>() {return shaderFlags2_sk;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::shaderFlags1_fo4>() {return shaderFlags1_fo4;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::shaderFlags2_fo4>() {return shaderFlags2_fo4;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::uvOffset>() {return uvOffset;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::uvScale>() {return uvScale;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::sourceTexture>() {return sourceTexture;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::textureClampMode>() {return textureClampMode;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::lightingInfluence>() {return lightingInfluence;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::envMapMinLod>() {return envMapMinLod;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::unknownByte>() {return unknownByte;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::falloffStartAngle>() {return falloffStartAngle;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::falloffStopAngle>() {return falloffStopAngle;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::falloffStartOpacity>() {return falloffStartOpacity;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::falloffStopOpacity>() {return falloffStopOpacity;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::emissiveColor>() {return emissiveColor;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::emissiveMultiple>() {return emissiveMultiple;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::softFalloffDepth>() {return softFalloffDepth;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::greyscaleTexture>() {return greyscaleTexture;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::envMapTexture>() {return envMapTexture;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::normalTexture>() {return normalTexture;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::envMaskTexture>() {return envMaskTexture;}
	template<> const auto& BSEffectShaderProperty::get<BSEffectShaderProperty::FIELDS::environmentMapScale>() {return environmentMapScale;}
	void BSEffectShaderProperty::accept(class FieldVisitor& visitor) {
		BSShaderProperty::accept(visitor);
		visitor.visit(shaderFlags1_sk, FIELDS::shaderFlags1_sk);
		visitor.visit(shaderFlags2_sk, FIELDS::shaderFlags2_sk);
		visitor.visit(shaderFlags1_fo4, FIELDS::shaderFlags1_fo4);
		visitor.visit(shaderFlags2_fo4, FIELDS::shaderFlags2_fo4);
		visitor.visit(uvOffset, FIELDS::uvOffset);
		visitor.visit(uvScale, FIELDS::uvScale);
		visitor.visit(sourceTexture, FIELDS::sourceTexture);
		visitor.visit(textureClampMode, FIELDS::textureClampMode);
		visitor.visit(lightingInfluence, FIELDS::lightingInfluence);
		visitor.visit(envMapMinLod, FIELDS::envMapMinLod);
		visitor.visit(unknownByte, FIELDS::unknownByte);
		visitor.visit(falloffStartAngle, FIELDS::falloffStartAngle);
		visitor.visit(falloffStopAngle, FIELDS::falloffStopAngle);
		visitor.visit(falloffStartOpacity, FIELDS::falloffStartOpacity);
		visitor.visit(falloffStopOpacity, FIELDS::falloffStopOpacity);
		visitor.visit(emissiveColor, FIELDS::emissiveColor);
		visitor.visit(emissiveMultiple, FIELDS::emissiveMultiple);
		visitor.visit(softFalloffDepth, FIELDS::softFalloffDepth);
		visitor.visit(greyscaleTexture, FIELDS::greyscaleTexture);
		visitor.visit(envMapTexture, FIELDS::envMapTexture);
		visitor.visit(normalTexture, FIELDS::normalTexture);
		visitor.visit(envMaskTexture, FIELDS::envMaskTexture);
		visitor.visit(environmentMapScale, FIELDS::environmentMapScale);
	}


	template<> const auto& BSWaterShaderProperty::get<BSWaterShaderProperty::FIELDS::shaderFlags1>() {return shaderFlags1;}
	template<> const auto& BSWaterShaderProperty::get<BSWaterShaderProperty::FIELDS::shaderFlags2>() {return shaderFlags2;}
	template<> const auto& BSWaterShaderProperty::get<BSWaterShaderProperty::FIELDS::uvOffset>() {return uvOffset;}
	template<> const auto& BSWaterShaderProperty::get<BSWaterShaderProperty::FIELDS::uvScale>() {return uvScale;}
	template<> const auto& BSWaterShaderProperty::get<BSWaterShaderProperty::FIELDS::waterShaderFlags>() {return waterShaderFlags;}
	template<> const auto& BSWaterShaderProperty::get<BSWaterShaderProperty::FIELDS::waterDirection>() {return waterDirection;}
	template<> const auto& BSWaterShaderProperty::get<BSWaterShaderProperty::FIELDS::unknownShort3>() {return unknownShort3;}
	void BSWaterShaderProperty::accept(class FieldVisitor& visitor) {
		BSShaderProperty::accept(visitor);
		visitor.visit(shaderFlags1, FIELDS::shaderFlags1);
		visitor.visit(shaderFlags2, FIELDS::shaderFlags2);
		visitor.visit(uvOffset, FIELDS::uvOffset);
		visitor.visit(uvScale, FIELDS::uvScale);
		visitor.visit(waterShaderFlags, FIELDS::waterShaderFlags);
		visitor.visit(waterDirection, FIELDS::waterDirection);
		visitor.visit(unknownShort3, FIELDS::unknownShort3);
	}


	template<> const auto& BSSkyShaderProperty::get<BSSkyShaderProperty::FIELDS::shaderFlags1>() {return shaderFlags1;}
	template<> const auto& BSSkyShaderProperty::get<BSSkyShaderProperty::FIELDS::shaderFlags2>() {return shaderFlags2;}
	template<> const auto& BSSkyShaderProperty::get<BSSkyShaderProperty::FIELDS::uvOffset>() {return uvOffset;}
	template<> const auto& BSSkyShaderProperty::get<BSSkyShaderProperty::FIELDS::uvScale>() {return uvScale;}
	template<> const auto& BSSkyShaderProperty::get<BSSkyShaderProperty::FIELDS::sourceTexture>() {return sourceTexture;}
	template<> const auto& BSSkyShaderProperty::get<BSSkyShaderProperty::FIELDS::skyObjectType>() {return skyObjectType;}
	void BSSkyShaderProperty::accept(class FieldVisitor& visitor) {
		BSShaderProperty::accept(visitor);
		visitor.visit(shaderFlags1, FIELDS::shaderFlags1);
		visitor.visit(shaderFlags2, FIELDS::shaderFlags2);
		visitor.visit(uvOffset, FIELDS::uvOffset);
		visitor.visit(uvScale, FIELDS::uvScale);
		visitor.visit(sourceTexture, FIELDS::sourceTexture);
		visitor.visit(skyObjectType, FIELDS::skyObjectType);
	}


	template<> const auto& BSDismemberSkinInstance::get<BSDismemberSkinInstance::FIELDS::numPartitions>() {return numPartitions;}
	template<> const auto& BSDismemberSkinInstance::get<BSDismemberSkinInstance::FIELDS::partitions>() {return partitions;}
	void BSDismemberSkinInstance::accept(class FieldVisitor& visitor) {
		NiSkinInstance::accept(visitor);
		visitor.visit(numPartitions, FIELDS::numPartitions);
		visitor.visit(partitions, FIELDS::partitions);
	}


	template<> const auto& BSDecalPlacementVectorExtraData::get<BSDecalPlacementVectorExtraData::FIELDS::numVectorBlocks>() {return numVectorBlocks;}
	template<> const auto& BSDecalPlacementVectorExtraData::get<BSDecalPlacementVectorExtraData::FIELDS::vectorBlocks>() {return vectorBlocks;}
	void BSDecalPlacementVectorExtraData::accept(class FieldVisitor& visitor) {
		NiFloatExtraData::accept(visitor);
		visitor.visit(numVectorBlocks, FIELDS::numVectorBlocks);
		visitor.visit(vectorBlocks, FIELDS::vectorBlocks);
	}


	template<> const auto& BSPSysSimpleColorModifier::get<BSPSysSimpleColorModifier::FIELDS::fadeInPercent>() {return fadeInPercent;}
	template<> const auto& BSPSysSimpleColorModifier::get<BSPSysSimpleColorModifier::FIELDS::fadeOutPercent>() {return fadeOutPercent;}
	template<> const auto& BSPSysSimpleColorModifier::get<BSPSysSimpleColorModifier::FIELDS::color1EndPercent>() {return color1EndPercent;}
	template<> const auto& BSPSysSimpleColorModifier::get<BSPSysSimpleColorModifier::FIELDS::color1StartPercent>() {return color1StartPercent;}
	template<> const auto& BSPSysSimpleColorModifier::get<BSPSysSimpleColorModifier::FIELDS::color2EndPercent>() {return color2EndPercent;}
	template<> const auto& BSPSysSimpleColorModifier::get<BSPSysSimpleColorModifier::FIELDS::color2StartPercent>() {return color2StartPercent;}
	template<> const auto& BSPSysSimpleColorModifier::get<BSPSysSimpleColorModifier::FIELDS::colors>() {return colors;}
	void BSPSysSimpleColorModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(fadeInPercent, FIELDS::fadeInPercent);
		visitor.visit(fadeOutPercent, FIELDS::fadeOutPercent);
		visitor.visit(color1EndPercent, FIELDS::color1EndPercent);
		visitor.visit(color1StartPercent, FIELDS::color1StartPercent);
		visitor.visit(color2EndPercent, FIELDS::color2EndPercent);
		visitor.visit(color2StartPercent, FIELDS::color2StartPercent);
		visitor.visit(colors, FIELDS::colors);
	}


	template<> const auto& BSValueNode::get<BSValueNode::FIELDS::value>() {return value;}
	template<> const auto& BSValueNode::get<BSValueNode::FIELDS::valueNodeFlags>() {return valueNodeFlags;}
	void BSValueNode::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
		visitor.visit(value, FIELDS::value);
		visitor.visit(valueNodeFlags, FIELDS::valueNodeFlags);
	}


	void BSStripParticleSystem::accept(class FieldVisitor& visitor) {
		NiParticleSystem::accept(visitor);
	}


	template<> const auto& BSStripPSysData::get<BSStripPSysData::FIELDS::maxPointCount>() {return maxPointCount;}
	template<> const auto& BSStripPSysData::get<BSStripPSysData::FIELDS::startCapSize>() {return startCapSize;}
	template<> const auto& BSStripPSysData::get<BSStripPSysData::FIELDS::endCapSize>() {return endCapSize;}
	template<> const auto& BSStripPSysData::get<BSStripPSysData::FIELDS::doZPrepass>() {return doZPrepass;}
	void BSStripPSysData::accept(class FieldVisitor& visitor) {
		NiPSysData::accept(visitor);
		visitor.visit(maxPointCount, FIELDS::maxPointCount);
		visitor.visit(startCapSize, FIELDS::startCapSize);
		visitor.visit(endCapSize, FIELDS::endCapSize);
		visitor.visit(doZPrepass, FIELDS::doZPrepass);
	}


	template<> const auto& BSPSysStripUpdateModifier::get<BSPSysStripUpdateModifier::FIELDS::updateDeltaTime>() {return updateDeltaTime;}
	void BSPSysStripUpdateModifier::accept(class FieldVisitor& visitor) {
		NiPSysModifier::accept(visitor);
		visitor.visit(updateDeltaTime, FIELDS::updateDeltaTime);
	}


	void BSMaterialEmittanceMultController::accept(class FieldVisitor& visitor) {
		NiFloatInterpController::accept(visitor);
	}


	template<> const auto& BSMasterParticleSystem::get<BSMasterParticleSystem::FIELDS::maxEmitterObjects>() {return maxEmitterObjects;}
	template<> const auto& BSMasterParticleSystem::get<BSMasterParticleSystem::FIELDS::numParticleSystems>() {return numParticleSystems;}
	template<> const auto& BSMasterParticleSystem::get<BSMasterParticleSystem::FIELDS::particleSystems>() {return particleSystems;}
	void BSMasterParticleSystem::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
		visitor.visit(maxEmitterObjects, FIELDS::maxEmitterObjects);
		visitor.visit(numParticleSystems, FIELDS::numParticleSystems);
		visitor.visit(particleSystems, FIELDS::particleSystems);
	}


	template<> const auto& BSPSysMultiTargetEmitterCtlr::get<BSPSysMultiTargetEmitterCtlr::FIELDS::maxEmitters>() {return maxEmitters;}
	template<> const auto& BSPSysMultiTargetEmitterCtlr::get<BSPSysMultiTargetEmitterCtlr::FIELDS::masterParticleSystem>() {return masterParticleSystem;}
	void BSPSysMultiTargetEmitterCtlr::accept(class FieldVisitor& visitor) {
		NiPSysEmitterCtlr::accept(visitor);
		visitor.visit(maxEmitters, FIELDS::maxEmitters);
		visitor.visit(masterParticleSystem, FIELDS::masterParticleSystem);
	}


	void BSRefractionStrengthController::accept(class FieldVisitor& visitor) {
		NiFloatInterpController::accept(visitor);
	}


	template<> const auto& BSOrderedNode::get<BSOrderedNode::FIELDS::alphaSortBound>() {return alphaSortBound;}
	template<> const auto& BSOrderedNode::get<BSOrderedNode::FIELDS::staticBound>() {return staticBound;}
	void BSOrderedNode::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
		visitor.visit(alphaSortBound, FIELDS::alphaSortBound);
		visitor.visit(staticBound, FIELDS::staticBound);
	}


	template<> const auto& BSRangeNode::get<BSRangeNode::FIELDS::min>() {return min;}
	template<> const auto& BSRangeNode::get<BSRangeNode::FIELDS::max>() {return max;}
	template<> const auto& BSRangeNode::get<BSRangeNode::FIELDS::current>() {return current;}
	void BSRangeNode::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
		visitor.visit(min, FIELDS::min);
		visitor.visit(max, FIELDS::max);
		visitor.visit(current, FIELDS::current);
	}


	void BSBlastNode::accept(class FieldVisitor& visitor) {
		BSRangeNode::accept(visitor);
	}


	void BSDamageStage::accept(class FieldVisitor& visitor) {
		BSBlastNode::accept(visitor);
	}


	template<> const auto& BSRefractionFirePeriodController::get<BSRefractionFirePeriodController::FIELDS::interpolator>() {return interpolator;}
	void BSRefractionFirePeriodController::accept(class FieldVisitor& visitor) {
		NiTimeController::accept(visitor);
		visitor.visit(interpolator, FIELDS::interpolator);
	}


	template<> const auto& bhkConvexListShape::get<bhkConvexListShape::FIELDS::numSubShapes>() {return numSubShapes;}
	template<> const auto& bhkConvexListShape::get<bhkConvexListShape::FIELDS::subShapes>() {return subShapes;}
	template<> const auto& bhkConvexListShape::get<bhkConvexListShape::FIELDS::material>() {return material;}
	template<> const auto& bhkConvexListShape::get<bhkConvexListShape::FIELDS::radius>() {return radius;}
	template<> const auto& bhkConvexListShape::get<bhkConvexListShape::FIELDS::unknownInt1>() {return unknownInt1;}
	template<> const auto& bhkConvexListShape::get<bhkConvexListShape::FIELDS::unknownFloat1>() {return unknownFloat1;}
	template<> const auto& bhkConvexListShape::get<bhkConvexListShape::FIELDS::childShapeProperty>() {return childShapeProperty;}
	template<> const auto& bhkConvexListShape::get<bhkConvexListShape::FIELDS::unknownByte1>() {return unknownByte1;}
	template<> const auto& bhkConvexListShape::get<bhkConvexListShape::FIELDS::unknownFloat2>() {return unknownFloat2;}
	void bhkConvexListShape::accept(class FieldVisitor& visitor) {
		bhkShape::accept(visitor);
		visitor.visit(numSubShapes, FIELDS::numSubShapes);
		visitor.visit(subShapes, FIELDS::subShapes);
		visitor.visit(material, FIELDS::material);
		visitor.visit(radius, FIELDS::radius);
		visitor.visit(unknownInt1, FIELDS::unknownInt1);
		visitor.visit(unknownFloat1, FIELDS::unknownFloat1);
		visitor.visit(childShapeProperty, FIELDS::childShapeProperty);
		visitor.visit(unknownByte1, FIELDS::unknownByte1);
		visitor.visit(unknownFloat2, FIELDS::unknownFloat2);
	}


	template<> const auto& BSTreadTransfInterpolator::get<BSTreadTransfInterpolator::FIELDS::numTreadTransforms>() {return numTreadTransforms;}
	template<> const auto& BSTreadTransfInterpolator::get<BSTreadTransfInterpolator::FIELDS::treadTransforms>() {return treadTransforms;}
	template<> const auto& BSTreadTransfInterpolator::get<BSTreadTransfInterpolator::FIELDS::data>() {return data;}
	void BSTreadTransfInterpolator::accept(class FieldVisitor& visitor) {
		NiInterpolator::accept(visitor);
		visitor.visit(numTreadTransforms, FIELDS::numTreadTransforms);
		visitor.visit(treadTransforms, FIELDS::treadTransforms);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& BSAnimNote::get<BSAnimNote::FIELDS::type>() {return type;}
	template<> const auto& BSAnimNote::get<BSAnimNote::FIELDS::time>() {return time;}
	template<> const auto& BSAnimNote::get<BSAnimNote::FIELDS::arm>() {return arm;}
	template<> const auto& BSAnimNote::get<BSAnimNote::FIELDS::gain>() {return gain;}
	template<> const auto& BSAnimNote::get<BSAnimNote::FIELDS::state>() {return state;}
	void BSAnimNote::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(type, FIELDS::type);
		visitor.visit(time, FIELDS::time);
		visitor.visit(arm, FIELDS::arm);
		visitor.visit(gain, FIELDS::gain);
		visitor.visit(state, FIELDS::state);
	}


	template<> const auto& BSAnimNotes::get<BSAnimNotes::FIELDS::numAnimNotes>() {return numAnimNotes;}
	template<> const auto& BSAnimNotes::get<BSAnimNotes::FIELDS::animNotes>() {return animNotes;}
	void BSAnimNotes::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(numAnimNotes, FIELDS::numAnimNotes);
		visitor.visit(animNotes, FIELDS::animNotes);
	}


	template<> const auto& bhkLiquidAction::get<bhkLiquidAction::FIELDS::userData>() {return userData;}
	template<> const auto& bhkLiquidAction::get<bhkLiquidAction::FIELDS::unknownInt2>() {return unknownInt2;}
	template<> const auto& bhkLiquidAction::get<bhkLiquidAction::FIELDS::unknownInt3>() {return unknownInt3;}
	template<> const auto& bhkLiquidAction::get<bhkLiquidAction::FIELDS::initialStickForce>() {return initialStickForce;}
	template<> const auto& bhkLiquidAction::get<bhkLiquidAction::FIELDS::stickStrength>() {return stickStrength;}
	template<> const auto& bhkLiquidAction::get<bhkLiquidAction::FIELDS::neighborDistance>() {return neighborDistance;}
	template<> const auto& bhkLiquidAction::get<bhkLiquidAction::FIELDS::neighborStrength>() {return neighborStrength;}
	void bhkLiquidAction::accept(class FieldVisitor& visitor) {
		bhkSerializable::accept(visitor);
		visitor.visit(userData, FIELDS::userData);
		visitor.visit(unknownInt2, FIELDS::unknownInt2);
		visitor.visit(unknownInt3, FIELDS::unknownInt3);
		visitor.visit(initialStickForce, FIELDS::initialStickForce);
		visitor.visit(stickStrength, FIELDS::stickStrength);
		visitor.visit(neighborDistance, FIELDS::neighborDistance);
		visitor.visit(neighborStrength, FIELDS::neighborStrength);
	}


	template<> const auto& BSMultiBoundNode::get<BSMultiBoundNode::FIELDS::multiBound>() {return multiBound;}
	template<> const auto& BSMultiBoundNode::get<BSMultiBoundNode::FIELDS::cullingMode>() {return cullingMode;}
	void BSMultiBoundNode::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
		visitor.visit(multiBound, FIELDS::multiBound);
		visitor.visit(cullingMode, FIELDS::cullingMode);
	}


	template<> const auto& BSMultiBound::get<BSMultiBound::FIELDS::data>() {return data;}
	void BSMultiBound::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	void BSMultiBoundData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
	}


	template<> const auto& BSMultiBoundOBB::get<BSMultiBoundOBB::FIELDS::center>() {return center;}
	template<> const auto& BSMultiBoundOBB::get<BSMultiBoundOBB::FIELDS::size>() {return size;}
	template<> const auto& BSMultiBoundOBB::get<BSMultiBoundOBB::FIELDS::rotation>() {return rotation;}
	void BSMultiBoundOBB::accept(class FieldVisitor& visitor) {
		BSMultiBoundData::accept(visitor);
		visitor.visit(center, FIELDS::center);
		visitor.visit(size, FIELDS::size);
		visitor.visit(rotation, FIELDS::rotation);
	}


	template<> const auto& BSMultiBoundSphere::get<BSMultiBoundSphere::FIELDS::center>() {return center;}
	template<> const auto& BSMultiBoundSphere::get<BSMultiBoundSphere::FIELDS::radius>() {return radius;}
	void BSMultiBoundSphere::accept(class FieldVisitor& visitor) {
		BSMultiBoundData::accept(visitor);
		visitor.visit(center, FIELDS::center);
		visitor.visit(radius, FIELDS::radius);
	}


	template<> const auto& BSSegmentedTriShape::get<BSSegmentedTriShape::FIELDS::numSegments>() {return numSegments;}
	template<> const auto& BSSegmentedTriShape::get<BSSegmentedTriShape::FIELDS::segment>() {return segment;}
	void BSSegmentedTriShape::accept(class FieldVisitor& visitor) {
		NiTriShape::accept(visitor);
		visitor.visit(numSegments, FIELDS::numSegments);
		visitor.visit(segment, FIELDS::segment);
	}


	template<> const auto& BSMultiBoundAABB::get<BSMultiBoundAABB::FIELDS::position>() {return position;}
	template<> const auto& BSMultiBoundAABB::get<BSMultiBoundAABB::FIELDS::extent>() {return extent;}
	void BSMultiBoundAABB::accept(class FieldVisitor& visitor) {
		BSMultiBoundData::accept(visitor);
		visitor.visit(position, FIELDS::position);
		visitor.visit(extent, FIELDS::extent);
	}


	template<> const auto& NiAdditionalGeometryData::get<NiAdditionalGeometryData::FIELDS::numVertices>() {return numVertices;}
	template<> const auto& NiAdditionalGeometryData::get<NiAdditionalGeometryData::FIELDS::numBlockInfos>() {return numBlockInfos;}
	template<> const auto& NiAdditionalGeometryData::get<NiAdditionalGeometryData::FIELDS::blockInfos>() {return blockInfos;}
	template<> const auto& NiAdditionalGeometryData::get<NiAdditionalGeometryData::FIELDS::numBlocks>() {return numBlocks;}
	template<> const auto& NiAdditionalGeometryData::get<NiAdditionalGeometryData::FIELDS::blocks>() {return blocks;}
	void NiAdditionalGeometryData::accept(class FieldVisitor& visitor) {
		AbstractAdditionalGeometryData::accept(visitor);
		visitor.visit(numVertices, FIELDS::numVertices);
		visitor.visit(numBlockInfos, FIELDS::numBlockInfos);
		visitor.visit(blockInfos, FIELDS::blockInfos);
		visitor.visit(numBlocks, FIELDS::numBlocks);
		visitor.visit(blocks, FIELDS::blocks);
	}


	template<> const auto& BSPackedAdditionalGeometryData::get<BSPackedAdditionalGeometryData::FIELDS::numVertices>() {return numVertices;}
	template<> const auto& BSPackedAdditionalGeometryData::get<BSPackedAdditionalGeometryData::FIELDS::numBlockInfos>() {return numBlockInfos;}
	template<> const auto& BSPackedAdditionalGeometryData::get<BSPackedAdditionalGeometryData::FIELDS::blockInfos>() {return blockInfos;}
	template<> const auto& BSPackedAdditionalGeometryData::get<BSPackedAdditionalGeometryData::FIELDS::numBlocks>() {return numBlocks;}
	template<> const auto& BSPackedAdditionalGeometryData::get<BSPackedAdditionalGeometryData::FIELDS::blocks>() {return blocks;}
	void BSPackedAdditionalGeometryData::accept(class FieldVisitor& visitor) {
		AbstractAdditionalGeometryData::accept(visitor);
		visitor.visit(numVertices, FIELDS::numVertices);
		visitor.visit(numBlockInfos, FIELDS::numBlockInfos);
		visitor.visit(blockInfos, FIELDS::blockInfos);
		visitor.visit(numBlocks, FIELDS::numBlocks);
		visitor.visit(blocks, FIELDS::blocks);
	}


	template<> const auto& BSWArray::get<BSWArray::FIELDS::numItems>() {return numItems;}
	template<> const auto& BSWArray::get<BSWArray::FIELDS::items>() {return items;}
	void BSWArray::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(numItems, FIELDS::numItems);
		visitor.visit(items, FIELDS::items);
	}


	template<> const auto& bhkAabbPhantom::get<bhkAabbPhantom::FIELDS::unused>() {return unused;}
	template<> const auto& bhkAabbPhantom::get<bhkAabbPhantom::FIELDS::aabbMin>() {return aabbMin;}
	template<> const auto& bhkAabbPhantom::get<bhkAabbPhantom::FIELDS::aabbMax>() {return aabbMax;}
	void bhkAabbPhantom::accept(class FieldVisitor& visitor) {
		bhkShapePhantom::accept(visitor);
		visitor.visit(unused, FIELDS::unused);
		visitor.visit(aabbMin, FIELDS::aabbMin);
		visitor.visit(aabbMax, FIELDS::aabbMax);
	}


	void BSFrustumFOVController::accept(class FieldVisitor& visitor) {
		NiFloatInterpController::accept(visitor);
	}


	void BSDebrisNode::accept(class FieldVisitor& visitor) {
		BSRangeNode::accept(visitor);
	}


	template<> const auto& bhkBreakableConstraint::get<bhkBreakableConstraint::FIELDS::constraintData>() {return constraintData;}
	template<> const auto& bhkBreakableConstraint::get<bhkBreakableConstraint::FIELDS::threshold>() {return threshold;}
	template<> const auto& bhkBreakableConstraint::get<bhkBreakableConstraint::FIELDS::removeWhenBroken>() {return removeWhenBroken;}
	void bhkBreakableConstraint::accept(class FieldVisitor& visitor) {
		bhkConstraint::accept(visitor);
		visitor.visit(constraintData, FIELDS::constraintData);
		visitor.visit(threshold, FIELDS::threshold);
		visitor.visit(removeWhenBroken, FIELDS::removeWhenBroken);
	}


	template<> const auto& bhkOrientHingedBodyAction::get<bhkOrientHingedBodyAction::FIELDS::body>() {return body;}
	template<> const auto& bhkOrientHingedBodyAction::get<bhkOrientHingedBodyAction::FIELDS::unknownInt1>() {return unknownInt1;}
	template<> const auto& bhkOrientHingedBodyAction::get<bhkOrientHingedBodyAction::FIELDS::unknownInt2>() {return unknownInt2;}
	template<> const auto& bhkOrientHingedBodyAction::get<bhkOrientHingedBodyAction::FIELDS::unused1>() {return unused1;}
	template<> const auto& bhkOrientHingedBodyAction::get<bhkOrientHingedBodyAction::FIELDS::hingeAxisLs>() {return hingeAxisLs;}
	template<> const auto& bhkOrientHingedBodyAction::get<bhkOrientHingedBodyAction::FIELDS::forwardLs>() {return forwardLs;}
	template<> const auto& bhkOrientHingedBodyAction::get<bhkOrientHingedBodyAction::FIELDS::strength>() {return strength;}
	template<> const auto& bhkOrientHingedBodyAction::get<bhkOrientHingedBodyAction::FIELDS::damping>() {return damping;}
	template<> const auto& bhkOrientHingedBodyAction::get<bhkOrientHingedBodyAction::FIELDS::unused2>() {return unused2;}
	void bhkOrientHingedBodyAction::accept(class FieldVisitor& visitor) {
		bhkSerializable::accept(visitor);
		visitor.visit(body, FIELDS::body);
		visitor.visit(unknownInt1, FIELDS::unknownInt1);
		visitor.visit(unknownInt2, FIELDS::unknownInt2);
		visitor.visit(unused1, FIELDS::unused1);
		visitor.visit(hingeAxisLs, FIELDS::hingeAxisLs);
		visitor.visit(forwardLs, FIELDS::forwardLs);
		visitor.visit(strength, FIELDS::strength);
		visitor.visit(damping, FIELDS::damping);
		visitor.visit(unused2, FIELDS::unused2);
	}


	template<> const auto& bhkPoseArray::get<bhkPoseArray::FIELDS::numBones>() {return numBones;}
	template<> const auto& bhkPoseArray::get<bhkPoseArray::FIELDS::bones>() {return bones;}
	template<> const auto& bhkPoseArray::get<bhkPoseArray::FIELDS::numPoses>() {return numPoses;}
	template<> const auto& bhkPoseArray::get<bhkPoseArray::FIELDS::poses>() {return poses;}
	void bhkPoseArray::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(numBones, FIELDS::numBones);
		visitor.visit(bones, FIELDS::bones);
		visitor.visit(numPoses, FIELDS::numPoses);
		visitor.visit(poses, FIELDS::poses);
	}


	template<> const auto& bhkRagdollTemplate::get<bhkRagdollTemplate::FIELDS::numBones>() {return numBones;}
	template<> const auto& bhkRagdollTemplate::get<bhkRagdollTemplate::FIELDS::bones>() {return bones;}
	void bhkRagdollTemplate::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(numBones, FIELDS::numBones);
		visitor.visit(bones, FIELDS::bones);
	}


	template<> const auto& bhkRagdollTemplateData::get<bhkRagdollTemplateData::FIELDS::name>() {return name;}
	template<> const auto& bhkRagdollTemplateData::get<bhkRagdollTemplateData::FIELDS::mass>() {return mass;}
	template<> const auto& bhkRagdollTemplateData::get<bhkRagdollTemplateData::FIELDS::restitution>() {return restitution;}
	template<> const auto& bhkRagdollTemplateData::get<bhkRagdollTemplateData::FIELDS::friction>() {return friction;}
	template<> const auto& bhkRagdollTemplateData::get<bhkRagdollTemplateData::FIELDS::radius>() {return radius;}
	template<> const auto& bhkRagdollTemplateData::get<bhkRagdollTemplateData::FIELDS::material>() {return material;}
	template<> const auto& bhkRagdollTemplateData::get<bhkRagdollTemplateData::FIELDS::numConstraints>() {return numConstraints;}
	template<> const auto& bhkRagdollTemplateData::get<bhkRagdollTemplateData::FIELDS::constraint>() {return constraint;}
	void bhkRagdollTemplateData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(name, FIELDS::name);
		visitor.visit(mass, FIELDS::mass);
		visitor.visit(restitution, FIELDS::restitution);
		visitor.visit(friction, FIELDS::friction);
		visitor.visit(radius, FIELDS::radius);
		visitor.visit(material, FIELDS::material);
		visitor.visit(numConstraints, FIELDS::numConstraints);
		visitor.visit(constraint, FIELDS::constraint);
	}


	template<> const auto& NiDataStream::get<NiDataStream::FIELDS::usage>() {return usage;}
	template<> const auto& NiDataStream::get<NiDataStream::FIELDS::access>() {return access;}
	template<> const auto& NiDataStream::get<NiDataStream::FIELDS::numBytes>() {return numBytes;}
	template<> const auto& NiDataStream::get<NiDataStream::FIELDS::cloningBehavior>() {return cloningBehavior;}
	template<> const auto& NiDataStream::get<NiDataStream::FIELDS::numRegions>() {return numRegions;}
	template<> const auto& NiDataStream::get<NiDataStream::FIELDS::regions>() {return regions;}
	template<> const auto& NiDataStream::get<NiDataStream::FIELDS::numComponents>() {return numComponents;}
	template<> const auto& NiDataStream::get<NiDataStream::FIELDS::componentFormats>() {return componentFormats;}
	template<> const auto& NiDataStream::get<NiDataStream::FIELDS::data>() {return data;}
	template<> const auto& NiDataStream::get<NiDataStream::FIELDS::streamable>() {return streamable;}
	void NiDataStream::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(usage, FIELDS::usage);
		visitor.visit(access, FIELDS::access);
		visitor.visit(numBytes, FIELDS::numBytes);
		visitor.visit(cloningBehavior, FIELDS::cloningBehavior);
		visitor.visit(numRegions, FIELDS::numRegions);
		visitor.visit(regions, FIELDS::regions);
		visitor.visit(numComponents, FIELDS::numComponents);
		visitor.visit(componentFormats, FIELDS::componentFormats);
		visitor.visit(data, FIELDS::data);
		visitor.visit(streamable, FIELDS::streamable);
	}


	template<> const auto& NiRenderObject::get<NiRenderObject::FIELDS::materialData>() {return materialData;}
	void NiRenderObject::accept(class FieldVisitor& visitor) {
		NiAVObject::accept(visitor);
		visitor.visit(materialData, FIELDS::materialData);
	}


	template<> const auto& NiMeshModifier::get<NiMeshModifier::FIELDS::numSubmitPoints>() {return numSubmitPoints;}
	template<> const auto& NiMeshModifier::get<NiMeshModifier::FIELDS::submitPoints>() {return submitPoints;}
	template<> const auto& NiMeshModifier::get<NiMeshModifier::FIELDS::numCompletePoints>() {return numCompletePoints;}
	template<> const auto& NiMeshModifier::get<NiMeshModifier::FIELDS::completePoints>() {return completePoints;}
	void NiMeshModifier::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(numSubmitPoints, FIELDS::numSubmitPoints);
		visitor.visit(submitPoints, FIELDS::submitPoints);
		visitor.visit(numCompletePoints, FIELDS::numCompletePoints);
		visitor.visit(completePoints, FIELDS::completePoints);
	}


	template<> const auto& NiMesh::get<NiMesh::FIELDS::primitiveType>() {return primitiveType;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown51>() {return unknown51;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown52>() {return unknown52;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown53>() {return unknown53;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown54>() {return unknown54;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown55>() {return unknown55;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown56>() {return unknown56;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::numSubmeshes>() {return numSubmeshes;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::instancingEnabled>() {return instancingEnabled;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::bound>() {return bound;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::numDatastreams>() {return numDatastreams;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::datastreams>() {return datastreams;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::numModifiers>() {return numModifiers;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::modifiers>() {return modifiers;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown100>() {return unknown100;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown101>() {return unknown101;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown102>() {return unknown102;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown103>() {return unknown103;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown200>() {return unknown200;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown201>() {return unknown201;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown250>() {return unknown250;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown251>() {return unknown251;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown300>() {return unknown300;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown301>() {return unknown301;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown302>() {return unknown302;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown303>() {return unknown303;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown350>() {return unknown350;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown351>() {return unknown351;}
	template<> const auto& NiMesh::get<NiMesh::FIELDS::unknown400>() {return unknown400;}
	void NiMesh::accept(class FieldVisitor& visitor) {
		NiRenderObject::accept(visitor);
		visitor.visit(primitiveType, FIELDS::primitiveType);
		visitor.visit(unknown51, FIELDS::unknown51);
		visitor.visit(unknown52, FIELDS::unknown52);
		visitor.visit(unknown53, FIELDS::unknown53);
		visitor.visit(unknown54, FIELDS::unknown54);
		visitor.visit(unknown55, FIELDS::unknown55);
		visitor.visit(unknown56, FIELDS::unknown56);
		visitor.visit(numSubmeshes, FIELDS::numSubmeshes);
		visitor.visit(instancingEnabled, FIELDS::instancingEnabled);
		visitor.visit(bound, FIELDS::bound);
		visitor.visit(numDatastreams, FIELDS::numDatastreams);
		visitor.visit(datastreams, FIELDS::datastreams);
		visitor.visit(numModifiers, FIELDS::numModifiers);
		visitor.visit(modifiers, FIELDS::modifiers);
		visitor.visit(unknown100, FIELDS::unknown100);
		visitor.visit(unknown101, FIELDS::unknown101);
		visitor.visit(unknown102, FIELDS::unknown102);
		visitor.visit(unknown103, FIELDS::unknown103);
		visitor.visit(unknown200, FIELDS::unknown200);
		visitor.visit(unknown201, FIELDS::unknown201);
		visitor.visit(unknown250, FIELDS::unknown250);
		visitor.visit(unknown251, FIELDS::unknown251);
		visitor.visit(unknown300, FIELDS::unknown300);
		visitor.visit(unknown301, FIELDS::unknown301);
		visitor.visit(unknown302, FIELDS::unknown302);
		visitor.visit(unknown303, FIELDS::unknown303);
		visitor.visit(unknown350, FIELDS::unknown350);
		visitor.visit(unknown351, FIELDS::unknown351);
		visitor.visit(unknown400, FIELDS::unknown400);
	}


	template<> const auto& NiMorphWeightsController::get<NiMorphWeightsController::FIELDS::count>() {return count;}
	template<> const auto& NiMorphWeightsController::get<NiMorphWeightsController::FIELDS::numInterpolators>() {return numInterpolators;}
	template<> const auto& NiMorphWeightsController::get<NiMorphWeightsController::FIELDS::interpolators>() {return interpolators;}
	template<> const auto& NiMorphWeightsController::get<NiMorphWeightsController::FIELDS::numTargets>() {return numTargets;}
	template<> const auto& NiMorphWeightsController::get<NiMorphWeightsController::FIELDS::targetNames>() {return targetNames;}
	void NiMorphWeightsController::accept(class FieldVisitor& visitor) {
		NiInterpController::accept(visitor);
		visitor.visit(count, FIELDS::count);
		visitor.visit(numInterpolators, FIELDS::numInterpolators);
		visitor.visit(interpolators, FIELDS::interpolators);
		visitor.visit(numTargets, FIELDS::numTargets);
		visitor.visit(targetNames, FIELDS::targetNames);
	}


	template<> const auto& NiMorphMeshModifier::get<NiMorphMeshModifier::FIELDS::flags>() {return flags;}
	template<> const auto& NiMorphMeshModifier::get<NiMorphMeshModifier::FIELDS::numTargets>() {return numTargets;}
	template<> const auto& NiMorphMeshModifier::get<NiMorphMeshModifier::FIELDS::numElements>() {return numElements;}
	template<> const auto& NiMorphMeshModifier::get<NiMorphMeshModifier::FIELDS::elements>() {return elements;}
	void NiMorphMeshModifier::accept(class FieldVisitor& visitor) {
		NiMeshModifier::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(numTargets, FIELDS::numTargets);
		visitor.visit(numElements, FIELDS::numElements);
		visitor.visit(elements, FIELDS::elements);
	}


	template<> const auto& NiSkinningMeshModifier::get<NiSkinningMeshModifier::FIELDS::flags>() {return flags;}
	template<> const auto& NiSkinningMeshModifier::get<NiSkinningMeshModifier::FIELDS::skeletonRoot>() {return skeletonRoot;}
	template<> const auto& NiSkinningMeshModifier::get<NiSkinningMeshModifier::FIELDS::skeletonTransform>() {return skeletonTransform;}
	template<> const auto& NiSkinningMeshModifier::get<NiSkinningMeshModifier::FIELDS::numBones>() {return numBones;}
	template<> const auto& NiSkinningMeshModifier::get<NiSkinningMeshModifier::FIELDS::bones>() {return bones;}
	template<> const auto& NiSkinningMeshModifier::get<NiSkinningMeshModifier::FIELDS::boneTransforms>() {return boneTransforms;}
	template<> const auto& NiSkinningMeshModifier::get<NiSkinningMeshModifier::FIELDS::boneBounds>() {return boneBounds;}
	void NiSkinningMeshModifier::accept(class FieldVisitor& visitor) {
		NiMeshModifier::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(skeletonRoot, FIELDS::skeletonRoot);
		visitor.visit(skeletonTransform, FIELDS::skeletonTransform);
		visitor.visit(numBones, FIELDS::numBones);
		visitor.visit(bones, FIELDS::bones);
		visitor.visit(boneTransforms, FIELDS::boneTransforms);
		visitor.visit(boneBounds, FIELDS::boneBounds);
	}


	template<> const auto& NiMeshHWInstance::get<NiMeshHWInstance::FIELDS::masterMesh>() {return masterMesh;}
	template<> const auto& NiMeshHWInstance::get<NiMeshHWInstance::FIELDS::meshModifier>() {return meshModifier;}
	void NiMeshHWInstance::accept(class FieldVisitor& visitor) {
		NiAVObject::accept(visitor);
		visitor.visit(masterMesh, FIELDS::masterMesh);
		visitor.visit(meshModifier, FIELDS::meshModifier);
	}


	template<> const auto& NiInstancingMeshModifier::get<NiInstancingMeshModifier::FIELDS::hasInstanceNodes>() {return hasInstanceNodes;}
	template<> const auto& NiInstancingMeshModifier::get<NiInstancingMeshModifier::FIELDS::perInstanceCulling>() {return perInstanceCulling;}
	template<> const auto& NiInstancingMeshModifier::get<NiInstancingMeshModifier::FIELDS::hasStaticBounds>() {return hasStaticBounds;}
	template<> const auto& NiInstancingMeshModifier::get<NiInstancingMeshModifier::FIELDS::affectedMesh>() {return affectedMesh;}
	template<> const auto& NiInstancingMeshModifier::get<NiInstancingMeshModifier::FIELDS::bound>() {return bound;}
	template<> const auto& NiInstancingMeshModifier::get<NiInstancingMeshModifier::FIELDS::numInstanceNodes>() {return numInstanceNodes;}
	template<> const auto& NiInstancingMeshModifier::get<NiInstancingMeshModifier::FIELDS::instanceNodes>() {return instanceNodes;}
	void NiInstancingMeshModifier::accept(class FieldVisitor& visitor) {
		NiMeshModifier::accept(visitor);
		visitor.visit(hasInstanceNodes, FIELDS::hasInstanceNodes);
		visitor.visit(perInstanceCulling, FIELDS::perInstanceCulling);
		visitor.visit(hasStaticBounds, FIELDS::hasStaticBounds);
		visitor.visit(affectedMesh, FIELDS::affectedMesh);
		visitor.visit(bound, FIELDS::bound);
		visitor.visit(numInstanceNodes, FIELDS::numInstanceNodes);
		visitor.visit(instanceNodes, FIELDS::instanceNodes);
	}


	template<> const auto& NiSkinningLODController::get<NiSkinningLODController::FIELDS::currentLod>() {return currentLod;}
	template<> const auto& NiSkinningLODController::get<NiSkinningLODController::FIELDS::numBones>() {return numBones;}
	template<> const auto& NiSkinningLODController::get<NiSkinningLODController::FIELDS::bones>() {return bones;}
	template<> const auto& NiSkinningLODController::get<NiSkinningLODController::FIELDS::numSkins>() {return numSkins;}
	template<> const auto& NiSkinningLODController::get<NiSkinningLODController::FIELDS::skins>() {return skins;}
	template<> const auto& NiSkinningLODController::get<NiSkinningLODController::FIELDS::numLodLevels>() {return numLodLevels;}
	template<> const auto& NiSkinningLODController::get<NiSkinningLODController::FIELDS::lods>() {return lods;}
	void NiSkinningLODController::accept(class FieldVisitor& visitor) {
		NiTimeController::accept(visitor);
		visitor.visit(currentLod, FIELDS::currentLod);
		visitor.visit(numBones, FIELDS::numBones);
		visitor.visit(bones, FIELDS::bones);
		visitor.visit(numSkins, FIELDS::numSkins);
		visitor.visit(skins, FIELDS::skins);
		visitor.visit(numLodLevels, FIELDS::numLodLevels);
		visitor.visit(lods, FIELDS::lods);
	}


	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::simulator>() {return simulator;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::generator>() {return generator;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::numEmitters>() {return numEmitters;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::emitters>() {return emitters;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::numSpawners>() {return numSpawners;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::spawners>() {return spawners;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::deathSpawner>() {return deathSpawner;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::maxNumParticles>() {return maxNumParticles;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::hasColors>() {return hasColors;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::hasRotations>() {return hasRotations;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::hasRotationAxes>() {return hasRotationAxes;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::hasAnimatedTextures>() {return hasAnimatedTextures;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::worldSpace>() {return worldSpace;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::normalMethod>() {return normalMethod;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::normalDirection>() {return normalDirection;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::upMethod>() {return upMethod;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::upDirection>() {return upDirection;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::livingSpawner>() {return livingSpawner;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::numSpawnRateKeys>() {return numSpawnRateKeys;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::spawnRateKeys>() {return spawnRateKeys;}
	template<> const auto& NiPSParticleSystem::get<NiPSParticleSystem::FIELDS::pre_rpi>() {return pre_rpi;}
	void NiPSParticleSystem::accept(class FieldVisitor& visitor) {
		NiMesh::accept(visitor);
		visitor.visit(simulator, FIELDS::simulator);
		visitor.visit(generator, FIELDS::generator);
		visitor.visit(numEmitters, FIELDS::numEmitters);
		visitor.visit(emitters, FIELDS::emitters);
		visitor.visit(numSpawners, FIELDS::numSpawners);
		visitor.visit(spawners, FIELDS::spawners);
		visitor.visit(deathSpawner, FIELDS::deathSpawner);
		visitor.visit(maxNumParticles, FIELDS::maxNumParticles);
		visitor.visit(hasColors, FIELDS::hasColors);
		visitor.visit(hasRotations, FIELDS::hasRotations);
		visitor.visit(hasRotationAxes, FIELDS::hasRotationAxes);
		visitor.visit(hasAnimatedTextures, FIELDS::hasAnimatedTextures);
		visitor.visit(worldSpace, FIELDS::worldSpace);
		visitor.visit(normalMethod, FIELDS::normalMethod);
		visitor.visit(normalDirection, FIELDS::normalDirection);
		visitor.visit(upMethod, FIELDS::upMethod);
		visitor.visit(upDirection, FIELDS::upDirection);
		visitor.visit(livingSpawner, FIELDS::livingSpawner);
		visitor.visit(numSpawnRateKeys, FIELDS::numSpawnRateKeys);
		visitor.visit(spawnRateKeys, FIELDS::spawnRateKeys);
		visitor.visit(pre_rpi, FIELDS::pre_rpi);
	}


	template<> const auto& NiPSMeshParticleSystem::get<NiPSMeshParticleSystem::FIELDS::numGenerations>() {return numGenerations;}
	template<> const auto& NiPSMeshParticleSystem::get<NiPSMeshParticleSystem::FIELDS::masterParticles>() {return masterParticles;}
	template<> const auto& NiPSMeshParticleSystem::get<NiPSMeshParticleSystem::FIELDS::poolSize>() {return poolSize;}
	template<> const auto& NiPSMeshParticleSystem::get<NiPSMeshParticleSystem::FIELDS::auto_fillPools>() {return auto_fillPools;}
	void NiPSMeshParticleSystem::accept(class FieldVisitor& visitor) {
		NiPSParticleSystem::accept(visitor);
		visitor.visit(numGenerations, FIELDS::numGenerations);
		visitor.visit(masterParticles, FIELDS::masterParticles);
		visitor.visit(poolSize, FIELDS::poolSize);
		visitor.visit(auto_fillPools, FIELDS::auto_fillPools);
	}


	void NiPSFacingQuadGenerator::accept(class FieldVisitor& visitor) {
		NiMeshModifier::accept(visitor);
	}


	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::scaleAmountU>() {return scaleAmountU;}
	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::scaleLimitU>() {return scaleLimitU;}
	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::scaleRestU>() {return scaleRestU;}
	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::scaleAmountV>() {return scaleAmountV;}
	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::scaleLimitV>() {return scaleLimitV;}
	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::scaleRestV>() {return scaleRestV;}
	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::centerU>() {return centerU;}
	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::centerV>() {return centerV;}
	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::uvScrolling>() {return uvScrolling;}
	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::numFramesAcross>() {return numFramesAcross;}
	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::numFramesDown>() {return numFramesDown;}
	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::pingPong>() {return pingPong;}
	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::initialFrame>() {return initialFrame;}
	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::initialFrameVariation>() {return initialFrameVariation;}
	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::numFrames>() {return numFrames;}
	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::numFramesVariation>() {return numFramesVariation;}
	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::initialTime>() {return initialTime;}
	template<> const auto& NiPSAlignedQuadGenerator::get<NiPSAlignedQuadGenerator::FIELDS::finalTime>() {return finalTime;}
	void NiPSAlignedQuadGenerator::accept(class FieldVisitor& visitor) {
		NiMeshModifier::accept(visitor);
		visitor.visit(scaleAmountU, FIELDS::scaleAmountU);
		visitor.visit(scaleLimitU, FIELDS::scaleLimitU);
		visitor.visit(scaleRestU, FIELDS::scaleRestU);
		visitor.visit(scaleAmountV, FIELDS::scaleAmountV);
		visitor.visit(scaleLimitV, FIELDS::scaleLimitV);
		visitor.visit(scaleRestV, FIELDS::scaleRestV);
		visitor.visit(centerU, FIELDS::centerU);
		visitor.visit(centerV, FIELDS::centerV);
		visitor.visit(uvScrolling, FIELDS::uvScrolling);
		visitor.visit(numFramesAcross, FIELDS::numFramesAcross);
		visitor.visit(numFramesDown, FIELDS::numFramesDown);
		visitor.visit(pingPong, FIELDS::pingPong);
		visitor.visit(initialFrame, FIELDS::initialFrame);
		visitor.visit(initialFrameVariation, FIELDS::initialFrameVariation);
		visitor.visit(numFrames, FIELDS::numFrames);
		visitor.visit(numFramesVariation, FIELDS::numFramesVariation);
		visitor.visit(initialTime, FIELDS::initialTime);
		visitor.visit(finalTime, FIELDS::finalTime);
	}


	template<> const auto& NiPSSimulator::get<NiPSSimulator::FIELDS::numSimulationSteps>() {return numSimulationSteps;}
	template<> const auto& NiPSSimulator::get<NiPSSimulator::FIELDS::simulationSteps>() {return simulationSteps;}
	void NiPSSimulator::accept(class FieldVisitor& visitor) {
		NiMeshModifier::accept(visitor);
		visitor.visit(numSimulationSteps, FIELDS::numSimulationSteps);
		visitor.visit(simulationSteps, FIELDS::simulationSteps);
	}


	void NiPSSimulatorStep::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
	}


	template<> const auto& NiPSSimulatorGeneralStep::get<NiPSSimulatorGeneralStep::FIELDS::numSizeKeys>() {return numSizeKeys;}
	template<> const auto& NiPSSimulatorGeneralStep::get<NiPSSimulatorGeneralStep::FIELDS::sizeKeys>() {return sizeKeys;}
	template<> const auto& NiPSSimulatorGeneralStep::get<NiPSSimulatorGeneralStep::FIELDS::sizeLoopBehavior>() {return sizeLoopBehavior;}
	template<> const auto& NiPSSimulatorGeneralStep::get<NiPSSimulatorGeneralStep::FIELDS::numColorKeys>() {return numColorKeys;}
	template<> const auto& NiPSSimulatorGeneralStep::get<NiPSSimulatorGeneralStep::FIELDS::colorKeys>() {return colorKeys;}
	template<> const auto& NiPSSimulatorGeneralStep::get<NiPSSimulatorGeneralStep::FIELDS::colorLoopBehavior>() {return colorLoopBehavior;}
	template<> const auto& NiPSSimulatorGeneralStep::get<NiPSSimulatorGeneralStep::FIELDS::numRotationKeys>() {return numRotationKeys;}
	template<> const auto& NiPSSimulatorGeneralStep::get<NiPSSimulatorGeneralStep::FIELDS::rotationKeys>() {return rotationKeys;}
	template<> const auto& NiPSSimulatorGeneralStep::get<NiPSSimulatorGeneralStep::FIELDS::rotationLoopBehavior>() {return rotationLoopBehavior;}
	template<> const auto& NiPSSimulatorGeneralStep::get<NiPSSimulatorGeneralStep::FIELDS::growTime>() {return growTime;}
	template<> const auto& NiPSSimulatorGeneralStep::get<NiPSSimulatorGeneralStep::FIELDS::shrinkTime>() {return shrinkTime;}
	template<> const auto& NiPSSimulatorGeneralStep::get<NiPSSimulatorGeneralStep::FIELDS::growGeneration>() {return growGeneration;}
	template<> const auto& NiPSSimulatorGeneralStep::get<NiPSSimulatorGeneralStep::FIELDS::shrinkGeneration>() {return shrinkGeneration;}
	void NiPSSimulatorGeneralStep::accept(class FieldVisitor& visitor) {
		NiPSSimulatorStep::accept(visitor);
		visitor.visit(numSizeKeys, FIELDS::numSizeKeys);
		visitor.visit(sizeKeys, FIELDS::sizeKeys);
		visitor.visit(sizeLoopBehavior, FIELDS::sizeLoopBehavior);
		visitor.visit(numColorKeys, FIELDS::numColorKeys);
		visitor.visit(colorKeys, FIELDS::colorKeys);
		visitor.visit(colorLoopBehavior, FIELDS::colorLoopBehavior);
		visitor.visit(numRotationKeys, FIELDS::numRotationKeys);
		visitor.visit(rotationKeys, FIELDS::rotationKeys);
		visitor.visit(rotationLoopBehavior, FIELDS::rotationLoopBehavior);
		visitor.visit(growTime, FIELDS::growTime);
		visitor.visit(shrinkTime, FIELDS::shrinkTime);
		visitor.visit(growGeneration, FIELDS::growGeneration);
		visitor.visit(shrinkGeneration, FIELDS::shrinkGeneration);
	}


	template<> const auto& NiPSSimulatorForcesStep::get<NiPSSimulatorForcesStep::FIELDS::numForces>() {return numForces;}
	template<> const auto& NiPSSimulatorForcesStep::get<NiPSSimulatorForcesStep::FIELDS::forces>() {return forces;}
	void NiPSSimulatorForcesStep::accept(class FieldVisitor& visitor) {
		NiPSSimulatorStep::accept(visitor);
		visitor.visit(numForces, FIELDS::numForces);
		visitor.visit(forces, FIELDS::forces);
	}


	template<> const auto& NiPSSimulatorCollidersStep::get<NiPSSimulatorCollidersStep::FIELDS::numColliders>() {return numColliders;}
	template<> const auto& NiPSSimulatorCollidersStep::get<NiPSSimulatorCollidersStep::FIELDS::colliders>() {return colliders;}
	void NiPSSimulatorCollidersStep::accept(class FieldVisitor& visitor) {
		NiPSSimulatorStep::accept(visitor);
		visitor.visit(numColliders, FIELDS::numColliders);
		visitor.visit(colliders, FIELDS::colliders);
	}


	template<> const auto& NiPSSimulatorMeshAlignStep::get<NiPSSimulatorMeshAlignStep::FIELDS::numRotationKeys>() {return numRotationKeys;}
	template<> const auto& NiPSSimulatorMeshAlignStep::get<NiPSSimulatorMeshAlignStep::FIELDS::rotationKeys>() {return rotationKeys;}
	template<> const auto& NiPSSimulatorMeshAlignStep::get<NiPSSimulatorMeshAlignStep::FIELDS::rotationLoopBehavior>() {return rotationLoopBehavior;}
	void NiPSSimulatorMeshAlignStep::accept(class FieldVisitor& visitor) {
		NiPSSimulatorStep::accept(visitor);
		visitor.visit(numRotationKeys, FIELDS::numRotationKeys);
		visitor.visit(rotationKeys, FIELDS::rotationKeys);
		visitor.visit(rotationLoopBehavior, FIELDS::rotationLoopBehavior);
	}


	void NiPSSimulatorFinalStep::accept(class FieldVisitor& visitor) {
		NiPSSimulatorStep::accept(visitor);
	}


	template<> const auto& NiPSBoundUpdater::get<NiPSBoundUpdater::FIELDS::updateSkip>() {return updateSkip;}
	void NiPSBoundUpdater::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(updateSkip, FIELDS::updateSkip);
	}


	template<> const auto& NiPSForce::get<NiPSForce::FIELDS::name>() {return name;}
	template<> const auto& NiPSForce::get<NiPSForce::FIELDS::type>() {return type;}
	template<> const auto& NiPSForce::get<NiPSForce::FIELDS::active>() {return active;}
	void NiPSForce::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(name, FIELDS::name);
		visitor.visit(type, FIELDS::type);
		visitor.visit(active, FIELDS::active);
	}


	template<> const auto& NiPSDragForce::get<NiPSDragForce::FIELDS::dragAxis>() {return dragAxis;}
	template<> const auto& NiPSDragForce::get<NiPSDragForce::FIELDS::percentage>() {return percentage;}
	template<> const auto& NiPSDragForce::get<NiPSDragForce::FIELDS::range>() {return range;}
	template<> const auto& NiPSDragForce::get<NiPSDragForce::FIELDS::rangeFalloff>() {return rangeFalloff;}
	template<> const auto& NiPSDragForce::get<NiPSDragForce::FIELDS::dragObject>() {return dragObject;}
	void NiPSDragForce::accept(class FieldVisitor& visitor) {
		NiPSForce::accept(visitor);
		visitor.visit(dragAxis, FIELDS::dragAxis);
		visitor.visit(percentage, FIELDS::percentage);
		visitor.visit(range, FIELDS::range);
		visitor.visit(rangeFalloff, FIELDS::rangeFalloff);
		visitor.visit(dragObject, FIELDS::dragObject);
	}


	template<> const auto& NiPSGravityForce::get<NiPSGravityForce::FIELDS::gravityAxis>() {return gravityAxis;}
	template<> const auto& NiPSGravityForce::get<NiPSGravityForce::FIELDS::decay>() {return decay;}
	template<> const auto& NiPSGravityForce::get<NiPSGravityForce::FIELDS::strength>() {return strength;}
	template<> const auto& NiPSGravityForce::get<NiPSGravityForce::FIELDS::forceType>() {return forceType;}
	template<> const auto& NiPSGravityForce::get<NiPSGravityForce::FIELDS::turbulence>() {return turbulence;}
	template<> const auto& NiPSGravityForce::get<NiPSGravityForce::FIELDS::turbulenceScale>() {return turbulenceScale;}
	template<> const auto& NiPSGravityForce::get<NiPSGravityForce::FIELDS::gravityObject>() {return gravityObject;}
	void NiPSGravityForce::accept(class FieldVisitor& visitor) {
		NiPSForce::accept(visitor);
		visitor.visit(gravityAxis, FIELDS::gravityAxis);
		visitor.visit(decay, FIELDS::decay);
		visitor.visit(strength, FIELDS::strength);
		visitor.visit(forceType, FIELDS::forceType);
		visitor.visit(turbulence, FIELDS::turbulence);
		visitor.visit(turbulenceScale, FIELDS::turbulenceScale);
		visitor.visit(gravityObject, FIELDS::gravityObject);
	}


	template<> const auto& NiPSBombForce::get<NiPSBombForce::FIELDS::bombAxis>() {return bombAxis;}
	template<> const auto& NiPSBombForce::get<NiPSBombForce::FIELDS::decay>() {return decay;}
	template<> const auto& NiPSBombForce::get<NiPSBombForce::FIELDS::deltaV>() {return deltaV;}
	template<> const auto& NiPSBombForce::get<NiPSBombForce::FIELDS::decayType>() {return decayType;}
	template<> const auto& NiPSBombForce::get<NiPSBombForce::FIELDS::symmetryType>() {return symmetryType;}
	template<> const auto& NiPSBombForce::get<NiPSBombForce::FIELDS::bombObject>() {return bombObject;}
	void NiPSBombForce::accept(class FieldVisitor& visitor) {
		NiPSForce::accept(visitor);
		visitor.visit(bombAxis, FIELDS::bombAxis);
		visitor.visit(decay, FIELDS::decay);
		visitor.visit(deltaV, FIELDS::deltaV);
		visitor.visit(decayType, FIELDS::decayType);
		visitor.visit(symmetryType, FIELDS::symmetryType);
		visitor.visit(bombObject, FIELDS::bombObject);
	}


	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::name>() {return name;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::speed>() {return speed;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::speedVar>() {return speedVar;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::speedFlipRatio>() {return speedFlipRatio;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::declination>() {return declination;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::declinationVar>() {return declinationVar;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::planarAngle>() {return planarAngle;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::planarAngleVar>() {return planarAngleVar;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::color>() {return color;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::size>() {return size;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::sizeVar>() {return sizeVar;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::lifespan>() {return lifespan;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::lifespanVar>() {return lifespanVar;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::rotationAngle>() {return rotationAngle;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::rotationAngleVar>() {return rotationAngleVar;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::rotationSpeed>() {return rotationSpeed;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::rotationSpeedVar>() {return rotationSpeedVar;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::rotationAxis>() {return rotationAxis;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::randomRotSpeedSign>() {return randomRotSpeedSign;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::randomRotAxis>() {return randomRotAxis;}
	template<> const auto& NiPSEmitter::get<NiPSEmitter::FIELDS::unknown>() {return unknown;}
	void NiPSEmitter::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(name, FIELDS::name);
		visitor.visit(speed, FIELDS::speed);
		visitor.visit(speedVar, FIELDS::speedVar);
		visitor.visit(speedFlipRatio, FIELDS::speedFlipRatio);
		visitor.visit(declination, FIELDS::declination);
		visitor.visit(declinationVar, FIELDS::declinationVar);
		visitor.visit(planarAngle, FIELDS::planarAngle);
		visitor.visit(planarAngleVar, FIELDS::planarAngleVar);
		visitor.visit(color, FIELDS::color);
		visitor.visit(size, FIELDS::size);
		visitor.visit(sizeVar, FIELDS::sizeVar);
		visitor.visit(lifespan, FIELDS::lifespan);
		visitor.visit(lifespanVar, FIELDS::lifespanVar);
		visitor.visit(rotationAngle, FIELDS::rotationAngle);
		visitor.visit(rotationAngleVar, FIELDS::rotationAngleVar);
		visitor.visit(rotationSpeed, FIELDS::rotationSpeed);
		visitor.visit(rotationSpeedVar, FIELDS::rotationSpeedVar);
		visitor.visit(rotationAxis, FIELDS::rotationAxis);
		visitor.visit(randomRotSpeedSign, FIELDS::randomRotSpeedSign);
		visitor.visit(randomRotAxis, FIELDS::randomRotAxis);
		visitor.visit(unknown, FIELDS::unknown);
	}


	template<> const auto& NiPSVolumeEmitter::get<NiPSVolumeEmitter::FIELDS::emitterObject>() {return emitterObject;}
	void NiPSVolumeEmitter::accept(class FieldVisitor& visitor) {
		NiPSEmitter::accept(visitor);
		visitor.visit(emitterObject, FIELDS::emitterObject);
	}


	template<> const auto& NiPSBoxEmitter::get<NiPSBoxEmitter::FIELDS::emitterWidth>() {return emitterWidth;}
	template<> const auto& NiPSBoxEmitter::get<NiPSBoxEmitter::FIELDS::emitterHeight>() {return emitterHeight;}
	template<> const auto& NiPSBoxEmitter::get<NiPSBoxEmitter::FIELDS::emitterDepth>() {return emitterDepth;}
	void NiPSBoxEmitter::accept(class FieldVisitor& visitor) {
		NiPSVolumeEmitter::accept(visitor);
		visitor.visit(emitterWidth, FIELDS::emitterWidth);
		visitor.visit(emitterHeight, FIELDS::emitterHeight);
		visitor.visit(emitterDepth, FIELDS::emitterDepth);
	}


	template<> const auto& NiPSSphereEmitter::get<NiPSSphereEmitter::FIELDS::emitterRadius>() {return emitterRadius;}
	void NiPSSphereEmitter::accept(class FieldVisitor& visitor) {
		NiPSVolumeEmitter::accept(visitor);
		visitor.visit(emitterRadius, FIELDS::emitterRadius);
	}


	template<> const auto& NiPSCylinderEmitter::get<NiPSCylinderEmitter::FIELDS::emitterRadius>() {return emitterRadius;}
	template<> const auto& NiPSCylinderEmitter::get<NiPSCylinderEmitter::FIELDS::emitterHeight>() {return emitterHeight;}
	void NiPSCylinderEmitter::accept(class FieldVisitor& visitor) {
		NiPSVolumeEmitter::accept(visitor);
		visitor.visit(emitterRadius, FIELDS::emitterRadius);
		visitor.visit(emitterHeight, FIELDS::emitterHeight);
	}


	template<> const auto& NiPSMeshEmitter::get<NiPSMeshEmitter::FIELDS::numMeshEmitters>() {return numMeshEmitters;}
	template<> const auto& NiPSMeshEmitter::get<NiPSMeshEmitter::FIELDS::meshEmitters>() {return meshEmitters;}
	template<> const auto& NiPSMeshEmitter::get<NiPSMeshEmitter::FIELDS::emitAxis>() {return emitAxis;}
	template<> const auto& NiPSMeshEmitter::get<NiPSMeshEmitter::FIELDS::emitterObject>() {return emitterObject;}
	template<> const auto& NiPSMeshEmitter::get<NiPSMeshEmitter::FIELDS::meshEmissionType>() {return meshEmissionType;}
	template<> const auto& NiPSMeshEmitter::get<NiPSMeshEmitter::FIELDS::initialVelocityType>() {return initialVelocityType;}
	void NiPSMeshEmitter::accept(class FieldVisitor& visitor) {
		NiPSEmitter::accept(visitor);
		visitor.visit(numMeshEmitters, FIELDS::numMeshEmitters);
		visitor.visit(meshEmitters, FIELDS::meshEmitters);
		visitor.visit(emitAxis, FIELDS::emitAxis);
		visitor.visit(emitterObject, FIELDS::emitterObject);
		visitor.visit(meshEmissionType, FIELDS::meshEmissionType);
		visitor.visit(initialVelocityType, FIELDS::initialVelocityType);
	}


	template<> const auto& NiPSEmitterCtlr::get<NiPSEmitterCtlr::FIELDS::emitterName>() {return emitterName;}
	void NiPSEmitterCtlr::accept(class FieldVisitor& visitor) {
		NiSingleInterpController::accept(visitor);
		visitor.visit(emitterName, FIELDS::emitterName);
	}


	void NiPSEmitterFloatCtlr::accept(class FieldVisitor& visitor) {
		NiPSEmitterCtlr::accept(visitor);
	}


	template<> const auto& NiPSEmitParticlesCtlr::get<NiPSEmitParticlesCtlr::FIELDS::emitterActiveInterpolator>() {return emitterActiveInterpolator;}
	void NiPSEmitParticlesCtlr::accept(class FieldVisitor& visitor) {
		NiPSEmitterCtlr::accept(visitor);
		visitor.visit(emitterActiveInterpolator, FIELDS::emitterActiveInterpolator);
	}


	template<> const auto& NiPSForceCtlr::get<NiPSForceCtlr::FIELDS::forceName>() {return forceName;}
	void NiPSForceCtlr::accept(class FieldVisitor& visitor) {
		NiSingleInterpController::accept(visitor);
		visitor.visit(forceName, FIELDS::forceName);
	}


	void NiPSForceBoolCtlr::accept(class FieldVisitor& visitor) {
		NiPSForceCtlr::accept(visitor);
	}


	void NiPSForceFloatCtlr::accept(class FieldVisitor& visitor) {
		NiPSForceCtlr::accept(visitor);
	}


	void NiPSForceActiveCtlr::accept(class FieldVisitor& visitor) {
		NiPSForceBoolCtlr::accept(visitor);
	}


	void NiPSGravityStrengthCtlr::accept(class FieldVisitor& visitor) {
		NiPSForceFloatCtlr::accept(visitor);
	}


	void NiPSEmitterSpeedCtlr::accept(class FieldVisitor& visitor) {
		NiPSEmitterFloatCtlr::accept(visitor);
	}


	void NiPSEmitterRadiusCtlr::accept(class FieldVisitor& visitor) {
		NiPSEmitterFloatCtlr::accept(visitor);
	}


	void NiPSEmitterDeclinationCtlr::accept(class FieldVisitor& visitor) {
		NiPSEmitterFloatCtlr::accept(visitor);
	}


	void NiPSEmitterDeclinationVarCtlr::accept(class FieldVisitor& visitor) {
		NiPSEmitterFloatCtlr::accept(visitor);
	}


	void NiPSEmitterPlanarAngleCtlr::accept(class FieldVisitor& visitor) {
		NiPSEmitterFloatCtlr::accept(visitor);
	}


	void NiPSEmitterPlanarAngleVarCtlr::accept(class FieldVisitor& visitor) {
		NiPSEmitterFloatCtlr::accept(visitor);
	}


	void NiPSEmitterRotAngleCtlr::accept(class FieldVisitor& visitor) {
		NiPSEmitterFloatCtlr::accept(visitor);
	}


	void NiPSEmitterRotAngleVarCtlr::accept(class FieldVisitor& visitor) {
		NiPSEmitterFloatCtlr::accept(visitor);
	}


	void NiPSEmitterRotSpeedCtlr::accept(class FieldVisitor& visitor) {
		NiPSEmitterFloatCtlr::accept(visitor);
	}


	void NiPSEmitterRotSpeedVarCtlr::accept(class FieldVisitor& visitor) {
		NiPSEmitterFloatCtlr::accept(visitor);
	}


	void NiPSEmitterLifeSpanCtlr::accept(class FieldVisitor& visitor) {
		NiPSEmitterFloatCtlr::accept(visitor);
	}


	void NiPSResetOnLoopCtlr::accept(class FieldVisitor& visitor) {
		NiTimeController::accept(visitor);
	}


	template<> const auto& NiPSCollider::get<NiPSCollider::FIELDS::spawner>() {return spawner;}
	template<> const auto& NiPSCollider::get<NiPSCollider::FIELDS::type>() {return type;}
	template<> const auto& NiPSCollider::get<NiPSCollider::FIELDS::active>() {return active;}
	template<> const auto& NiPSCollider::get<NiPSCollider::FIELDS::bounce>() {return bounce;}
	template<> const auto& NiPSCollider::get<NiPSCollider::FIELDS::spawnOnCollide>() {return spawnOnCollide;}
	template<> const auto& NiPSCollider::get<NiPSCollider::FIELDS::dieOnCollide>() {return dieOnCollide;}
	void NiPSCollider::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(spawner, FIELDS::spawner);
		visitor.visit(type, FIELDS::type);
		visitor.visit(active, FIELDS::active);
		visitor.visit(bounce, FIELDS::bounce);
		visitor.visit(spawnOnCollide, FIELDS::spawnOnCollide);
		visitor.visit(dieOnCollide, FIELDS::dieOnCollide);
	}


	template<> const auto& NiPSPlanarCollider::get<NiPSPlanarCollider::FIELDS::width>() {return width;}
	template<> const auto& NiPSPlanarCollider::get<NiPSPlanarCollider::FIELDS::height>() {return height;}
	template<> const auto& NiPSPlanarCollider::get<NiPSPlanarCollider::FIELDS::xAxis>() {return xAxis;}
	template<> const auto& NiPSPlanarCollider::get<NiPSPlanarCollider::FIELDS::yAxis>() {return yAxis;}
	template<> const auto& NiPSPlanarCollider::get<NiPSPlanarCollider::FIELDS::colliderObject>() {return colliderObject;}
	void NiPSPlanarCollider::accept(class FieldVisitor& visitor) {
		NiPSCollider::accept(visitor);
		visitor.visit(width, FIELDS::width);
		visitor.visit(height, FIELDS::height);
		visitor.visit(xAxis, FIELDS::xAxis);
		visitor.visit(yAxis, FIELDS::yAxis);
		visitor.visit(colliderObject, FIELDS::colliderObject);
	}


	template<> const auto& NiPSSphericalCollider::get<NiPSSphericalCollider::FIELDS::radius>() {return radius;}
	template<> const auto& NiPSSphericalCollider::get<NiPSSphericalCollider::FIELDS::colliderObject>() {return colliderObject;}
	void NiPSSphericalCollider::accept(class FieldVisitor& visitor) {
		NiPSCollider::accept(visitor);
		visitor.visit(radius, FIELDS::radius);
		visitor.visit(colliderObject, FIELDS::colliderObject);
	}


	template<> const auto& NiPSSpawner::get<NiPSSpawner::FIELDS::masterParticleSystem>() {return masterParticleSystem;}
	template<> const auto& NiPSSpawner::get<NiPSSpawner::FIELDS::percentageSpawned>() {return percentageSpawned;}
	template<> const auto& NiPSSpawner::get<NiPSSpawner::FIELDS::spawnSpeedFactor>() {return spawnSpeedFactor;}
	template<> const auto& NiPSSpawner::get<NiPSSpawner::FIELDS::spawnSpeedFactorVar>() {return spawnSpeedFactorVar;}
	template<> const auto& NiPSSpawner::get<NiPSSpawner::FIELDS::spawnDirChaos>() {return spawnDirChaos;}
	template<> const auto& NiPSSpawner::get<NiPSSpawner::FIELDS::lifeSpan>() {return lifeSpan;}
	template<> const auto& NiPSSpawner::get<NiPSSpawner::FIELDS::lifeSpanVar>() {return lifeSpanVar;}
	template<> const auto& NiPSSpawner::get<NiPSSpawner::FIELDS::numSpawnGenerations>() {return numSpawnGenerations;}
	template<> const auto& NiPSSpawner::get<NiPSSpawner::FIELDS::minToSpawn>() {return minToSpawn;}
	template<> const auto& NiPSSpawner::get<NiPSSpawner::FIELDS::maxToSpawn>() {return maxToSpawn;}
	void NiPSSpawner::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(masterParticleSystem, FIELDS::masterParticleSystem);
		visitor.visit(percentageSpawned, FIELDS::percentageSpawned);
		visitor.visit(spawnSpeedFactor, FIELDS::spawnSpeedFactor);
		visitor.visit(spawnSpeedFactorVar, FIELDS::spawnSpeedFactorVar);
		visitor.visit(spawnDirChaos, FIELDS::spawnDirChaos);
		visitor.visit(lifeSpan, FIELDS::lifeSpan);
		visitor.visit(lifeSpanVar, FIELDS::lifeSpanVar);
		visitor.visit(numSpawnGenerations, FIELDS::numSpawnGenerations);
		visitor.visit(minToSpawn, FIELDS::minToSpawn);
		visitor.visit(maxToSpawn, FIELDS::maxToSpawn);
	}


	template<> const auto& NiEvaluator::get<NiEvaluator::FIELDS::nodeName>() {return nodeName;}
	template<> const auto& NiEvaluator::get<NiEvaluator::FIELDS::propertyType>() {return propertyType;}
	template<> const auto& NiEvaluator::get<NiEvaluator::FIELDS::controllerType>() {return controllerType;}
	template<> const auto& NiEvaluator::get<NiEvaluator::FIELDS::controllerId>() {return controllerId;}
	template<> const auto& NiEvaluator::get<NiEvaluator::FIELDS::interpolatorId>() {return interpolatorId;}
	template<> const auto& NiEvaluator::get<NiEvaluator::FIELDS::channelTypes>() {return channelTypes;}
	void NiEvaluator::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(nodeName, FIELDS::nodeName);
		visitor.visit(propertyType, FIELDS::propertyType);
		visitor.visit(controllerType, FIELDS::controllerType);
		visitor.visit(controllerId, FIELDS::controllerId);
		visitor.visit(interpolatorId, FIELDS::interpolatorId);
		visitor.visit(channelTypes, FIELDS::channelTypes);
	}


	void NiKeyBasedEvaluator::accept(class FieldVisitor& visitor) {
		NiEvaluator::accept(visitor);
	}


	template<> const auto& NiBoolEvaluator::get<NiBoolEvaluator::FIELDS::data>() {return data;}
	void NiBoolEvaluator::accept(class FieldVisitor& visitor) {
		NiKeyBasedEvaluator::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	void NiBoolTimelineEvaluator::accept(class FieldVisitor& visitor) {
		NiBoolEvaluator::accept(visitor);
	}


	template<> const auto& NiColorEvaluator::get<NiColorEvaluator::FIELDS::data>() {return data;}
	void NiColorEvaluator::accept(class FieldVisitor& visitor) {
		NiKeyBasedEvaluator::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiFloatEvaluator::get<NiFloatEvaluator::FIELDS::data>() {return data;}
	void NiFloatEvaluator::accept(class FieldVisitor& visitor) {
		NiKeyBasedEvaluator::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiPoint3Evaluator::get<NiPoint3Evaluator::FIELDS::data>() {return data;}
	void NiPoint3Evaluator::accept(class FieldVisitor& visitor) {
		NiKeyBasedEvaluator::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiQuaternionEvaluator::get<NiQuaternionEvaluator::FIELDS::data>() {return data;}
	void NiQuaternionEvaluator::accept(class FieldVisitor& visitor) {
		NiKeyBasedEvaluator::accept(visitor);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiTransformEvaluator::get<NiTransformEvaluator::FIELDS::value>() {return value;}
	template<> const auto& NiTransformEvaluator::get<NiTransformEvaluator::FIELDS::data>() {return data;}
	void NiTransformEvaluator::accept(class FieldVisitor& visitor) {
		NiKeyBasedEvaluator::accept(visitor);
		visitor.visit(value, FIELDS::value);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& NiConstBoolEvaluator::get<NiConstBoolEvaluator::FIELDS::value>() {return value;}
	void NiConstBoolEvaluator::accept(class FieldVisitor& visitor) {
		NiEvaluator::accept(visitor);
		visitor.visit(value, FIELDS::value);
	}


	template<> const auto& NiConstColorEvaluator::get<NiConstColorEvaluator::FIELDS::value>() {return value;}
	void NiConstColorEvaluator::accept(class FieldVisitor& visitor) {
		NiEvaluator::accept(visitor);
		visitor.visit(value, FIELDS::value);
	}


	template<> const auto& NiConstFloatEvaluator::get<NiConstFloatEvaluator::FIELDS::value>() {return value;}
	void NiConstFloatEvaluator::accept(class FieldVisitor& visitor) {
		NiEvaluator::accept(visitor);
		visitor.visit(value, FIELDS::value);
	}


	template<> const auto& NiConstPoint3Evaluator::get<NiConstPoint3Evaluator::FIELDS::value>() {return value;}
	void NiConstPoint3Evaluator::accept(class FieldVisitor& visitor) {
		NiEvaluator::accept(visitor);
		visitor.visit(value, FIELDS::value);
	}


	template<> const auto& NiConstQuaternionEvaluator::get<NiConstQuaternionEvaluator::FIELDS::value>() {return value;}
	void NiConstQuaternionEvaluator::accept(class FieldVisitor& visitor) {
		NiEvaluator::accept(visitor);
		visitor.visit(value, FIELDS::value);
	}


	template<> const auto& NiConstTransformEvaluator::get<NiConstTransformEvaluator::FIELDS::value>() {return value;}
	void NiConstTransformEvaluator::accept(class FieldVisitor& visitor) {
		NiEvaluator::accept(visitor);
		visitor.visit(value, FIELDS::value);
	}


	template<> const auto& NiBSplineEvaluator::get<NiBSplineEvaluator::FIELDS::startTime>() {return startTime;}
	template<> const auto& NiBSplineEvaluator::get<NiBSplineEvaluator::FIELDS::endTime>() {return endTime;}
	template<> const auto& NiBSplineEvaluator::get<NiBSplineEvaluator::FIELDS::data>() {return data;}
	template<> const auto& NiBSplineEvaluator::get<NiBSplineEvaluator::FIELDS::basisData>() {return basisData;}
	void NiBSplineEvaluator::accept(class FieldVisitor& visitor) {
		NiEvaluator::accept(visitor);
		visitor.visit(startTime, FIELDS::startTime);
		visitor.visit(endTime, FIELDS::endTime);
		visitor.visit(data, FIELDS::data);
		visitor.visit(basisData, FIELDS::basisData);
	}


	template<> const auto& NiBSplineColorEvaluator::get<NiBSplineColorEvaluator::FIELDS::handle>() {return handle;}
	void NiBSplineColorEvaluator::accept(class FieldVisitor& visitor) {
		NiBSplineEvaluator::accept(visitor);
		visitor.visit(handle, FIELDS::handle);
	}


	template<> const auto& NiBSplineCompColorEvaluator::get<NiBSplineCompColorEvaluator::FIELDS::offset>() {return offset;}
	template<> const auto& NiBSplineCompColorEvaluator::get<NiBSplineCompColorEvaluator::FIELDS::halfRange>() {return halfRange;}
	void NiBSplineCompColorEvaluator::accept(class FieldVisitor& visitor) {
		NiBSplineColorEvaluator::accept(visitor);
		visitor.visit(offset, FIELDS::offset);
		visitor.visit(halfRange, FIELDS::halfRange);
	}


	template<> const auto& NiBSplineFloatEvaluator::get<NiBSplineFloatEvaluator::FIELDS::handle>() {return handle;}
	void NiBSplineFloatEvaluator::accept(class FieldVisitor& visitor) {
		NiBSplineEvaluator::accept(visitor);
		visitor.visit(handle, FIELDS::handle);
	}


	template<> const auto& NiBSplineCompFloatEvaluator::get<NiBSplineCompFloatEvaluator::FIELDS::offset>() {return offset;}
	template<> const auto& NiBSplineCompFloatEvaluator::get<NiBSplineCompFloatEvaluator::FIELDS::halfRange>() {return halfRange;}
	void NiBSplineCompFloatEvaluator::accept(class FieldVisitor& visitor) {
		NiBSplineFloatEvaluator::accept(visitor);
		visitor.visit(offset, FIELDS::offset);
		visitor.visit(halfRange, FIELDS::halfRange);
	}


	template<> const auto& NiBSplinePoint3Evaluator::get<NiBSplinePoint3Evaluator::FIELDS::handle>() {return handle;}
	void NiBSplinePoint3Evaluator::accept(class FieldVisitor& visitor) {
		NiBSplineEvaluator::accept(visitor);
		visitor.visit(handle, FIELDS::handle);
	}


	template<> const auto& NiBSplineCompPoint3Evaluator::get<NiBSplineCompPoint3Evaluator::FIELDS::offset>() {return offset;}
	template<> const auto& NiBSplineCompPoint3Evaluator::get<NiBSplineCompPoint3Evaluator::FIELDS::halfRange>() {return halfRange;}
	void NiBSplineCompPoint3Evaluator::accept(class FieldVisitor& visitor) {
		NiBSplinePoint3Evaluator::accept(visitor);
		visitor.visit(offset, FIELDS::offset);
		visitor.visit(halfRange, FIELDS::halfRange);
	}


	template<> const auto& NiBSplineTransformEvaluator::get<NiBSplineTransformEvaluator::FIELDS::transform>() {return transform;}
	template<> const auto& NiBSplineTransformEvaluator::get<NiBSplineTransformEvaluator::FIELDS::translationHandle>() {return translationHandle;}
	template<> const auto& NiBSplineTransformEvaluator::get<NiBSplineTransformEvaluator::FIELDS::rotationHandle>() {return rotationHandle;}
	template<> const auto& NiBSplineTransformEvaluator::get<NiBSplineTransformEvaluator::FIELDS::scaleHandle>() {return scaleHandle;}
	void NiBSplineTransformEvaluator::accept(class FieldVisitor& visitor) {
		NiBSplineEvaluator::accept(visitor);
		visitor.visit(transform, FIELDS::transform);
		visitor.visit(translationHandle, FIELDS::translationHandle);
		visitor.visit(rotationHandle, FIELDS::rotationHandle);
		visitor.visit(scaleHandle, FIELDS::scaleHandle);
	}


	template<> const auto& NiBSplineCompTransformEvaluator::get<NiBSplineCompTransformEvaluator::FIELDS::translationOffset>() {return translationOffset;}
	template<> const auto& NiBSplineCompTransformEvaluator::get<NiBSplineCompTransformEvaluator::FIELDS::translationHalfRange>() {return translationHalfRange;}
	template<> const auto& NiBSplineCompTransformEvaluator::get<NiBSplineCompTransformEvaluator::FIELDS::rotationOffset>() {return rotationOffset;}
	template<> const auto& NiBSplineCompTransformEvaluator::get<NiBSplineCompTransformEvaluator::FIELDS::rotationHalfRange>() {return rotationHalfRange;}
	template<> const auto& NiBSplineCompTransformEvaluator::get<NiBSplineCompTransformEvaluator::FIELDS::scaleOffset>() {return scaleOffset;}
	template<> const auto& NiBSplineCompTransformEvaluator::get<NiBSplineCompTransformEvaluator::FIELDS::scaleHalfRange>() {return scaleHalfRange;}
	void NiBSplineCompTransformEvaluator::accept(class FieldVisitor& visitor) {
		NiBSplineTransformEvaluator::accept(visitor);
		visitor.visit(translationOffset, FIELDS::translationOffset);
		visitor.visit(translationHalfRange, FIELDS::translationHalfRange);
		visitor.visit(rotationOffset, FIELDS::rotationOffset);
		visitor.visit(rotationHalfRange, FIELDS::rotationHalfRange);
		visitor.visit(scaleOffset, FIELDS::scaleOffset);
		visitor.visit(scaleHalfRange, FIELDS::scaleHalfRange);
	}


	template<> const auto& NiLookAtEvaluator::get<NiLookAtEvaluator::FIELDS::flags>() {return flags;}
	template<> const auto& NiLookAtEvaluator::get<NiLookAtEvaluator::FIELDS::lookAtName>() {return lookAtName;}
	template<> const auto& NiLookAtEvaluator::get<NiLookAtEvaluator::FIELDS::drivenName>() {return drivenName;}
	template<> const auto& NiLookAtEvaluator::get<NiLookAtEvaluator::FIELDS::interpolator_Translation>() {return interpolator_Translation;}
	template<> const auto& NiLookAtEvaluator::get<NiLookAtEvaluator::FIELDS::interpolator_Roll>() {return interpolator_Roll;}
	template<> const auto& NiLookAtEvaluator::get<NiLookAtEvaluator::FIELDS::interpolator_Scale>() {return interpolator_Scale;}
	void NiLookAtEvaluator::accept(class FieldVisitor& visitor) {
		NiEvaluator::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(lookAtName, FIELDS::lookAtName);
		visitor.visit(drivenName, FIELDS::drivenName);
		visitor.visit(interpolator_Translation, FIELDS::interpolator_Translation);
		visitor.visit(interpolator_Roll, FIELDS::interpolator_Roll);
		visitor.visit(interpolator_Scale, FIELDS::interpolator_Scale);
	}


	template<> const auto& NiPathEvaluator::get<NiPathEvaluator::FIELDS::flags>() {return flags;}
	template<> const auto& NiPathEvaluator::get<NiPathEvaluator::FIELDS::bankDir>() {return bankDir;}
	template<> const auto& NiPathEvaluator::get<NiPathEvaluator::FIELDS::maxBankAngle>() {return maxBankAngle;}
	template<> const auto& NiPathEvaluator::get<NiPathEvaluator::FIELDS::smoothing>() {return smoothing;}
	template<> const auto& NiPathEvaluator::get<NiPathEvaluator::FIELDS::followAxis>() {return followAxis;}
	template<> const auto& NiPathEvaluator::get<NiPathEvaluator::FIELDS::pathData>() {return pathData;}
	template<> const auto& NiPathEvaluator::get<NiPathEvaluator::FIELDS::percentData>() {return percentData;}
	void NiPathEvaluator::accept(class FieldVisitor& visitor) {
		NiKeyBasedEvaluator::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(bankDir, FIELDS::bankDir);
		visitor.visit(maxBankAngle, FIELDS::maxBankAngle);
		visitor.visit(smoothing, FIELDS::smoothing);
		visitor.visit(followAxis, FIELDS::followAxis);
		visitor.visit(pathData, FIELDS::pathData);
		visitor.visit(percentData, FIELDS::percentData);
	}


	template<> const auto& NiSequenceData::get<NiSequenceData::FIELDS::name>() {return name;}
	template<> const auto& NiSequenceData::get<NiSequenceData::FIELDS::numControlledBlocks>() {return numControlledBlocks;}
	template<> const auto& NiSequenceData::get<NiSequenceData::FIELDS::arrayGrowBy>() {return arrayGrowBy;}
	template<> const auto& NiSequenceData::get<NiSequenceData::FIELDS::controlledBlocks>() {return controlledBlocks;}
	template<> const auto& NiSequenceData::get<NiSequenceData::FIELDS::numEvaluators>() {return numEvaluators;}
	template<> const auto& NiSequenceData::get<NiSequenceData::FIELDS::evaluators>() {return evaluators;}
	template<> const auto& NiSequenceData::get<NiSequenceData::FIELDS::textKeys>() {return textKeys;}
	template<> const auto& NiSequenceData::get<NiSequenceData::FIELDS::duration>() {return duration;}
	template<> const auto& NiSequenceData::get<NiSequenceData::FIELDS::cycleType>() {return cycleType;}
	template<> const auto& NiSequenceData::get<NiSequenceData::FIELDS::frequency>() {return frequency;}
	template<> const auto& NiSequenceData::get<NiSequenceData::FIELDS::accumRootName>() {return accumRootName;}
	template<> const auto& NiSequenceData::get<NiSequenceData::FIELDS::accumFlags>() {return accumFlags;}
	void NiSequenceData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(name, FIELDS::name);
		visitor.visit(numControlledBlocks, FIELDS::numControlledBlocks);
		visitor.visit(arrayGrowBy, FIELDS::arrayGrowBy);
		visitor.visit(controlledBlocks, FIELDS::controlledBlocks);
		visitor.visit(numEvaluators, FIELDS::numEvaluators);
		visitor.visit(evaluators, FIELDS::evaluators);
		visitor.visit(textKeys, FIELDS::textKeys);
		visitor.visit(duration, FIELDS::duration);
		visitor.visit(cycleType, FIELDS::cycleType);
		visitor.visit(frequency, FIELDS::frequency);
		visitor.visit(accumRootName, FIELDS::accumRootName);
		visitor.visit(accumFlags, FIELDS::accumFlags);
	}


	template<> const auto& NiShadowGenerator::get<NiShadowGenerator::FIELDS::name>() {return name;}
	template<> const auto& NiShadowGenerator::get<NiShadowGenerator::FIELDS::flags>() {return flags;}
	template<> const auto& NiShadowGenerator::get<NiShadowGenerator::FIELDS::numShadowCasters>() {return numShadowCasters;}
	template<> const auto& NiShadowGenerator::get<NiShadowGenerator::FIELDS::shadowCasters>() {return shadowCasters;}
	template<> const auto& NiShadowGenerator::get<NiShadowGenerator::FIELDS::numShadowReceivers>() {return numShadowReceivers;}
	template<> const auto& NiShadowGenerator::get<NiShadowGenerator::FIELDS::shadowReceivers>() {return shadowReceivers;}
	template<> const auto& NiShadowGenerator::get<NiShadowGenerator::FIELDS::target>() {return target;}
	template<> const auto& NiShadowGenerator::get<NiShadowGenerator::FIELDS::depthBias>() {return depthBias;}
	template<> const auto& NiShadowGenerator::get<NiShadowGenerator::FIELDS::sizeHint>() {return sizeHint;}
	template<> const auto& NiShadowGenerator::get<NiShadowGenerator::FIELDS::nearClippingDistance>() {return nearClippingDistance;}
	template<> const auto& NiShadowGenerator::get<NiShadowGenerator::FIELDS::farClippingDistance>() {return farClippingDistance;}
	template<> const auto& NiShadowGenerator::get<NiShadowGenerator::FIELDS::directionalLightFrustumWidth>() {return directionalLightFrustumWidth;}
	void NiShadowGenerator::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(name, FIELDS::name);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(numShadowCasters, FIELDS::numShadowCasters);
		visitor.visit(shadowCasters, FIELDS::shadowCasters);
		visitor.visit(numShadowReceivers, FIELDS::numShadowReceivers);
		visitor.visit(shadowReceivers, FIELDS::shadowReceivers);
		visitor.visit(target, FIELDS::target);
		visitor.visit(depthBias, FIELDS::depthBias);
		visitor.visit(sizeHint, FIELDS::sizeHint);
		visitor.visit(nearClippingDistance, FIELDS::nearClippingDistance);
		visitor.visit(farClippingDistance, FIELDS::farClippingDistance);
		visitor.visit(directionalLightFrustumWidth, FIELDS::directionalLightFrustumWidth);
	}


	template<> const auto& NiFurSpringController::get<NiFurSpringController::FIELDS::unknownFloat>() {return unknownFloat;}
	template<> const auto& NiFurSpringController::get<NiFurSpringController::FIELDS::unknownFloat2>() {return unknownFloat2;}
	template<> const auto& NiFurSpringController::get<NiFurSpringController::FIELDS::numBones>() {return numBones;}
	template<> const auto& NiFurSpringController::get<NiFurSpringController::FIELDS::bones>() {return bones;}
	template<> const auto& NiFurSpringController::get<NiFurSpringController::FIELDS::numBones2>() {return numBones2;}
	template<> const auto& NiFurSpringController::get<NiFurSpringController::FIELDS::bones2>() {return bones2;}
	void NiFurSpringController::accept(class FieldVisitor& visitor) {
		NiTimeController::accept(visitor);
		visitor.visit(unknownFloat, FIELDS::unknownFloat);
		visitor.visit(unknownFloat2, FIELDS::unknownFloat2);
		visitor.visit(numBones, FIELDS::numBones);
		visitor.visit(bones, FIELDS::bones);
		visitor.visit(numBones2, FIELDS::numBones2);
		visitor.visit(bones2, FIELDS::bones2);
	}


	template<> const auto& CStreamableAssetData::get<CStreamableAssetData::FIELDS::root>() {return root;}
	template<> const auto& CStreamableAssetData::get<CStreamableAssetData::FIELDS::unknownBytes>() {return unknownBytes;}
	void CStreamableAssetData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(root, FIELDS::root);
		visitor.visit(unknownBytes, FIELDS::unknownBytes);
	}


	template<> const auto& bhkCompressedMeshShape::get<bhkCompressedMeshShape::FIELDS::target>() {return target;}
	template<> const auto& bhkCompressedMeshShape::get<bhkCompressedMeshShape::FIELDS::userData>() {return userData;}
	template<> const auto& bhkCompressedMeshShape::get<bhkCompressedMeshShape::FIELDS::radius>() {return radius;}
	template<> const auto& bhkCompressedMeshShape::get<bhkCompressedMeshShape::FIELDS::unknownFloat1>() {return unknownFloat1;}
	template<> const auto& bhkCompressedMeshShape::get<bhkCompressedMeshShape::FIELDS::scale>() {return scale;}
	template<> const auto& bhkCompressedMeshShape::get<bhkCompressedMeshShape::FIELDS::radiusCopy>() {return radiusCopy;}
	template<> const auto& bhkCompressedMeshShape::get<bhkCompressedMeshShape::FIELDS::scaleCopy>() {return scaleCopy;}
	template<> const auto& bhkCompressedMeshShape::get<bhkCompressedMeshShape::FIELDS::data>() {return data;}
	void bhkCompressedMeshShape::accept(class FieldVisitor& visitor) {
		bhkShape::accept(visitor);
		visitor.visit(target, FIELDS::target);
		visitor.visit(userData, FIELDS::userData);
		visitor.visit(radius, FIELDS::radius);
		visitor.visit(unknownFloat1, FIELDS::unknownFloat1);
		visitor.visit(scale, FIELDS::scale);
		visitor.visit(radiusCopy, FIELDS::radiusCopy);
		visitor.visit(scaleCopy, FIELDS::scaleCopy);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::bitsPerIndex>() {return bitsPerIndex;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::bitsPerWIndex>() {return bitsPerWIndex;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::maskWIndex>() {return maskWIndex;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::maskIndex>() {return maskIndex;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::error>() {return error;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::boundsMin>() {return boundsMin;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::boundsMax>() {return boundsMax;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::weldingType>() {return weldingType;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::materialType>() {return materialType;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::numMaterials32>() {return numMaterials32;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::materials32>() {return materials32;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::numMaterials16>() {return numMaterials16;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::materials16>() {return materials16;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::numMaterials8>() {return numMaterials8;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::materials8>() {return materials8;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::numMaterials>() {return numMaterials;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::chunkMaterials>() {return chunkMaterials;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::numNamedMaterials>() {return numNamedMaterials;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::numTransforms>() {return numTransforms;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::chunkTransforms>() {return chunkTransforms;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::numBigVerts>() {return numBigVerts;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::bigVerts>() {return bigVerts;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::numBigTris>() {return numBigTris;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::bigTris>() {return bigTris;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::numChunks>() {return numChunks;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::chunks>() {return chunks;}
	template<> const auto& bhkCompressedMeshShapeData::get<bhkCompressedMeshShapeData::FIELDS::numConvexPieceA>() {return numConvexPieceA;}
	void bhkCompressedMeshShapeData::accept(class FieldVisitor& visitor) {
		bhkRefObject::accept(visitor);
		visitor.visit(bitsPerIndex, FIELDS::bitsPerIndex);
		visitor.visit(bitsPerWIndex, FIELDS::bitsPerWIndex);
		visitor.visit(maskWIndex, FIELDS::maskWIndex);
		visitor.visit(maskIndex, FIELDS::maskIndex);
		visitor.visit(error, FIELDS::error);
		visitor.visit(boundsMin, FIELDS::boundsMin);
		visitor.visit(boundsMax, FIELDS::boundsMax);
		visitor.visit(weldingType, FIELDS::weldingType);
		visitor.visit(materialType, FIELDS::materialType);
		visitor.visit(numMaterials32, FIELDS::numMaterials32);
		visitor.visit(materials32, FIELDS::materials32);
		visitor.visit(numMaterials16, FIELDS::numMaterials16);
		visitor.visit(materials16, FIELDS::materials16);
		visitor.visit(numMaterials8, FIELDS::numMaterials8);
		visitor.visit(materials8, FIELDS::materials8);
		visitor.visit(numMaterials, FIELDS::numMaterials);
		visitor.visit(chunkMaterials, FIELDS::chunkMaterials);
		visitor.visit(numNamedMaterials, FIELDS::numNamedMaterials);
		visitor.visit(numTransforms, FIELDS::numTransforms);
		visitor.visit(chunkTransforms, FIELDS::chunkTransforms);
		visitor.visit(numBigVerts, FIELDS::numBigVerts);
		visitor.visit(bigVerts, FIELDS::bigVerts);
		visitor.visit(numBigTris, FIELDS::numBigTris);
		visitor.visit(bigTris, FIELDS::bigTris);
		visitor.visit(numChunks, FIELDS::numChunks);
		visitor.visit(chunks, FIELDS::chunks);
		visitor.visit(numConvexPieceA, FIELDS::numConvexPieceA);
	}


	template<> const auto& BSInvMarker::get<BSInvMarker::FIELDS::rotationX>() {return rotationX;}
	template<> const auto& BSInvMarker::get<BSInvMarker::FIELDS::rotationY>() {return rotationY;}
	template<> const auto& BSInvMarker::get<BSInvMarker::FIELDS::rotationZ>() {return rotationZ;}
	template<> const auto& BSInvMarker::get<BSInvMarker::FIELDS::zoom>() {return zoom;}
	void BSInvMarker::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(rotationX, FIELDS::rotationX);
		visitor.visit(rotationY, FIELDS::rotationY);
		visitor.visit(rotationZ, FIELDS::rotationZ);
		visitor.visit(zoom, FIELDS::zoom);
	}


	template<> const auto& BSBoneLODExtraData::get<BSBoneLODExtraData::FIELDS::bonelodCount>() {return bonelodCount;}
	template<> const auto& BSBoneLODExtraData::get<BSBoneLODExtraData::FIELDS::bonelodInfo>() {return bonelodInfo;}
	void BSBoneLODExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(bonelodCount, FIELDS::bonelodCount);
		visitor.visit(bonelodInfo, FIELDS::bonelodInfo);
	}


	template<> const auto& BSBehaviorGraphExtraData::get<BSBehaviorGraphExtraData::FIELDS::behaviourGraphFile>() {return behaviourGraphFile;}
	template<> const auto& BSBehaviorGraphExtraData::get<BSBehaviorGraphExtraData::FIELDS::controlsBaseSkeleton>() {return controlsBaseSkeleton;}
	void BSBehaviorGraphExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(behaviourGraphFile, FIELDS::behaviourGraphFile);
		visitor.visit(controlsBaseSkeleton, FIELDS::controlsBaseSkeleton);
	}


	template<> const auto& BSLagBoneController::get<BSLagBoneController::FIELDS::linearVelocity>() {return linearVelocity;}
	template<> const auto& BSLagBoneController::get<BSLagBoneController::FIELDS::linearRotation>() {return linearRotation;}
	template<> const auto& BSLagBoneController::get<BSLagBoneController::FIELDS::maximumDistance>() {return maximumDistance;}
	void BSLagBoneController::accept(class FieldVisitor& visitor) {
		NiTimeController::accept(visitor);
		visitor.visit(linearVelocity, FIELDS::linearVelocity);
		visitor.visit(linearRotation, FIELDS::linearRotation);
		visitor.visit(maximumDistance, FIELDS::maximumDistance);
	}


	template<> const auto& BSLODTriShape::get<BSLODTriShape::FIELDS::lod0Size>() {return lod0Size;}
	template<> const auto& BSLODTriShape::get<BSLODTriShape::FIELDS::lod1Size>() {return lod1Size;}
	template<> const auto& BSLODTriShape::get<BSLODTriShape::FIELDS::lod2Size>() {return lod2Size;}
	void BSLODTriShape::accept(class FieldVisitor& visitor) {
		NiTriBasedGeom::accept(visitor);
		visitor.visit(lod0Size, FIELDS::lod0Size);
		visitor.visit(lod1Size, FIELDS::lod1Size);
		visitor.visit(lod2Size, FIELDS::lod2Size);
	}


	void BSFurnitureMarkerNode::accept(class FieldVisitor& visitor) {
		BSFurnitureMarker::accept(visitor);
	}


	void BSLeafAnimNode::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
	}


	template<> const auto& BSTreeNode::get<BSTreeNode::FIELDS::numBones1>() {return numBones1;}
	template<> const auto& BSTreeNode::get<BSTreeNode::FIELDS::bones1>() {return bones1;}
	template<> const auto& BSTreeNode::get<BSTreeNode::FIELDS::numBones2>() {return numBones2;}
	template<> const auto& BSTreeNode::get<BSTreeNode::FIELDS::bones>() {return bones;}
	void BSTreeNode::accept(class FieldVisitor& visitor) {
		NiNode::accept(visitor);
		visitor.visit(numBones1, FIELDS::numBones1);
		visitor.visit(bones1, FIELDS::bones1);
		visitor.visit(numBones2, FIELDS::numBones2);
		visitor.visit(bones, FIELDS::bones);
	}


	template<> const auto& BSTriShape::get<BSTriShape::FIELDS::boundingSphere>() {return boundingSphere;}
	template<> const auto& BSTriShape::get<BSTriShape::FIELDS::skin>() {return skin;}
	template<> const auto& BSTriShape::get<BSTriShape::FIELDS::shaderProperty>() {return shaderProperty;}
	template<> const auto& BSTriShape::get<BSTriShape::FIELDS::alphaProperty>() {return alphaProperty;}
	template<> const auto& BSTriShape::get<BSTriShape::FIELDS::vertexDesc>() {return vertexDesc;}
	template<> const auto& BSTriShape::get<BSTriShape::FIELDS::numTriangles>() {return numTriangles;}
	template<> const auto& BSTriShape::get<BSTriShape::FIELDS::numVertices>() {return numVertices;}
	template<> const auto& BSTriShape::get<BSTriShape::FIELDS::dataSize>() {return dataSize;}
	template<> const auto& BSTriShape::get<BSTriShape::FIELDS::vertexData>() {return vertexData;}
	template<> const auto& BSTriShape::get<BSTriShape::FIELDS::triangles>() {return triangles;}
	template<> const auto& BSTriShape::get<BSTriShape::FIELDS::particleDataSize>() {return particleDataSize;}
	template<> const auto& BSTriShape::get<BSTriShape::FIELDS::vertices>() {return vertices;}
	template<> const auto& BSTriShape::get<BSTriShape::FIELDS::trianglesCopy>() {return trianglesCopy;}
	void BSTriShape::accept(class FieldVisitor& visitor) {
		NiAVObject::accept(visitor);
		visitor.visit(boundingSphere, FIELDS::boundingSphere);
		visitor.visit(skin, FIELDS::skin);
		visitor.visit(shaderProperty, FIELDS::shaderProperty);
		visitor.visit(alphaProperty, FIELDS::alphaProperty);
		visitor.visit(vertexDesc, FIELDS::vertexDesc);
		visitor.visit(numTriangles, FIELDS::numTriangles);
		visitor.visit(numVertices, FIELDS::numVertices);
		visitor.visit(dataSize, FIELDS::dataSize);
		visitor.visit(vertexData, FIELDS::vertexData);
		visitor.visit(triangles, FIELDS::triangles);
		visitor.visit(particleDataSize, FIELDS::particleDataSize);
		visitor.visit(vertices, FIELDS::vertices);
		visitor.visit(trianglesCopy, FIELDS::trianglesCopy);
	}


	template<> const auto& BSMeshLODTriShape::get<BSMeshLODTriShape::FIELDS::lod0Size>() {return lod0Size;}
	template<> const auto& BSMeshLODTriShape::get<BSMeshLODTriShape::FIELDS::lod1Size>() {return lod1Size;}
	template<> const auto& BSMeshLODTriShape::get<BSMeshLODTriShape::FIELDS::lod2Size>() {return lod2Size;}
	void BSMeshLODTriShape::accept(class FieldVisitor& visitor) {
		BSTriShape::accept(visitor);
		visitor.visit(lod0Size, FIELDS::lod0Size);
		visitor.visit(lod1Size, FIELDS::lod1Size);
		visitor.visit(lod2Size, FIELDS::lod2Size);
	}


	template<> const auto& BSSubIndexTriShape::get<BSSubIndexTriShape::FIELDS::numPrimitives>() {return numPrimitives;}
	template<> const auto& BSSubIndexTriShape::get<BSSubIndexTriShape::FIELDS::numSegments>() {return numSegments;}
	template<> const auto& BSSubIndexTriShape::get<BSSubIndexTriShape::FIELDS::totalSegments>() {return totalSegments;}
	template<> const auto& BSSubIndexTriShape::get<BSSubIndexTriShape::FIELDS::segment>() {return segment;}
	template<> const auto& BSSubIndexTriShape::get<BSSubIndexTriShape::FIELDS::segmentData>() {return segmentData;}
	void BSSubIndexTriShape::accept(class FieldVisitor& visitor) {
		BSTriShape::accept(visitor);
		visitor.visit(numPrimitives, FIELDS::numPrimitives);
		visitor.visit(numSegments, FIELDS::numSegments);
		visitor.visit(totalSegments, FIELDS::totalSegments);
		visitor.visit(segment, FIELDS::segment);
		visitor.visit(segmentData, FIELDS::segmentData);
	}


	void bhkSystem::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
	}


	template<> const auto& bhkNPCollisionObject::get<bhkNPCollisionObject::FIELDS::flags>() {return flags;}
	template<> const auto& bhkNPCollisionObject::get<bhkNPCollisionObject::FIELDS::data>() {return data;}
	template<> const auto& bhkNPCollisionObject::get<bhkNPCollisionObject::FIELDS::bodyId>() {return bodyId;}
	void bhkNPCollisionObject::accept(class FieldVisitor& visitor) {
		NiCollisionObject::accept(visitor);
		visitor.visit(flags, FIELDS::flags);
		visitor.visit(data, FIELDS::data);
		visitor.visit(bodyId, FIELDS::bodyId);
	}


	template<> const auto& bhkPhysicsSystem::get<bhkPhysicsSystem::FIELDS::binaryData>() {return binaryData;}
	void bhkPhysicsSystem::accept(class FieldVisitor& visitor) {
		bhkSystem::accept(visitor);
		visitor.visit(binaryData, FIELDS::binaryData);
	}


	template<> const auto& bhkRagdollSystem::get<bhkRagdollSystem::FIELDS::binaryData>() {return binaryData;}
	void bhkRagdollSystem::accept(class FieldVisitor& visitor) {
		bhkSystem::accept(visitor);
		visitor.visit(binaryData, FIELDS::binaryData);
	}


	void BSExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
	}


	template<> const auto& BSClothExtraData::get<BSClothExtraData::FIELDS::binaryData>() {return binaryData;}
	void BSClothExtraData::accept(class FieldVisitor& visitor) {
		BSExtraData::accept(visitor);
		visitor.visit(binaryData, FIELDS::binaryData);
	}


	template<> const auto& BSSkin__Instance::get<BSSkin__Instance::FIELDS::skeletonRoot>() {return skeletonRoot;}
	template<> const auto& BSSkin__Instance::get<BSSkin__Instance::FIELDS::data>() {return data;}
	template<> const auto& BSSkin__Instance::get<BSSkin__Instance::FIELDS::numBones>() {return numBones;}
	template<> const auto& BSSkin__Instance::get<BSSkin__Instance::FIELDS::bones>() {return bones;}
	template<> const auto& BSSkin__Instance::get<BSSkin__Instance::FIELDS::numUnknown>() {return numUnknown;}
	template<> const auto& BSSkin__Instance::get<BSSkin__Instance::FIELDS::unknown>() {return unknown;}
	void BSSkin__Instance::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(skeletonRoot, FIELDS::skeletonRoot);
		visitor.visit(data, FIELDS::data);
		visitor.visit(numBones, FIELDS::numBones);
		visitor.visit(bones, FIELDS::bones);
		visitor.visit(numUnknown, FIELDS::numUnknown);
		visitor.visit(unknown, FIELDS::unknown);
	}


	template<> const auto& BSSkin__BoneData::get<BSSkin__BoneData::FIELDS::numBones>() {return numBones;}
	template<> const auto& BSSkin__BoneData::get<BSSkin__BoneData::FIELDS::boneList>() {return boneList;}
	void BSSkin__BoneData::accept(class FieldVisitor& visitor) {
		NiObject::accept(visitor);
		visitor.visit(numBones, FIELDS::numBones);
		visitor.visit(boneList, FIELDS::boneList);
	}


	template<> const auto& BSPositionData::get<BSPositionData::FIELDS::numData>() {return numData;}
	template<> const auto& BSPositionData::get<BSPositionData::FIELDS::data>() {return data;}
	void BSPositionData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(numData, FIELDS::numData);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& BSConnectPoint__Parents::get<BSConnectPoint__Parents::FIELDS::numConnectPoints>() {return numConnectPoints;}
	template<> const auto& BSConnectPoint__Parents::get<BSConnectPoint__Parents::FIELDS::connectPoints>() {return connectPoints;}
	void BSConnectPoint__Parents::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(numConnectPoints, FIELDS::numConnectPoints);
		visitor.visit(connectPoints, FIELDS::connectPoints);
	}


	template<> const auto& BSConnectPoint__Children::get<BSConnectPoint__Children::FIELDS::skinned>() {return skinned;}
	template<> const auto& BSConnectPoint__Children::get<BSConnectPoint__Children::FIELDS::numPoints>() {return numPoints;}
	template<> const auto& BSConnectPoint__Children::get<BSConnectPoint__Children::FIELDS::name>() {return name;}
	void BSConnectPoint__Children::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(skinned, FIELDS::skinned);
		visitor.visit(numPoints, FIELDS::numPoints);
		visitor.visit(name, FIELDS::name);
	}


	template<> const auto& BSEyeCenterExtraData::get<BSEyeCenterExtraData::FIELDS::numData>() {return numData;}
	template<> const auto& BSEyeCenterExtraData::get<BSEyeCenterExtraData::FIELDS::data>() {return data;}
	void BSEyeCenterExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(numData, FIELDS::numData);
		visitor.visit(data, FIELDS::data);
	}


	template<> const auto& BSPackedCombinedGeomDataExtra::get<BSPackedCombinedGeomDataExtra::FIELDS::vertexDesc>() {return vertexDesc;}
	template<> const auto& BSPackedCombinedGeomDataExtra::get<BSPackedCombinedGeomDataExtra::FIELDS::numVertices>() {return numVertices;}
	template<> const auto& BSPackedCombinedGeomDataExtra::get<BSPackedCombinedGeomDataExtra::FIELDS::numTriangles>() {return numTriangles;}
	template<> const auto& BSPackedCombinedGeomDataExtra::get<BSPackedCombinedGeomDataExtra::FIELDS::unknownFlags1>() {return unknownFlags1;}
	template<> const auto& BSPackedCombinedGeomDataExtra::get<BSPackedCombinedGeomDataExtra::FIELDS::unknownFlags2>() {return unknownFlags2;}
	template<> const auto& BSPackedCombinedGeomDataExtra::get<BSPackedCombinedGeomDataExtra::FIELDS::numData>() {return numData;}
	template<> const auto& BSPackedCombinedGeomDataExtra::get<BSPackedCombinedGeomDataExtra::FIELDS::objectData>() {return objectData;}
	void BSPackedCombinedGeomDataExtra::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(vertexDesc, FIELDS::vertexDesc);
		visitor.visit(numVertices, FIELDS::numVertices);
		visitor.visit(numTriangles, FIELDS::numTriangles);
		visitor.visit(unknownFlags1, FIELDS::unknownFlags1);
		visitor.visit(unknownFlags2, FIELDS::unknownFlags2);
		visitor.visit(numData, FIELDS::numData);
		visitor.visit(objectData, FIELDS::objectData);
	}


	template<> const auto& BSPackedCombinedSharedGeomDataExtra::get<BSPackedCombinedSharedGeomDataExtra::FIELDS::vertexDesc>() {return vertexDesc;}
	template<> const auto& BSPackedCombinedSharedGeomDataExtra::get<BSPackedCombinedSharedGeomDataExtra::FIELDS::numVertices>() {return numVertices;}
	template<> const auto& BSPackedCombinedSharedGeomDataExtra::get<BSPackedCombinedSharedGeomDataExtra::FIELDS::numTriangles>() {return numTriangles;}
	template<> const auto& BSPackedCombinedSharedGeomDataExtra::get<BSPackedCombinedSharedGeomDataExtra::FIELDS::unknownFlags1>() {return unknownFlags1;}
	template<> const auto& BSPackedCombinedSharedGeomDataExtra::get<BSPackedCombinedSharedGeomDataExtra::FIELDS::unknownFlags2>() {return unknownFlags2;}
	template<> const auto& BSPackedCombinedSharedGeomDataExtra::get<BSPackedCombinedSharedGeomDataExtra::FIELDS::numData>() {return numData;}
	template<> const auto& BSPackedCombinedSharedGeomDataExtra::get<BSPackedCombinedSharedGeomDataExtra::FIELDS::object>() {return object;}
	template<> const auto& BSPackedCombinedSharedGeomDataExtra::get<BSPackedCombinedSharedGeomDataExtra::FIELDS::objectData>() {return objectData;}
	void BSPackedCombinedSharedGeomDataExtra::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(vertexDesc, FIELDS::vertexDesc);
		visitor.visit(numVertices, FIELDS::numVertices);
		visitor.visit(numTriangles, FIELDS::numTriangles);
		visitor.visit(unknownFlags1, FIELDS::unknownFlags1);
		visitor.visit(unknownFlags2, FIELDS::unknownFlags2);
		visitor.visit(numData, FIELDS::numData);
		visitor.visit(object, FIELDS::object);
		visitor.visit(objectData, FIELDS::objectData);
	}


	void NiLightRadiusController::accept(class FieldVisitor& visitor) {
		NiFloatInterpController::accept(visitor);
	}


	template<> const auto& BSDynamicTriShape::get<BSDynamicTriShape::FIELDS::vertexDataSize>() {return vertexDataSize;}
	template<> const auto& BSDynamicTriShape::get<BSDynamicTriShape::FIELDS::vertices>() {return vertices;}
	void BSDynamicTriShape::accept(class FieldVisitor& visitor) {
		BSTriShape::accept(visitor);
		visitor.visit(vertexDataSize, FIELDS::vertexDataSize);
		visitor.visit(vertices, FIELDS::vertices);
	}


	template<> const auto& BSDistantObjectLargeRefExtraData::get<BSDistantObjectLargeRefExtraData::FIELDS::largeRef>() {return largeRef;}
	void BSDistantObjectLargeRefExtraData::accept(class FieldVisitor& visitor) {
		NiExtraData::accept(visitor);
		visitor.visit(largeRef, FIELDS::largeRef);
	}

}
