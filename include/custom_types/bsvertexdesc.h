#ifndef _BSVERTEXDESC_H_
#define _BSVERTEXDESC_H_

#include "gen/enums.h"
#include <dll_export.h>
#include <nif_basic_types.h>

//Taken from outfit studio
namespace Niflib {

	enum VertexAttribute : uint32_t {
	/*
	The bits of BSVertexDesc that describe the enabled vertex attributes.
		<option bit="1" name="Vertex" />
		<option bit="2" name="UVs" />
		<option bit="3" name="UVs_2" />
		<option bit="4" name="Normals" />
		<option bit="5" name="Tangents" />
		<option bit="6" name="Vertex_Colors" />
		<option bit="7" name="Skinned" />
		<option bit="8" name="Land_Data" />
		<option bit="9" name="Eye_Data" />
		<option bit="10" name="Instance" />
		<option bit="11" name="Full_Precision" />
	*/
		VA_Vertex = 1,
		VA_UVs = 2,
		VA_UVs_2 = 4,
		VA_Normals = 8,
		VA_Tangents = 16,
		VA_Vertex_Colors = 32,
		VA_Skinned = 64,
		VA_Land_Data = 128,
		VA_Eye_Data = 256,
		VA_Instance = 512,
		VA_Full_Precision = 1024,
	};

	const uint64_t DESC_MASK_VERT   = 0xFFFFFFFFFFFFFFF0;
	const uint64_t DESC_MASK_UVS    = 0xFFFFFFFFFFFFFF0F;
	const uint64_t DESC_MASK_NBT    = 0xFFFFFFFFFFFFF0FF;
	const uint64_t DESC_MASK_SKCOL  = 0xFFFFFFFFFFFF0FFF;
	const uint64_t DESC_MASK_DATA   = 0xFFFFFFFFFFF0FFFF;
	const uint64_t DESC_MASK_OFFSET = 0xFFFFFF0000000000;
	const uint64_t DESC_MASK_FLAGS  = ~(DESC_MASK_OFFSET);

	struct BSVertexDesc : public Native {

		/*
		        <member width="4" pos="0" mask="0xF" name="Vertex Data Size" type="uint" />
        <member width="4" pos="4" mask="0xF0" name="Dynamic Vertex Size" type="uint" />
        <member width="4" pos="8" mask="0xF00" name="UV1 Offset" type="uint" />
        <member width="4" pos="12" mask="0xF000" name="UV2 Offset" type="uint" />
        <member width="4" pos="16" mask="0xF0000" name="Normal Offset" type="uint" />
        <member width="4" pos="20" mask="0xF00000" name="Tangent Offset" type="uint" />
        <member width="4" pos="24" mask="0xF000000" name="Color Offset" type="uint" />
        <member width="4" pos="28" mask="0xF0000000" name="Skinning Data Offset" type="uint" />
        <member width="4" pos="32" mask="0xF00000000" name="Landscape Data Offset" type="uint" />
        <member width="4" pos="36" mask="0xF000000000" name="Eye Data Offset" type="uint" />
        <member width="4" pos="40" mask="0xF0000000000" name="Unused 01" type="uint" />
        <member width="12" pos="44" mask="0xFFF00000000000" name="Vertex Attributes" type="VertexAttribute" />
		*/

		union {
			uint64_t desc = 0;
			struct {
				uint8_t VertexDataSize : 4;
				uint8_t DynamicVertexSize : 4;
				uint8_t UV1Offset : 4;
				uint8_t UV2Offset : 4;
				uint8_t NormalOffset : 4;
				uint8_t TangentOffset : 4;
				uint8_t ColorOffset : 4;
				uint8_t SkinningDataOffset : 4;
				uint8_t LandscapeDataOffset : 4;
				uint8_t EyeDataOffset : 4;
				uint8_t Unused01 : 4;
				//uint16_t vertexAttributes : 12;
				uint8_t VA_Vertex : 1;
				uint8_t VA_UVs : 1;
				uint8_t VA_UVs_2 : 1;
				uint8_t VA_Normals : 1;
				uint8_t VA_Tangents : 1;
				uint8_t VA_Vertex_Colors : 1;
				uint8_t VA_Skinned : 1;
				uint8_t VA_Land_Data : 1;
				uint8_t VA_Eye_Data : 1;
				uint8_t VA_Instance : 1;
				uint8_t VA_Full_Precision : 1;
				uint16_t Unused02 : 9;
			};
		};

		BSVertexDesc();
		/*! Copy Constructor */
		BSVertexDesc(const BSVertexDesc & src);
		/*! Copy Operator */
		BSVertexDesc & operator=(const BSVertexDesc & src);
		BSVertexDesc & operator=(const uint64_t & src);

		bool operator==(const BSVertexDesc & src) const { return desc == src.desc; }

		void setData(const uint64_t& value);

		uint64_t getData() const;

		// Sets a specific flag
		void SetFlag(VertexFlags flag);

		// Removes a specific flag
		void RemoveFlag(VertexFlags flag);

		// Checks for a specific flag
		bool HasFlag(VertexFlags flag) const;

		// Sets the vertex size
		void SetSize(uint64_t size);

		// Sets the dynamic vertex size
		void MakeDynamic();

		// Return offset to a specific vertex attribute in the description
		uint64_t GetAttributeOffset(VertexAttribute attr);

		// Set offset to a specific vertex attribute in the description
		void SetAttributeOffset(VertexAttribute attr, uint64_t offset);
		void ClearAttributeOffsets();

		VertexFlags GetFlags() const;
		void SetFlags(VertexFlags flags);
	};

}
#endif