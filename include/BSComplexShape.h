/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

#ifndef _COMPLEX_SHAPE_H_
#define _COMPLEX_SHAPE_H_

#include "Ref.h"
#include "nif_math.h"
#include "nif_basic_types.h"
#include "../include/obj/BSDismemberSkinInstance.h"
#include <vector>
#include "ComplexShapesTypes.h"

namespace Niflib
{

	// Forward define of referenced classes
	class NiProperty;
	class NiNode;
	class NiAVObject;
	class NiTriBasedGeom;
	class NiSkinPartition;

	/*!
	* This class is a helper object to ease the process of converting between the
	* 3D model format of a NIF file, which is optimized for real time display via
	* OpenGL or DirectX, and the more compact, complex format usually prefered by
	* 3D modeling software.
	*
	* It is capable of mering multiple NiTriShape objects into one multi-material
	* object with indexed data, or taking such an object and splitting it up into
	* multiple NiTriShape objects.
	*/
	class BSComplexShape
	{
	public:

		/*!
		* This function splits the contents of the ComplexShape into multiple
		* NiTriBasedGeom objects.
		* \param parent The parent NiNode that the resulting NiTriBasedGeom
		* objects will be attached to.
		* \param transform The transform for the resulting object or group of
		* objects
		* \param max_bones_per_partition The maximum number of bones to allow in
		* each skin partition.  Set to zero to skip creation of partition.
		* \param stripify Whether or not to generate efficient triangle strips.
		* \param tangent_space Whether or not to generate Oblivion tangent space
		* information.
		* \param min_vertex_weight Remove vertex weights bellow a given value
		* \param use_dismember_partitions Uses BSDismemberSkinInstance with custom partitions for dismember
		* \return A reference to the root NiAVObject that was created.
		*/
		NIFLIB_API Ref<NiAVObject> Split(
			NiNode* parent,
			Matrix44& transform,
			int max_bones_per_partition = 4,
			bool stripify = false,
			bool tangent_space = false,
			float min_vertex_weight = 0.001f,
			Byte tspace_flags = 0
		) const;

		/*
		* Merges together multiple NiTriBasedGeom objects and stores their data
		* in this ComplexShape object.
		* \param root The root NiAVObject to which all of the NiTriBasedGeom
		* objects to be merged are attached.  It could be a single NiTribasedGeom
		* or a NiNode that is a split mesh proxy.
		* \sa NiNode::IsSplitMeshProxy
		*/
		NIFLIB_API void Merge(NiAVObject* root);

		/*
		* Clears out all the data stored in this ComplexShape
		*/
		NIFLIB_API void Clear();

		/*
		* Sets the name of ComplexShape which will be used when splitting it into NiTriBasedGeom objects.
		* \param[in] n The new name for the ComplexShape.
		*/
		NIFLIB_API void SetName(const string& n);

		/*
		* Gets the name of ComplexShape.  This may have been previously created or merged from NiTriBasedGeom objects which form a split mesh proxy.
		* \return The new name of the ComplexShape.
		*/
		NIFLIB_API string GetName() const;

		/*
		* Sets the vertex data that will be used by the ComplexShape, which includes position and skin weighting information.  The data is referenced by vector index, so repetition of values is not necessary.
		* \param[in] n The new vertex data.  Will replace any existing data.
		*/
		NIFLIB_API void SetVertices(const vector<WeightedVertex>& n);

		/*
		* Gets the vertex data from the ComplexShape.  This includes position and skin weighting information.
		* \return The vertex data stored in the ComplexShape.
		*/
		NIFLIB_API vector<WeightedVertex> GetVertices() const;

		/*
		* Sets the color data that will be used by the ComplexShape.  The data is referenced by vector index, so repetition of values is not necessary.
		* \param[in] n The new color data.  Will replace any existing data.
		*/
		NIFLIB_API void SetColors(const vector<Color4>& n);

		/*
		* Gets the color data from the ComplexShape.
		* \return The color data stored in the ComplexShape.
		*/
		NIFLIB_API vector<Color4> GetColors() const;

