/* Copyright (c) 2018, NIF File Format Library and Tools
All rights reserved. Please see niflib.h for license. */

#include "test_utils.h"

//#include <objDecl.cpp>
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

class AnalyzerVisitor : public RecursiveFieldVisitor<AnalyzerVisitor> {

public:
	bool hasGeometry = false;
	bool hasSkinnedGeometry = false;
	bool hasCollision = false;
	bool hasRagdoll = false;
	bool hasAnimation = false;
	bool hasParticleEffects = false;


	AnalyzerVisitor(const NifInfo& info) :
		RecursiveFieldVisitor(*this, info)
	{}

	template<class T>
	inline void visit_object(T& obj) {}

	template<class T>
	inline void visit_compound(T& obj) {}

	template<class T>
	inline void visit_field(T& obj) {}
};


class ConverterVisitor : public RecursiveFieldVisitor<ConverterVisitor> {
public:
	ConverterVisitor(const NifInfo& info) :
	RecursiveFieldVisitor(*this, info)
	{}
	template<class T>
	inline void visit_object(T& obj) {}

	template<class T>
	inline void visit_compound(T& obj) {}

	template<class T>
	inline void visit_field(T& obj) {}
	//Path Root Nodes after ninodes :

	//BSBound
	//	BSFurnitureMarker
	//	BSKeyframeController
	//	BSXFlags
	//	NiAmbientLight
	//	NiBSBoneLODController
	//	NiBillboardNode
	//	NiCamera
	//	NiControllerManager
	//	NiDirectionalLight
	//	NiFogProperty
	//	NiKeyframeController
	//	NiMeshParticleSystem
	//	NiMultiTargetTransformController
	//	NiParticleSystem
	//	NiStringExtraData
	//	NiTextKeyExtraData
	//	NiTransformController
	//	NiVertexColorProperty
	//	NiVisController
	//	NiZBufferProperty


	/*
	// GEOMETRY

	NiTriShape
	NiTriStrips
	NiTriShape/NiTriShapeData/
	NiTriStrips/NiTriStripsData/

	// TANGENT SPACE

	NiTriShape / NiBinaryExtraData /
	NiTriStrips / NiBinaryExtraData /

	// LABELS / MISC
	
	NiTriShape/NiBooleanExtraData/
	NiTriStrips/NiBooleanExtraData/
	NiTriShape/NiIntegerExtraData/
	NiTriStrips/NiIntegerExtraData/
	NiTriShape/NiStringExtraData/
	NiTriStrips/NiStringExtraData/
	NiTriShape/NiZBufferProperty/
	
	// MATERIAL AND TEXTURES
	
	// OBLIVION
	Control Flow

	NiTriShape/NiVertexColorProperty/
	NiTriStrips/NiVertexColorProperty/

	Property of vertex colors. This object is referred to by the 
	root object of the NIF file whenever some NiTriShapeData object 
	has vertex colors with non-default settings; 

	if not present, vertex colors have vertex_mode=2 and lighting_mode=1.

	<enum name="VertMode" storage="uint">
	Describes how to apply vertex colors for NiVertexColorProperty.
	<option value="0" name="VERT_MODE_SRC_IGNORE">Emissive, ambient, and diffuse colors are all specified by the NiMaterialProperty.</option>
	<option value="1" name="VERT_MODE_SRC_EMISSIVE">Emissive colors are specified by the source vertex colors. Ambient+Diffuse are specified by the NiMaterialProperty.</option>
	<option value="2" name="VERT_MODE_SRC_AMB_DIF">Ambient+Diffuse colors are specified by the source vertex colors. Emissive is specified by the NiMaterialProperty. (Default)</option>
	</enum>

	<enum name="LightMode" storage="uint">
	Describes which lighting equation components influence the final vertex color for NiVertexColorProperty.
	<option value="0" name="LIGHT_MODE_EMISSIVE">Emissive.</option>
	<option value="1" name="LIGHT_MODE_EMI_AMB_DIF">Emissive + Ambient + Diffuse. (Default)</option>
	</enum>

	// MATERIAL
	NiTriShape/NiMaterialProperty/
	NiTriStrips/NiMaterialProperty/
	
	// TEXTURES
	NiTriShape/NiTexturingProperty/NiFlipController/NiBlendFloatInterpolator/
	NiTriStrips/NiTexturingProperty/NiFlipController/NiBlendFloatInterpolator/
	NiTriShape/NiTexturingProperty/NiFlipController/NiFloatInterpolator/NiFloatData/
	NiTriShape/NiTexturingProperty/NiFlipController/NiSourceTexture/
	NiTriShape/NiTexturingProperty/NiSourceTexture/
	NiTriStrips/NiTexturingProperty/NiFlipController/NiFlipController/NiBlendFloatInterpolator/
	NiTriStrips/NiTexturingProperty/NiFlipController/NiFlipController/NiSourceTexture/
	NiTriStrips/NiTexturingProperty/NiFlipController/NiSourceTexture/
	NiTriStrips/NiTexturingProperty/NiSourceTexture/
	NiTriStrips/NiTexturingProperty/NiTextureTransformController/NiBlendFloatInterpolator/
	NiTriStrips/NiTexturingProperty/NiTextureTransformController/NiFlipController/NiBlendFloatInterpolator/
	NiTriStrips/NiTexturingProperty/NiTextureTransformController/NiFlipController/NiSourceTexture/
	NiTriStrips/NiTexturingProperty/NiTextureTransformController/NiFloatInterpolator/NiFloatData/
	NiTriStrips/NiTexturingProperty/NiTextureTransformController/NiTextureTransformController/NiBlendFloatInterpolator/
	NiTriStrips/NiTexturingProperty/NiTextureTransformController/NiTextureTransformController/NiTextureTransformController/NiBlendFloatInterpolator/

	// ALPHAS
	NiTriShape/NiAlphaProperty/
	NiTriStrips/NiAlphaProperty/

	// SPECULAR
	NiTriShape/NiSpecularProperty/
	NiTriStrips/NiSpecularProperty/

	// MISC
	NiTriShape/NiStencilProperty/
	NiTriStrips/NiStencilProperty/
	NiTriStrips/NiDitherProperty/
	NiTriStrips/NiWireframeProperty/
	NiTriStrips/NiZBufferProperty/

	// CONTROLLED
	NiTriShape/NiTransformController/
	NiTriStrips/NiTransformController/
	NiTriShape/NiMaterialProperty/NiAlphaController/NiBlendFloatInterpolator/
	NiTriStrips/NiMaterialProperty/NiAlphaController/NiBlendFloatInterpolator/
	NiTriShape/NiMaterialProperty/NiAlphaController/NiFloatInterpolator/NiFloatData/
	NiTriStrips/NiMaterialProperty/NiAlphaController/NiFloatInterpolator/NiFloatData/
	NiTriStrips/NiMaterialProperty/NiAlphaController/NiMaterialColorController/NiBlendPoint3Interpolator/
	NiTriShape/NiMaterialProperty/NiMaterialColorController/NiBlendPoint3Interpolator/
	NiTriStrips/NiMaterialProperty/NiMaterialColorController/NiBlendPoint3Interpolator/
	NiTriShape/NiMaterialProperty/NiMaterialColorController/NiPoint3Interpolator/NiPosData/
	NiTriStrips/NiMaterialProperty/NiMaterialColorController/NiPoint3Interpolator/NiPosData/
	NiTriStrips/NiMaterialProperty/NiMaterialColorController/NiMaterialColorController/NiBlendPoint3Interpolator/
	
	// SKINNED
	NiTriShape/NiSkinInstance/NiSkinData/
	NiTriShape/NiSkinInstance/NiSkinData/NiSkinPartition/
	NiTriShape/NiSkinInstance/NiSkinPartition/
	
	// GEOMETRY MORPH
	//NB: Geom Morpher is not used in Skyrim
	NiTriShape/NiTransformController/NiGeomMorpherController/NiFloatInterpolator/
	NiTriShape/NiTransformController/NiGeomMorpherController/NiFloatInterpolator/NiFloatData/
	NiTriShape/NiTransformController/NiGeomMorpherController/NiMorphData/
	NiTriStrips/NiGeomMorpherController/NiBlendFloatInterpolator/
	NiTriStrips/NiGeomMorpherController/NiFloatInterpolator/
	NiTriStrips/NiGeomMorpherController/NiFloatInterpolator/NiFloatData/
	NiTriStrips/NiGeomMorpherController/NiMorphData/
	NiTriStrips/NiTransformController/NiGeomMorpherController/NiFloatInterpolator/
	NiTriStrips/NiTransformController/NiGeomMorpherController/NiFloatInterpolator/NiFloatData/
	NiTriStrips/NiTransformController/NiGeomMorpherController/NiMorphData/

	*/

