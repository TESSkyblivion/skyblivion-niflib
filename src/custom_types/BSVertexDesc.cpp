#include <custom_types\bsvertexdesc.h>

using namespace Niflib;

BSVertexDesc::BSVertexDesc() {};
/*! Copy Constructor */
BSVertexDesc::BSVertexDesc(const BSVertexDesc & src) { desc = src.getData(); }
/*! Copy Operator */
BSVertexDesc & BSVertexDesc::operator=(const BSVertexDesc & src) { desc = src.getData(); return *this; }
BSVertexDesc & BSVertexDesc::operator=(const uint64_t & src) { desc = src; return *this; }

void BSVertexDesc::setData(const uint64_t& value) { desc = value; }

uint64_t BSVertexDesc::getData() const { return desc; }

// Sets a specific flag
void BSVertexDesc::SetFlag(VertexAttribute flag) {
	desc |= ((uint64_t)flag << 44);
}

// Removes a specific flag
void BSVertexDesc::RemoveFlag(VertexAttribute flag) {
	desc &= ~((uint64_t)flag << 44);
}

// Checks for a specific flag
bool BSVertexDesc::HasFlag(VertexAttribute flag) const {
	return ((desc >> 44) & flag) != 0;
}

// Sets the vertex size
void BSVertexDesc::SetSize(uint64_t size) {
	desc &= DESC_MASK_VERT;
	desc |= (uint64_t)size >> 2;
}

// Gets the vertex size in bytes
uint64_t BSVertexDesc::GetVertexSize() const
{
	return (desc & 0xF) * 4;
}

// Sets the dynamic vertex size
void BSVertexDesc::MakeDynamic() {
	desc &= DESC_MASK_UVS;
	desc |= 0x40;
}

// Return offset to a specific vertex attribute in the description
uint64_t BSVertexDesc::GetAttributeOffset(VertexAttribute attr) {
	return (desc >> (4 * (uint8_t)attr + 2)) & 0x3C;
}

// Set offset to a specific vertex attribute in the description
void BSVertexDesc::SetAttributeOffset(VertexAttribute attr, uint64_t offset) {
	if (attr != VA_Vertex) {
		desc = ((uint64_t)offset << (4 * (unsigned char)attr + 2)) | desc & ~(15 << (4 * (unsigned char)attr + 4));
	}
}

void BSVertexDesc::ClearAttributeOffsets() {
	desc &= DESC_MASK_OFFSET;
}

VertexAttribute BSVertexDesc::GetFlags() const {
	return VertexAttribute((desc & DESC_MASK_OFFSET) >> 44);
}

void BSVertexDesc::SetFlags(VertexAttribute flags) {
	desc |= ((uint64_t)flags << 44) | (desc & DESC_MASK_FLAGS);
}

// Reset the offsets based on the current vertex flags
void BSVertexDesc::ResetAttributeOffsets(int stream)
{
	uint64_t vertexSize = 0;

	VertexAttribute vf = GetFlags();
	ClearAttributeOffsets();

	unsigned int attributeSizes[VA_COUNT] = {};
	if (vf & VA_Vertex) {
		if (vf & VA_Full_Precision || stream  == 100)
			attributeSizes[VA_POSITION] = 4;
		else
			attributeSizes[VA_POSITION] = 2;
	}

	if (vf & VA_UVs)
		attributeSizes[VA_TEXCOORD0] = 1;

	if (vf & VA_UVs_2)
		attributeSizes[VA_TEXCOORD1] = 1;

	if (vf & VA_Normals) {
		attributeSizes[VA_NORMAL] = 1;

		if (vf & VA_Tangents)
			attributeSizes[VA_BINORMAL] = 1;
	}

	if (vf & VA_Vertex_Colors)
		attributeSizes[VA_COLOR] = 1;

	if (vf & VA_Skinned)
		attributeSizes[VA_SKINNING] = 3;

	if (vf & VA_Eye_Data)
		attributeSizes[VA_EYEDATA] = 1;

	for (int va = 0; va < VA_COUNT; va++) {
		if (attributeSizes[va] != 0) {
			SetAttributeOffset(VertexAttribute(va), vertexSize);
			vertexSize += attributeSizes[va] * 4;
		}
	}

	SetSize(vertexSize);

	// SetFlags must be called again because SetAttributeOffset
	// appears to clear part of the byte ahead of it
	SetFlags(vf);
}