		/*
		* Sets the normal data that will be used by the ComplexShape.  The data is referenced by vector index, so repetition of values is not necessary.
		* \param[in] n The new normal data.  Will replace any existing data.
		*/
		NIFLIB_API void SetNormals(const vector<Vector3>& n);

		/*
		* Gets the normal data from the ComplexShape.
		* \return The normal data stored in the ComplexShape.
		*/
		NIFLIB_API vector<Vector3> GetNormals() const;

		/*
		* Sets the faces used by the ComplexShape.  Each face references 3 or more vertex positions (triangles are not required), each of which can reference color, normal, and texture, information.  Each face also references a property group which defines the material and any other per-face attributes.
		* \param[in] n The new face data.  Will replace any existing data.
		*/
		NIFLIB_API void SetFaces(const vector<ComplexFace>& n);

		/*
		* Gets the face data from the ComplexShape. Each face references 3 or more vertex positions (triangles are not required), each of which can reference color, normal, and texture, information.  Each face also references a property group which defines the material and any other per-face attributes.
		* \return The face data stored in the ComplexShape.
		*/
		NIFLIB_API vector<ComplexFace> GetFaces() const;

		/*
		* Sets the property groups used by the Complex Shape.  Each group of NiProperty values can be assigned by vector index to a face in the ComplexShape by index, allowing for material and other properties to be specified on a per-face basis.  If the ComplexShape is split, each property group that is used by faces in the mesh will result in a separate NiTriBasedGeom with the specified propreties attached.
		* \param[in] n The new property groups.  Will replace any existing data.
		*/
		NIFLIB_API void SetPropGroups(const vector<vector<Ref<NiProperty>>>& n);

		/*
		* Gets the property groups from the ComplexShape.  Each group of NiProperty values can be assigned by vector index to a face in the ComplexShape by index, allowing for material and other properties to be specified on a per-face basis.  If the ComplexShape is split, each property group that is used by faces in the mesh will result in a separate NiTriBasedGeom with the specified propreties attached.
		* \return The property groups stored in the ComplexShape.
		*/
		NIFLIB_API vector<vector<Ref<NiProperty>>> GetPropGroups() const;

		/*
		* Sets the skin influences used by the Complex Shape.  These are the NiNode objects which cause deformations in skin meshes.  They are referenced in the vertex data by vector index.
		* \param[in] n The new skin influences.  Will replace any existing data.
		*/
		NIFLIB_API void SetSkinInfluences(const vector<Ref<NiNode>>& n);

		/*
		* Gets the skin influences from the ComplexShape.  These are the NiNode objects which cause deformations in skin meshes.  They are referenced in the vertex data by vector index.
		* \return The skin influences referenced by the ComplexShape.
		*/
		NIFLIB_API vector<Ref<NiNode>> GetSkinInfluences() const;

		/*
		* Gets the segments ued by fallout 4 engine
		* \return The segments composing the  ComplexShape.
		*/
		NIFLIB_API vector<Segment> GetSegments() const;

		/*
		* Sets the segments used by fallout 4 engine
		* \return The segments composing the  ComplexShape.
		*/
		NIFLIB_API void SetSegments(const vector<Segment>& s);

		NIFLIB_API void BSComplexShape::SetTexCoordSet(const vector<TexCoord>& n);
		NIFLIB_API vector<TexCoord> BSComplexShape::GetTexCoordSet() const;

		NIFLIB_API void BSComplexShape::SetTexCoordSets(const vector<TexCoordSet>& n);
		NIFLIB_API vector<TexCoordSet> BSComplexShape::GetTexCoordSets() const;

	private:
		vector<WeightedVertex> vertices;
		vector<Color4> colors;
		vector<Vector3> normals;
		vector<TexCoord> texCoordSet;
		vector<TexCoordSet> texCoordSets;
		vector<ComplexFace> faces;
		vector<vector<Ref<NiProperty>>> propGroups;
		vector<Ref<NiNode>> skinInfluences;
		vector<Segment> segments;
		string name;
	};
}

#endif