	//Skyrim Paths. do not considerate Strips and triangulate all the shit
	/*
	NiTriShape / BSDismemberSkinInstance / NiSkinData /
	NiTriShape / BSDismemberSkinInstance / NiSkinPartition /
	NiTriShape / BSEffectShaderProperty /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyColorController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyColorController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyColorController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyColorController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyColorController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyColorController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyColorController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyColorController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyColorController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiFloatInterpolator / NiFloatData /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyColorController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyColorController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiFloatInterpolator / NiFloatData /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyColorController / BSEffectShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyColorController / BSEffectShaderPropertyFloatController / NiFloatInterpolator / NiFloatData /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyColorController / NiBlendPoint3Interpolator /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyColorController / NiPoint3Interpolator / NiPosData /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiFloatInterpolator / NiFloatData /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiFloatInterpolator / NiFloatData /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiFloatInterpolator / NiFloatData /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyFloatController / BSEffectShaderPropertyFloatController / NiFloatInterpolator / NiFloatData /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSEffectShaderProperty / BSEffectShaderPropertyFloatController / NiFloatInterpolator / NiFloatData /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyColorController / BSLightingShaderPropertyColorController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyColorController / BSLightingShaderPropertyColorController / BSLightingShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyColorController / BSLightingShaderPropertyColorController / BSLightingShaderPropertyFloatController / NiFloatInterpolator / NiFloatData /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyColorController / BSLightingShaderPropertyColorController / NiBlendPoint3Interpolator /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyColorController / BSLightingShaderPropertyColorController / NiPoint3Interpolator / NiPosData /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyColorController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyColorController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / NiFloatInterpolator / NiFloatData /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyColorController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyColorController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / NiFloatInterpolator / NiFloatData /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyColorController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyColorController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / NiFloatInterpolator / NiFloatData /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyColorController / BSLightingShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyColorController / BSLightingShaderPropertyFloatController / NiFloatInterpolator / NiFloatData /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyColorController / NiBlendPoint3Interpolator /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyColorController / NiPoint3Interpolator / NiPosData /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / NiFloatInterpolator / NiFloatData /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / NiFloatInterpolator / NiFloatData /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyFloatController / BSLightingShaderPropertyFloatController / NiFloatInterpolator / NiFloatData /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyFloatController / NiBlendFloatInterpolator /
	NiTriShape / BSLightingShaderProperty / BSLightingShaderPropertyFloatController / NiFloatInterpolator / NiFloatData /
	NiTriShape / BSLightingShaderProperty / BSShaderTextureSet /
	NiTriShape / BSSkyShaderProperty /
	NiTriShape / BSWArray /
	NiTriShape / NiAlphaProperty /
	NiTriShape / NiAlphaProperty / BSNiAlphaPropertyTestRefController / NiBlendFloatInterpolator /
	NiTriShape / NiAlphaProperty / BSNiAlphaPropertyTestRefController / NiFloatInterpolator / NiFloatData /
	NiTriShape / NiBooleanExtraData /
	NiTriShape / NiFloatExtraData /
	NiTriShape / NiIntegerExtraData /
	NiTriShape / NiSkinInstance / NiSkinData /
	NiTriShape / NiSkinInstance / NiSkinPartition /
	NiTriShape / NiStringExtraData /
	NiTriShape / NiStringsExtraData /
	NiTriShape / NiTextKeyExtraData /
	NiTriShape / NiTriShapeData /
	NiTriShape / NiTriShapeData / NiAdditionalGeometryData /
	*/

	template<>
	inline void visit_object(NiTriShape& obj) {
	
	}

	//NB: Deprecated after Skyrim, triangulate
	template<>
	inline void visit_object(NiTriStrips& obj) {
		//get the NiTriStripsData
		NiGeometryDataRef ref = obj.GetData();

		NiTriStripsDataRef stripsData = DynamicCast<NiTriStripsData>(ref);

		//Copy over existing NiTriStripData to NiTriShapeData
		NiTriShapeDataRef shapeData = new  NiTriShapeData();

		//Sort out textures.
		BSLightingShaderPropertyRef lightingProperty = new BSLightingShaderProperty();
		BSShaderTextureSetRef textureSet = new BSShaderTextureSet();
		//oblivions
		NiMaterialPropertyRef material = new NiMaterialProperty();
		NiTexturingPropertyRef texturing = new NiTexturingProperty();

		//get properties
		vector<Ref<NiProperty>> properties = obj.GetProperties();
		for (NiPropertyRef propertyRef : properties)
		{
			if (propertyRef->IsSameType(NiMaterialProperty::TYPE))
			{
				material = DynamicCast<NiMaterialProperty>(propertyRef);
				//setup lighting
				lightingProperty->SetShaderType(BSShaderType::SHADER_DEFAULT);
				lightingProperty->SetName(material->GetName());
				lightingProperty->SetEmissiveColor(material->GetEmissiveColor());
				lightingProperty->SetEmissiveMultiple(1);
				lightingProperty->SetGlossiness(material->GetGlossiness());
				lightingProperty->SetAlpha(material->GetAlpha());
			}
			if (propertyRef->IsSameType(NiTexturingProperty::TYPE))
			{
				texturing = DynamicCast<NiTexturingProperty>(propertyRef);
				string textureName = "tes4\\";
				textureName += texturing->GetBaseTexture().source->GetFileName();
				string textureNormal = textureName;
				textureNormal.erase(textureNormal.end() - 4, textureNormal.end());
				textureNormal += "_n.dds";
				//setup textureSet (TODO)
				std::vector<std::string> textures{
					textureName,
					textureNormal,
					"",
					"",
					"",
					"",
					"",
					""
				};
				textureSet->SetTextures(textures);
			}
		}
		//Vertices
		shapeData->SetHasVertices(stripsData->GetHasVertices());
		shapeData->SetVertices(stripsData->GetVertices());

		//Normals
		shapeData->SetHasNormals(stripsData->GetHasNormals());
		shapeData->SetNormals(stripsData->GetNormals());

		//Tangents and Bitangents (TODO)
		//shapeData->SetBitangents(stripsData->GetBitangents());
		//shapeData->SetTangents(stripsData->GetTangents());

		//BS Vector flags. Oblivion doesn't have this, just settings it to UV and tangents.
		//Might need to work out Unk64, Unk128 and Unk256.
		//shapeData->SetBsVectorFlags(static_cast<BSVectorFlags>(4097));
		shapeData->SetBsVectorFlags(BSVectorFlags::BSVF_HAS_UV);

		//UVs
		shapeData->SetUvSets(stripsData->GetUvSets());

		//center & radius
		shapeData->SetCenter(stripsData->GetCenter());
		shapeData->SetRadius(stripsData->GetRadius());

		//Vertex Colours
		shapeData->SetHasVertexColors(stripsData->GetHasVertexColors());
		shapeData->SetVertexColors(stripsData->GetVertexColors());

		//Flags
		shapeData->SetConsistencyFlags(stripsData->GetConsistencyFlags());

		//triangles
		vector<Triangle> triangles = triangulate(stripsData->GetPoints());
		shapeData->SetNumTriangles(triangles.size());
		shapeData->SetNumTrianglePoints(triangles.size() * 3);
		shapeData->SetHasTriangles(1);
		shapeData->SetTriangles(triangles);

		//Add Texture properties
		lightingProperty->SetTextureSet(textureSet);
		obj.SetShaderProperty(DynamicCast<BSShaderProperty>(lightingProperty));

		//finally set the data
		vector<Ref<NiProperty>> nullproperties;
		vector<Ref<NiExtraData>> nulldata;
		obj.SetExtraDataList(nulldata);
		obj.SetProperties(nullproperties);
		obj.SetData(DynamicCast<NiGeometryData>(shapeData));
	}
	template<>
	inline void visit_object(NiTriShapeData& obj) {
	}
	

