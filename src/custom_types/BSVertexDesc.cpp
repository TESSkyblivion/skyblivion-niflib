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
void BSVertexDesc::SetFlag(VertexFlags flag) {
	desc |= ((uint64_t)flag << 44);
}

// Removes a specific flag
void BSVertexDesc::RemoveFlag(VertexFlags flag) {
	desc &= ~((uint64_t)flag << 44);
}

// Checks for a specific flag
bool BSVertexDesc::HasFlag(VertexFlags flag) const {
	return ((desc >> 44) & flag) != 0;
}

// Sets the vertex size
void BSVertexDesc::SetSize(uint64_t size) {
	desc &= DESC_MASK_VERT;
	desc |= (uint64_t)size >> 2;
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
	if (attr != VA_POSITION) {
		desc = ((uint64_t)offset << (4 * (uint8_t)attr + 2)) | desc & ~(15 << (4 * (uint8_t)attr + 4));
	}
}

void BSVertexDesc::ClearAttributeOffsets() {
	desc &= DESC_MASK_OFFSET;
}

VertexFlags BSVertexDesc::GetFlags() const {
	return VertexFlags((desc & DESC_MASK_OFFSET) >> 44);
}

void BSVertexDesc::SetFlags(VertexFlags flags) {
	desc |= ((uint64_t)flags << 44) | (desc & DESC_MASK_FLAGS);
}