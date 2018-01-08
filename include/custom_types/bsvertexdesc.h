#ifndef _BSVERTEXDESC_H_
#define _BSVERTEXDESC_H_

#include "gen/enums.h"
#include <dll_export.h>
#include <nif_basic_types.h>

//Taken from outfit studio
namespace Niflib {

	enum VertexAttribute : uint8_t {
		VA_POSITION = 0x0,
		VA_TEXCOORD0 = 0x1,
		VA_TEXCOORD1 = 0x2,
		VA_NORMAL = 0x3,
		VA_BINORMAL = 0x4,
		VA_COLOR = 0x5,
		VA_SKINNING = 0x6,
		VA_LANDDATA = 0x7,
		VA_EYEDATA = 0x8,
		VA_COUNT = 9
	};

	const uint64_t DESC_MASK_VERT   = 0xFFFFFFFFFFFFFFF0;
	const uint64_t DESC_MASK_UVS    = 0xFFFFFFFFFFFFFF0F;
	const uint64_t DESC_MASK_NBT    = 0xFFFFFFFFFFFFF0FF;
	const uint64_t DESC_MASK_SKCOL  = 0xFFFFFFFFFFFF0FFF;
	const uint64_t DESC_MASK_DATA   = 0xFFFFFFFFFFF0FFFF;
	const uint64_t DESC_MASK_OFFSET = 0xFFFFFF0000000000;
	const uint64_t DESC_MASK_FLAGS  = ~(DESC_MASK_OFFSET);

	struct BSVertexDesc : public Native {

		union {
			uint64_t desc = 0;
			struct {
				uint8_t vf1;
				uint8_t vf2;
				uint8_t vf3;
				uint8_t vf4;
				uint8_t vf5;
				uint16_t vertexAttributes;
				uint8_t vf8;
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