	//Sequences
	//NiControllerManager
	//NiFloatExtraDataController
	//NiTransformController
	//NiVisController


	//	Havok Collisions

	// Used in creatures' skeleton
	//	bhkBlendCollisionObject
	//	bhkBlendController
	//	bhkCollisionObject
	//	bhkSPCollisionObject
	//Starts a collision object
	template<>
	inline void visit_object(bhkBlendCollisionObject& obj) {}

	//To Be Checked
	template<>
	inline void visit_object(bhkBlendController& obj) {}

	//Static collision
	template<>
	inline void visit_object(bhkCollisionObject& obj) {
		//obj.SetFlags(static_cast<bhkCOFlags>(129));
	}
	//Phantom collision to be handled by logic instead of the actual solvers
	template<>
	inline void visit_object(bhkSPCollisionObject& obj) {}

};
TEST(ConversionTest, OblivionToSkyrimSingleNIF) {

	//get nifs
	NifInfo info;
	vector<path> nifs;
	findFiles(test_nifs_in_path, ".nif", nifs);

	//check if we found nifs
	if (nifs.empty()) return;

	//get the first nif
	NiObjectRef root = ReadNifTree(nifs[0].string().c_str(), &info);

	//set versioning
	info.userVersion = 12;
	info.userVersion2 = 83;
	info.version = Niflib::VER_20_2_0_7; //or 0x14020007
	
	//convert nif
	ConverterVisitor fimpl(info);
	root->accept(fimpl, info);
	
	//Fix useless blocks
	NiNodeRef rootRef = DynamicCast<NiNode>(root);
	BSFadeNodeRef fadeNode = new BSFadeNode();
	fadeNode->SetName(rootRef->GetName());
	fadeNode->SetExtraDataList(rootRef->GetExtraDataList());
	fadeNode->SetFlags(524302);
	fadeNode->SetCollisionObject(rootRef->GetCollisionObject());
	fadeNode->SetChildren(rootRef->GetChildren());
	root = fadeNode;
	vector<NiAVObjectRef> children = fadeNode->GetChildren();
	int index = 0;
	for (NiAVObjectRef block : children) {
		if (block->IsDerivedType(NiTriStrips::TYPE)) {
			NiTriStripsRef stripsRef = DynamicCast<NiTriStrips>(block);
			if (stripsRef->GetData()->IsDerivedType(NiTriShapeData::TYPE)) {
				NiTriShapeRef shapeRef = new NiTriShape();
				shapeRef->SetName(stripsRef->GetName());
				shapeRef->SetExtraDataList(stripsRef->GetExtraDataList());
				shapeRef->SetFlags(524302);
				shapeRef->SetData(stripsRef->GetData());
				shapeRef->SetShaderProperty(stripsRef->GetShaderProperty());
				block = shapeRef;
				children[index] = shapeRef;
			}
		}
		index++;
	}
	fadeNode->SetChildren(children);
	root = fadeNode;
	//create the new name
	std::string newName = nifs[0].string();
	newName.erase(newName.end() - 4, newName.end());
	newName += "_converted.nif";

	//write new nif
	WriteNifTree(newName.c_str(), root, info);
}
//Original's Ormin Conversion
//https://github.com/Ormin/skyblivion-NIFConverter

/*
#!/usr/bin/python
# -*- coding: utf-8 -*-

# from nif_common import NifImportExport
# from nif_common import NifConfig
# from nif_common import NifFormat
# from nif_common import EgmFormat
# from nif_common import __version__
# from itertools import izip

import logging
import math
import operator
import sys
import commandline
import re
import decimal
import os

from pprint import pprint
import pyffi.utils.quickhull
import pyffi.spells.nif
from pyffi.formats.nif import NifFormat
from pyffi.formats.tri import TriFormat
import pyffi.formats.nif
import pyffi.spells.nif.fix
import pyffi.spells.nif.optimize
import pyffi.spells.nif.check
from pyffi.object_models.xml.array import Array
from subprocess import call
from subprocess import check_output
from optparse import OptionParser
from pyffi.utils.quickhull import qhull3d
from pyffi.utils.inertia import get_mass_center_inertia_polyhedron


# from array import *

class Parser :

	isanim = 0
	shapes_done = []  # Shapes which are parsed(scaled and otherwise changed) are put here
	current_root = None
	current_body = None
	current_node = None
	additional_mopp = 0  # NO additional mopp for now.
	is_clutter = 0  # NO additional mopp for now.
	min_x = None
	max_x = None
	min_y = None
	max_y = None
	min_z = None
	max_z = None
	data = None
	diagonal = 0.0
	dstdata = None
	path_mesh = None
	path_output = None
	has_metadata = 0
	templatecollision = open('CollisionMesh.nif', 'rb')
	collisiondata = NifFormat.Data()
	collisiondata.inspect(templatecollision)
	collisiondata.read(templatecollision)
	collisiondata = collisiondata.roots[0]
	ofs0 = 1
	ofs2 = 1

	def arbitrary_moppgen(self, subshape) :
	temppath = self.path_output + '_mopptemp'
	temppathoutput = self.path_output + '_mopptempoutput'
	stream_temp = open(temppath, 'wb')
	tempdata = NifFormat.Data(version = 0x14020007, user_version = 12,
		user_version_2 = 83)
	temproot = NifFormat.BSFadeNode()
	temproot.collision_object = NifFormat.bhkCollisionObject()
	temproot.collision_object.target = temproot
	temproot.collision_object.body = NifFormat.bhkRigidBody()
	temproot.collision_object.body.shape = subshape
	tempdata.roots.append(temproot)
	tempdata.write(stream_temp)
	stream_temp.close()
	check_output(['mopp_rl', temppath, temppathoutput])
	niffile = open(temppathoutput, 'rb')
	collisiondata = NifFormat.Data()
	collisiondata.inspect(niffile)
	collisiondata.read(niffile)
	ready_collision = \
	collisiondata.roots[0].collision_object.body.shape
	ready_collision.shape.target = self.current_node

	# self.current_root.replace_global_node(subshape, ready_collision);

niffile.close()
os.remove(temppath)
os.remove(temppathoutput)
return ready_collision

def parse_collision(self, node) :

	# NiNode Collision

	if self.options.generateCollision == 'mopp' \
		or self.options.generateCollision == 'convex' \
		or self.options.generateCollision == 'mopp_new':

if node.collision_object != None :
	node.collision_object.flags = 129

	rigidbody = node.collision_object.body
	if rigidbody == None :
		rigidbody = node.find(None, NifFormat.bhkRigidBodyT)

		if isinstance(rigidbody,
			NifFormat.bhkSimpleShapePhantom) :

			self.current_body = rigidbody
			self.parse_shape(rigidbody.shape, None)
		else:

# Scaling translation

if isinstance(rigidbody, NifFormat.bhkRigidBodyT) :
	rigidbody.translation.x *= 0.1
	rigidbody.translation.y *= 0.1
	rigidbody.translation.z *= 0.1

	rigidbody.center.x *= 0.1
	rigidbody.center.y *= 0.1
	rigidbody.center.z *= 0.1

	rigidbody.unknown_byte = 116
	rigidbody.unknown_time_factor_or_gravity_factor_1 = \
	1
	rigidbody.unknown_time_factor_or_gravity_factor_2 = \
	1
	rigidbody.unknown_2_shorts[0] = 29541
	rigidbody.unknown_2_shorts[1] = 23659
	rigidbody.unknown_int_6 = 196608

	# other values in 7 shorts seem to crash, this is safe assumption.

	rigidbody.unknown_7_shorts[0] = 0
	rigidbody.unknown_7_shorts[1] = 20704
	rigidbody.unknown_7_shorts[2] = 9444
	rigidbody.unknown_7_shorts[3] = 0
	rigidbody.unknown_7_shorts[4] = 0
	rigidbody.unknown_7_shorts[5] = 60417
	rigidbody.unknown_7_shorts[6] = 65535

	if isinstance(rigidbody.shape,
		NifFormat.bhkPackedNiTriStripsShape) :
		dummymopp = NifFormat.bhkMoppBvTreeShape()
		dummymopp.shape = rigidbody.shape
		rigidbody.shape = dummymopp

		if rigidbody.mass != 0 :

			self.is_clutter = 1
			thenode = self.current_root.find(None,
				NifFormat.BSXFlags)  # We're removing the nodes who point to root / group NiNodes since those are not used in skyrim
			thenode.flags = 194

			# This is deprecated as it makes a invalid havok.We use a collision template instead - it gives better results.

			rigidbody.mass *= 6  # .. ?

			rigidbody.motion_system = 3  # MO_SYS_SPHERE_INERTIA seems to be used in any clutter
			rigidbody.quality_type = 4  # MO_QUAL_MOVING
			rigidbody.deactivator_type = 1  # DEACTIVATOR_NEVER
			rigidbody.solver_deactivation = 2  # SOLVER_DEACTIVATION_LOW
			rigidbody.rolling_friction_multiplier = 0

			# Those are more or less default skyrim havok values

			rigidbody.linear_damping = 0.0996
			rigidbody.angular_damping = 0.0498
			rigidbody.friction = 0.50
			rigidbody.restitution = 0.40
			rigidbody.max_linear_velocity = 104.4
			rigidbody.max_angular_velocity = 31.57

			# rigidbody.unknown_int_1 = 611444640
			# rigidbody.unknown_int_2 = 1
			# rigidbody.unknown_byte = 0

			rigidbody.unknown_2_shorts[0] = 0
			rigidbody.unknown_2_shorts[1] = 0
			rigidbody.unknown_7_shorts[0] = 0
			rigidbody.unknown_7_shorts[3] = 0
			rigidbody.unknown_7_shorts[4] = 0
			rigidbody.unknown_7_shorts[6] = 65535
			rigidbody.unknown_int_7 = 0
			rigidbody.unknown_int_8 = 0
			rigidbody.unknown_int_81 = 0
			rigidbody.unknown_int_91 = 0

			if self.options.shaderPreset == 'signs':

if rigidbody.inertia.m_11 >= 100 :
	rigidbody.inertia.m_11 /= 100

	if rigidbody.inertia.m_22 >= 100 :
		rigidbody.inertia.m_22 /= 100

		if rigidbody.inertia.m_33 >= 100 :
			rigidbody.inertia.m_33 /= 100
		else :

			if self.isanim == 1 :
				rigidbody.motion_system = 4  # SYS_BOX
			else :
				rigidbody.motion_system = 5  # SYS_BOX_STABILIZED

				rigidbody.deactivator_type = 1
				rigidbody.quality_type = 1

				rigidbody.unknown_int_7 = 0
				rigidbody.unknown_int_8 = 0
				rigidbody.unknown_int_81 = 0
				rigidbody.unknown_int_91 = 0

				# Handle BSHavok shape.

				self.current_body = rigidbody
				self.parse_shape(rigidbody.shape, None)

				if rigidbody.num_constraints != 0:

for (key, constraint) in \
enumerate(rigidbody.constraints) :
	self.parse_constraint(constraint)

	if self.options.generateCollision == 'debugCollision' :
		if node.collision_object != None :

			packed = node.collision_object.body.shape.shape.data
			newshape = NifFormat.NiTriShape()
			newshapedata = NifFormat.NiTriShapeData()
			newshapedata.num_vertices = packed.num_vertices
			newshapedata.num_triangles = packed.num_triangles
			for (key, vertice) in enumerate(packed.vertices) :
				newshapedata.vertices.append(vertice)

				first_triangle = 1
				ix = 1
				target_facing_inside = 0

				for (key, triangle) in enumerate(packed.triangles) :

					calculated_normal = self.find_normal_face(triangle,
						newshapedata)

					align_plus = sum(abs(x) for x in
					(calculated_normal.x + triangle.normal.x,
						calculated_normal.y + triangle.normal.y,
						calculated_normal.z + triangle.normal.z))
					align_minus = sum(abs(x) for x in
					(calculated_normal.x - triangle.normal.x,
						calculated_normal.y - triangle.normal.y,
						calculated_normal.z - triangle.normal.z))

					if align_plus < align_minus:
v_2 = triangle.triangle.v_2
v_1 = triangle.triangle.v_1
triangle.triangle.v_1 = v_2
triangle.triangle.v_2 = v_1

newshapedata.triangles.append(triangle.triangle)

newshapedata.has_triangles = 1
newshape.data = newshapedata

node.children[0] = newshape

if self.options.generateCollision == 'none':

# Nulling collision

if node.collision_object != None:
node.collision_object = None

def append_metadata(self, metadata) :
	self.has_metadata = 1
	f = open(self.path_output + '.metadata', 'a+')
	f.write(metadata + '\n')
	f.close()

	def find_normal_face(self, triangle, shape) :

	triangle_u_vector = 0.0
	triangle_v_vector = 0.0
	nx = 0.0
	ny = 0.0
	nz = 0.0

	(triangle_u_vector, triangle_v_vector, nx, ny, nz) = \
	[decimal.Decimal(v) for v in(triangle_u_vector,
		triangle_v_vector, nx, ny, nz)]
triangle_u_vector = shape.vertices[triangle.triangle.v_2] \
- shape.vertices[triangle.triangle.v_1]
triangle_v_vector = shape.vertices[triangle.triangle.v_3] \
- shape.vertices[triangle.triangle.v_1]
normal = NifFormat.Vector3()
nx = triangle_u_vector.y * triangle_v_vector.z \
- triangle_u_vector.z * triangle_v_vector.y
ny = triangle_u_vector.z * triangle_v_vector.x \
- triangle_u_vector.x * triangle_v_vector.z
nz = triangle_u_vector.x * triangle_v_vector.y \
- triangle_u_vector.y * triangle_v_vector.x
normal.x = nx
normal.y = ny
normal.z = nz

normalized = NifFormat.Vector3()
length = math.sqrt(normal.x * normal.x + normal.y * normal.y
	+ normal.z * normal.z)
	if length != 0:
normalized.x = normal.x / length
normalized.y = normal.y / length
normalized.z = normal.z / length
	else:
normalized.x = normal.x
normalized.y = normal.y
normalized.z = normal.z

return normalized

def parse(self) :

	niffile = open(self.path_mesh, 'rb')
	self.data = NifFormat.Data()
	self.data.inspect(niffile)
	self.data.read(niffile)
	self.dstdata = NifFormat.Data(version = 0x14020007,
		user_version = 12, user_version_2 = 83)
	f = open(self.path_output + '.metadata', 'w')

	f.close()

	palette = self.data.roots[0].find(None,
		NifFormat.NiStringPalette)
	if palette != None:
self.palette = palette.palette

for root in self.data.roots :

	if isinstance(root, NifFormat.NiBillboardNode) :

		# We are nesting the NiBillboardNode roots, skyrim - alike behaviour.

		newroot = NifFormat.NiNode()
		newroot.flags = 14
		newroot.num_children = 1
		newroot.children.update_size()
		newroot.children[0] = root
		parser.current_root = newroot
		parser.parse_node(newroot, newroot)
		self.dstdata.roots.append(newroot)
	else:
parser.current_root = root
parser.parse_node(root, root)
self.dstdata.roots.append(root)

if self.options.updateTangents != '0' :
	toaster = pyffi.spells.nif.NifToaster()
	spell = \
	pyffi.spells.nif.optimize.SpellOptimizeGeometry(data = self.dstdata,
		toaster = toaster)
	spell.recurse()

	stream_new = open(self.path_output, 'wb')

	self.dstdata.write(stream_new)
	stream_new.close()

	if self.options.generateCollision == 'mopp_new':
self.find_bounding_box(self.dstdata.roots[0])  # We need the diagonal.
max = round(self.diagonal, 4) / 100

percent = 1
input = max * percent
f = open(self.path_output + '.mlx', 'w')
f.write('<!DOCTYPE FilterScript><FilterScript><filter name="Merge Close Vertices"><Param type="RichAbsPerc" value="'
	+ str('%.4f' % input)
	+ '" min="0" name="Threshold" max="' + str('%.4f'
		% max) + '"/></filter></FilterScript>')
	f.close()

	# Export obj for further decimation
	f = open(self.path_output + '.obj', 'w')

	for root in self.dstdata.roots:
parser.current_root = root
parser.export_node(root, root, f)

f.close()

# optimize the geometry
# toaster = pyffi.spells.nif.NifToaster(pyffi.spells.nif.optimize.SpellOptimizeGeometry);
# toaster.toast(self.path_output);

def find_bounding_box(self, node) :

	if self.diagonal == 0.0 :
		self.sub_find_bounding_box(node)

		self.diagonal = math.sqrt((self.max_x - self.min_x)
			* (self.max_x - self.min_x) + (self.max_y
				- self.min_y) * (self.max_y - self.min_y)
			+ (self.max_z - self.min_z) * (self.max_z
				- self.min_z))

		def sub_find_bounding_box(self, node) :

		if isinstance(node, NifFormat.NiTriStrips) or isinstance(node,
			NifFormat.NiTriShape) :
			for vert in node.data.vertices :
				if self.min_x == None :
					self.min_x = vert.x

					if self.min_x != None :
						if vert.x < self.min_x :
							self.min_x = vert.x

							if self.min_y == None :
								self.min_y = vert.y

								if self.min_y != None :
									if vert.y < self.min_y :
										self.min_y = vert.y

										if self.min_z == None :
											self.min_z = vert.z

											if self.min_z != None :
												if vert.z < self.min_z :
													self.min_z = vert.z

													if self.max_x == None :
														self.max_x = vert.x

														if self.max_x != None :
															if vert.x > self.max_x:
self.max_x = vert.x

if self.max_y == None :
	self.max_y = vert.y

	if self.max_y != None :
		if vert.y > self.max_y:
self.max_y = vert.y

if self.max_z == None :
	self.max_z = vert.z

	if self.max_z != None :
		if vert.z > self.max_z:
self.max_z = vert.z

if isinstance(node, NifFormat.NiNode) :
	for children_node in node.children :
		self.sub_find_bounding_box(children_node)

		def translate_node(self, node, translation) :

		if isinstance(node, NifFormat.NiTriStrips) or isinstance(node,
			NifFormat.NiTriShape) :
			node.translation.x += translation.x
			node.translation.y += translation.y
			node.translation.z += translation.z

			if isinstance(node, NifFormat.NiNode) :

				if node.collision_object != None :

					# This constant was calculated via nifskope, its actually 10 / havok constant.

					constant = 0.1428
					collision_vector = NifFormat.Vector3()
					collision_vector.x = translation.x * constant
					collision_vector.y = translation.y * constant
					collision_vector.z = translation.z * constant
					self.translate_shape(node.collision_object.body.shape,
						collision_vector)

					for children_node in node.children:

self.translate_node(children_node, translation)

def triangulate(self, node) :

	if isinstance(node, NifFormat.NiTriStrips) :
		data_strips = node.data
	else :
		data_strips = node

		triangles = []
		a = 0
		b = data_strips.points[0][0]
		c = data_strips.points[0][1]
		flip = 0
		s = 2
		length = 0

		for strip_length in data_strips.strip_lengths:
length += strip_length

while s < strip_length :

	a = b
	b = c
	c = data_strips.points[0][s]

	if a != b and b != c and c != a:

triangle = NifFormat.Triangle()

triangle.v_1 = a
if flip == 0 :
	triangle.v_2 = b
	triangle.v_3 = c
else:
triangle.v_2 = c
triangle.v_3 = b

triangles.append(triangle)

if flip == 0:
flip = 1
else:
flip = 0

s = s + 1

return triangles

def translate_shape(self, shape, translation) :

	# Parsing Rigid body shapes.

	if isinstance(shape, NifFormat.bhkBoxShape) :
		print('WARNING: Cannot translate bhkBoxShape by a vector!')

		if isinstance(shape, NifFormat.bhkSphereShape) :
			print('WARNING: Cannot translate bhkSphereShape by a vector!')

			# BhkCapsuleShape to do

			if isinstance(shape, NifFormat.bhkCapsuleShape) :
				shape.first_point.x += translation.x
				shape.first_point.y += translation.y
				shape.first_point.z += translation.z
				shape.second_point.x += translation.x
				shape.second_point.y += translation.y
				shape.second_point.z += translation.z

				if isinstance(shape, NifFormat.bhkMultiSphereShape) :
					print('WARNING: Cannot translate bhkMultiSphereShape by a vector!')

					if isinstance(shape, NifFormat.bhkConvexTransformShape) \
						or isinstance(shape, NifFormat.bhkTransformShape) :
						shape.transform.m_14 += translation.x
						shape.transform.m_24 += translation.y
						shape.transform.m_34 += translation.z


						if isinstance(shape, NifFormat.bhkConvexVerticesShape) :

							for vert in shape.vertices :
								vert.x += translation.x
								vert.y += translation.y
								vert.z += translation.z

								if isinstance(shape, NifFormat.bhkMoppBvTreeShape) :

									for vert in shape.shape.data.vertices :
										vert.x += translation.x
										vert.y += translation.y
										vert.z += translation.z

										if isinstance(shape, NifFormat.bhkListShape) :

											for subshape in shape.sub_shapes :
												self.translate_shape(subshape, translation)

												def export_node(
													self,
													parent,
													node,
													file,
													) :

												if isinstance(node, NifFormat.NiTriStrips) or isinstance(node,
													NifFormat.NiTriShape) :

													file.write('g ' + node.name.decode('utf-8') + '''

														''')

														for vertice in node.data.vertices:

vertice.x += node.translation.x  # Rotation MAYBE will be added.
vertice.y += node.translation.y  # Rotation MAYBE will be added.
vertice.z += node.translation.z  # Rotation MAYBE will be added.
file.write('v ' + str(vertice.x) + ' ' + str(vertice.y)
	+ ' ' + str(vertice.z) + '\n')

	for normal in node.data.normals:

file.write('vn ' + str(normal.x) + ' ' + str(normal.y)
	+ ' ' + str(normal.z) + '\n')

	if isinstance(node, NifFormat.NiTriShape) :
		triangles = node.data.triangles
	else:
triangles = self.triangulate(node)

for triangle in triangles :
file.write('f')
it = 0

while it < 3 :

	if it == 0 :
		val = triangle.v_1
		if it == 1 :
			val = triangle.v_2
			if it == 2 :
				val = triangle.v_3

				c = self.ofs0 + val
				c2 = self.ofs2 + val
				file.write(' ' + str(c) + '//' + str(c2))
				it = it + 1

				file.write('\n')

				self.ofs0 += node.data.num_vertices
				self.ofs2 += node.data.num_vertices

				if isinstance(node, NifFormat.NiNode) or isinstance(node,
					NifFormat.BSFadeNode) :
					for children_node in node.children :
						self.export_node(node, children_node, file)

						def parse_node(self, parent, node) :

						self.current_node = node

						# NiNodes

						if isinstance(node, NifFormat.NiNode) :

							# FX Flame Nodes

							for (key, effect_node) in enumerate(node.effects) :
								node.effects.pop(key)
								node.num_effects -= 1
								node.replace_global_node(effect_node, None)

								# NiNode Controllers............

								if node.controller != None and isinstance(node.controller,
									NifFormat.NiControllerManager) :
									self.isanim = 1

									for sequence in node.controller.controller_sequences :

										key = 0
										while key < sequence.num_controlled_blocks :
											update_key = 1
											controlled_block = \
											sequence.controlled_blocks[key]
											controlled_block.node_name = \
											self.palette.get_string(controlled_block.node_name_offset).decode('ascii'
											)

											# Dropping sequences without a name.

											if controlled_block.node_name.decode('ascii') \
												== '':
sequence.num_controlled_blocks -= 1
sequence.controlled_blocks.update_size()

continue

controlled_block.controller_type = \
self.palette.get_string(controlled_block.controller_type_offset).decode('ascii'
)

nodename = controlled_block.node_name
c_interpolator = controlled_block.interpolator
set_node = node.find(nodename, None)

if isinstance(set_node, NifFormat.NiNode) \
and set_node.collision_object != None \
and isinstance(set_node.collision_object,
	NifFormat.bhkCollisionObject) \
	and set_node.collision_object.body.mass > 0:
set_node.collision_object.body.mass = 0
set_node.collision_object.body.layer = 2
set_node.collision_object.body.layer_copy = \
2

if set_node == parser.current_root:
sequence.controlled_blocks.pop(key)
sequence.controlled_blocks.update_size()
update_key = 0
else:

if isinstance(c_interpolator,
	NifFormat.NiTransformInterpolator) :

	# This is probably wrong for other cases than x == 0 and y == 0 and z == 0. Fortunately it's enough for most cases.

	if c_interpolator.data == None:

# Interpolator data is empty, therefore it will just overwrite the translation - we mimic the behaviour over

if c_interpolator.translation.x \
== 0 and c_interpolator.translation.y == 0 \
and c_interpolator.translation.z == 0:

if set_node != None :
	set_node.translation = \
	NifFormat.Vector3()
	empty_matrix = \
	NifFormat.Matrix33()
	empty_matrix.m_11 = 1
	empty_matrix.m_22 = 1
	empty_matrix.m_33 = 1
	set_node.rotation = \
	empty_matrix
	sequence.controlled_blocks.pop(key)
	sequence.controlled_blocks.update_size()
	update_key = 0

	# Not supported and used in small things anyway.

	if isinstance(controlled_block.controller,
		NifFormat.NiMaterialColorController) :
		sequence.controlled_blocks.pop(key)
		sequence.controlled_blocks.update_size()
		update_key = 0

		if isinstance(controlled_block.controller,
			NifFormat.NiGeomMorpherController) :
			node.replace_global_node(node.controller,
				None)
			node.replace_global_node(controlled_block.controller,
				None)

			if update_key == 1:
key = key + 1

# NiNode Extra Datas........

for (key, extra_data) in enumerate(node.extra_data_list) :
	if isinstance(extra_data, NifFormat.BSFurnitureMarker) :
		newnode = NifFormat.BSFurnitureMarkerNode()
		newnode.name = extra_data.name
		newnode.num_positions = extra_data.num_positions
		self.find_bounding_box(self.current_root)

		# we are aligning the mesh with its bottom bounding to the XY axis.
		# This way we're coping with the furniture system in skyrim, which actually doesn't support Z - translation of furniture in - game, even though CK shows it can

		translation_vector = NifFormat.Vector3(0, 0,
			-self.min_z)
		translation_vector.z = -self.min_z
		self.translate_node(self.current_root,
			translation_vector)
		self.append_metadata('TRANSLATE_VECTOR 0 0 '
			+ str(self.min_z))

		for position in extra_data.positions:
newpos = NifFormat.FurniturePosition()
newpos.offset = position.offset  # //Apparently not needed.
newpos.offset.z += 35  # For CK, actually this is not used : /
newpos.offset.z += translation_vector.z  # This is also for CK.

# sleep in bed right

if position.position_ref_1 == 1:
newpos.animation_type = 2
newpos.entry_properties.right = 1
newpos.offset.x += 75

# sleep in bed left

if position.position_ref_1 == 2:
newpos.animation_type = 2
newpos.entry_properties.left = 1
newpos.offset.x -= 75

# Used for coffins ? at least it looks so..

if position.position_ref_1 == 3 :
	newpos.animation_type = 2
	newpos.entry_properties.right = 1

	# Same but from behind

	if position.position_ref_1 == 4:
newpos.animation_type = 2
newpos.entry_properties.behind = 1

# Sit from right

if position.position_ref_1 == 11:
newpos.animation_type = 1
newpos.entry_properties.right = 1
newpos.offset.x += 45

# +45 oblivion to skyrim anim

# Sit from left

if position.position_ref_1 == 12:
newpos.animation_type = 1
newpos.entry_properties.left = 1
newpos.offset.x -= 45

# Sit from behind(xD)

if position.position_ref_1 == 13:
newpos.animation_type = 1
newpos.entry_properties.behind = 1
newpos.offset.y += 45

# sit from front

if position.position_ref_1 == 14:
newpos.animation_type = 1
newpos.entry_properties.front = 1
newpos.offset.y -= 45

newnode.positions.append(newpos)
len = node.num_extra_data_list
iii = 0
while iii < len:
if node.extra_data_list[iii] == extra_data :
	node.extra_data_list[iii] = newnode
	break
	iii = iii + 1

	# NiNode Rotation / Translation.

	i = 0
	i2 = 0

	if parent == node:
if self.options.shaderPreset != 'plants' :

	# BSFadeNode root inner copy.
	# EXPERIMENTAL MIGHT INTRODUCE BUGS..

	if node.rotation.m_11 != 1 or node.rotation.m_22 \
		!= 1 or node.rotation.m_33 != 1 \
		or node.rotation.m_12 > 0.001 \
		or node.rotation.m_13 > 0.001 \
		or node.rotation.m_21 > 0.001 \
		or node.rotation.m_23 > 0.001 \
		or node.rotation.m_31 > 0.001 \
		or node.rotation.m_32 > 0.001:
newnode = NifFormat.NiNode()
newnode.flags = node.flags
newnode.unknown_short_1 = node.unknown_short_1
newnode.translation = node.translation
newnode.rotation = node.rotation
if node.collision_object != None:
newnode.collision_object = \
node.collision_object
newnode.collision_object.target = newnode

newnode.num_children = node.num_children
newnode.children.update_size()
ic = 0
for children in node.children:
newnode.children[ic] = children
ic = ic + 1

node.translation = NifFormat.Vector3()
node.rotation = NifFormat.Matrix33()
node.collision_object = None
node.num_children = 1
node.children.update_size()
node.children[0] = newnode

self.parse_node(node, newnode)
return

self.parse_collision(node)

# Parsing Tri properties

if isinstance(node, NifFormat.NiTriStrips) or isinstance(node,
	NifFormat.NiTriShape) :
	node.data.unknown_int_2 = 8
	node.data.bs_num_uv_sets = node.data.num_uv_sets
	node.num_extra_data_list = 0
	node.extra_data_list.update_size()
	for (key, dummy) in enumerate(node.extra_data_list) :
		node.extra_data_list.pop(key)

		if self.options.updateTangents != '0' :
			node.data.bs_num_uv_sets |= 4096  # Force tangents

			self.parse_properties(node)

			if node.collision_object != None:
oldsets = node.data.bs_num_uv_sets
self.parse_collision(node)  # Yes, ACTUALLY SOME NITRISTRIPS GOT COLLISION!<sigh>

if isinstance(node, NifFormat.NiParticleSystem) :
	parent.replace_global_node(node, None)

	print('NODE: ' + node.__class__.__name__);

if isinstance(node, NifFormat.NiNode) :

	for children_node in node.children :
		self.parse_node(node, children_node)

		return node

		def parse_properties(self, node) :
		cache_doubleside = 0

		for (key, property) in enumerate(node.properties) :

			if isinstance(property, NifFormat.NiTexturingProperty) :
				nst = property.base_texture.source

				if nst != None :
					pathtexture = nst.file_name.decode('utf-8')
					pathtexture = pathtexture.replace('Textures\\',
						'Textures\\tes4\\')
					pathtexture2 = pathtexture.replace('.dds', '_n.dds')
					texture_set = NifFormat.BSShaderTextureSet()
					texture_set.num_textures = 6
					texture_set.textures[0] = pathtexture
					texture_set.textures[1] = pathtexture2
					new_node = NifFormat.BSLightingShaderProperty()

					for (keyx, texture) in \
						enumerate(texture_set.textures) :

						if texture == '' :
							continue

							texture_set.textures[keyx] = \
							str(texture_set.textures[keyx]).replace('textures\\'
								, 'textures\\\\tes4\\'
							).encode().decode('unicode_escape'
							)[2:-1]

							if self.options.shaderPreset == 'default':  # Default Shader Presets
								new_node.shader_flags_1.slsf_1_recieve_shadows = \
								1
								new_node.shader_flags_1.slsf_1_cast_shadows = 1
								new_node.shader_flags_1.slsf_1_own_emit = 1
								new_node.shader_flags_1.slsf_1_remappable_textures = \
								1
								new_node.shader_flags_1.slsf_1_z_buffer_test = 1
								new_node.shader_flags_2.slsf_2_z_buffer_write = \
								1
								new_node.shader_flags_2.slsf_2_vertex_colors = 1
								new_node.shader_flags_2.slsf_2_env_map_light_fade = \
								1

								if cache_doubleside == 1:
new_node.shader_flags_2.slsf_2_double_sided = \
1

if self.options.shaderPreset == 'force_doublesided':  # Default Shader Presets with forced doublesided.
new_node.shader_flags_1.slsf_1_recieve_shadows = \
1
new_node.shader_flags_1.slsf_1_cast_shadows = 1
new_node.shader_flags_1.slsf_1_own_emit = 1
new_node.shader_flags_1.slsf_1_remappable_textures = \
1
new_node.shader_flags_1.slsf_1_z_buffer_test = 1
new_node.shader_flags_2.slsf_2_z_buffer_write = \
1
new_node.shader_flags_2.slsf_2_vertex_colors = 1
new_node.shader_flags_2.slsf_2_env_map_light_fade = \
1
new_node.shader_flags_2.slsf_2_double_sided = 1

if self.options.shaderPreset == 'plants':  # Furniture Shader Preset - No vertex colors
new_node.shader_flags_1.slsf_1_vertex_alpha = 1
new_node.shader_flags_1.slsf_1_recieve_shadows = \
1
new_node.shader_flags_1.slsf_1_cast_shadows = 1
new_node.shader_flags_1.slsf_1_own_emit = 1
new_node.shader_flags_1.slsf_1_remappable_textures = \
1
new_node.shader_flags_1.slsf_1_z_buffer_test = 1
new_node.shader_flags_2.slsf_2_z_buffer_write = \
1
new_node.shader_flags_2.slsf_2_double_sided = 1
new_node.shader_flags_2.slsf_2_vertex_colors = 1
new_node.shader_flags_2.slsf_2_env_map_light_fade = \
1
new_node.glossiness = 80
new_node.specular_color.r = 1
new_node.specular_color.g = 1
new_node.specular_color.b = 1
new_node.specular_strength = 1
new_node.lighting_effect_1 = 0.3
new_node.lighting_effect_2 = 2.0

if isinstance(node, NifFormat.NiTriStrips) \
or isinstance(node, NifFormat.NiTriShape) :

	# Check for vertex colors

	new_node.shader_flags_2.slsf_2_vertex_colors = \
	node.data.has_vertex_colors

	new_node.texture_clamp_mode = 3  # WRAP_S WRAP_T....
	new_node.uv_scale.u = 1
	new_node.uv_scale.v = 1  # Otherwise texture isnt showing
	new_node.texture_set = texture_set
	node.bs_properties[0] = new_node

	# Perhaps will port NiAlphaProperties too..

	if isinstance(property, NifFormat.NiAlphaProperty) :
		if self.options.shaderPreset == 'plants_notworking' :
			property.flags = 4608
			property.threshold = 127

			node.bs_properties[1] = property

			if isinstance(property, NifFormat.NiStencilProperty) :
				if isinstance(node.bs_properties[0],
					NifFormat.BSLightingShaderProperty) :
					node.bs_properties[0].shader_flags_2.slsf_2_double_sided = \
					1
				else :
					cache_doubleside = 1

					def set_additional_mopp(self, mopp) :

					if self.additional_mopp < mopp :
						self.additional_mopp = mopp

						def parse_constraint(self, constraint) :

						if isinstance(constraint, NifFormat.bhkRagdollConstraint) :

							# Ragdoll..

							constraint.ragdoll.pivot_a.x *= 0.1
							constraint.ragdoll.pivot_a.y *= 0.1
							constraint.ragdoll.pivot_a.z *= 0.1
							constraint.ragdoll.pivot_b.x *= 0.1
							constraint.ragdoll.pivot_b.y *= 0.1
							constraint.ragdoll.pivot_b.z *= 0.1

							if isinstance(constraint, NifFormat.bhkLimitedHingeConstraint) :
								constraint.limited_hinge.pivot_a.x *= 0.1
								constraint.limited_hinge.pivot_a.y *= 0.1
								constraint.limited_hinge.pivot_a.z *= 0.1
								constraint.limited_hinge.pivot_b.x *= 0.1
								constraint.limited_hinge.pivot_b.y *= 0.1
								constraint.limited_hinge.pivot_b.z *= 0.1
								constraint.limited_hinge.perp_2_axle_in_b_1 = \
								constraint.limited_hinge.perp_2_axle_in_a_1

								for havoked_entity in constraint.entities:
if havoked_entity.mass == 0 :
	continue

	havoked_entity.inertia.m_11 /= 100
	havoked_entity.inertia.m_22 /= 100
	havoked_entity.inertia.m_33 /= 100

	havoked_entity.mass = 3



def parse_shape(self, shape, parent_shape) :

	# Parsing Rigid body shapes.

	if isinstance(shape, NifFormat.bhkBoxShape) :
		should_scale = 1
		for shapen in self.shapes_done :
			if shapen == shape :
				should_scale = 0

				if should_scale :
					shape.dimensions *= 0.1

					if shape.dimensions.x < shape.dimensions.y :
						if shape.dimensions.x < shape.dimensions.z :
							smallest = shape.dimensions.x
						else :
							smallest = shape.dimensions.z
					else:
if shape.dimensions.y < shape.dimensions.z :
	smallest = shape.dimensions.y
else :
	smallest = shape.dimensions.z

	shape.radius = smallest * 0.1 / 2
	shape.minimum_size = smallest

	self.shapes_done.append(shape)

	if isinstance(shape, NifFormat.bhkSphereShape) :
		should_scale = 1
		for shapen in self.shapes_done :
			if shapen == shape :
				should_scale = 0

				if should_scale :
					shape.radius *= 0.1
					self.shapes_done.append(shape)

					if isinstance(shape, NifFormat.bhkCapsuleShape) :
						should_scale = 1
						for shapen in self.shapes_done :
							if shapen == shape :
								should_scale = 0

								if should_scale :
									shape.radius *= 0.1
									shape.radius_1 *= 0.1
									shape.radius_2 *= 0.1

									shape.first_point.x *= 0.1
									shape.first_point.y *= 0.1
									shape.first_point.z *= 0.1
									shape.second_point.x *= 0.1
									shape.second_point.y *= 0.1
									shape.second_point.z *= 0.1
									self.shapes_done.append(shape)

									# BhkCapsuleShape to do

									if isinstance(shape, NifFormat.bhkMultiSphereShape) :
										for (ksph, sphere) in enumerate(shape.spheres) :
											shape.spheres[ksph].center.x *= 0.1
											shape.spheres[ksph].center.y *= 0.1
											shape.spheres[ksph].center.z *= 0.1
											shape.spheres[ksph].radius *= 0.1

											if isinstance(shape, NifFormat.bhkConvexVerticesShape) :

												should_scale = 1
												scale = 0.1

												for shapen in self.shapes_done :
													if shapen == shape :
														should_scale = 0

														if should_scale :
															for (key, vertice) in enumerate(shape.vertices) :
																shape.vertices[key].x = shape.vertices[key].x \
																* scale
																shape.vertices[key].y = shape.vertices[key].y \
																* scale
																shape.vertices[key].z = shape.vertices[key].z \
																* scale

																for (key, normal) in enumerate(shape.normals) :
																	shape.normals[key].w = shape.normals[key].w * scale

																	min_x = None
																	min_y = None
																	min_z = None
																	max_x = None
																	max_y = None
																	max_z = None

																	for vert in shape.vertices:
if min_x == None :
	min_x = vert.x

	if min_x != None :
		if vert.x < min_x :
			min_x = vert.x

			if min_y == None :
				min_y = vert.y

				if min_y != None :
					if vert.y < min_y :
						min_y = vert.y

						if min_z == None :
							min_z = vert.z

							if min_z != None :
								if vert.z < min_z :
									min_z = vert.z

									if max_x == None :
										max_x = vert.x

										if max_x != None :
											if vert.x > max_x:
max_x = vert.x

if max_y == None :
	max_y = vert.y

	if max_y != None :
		if vert.y > max_y:
max_y = vert.y

if max_z == None :
	max_z = vert.z

	if max_z != None :
		if vert.z > max_z:
max_z = vert.z

delta_x = max_x - min_x
delta_y = max_y - min_y
delta_z = max_z - min_z

if delta_x < delta_y:
if delta_x < delta_z :
	radius = delta_x
else :
	radius = delta_z
else:
if delta_y < delta_z :
	radius = delta_y
else :
	radius = delta_z

	shape.radius = radius * scale / 2
	self.shapes_done.append(shape)

	if isinstance(shape, NifFormat.bhkMoppBvTreeShape) :
		if self.options.generateCollision == 'mopp' \
			or self.options.generateCollision == 'convex' \
			or self.options.generateCollision == 'mopp_new':
self.set_additional_mopp(1)

self.parse_shape(shape.shape, shape)

if isinstance(shape, NifFormat.bhkListShape) :

	for (keysubshape, subshape) in enumerate(shape.sub_shapes) :
		self.parse_shape(subshape, shape)

		if isinstance(shape, NifFormat.bhkConvexTransformShape) \
			or isinstance(shape, NifFormat.bhkTransformShape) :
			shape.transform.m_14 *= 0.1
			shape.transform.m_24 *= 0.1
			shape.transform.m_34 *= 0.1

			# Scaling down the translation just as with rigid body..

			self.parse_shape(shape.shape, shape)  # I believe those are not supported in skyrim anyways..

			if isinstance(shape, NifFormat.bhkNiTriStripsShape) :

				# Pack the strips.
				# Clutter doesnt support concave shapes in skyrim so we just make it static.. :P
				# Triangulate.
				# Nullify clutter havok.

				self.current_body.mass = 0

				# TODO: Support for more than 1 strips data in NiTriStripsShape

				triangles = self.triangulate(shape.strips_data[0])
				newshape = NifFormat.bhkPackedNiTriStripsShape()
				datashape = NifFormat.hkPackedNiTriStripsData()
				newshape.num_sub_shapes = 1
				subshape = NifFormat.OblivionSubShape()
				subshape.layer = 1
				subshape.num_vertices = shape.strips_data[0].num_vertices
				subshape.material = shape.material
				vec1 = NifFormat.Vector3()
				vec1.x = 1
				vec1.y = 1
				vec1.z = 1
				newshape.scale = vec1
				newshape.sub_shapes.append(subshape)
				datashape.num_vertices = shape.strips_data[0].num_vertices
				for vertice in shape.strips_data[0].vertices:
datashape.vertices.append(vertice / 7)

datashape.num_triangles = len(triangles)
for triangle in triangles :
hktriangle = NifFormat.hkTriangle()
hktriangle.triangle = triangle
hktriangle.welding_info = 0
hktriangle.normal = self.find_normal_face(hktriangle,
	shape.strips_data[0])
	datashape.triangles.append(hktriangle)

	newshape.data = datashape

	# Mocked tree shape to make actually this work in MOPP converter

	moppshape = NifFormat.bhkMoppBvTreeShape()
	moppshape.shape = newshape
	self.current_root.replace_global_node(shape, moppshape)
	shape = moppshape
	self.set_additional_mopp(1)

	if isinstance(shape, NifFormat.bhkPackedNiTriStripsShape) :
		first_triangle = 1
		for (key, triangle) in enumerate(shape.data.triangles) :

			# Thanks to Blender NIF Export Scripts for this
			# I still do not understand how it works, but it does!

			calculated_normal = self.find_normal_face(triangle,
				shape.data)
			align_plus = sum(abs(x) for x in(calculated_normal.x
				+ triangle.normal.x,
				calculated_normal.y
				+ triangle.normal.y,
				calculated_normal.z
				+ triangle.normal.z))
			align_minus = sum(abs(x) for x in(calculated_normal.x
				- triangle.normal.x,
				calculated_normal.y
				- triangle.normal.y,
				calculated_normal.z
				- triangle.normal.z))

			if align_plus < align_minus:
v_2 = triangle.triangle.v_2
v_1 = triangle.triangle.v_1
shape.data.triangles[key].triangle.v_1 = v_2
shape.data.triangles[key].triangle.v_2 = v_1

if not isinstance(parent_shape,
	NifFormat.bhkMoppBvTreeShape) :
	dummymopp = NifFormat.bhkMoppBvTreeShape()
	dummymopp.shape = shape
	self.current_root.replace_global_node(shape,
		self.arbitrary_moppgen(dummymopp))

	if isinstance(shape, NifFormat.bhkMoppBvTreeShape) :
		if self.options.generateCollision == 'mopp' \
			or self.options.generateCollision == 'convex' \
			or self.options.generateCollision == 'mopp_new':
self.parse_shape(shape.shape, shape)
self.current_root.replace_global_node(shape,
	self.arbitrary_moppgen(shape))

	decimal.setcontext(decimal.Context(prec = 68))
	(options, args) = commandline.create()
	path_mesh = args[0]
	path_output = args[1]

	parser = Parser()
	parser.path_mesh = path_mesh
	parser.path_output = path_output
	parser.options = options
	parser.parse()

	#Accomodate legacy communication upstream
	if options.generateCollision == "mopp":
print(0) #No upstream collision generation, as it is handled within script now
elif options.generateCollision == "mopp_new":
print(1) #Always force meshlab generation
	else:
print(str(parser.additional_mopp))

*/