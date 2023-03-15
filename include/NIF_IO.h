/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

#ifndef _NIF_IO_H
#define _NIF_IO_H

//--Includes--//
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <list>
#include "Key.h"
#include "Ref.h"
#include "gen/enums_intl.h"
#include "nif_math.h"
#include "nif_versions.h"
#include <nif_members_expr.h>

#ifndef NULL
#define NULL 0
#endif

#define MAXARRAYDUMP 20

namespace Niflib {


	class NiObject;

	template<typename T>
	static constexpr bool IsVisitableRef = is_base_of_template_t<Ref, T>::value;


	template<typename T>
	static constexpr bool IsIndexString =
		std::is_base_of<IndexString, T>::value ||
		std::is_base_of<Key<IndexString>, T>::value ||
		std::is_base_of<vector<IndexString>, T>::value ||
		std::is_base_of<vector<Key<IndexString>>, T>::value;

	template<typename T>
	static constexpr bool IsIterable = is_iterable<T>::value &&
		!std::is_base_of<IndexString, T>::value;

	//--IO Functions--//

	//-- Read Utility Functions--//
	int ReadInt(std::istream& in);
	unsigned int ReadUInt(std::istream& in);
	uint64_t ReadUInt64(std::istream& in);
	unsigned short ReadUShort(std::istream& in);
	short ReadShort(std::istream& in);
	Byte ReadByte(std::istream& in);
	float ReadFloat(std::istream &in);
	string ReadString(std::istream &in);
	bool ReadBool(std::istream &in, unsigned int version);

	//-- Write Utility Functions --//
	void WriteInt(int val, std::ostream& out);
	void WriteUInt(unsigned int val, std::ostream& out);
	void WriteUInt64(uint64_t val, std::ostream& out);
	void WritePtr32(void * val, std::ostream& out);
	void WriteUShort(unsigned short val, std::ostream& out);
	void WriteShort(short val, std::ostream& out);
	void WriteByte(Byte val, std::ostream& out);
	void WriteFloat(float val, std::ostream& out);
	void WriteString(string const & val, std::ostream& out);
	void WriteBool(bool val, std::ostream& out, unsigned int version);

	void WriteRef(const Ref<NiObject> & ref, std::ostream& out, const NifInfo& info,
		const map<Ref<NiObject>, unsigned int> & link_map, list<NiObject *> & missing_link_stack);

	//-- BitField Helper functions --//

	template <class storage>
	bool UnpackFlag(storage src, size_t lshift) {
		//Generate mask
		storage mask = 1 << lshift;

		return ((src & mask) >> lshift) != 0;
	}

	template <class storage>
	void PackFlag(storage & dest, bool new_value, size_t lshift) {
		//Generate mask
		storage mask = 1 << lshift;

		//Clear current value of requested flag
		dest &= ~mask;

		//Pack in the new value
		dest |= (((storage)new_value << lshift) & mask);
	}

	template <class storage>
	storage UnpackField(storage src, size_t lshift, size_t num_bits) {
		//Generate mask
		storage mask = 0;
		for (size_t i = lshift; i < num_bits + lshift; ++i) {
			mask |= (1 << i);
		}

		return (storage)((src & mask) >> lshift);
	}

	template <class storage, class T>
	void PackField(storage & dest, T new_value, size_t lshift, size_t num_bits) {
		//Generate Mask
		storage mask = 0;
		for (size_t i = lshift; i < num_bits + lshift; ++i) {
			mask |= (1 << i);
		}

		//Clear current value of requested field
		dest &= ~mask;

		//Pack in the new value
		dest |= (((storage)new_value << lshift) & mask);
	}

	//-- NifStream And ostream Functions --//
	// The NifStream functions allow each built-in type to be streamed to and from a file.
	// The ostream functions are for writing out a debug string.

	//--Basic Types--//

	//int
	void NifStream(int & val, std::istream& in, const NifInfo & info);
	void NifStream(int const & val, std::ostream& out, const NifInfo & info);

	//unsigned int
	void NifStream(unsigned int & val, std::istream& in, const NifInfo & info);
	void NifStream(unsigned int const & val, std::ostream& out, const NifInfo & info);

	//unsigned short
	void NifStream(unsigned short & val, std::istream& in, const NifInfo & info);
	void NifStream(unsigned short const & val, std::ostream& out, const NifInfo & info);

	//short
	void NifStream(short & val, std::istream& in, const NifInfo & info);
	void NifStream(short const & val, std::ostream& out, const NifInfo & info);

	//half float
	void NifStream(hfloat & val, std::istream& in, const NifInfo & info);
	void NifStream(hfloat const & val, std::ostream& out, const NifInfo & info);
	ostream & operator<<(ostream & out, hfloat const & val);

	//byte
	void NifStream(Byte & val, std::istream& in, const NifInfo & info);
	void NifStream(Byte const & val, std::ostream& out, const NifInfo & info);

	//bool
	void NifStream(bool & val, std::istream& in, const NifInfo & info);  // version is significant
	void NifStream(bool const & val, std::ostream& out, const NifInfo & info); // version is significant

	//float
	void NifStream(float & val, std::istream& in, const NifInfo & info);
	void NifStream(float const & val, std::ostream& out, const NifInfo & info);

	//string
	void NifStream(string & val, std::istream& in, const NifInfo & info);
	void NifStream(string const & val, std::ostream& out, const NifInfo & info);

	//--Structs--//

	//TexCoord
	void NifStream(TexCoord & val, std::istream& in, const NifInfo & info);
	void NifStream(TexCoord const & val, std::ostream& out, const NifInfo & info);

	//Triangle
	void NifStream(Triangle & val, std::istream& in, const NifInfo & info);
	void NifStream(Triangle const & val, std::ostream& out, const NifInfo & info);

	//Vector3
	void NifStream(Vector3 & val, std::istream& in, const NifInfo & info);
	void NifStream(Vector3 const & val, std::ostream& out, const NifInfo & info);

	//Vector4
	void NifStream(Vector4 & val, std::istream& in, const NifInfo & info);
	void NifStream(Vector4 const & val, std::ostream& out, const NifInfo & info);

	//Float2
	void NifStream(Float2 & val, std::istream& in, const NifInfo & info);
	void NifStream(Float2 const & val, std::ostream& out, const NifInfo & info);

	//Matrix22
	void NifStream(Matrix22 & val, std::istream& in, const NifInfo & info);
	void NifStream(Matrix22 const & val, std::ostream& out, const NifInfo & info);

	//Float3
	void NifStream(Float3 & val, std::istream& in, const NifInfo & info);
	void NifStream(Float3 const & val, std::ostream& out, const NifInfo & info);

	//Matrix33
	void NifStream(Matrix33 & val, std::istream& in, const NifInfo & info);
	void NifStream(Matrix33 const & val, std::ostream& out, const NifInfo & info);

	//Float4
	void NifStream(Float4 & val, std::istream& in, const NifInfo & info);
	void NifStream(Float4 const & val, std::ostream& out, const NifInfo & info);

	//Matrix34
	void NifStream(Matrix34 & val, std::istream& in, const NifInfo & info);
	void NifStream(Matrix34 const & val, std::ostream& out, const NifInfo & info);

	//Matrix44
	void NifStream(Matrix44 & val, std::istream& in, const NifInfo & info);
	void NifStream(Matrix44 const & val, std::ostream& out, const NifInfo & info);

	//Color3
	void NifStream(Color3 & val, std::istream& in, const NifInfo & info);
	void NifStream(Color3 const & val, std::ostream& out, const NifInfo & info);

	//Color4
	void NifStream(Color4 & val, std::istream& in, const NifInfo & info);
	void NifStream(Color4 const & val, std::ostream& out, const NifInfo & info);

	//Quaternion
	void NifStream(Quaternion & val, std::istream& in, const NifInfo & info);
	void NifStream(Quaternion const & val, std::ostream& out, const NifInfo & info);

	//HeaderString
	void NifStream(HeaderString & val, std::istream& in, NifInfo & info); //Sets the passed in info
	void NifStream(HeaderString const & val, std::ostream& out, const NifInfo & info);
	ostream & operator<<(ostream & out, HeaderString const & val);

	//LineString
	void NifStream(LineString & val, std::istream& in, const NifInfo & info);
	void NifStream(LineString const & val, std::ostream& out, const NifInfo & info);
	ostream & operator<<(ostream & out, LineString const & val);

	//ByteArray
	void NifStream(ByteArray & val, std::istream& in, const NifInfo & info);
	void NifStream(ByteArray const & val, std::ostream& out, const NifInfo & info);
	ostream & operator<<(ostream & out, ByteArray const & val);

	//ShortString
	void NifStream(ShortString & val, std::istream& in, const NifInfo & info);
	void NifStream(ShortString const & val, std::ostream& out, const NifInfo & info);
	ostream & operator<<(ostream & out, ShortString const & val);

	//IndexString
	void NifStream(IndexString & val, std::istream& in, const NifInfo & info);
	void NifStream(IndexString const & val, std::ostream& out, const NifInfo & info);
	ostream & operator<<(ostream & out, IndexString const & val);

	//Char8String
	void NifStream(Char8String & val, std::istream& in, const NifInfo & info);
	void NifStream(Char8String const & val, std::ostream& out, const NifInfo & info);
	ostream & operator<<(ostream & out, Char8String const & val);

	//InertiaMatrix
	void NifStream(InertiaMatrix & val, std::istream& in, const NifInfo & info);
	void NifStream(InertiaMatrix const & val, std::ostream& out, const NifInfo & info);

	//ByteColor4
	struct ByteColor4;
	void NifStream(ByteColor4 & val, std::istream& in, const NifInfo & info);
	void NifStream(ByteColor4 const & val, std::ostream& out, const NifInfo & info);
	ostream & operator<<(ostream & out, ByteColor4 const & val);

	//--Templates--//

	void NifStream(Key<Quaternion> & key, std::istream& file, const NifInfo & info, KeyType type);
	void NifStream(Key<Quaternion> const & key, std::ostream& file, const NifInfo & info, KeyType type);

	//Key<T>
	template <class T>
	void NifStream(Key<T> & key, std::istream& file, const NifInfo & info, KeyType type) {
		key.time = ReadFloat(file);

		//If key type is not 1, 2, or 3, throw an exception
		if (type < 1 || type > 3) {
			type = LINEAR_KEY;
			//throw runtime_error("Invalid key type.");
		}

		//Read data based on the type of key
		NifStream(key.data, file, info);
		if (type == QUADRATIC_KEY) {
			//Uses Quadratic interpolation
			NifStream(key.forward_tangent, file, info);
			NifStream(key.backward_tangent, file, info);
		}
		else if (type == TBC_KEY) {
			//Uses TBC interpolation
			key.tension = ReadFloat(file);
			key.bias = ReadFloat(file);
			key.continuity = ReadFloat(file);
		}
	}

	template <class T>
	void NifStream(Key<T> & key, std::istream & file, const NifInfo & info, int type) {
		NifStream(key, file, info, (KeyType)type);
	}

	template <class T>
	void NifStream(Key<T> const & key, std::ostream& file, const NifInfo & info, KeyType type) {
		WriteFloat(key.time, file);

		//If key type is not 1, 2, or 3, throw an exception
		if (type < 1 || type > 3) {
			type = LINEAR_KEY;
			//throw runtime_error("Invalid key type.");
		}

		//Read data based on the type of key
		NifStream(key.data, file, info);
		if (type == QUADRATIC_KEY) {
			//Uses Quadratic interpolation
			NifStream(key.forward_tangent, file, info);
			NifStream(key.backward_tangent, file, info);
		}
		else if (type == TBC_KEY) {
			//Uses TBC interpolation
			WriteFloat(key.tension, file);
			WriteFloat(key.bias, file);
			WriteFloat(key.continuity, file);
		}
	}

	template <class T>
	void NifStream(Key<T> const & key, std::ostream & file, const NifInfo & info, int type) {
		NifStream(key, file, info, (KeyType)type);
	}

	template <> void NifStream(Key<IndexString> & key, std::istream& file, const NifInfo & info, KeyType type);
	template <> void NifStream(Key<IndexString> const & key, std::ostream& file, const NifInfo & info, KeyType type);

	// BSVertexDesc
	struct BSVertexDesc;
	void NifStream(BSVertexDesc & data, std::istream & in, const NifInfo & info);
	void NifStream(BSVertexDesc const & data, std::ostream & out, const NifInfo & info);

	ostream & operator<< (ostream& out, const BSVertexDesc& data);

	// BSVertexData
	struct BSVertexData;
	void NifStream(BSVertexData & data, std::istream & in, const NifInfo & info, const BSVertexDesc vertexFlags);
	void NifStream(BSVertexData const & data, std::ostream & out, const NifInfo & info, const BSVertexDesc vertexFlags);

	ostream & operator<< (ostream& out, const BSVertexData& data);

	//The HexString function creates a formatted hex display of the given data for use in printing
	//a debug string for information that is not understood
	string HexString(const Byte * src, unsigned int len);

	//Byte
	ostream & operator<<(ostream & out, Byte const & val);

	// strInfo
	struct NifInfo;
	class strInfo
	{
	public:
		strInfo(NifInfo * value) : info(value) {}
	private:
		NifInfo *info;
		static const int infoIdx;
		friend ostream & operator<<(ostream & out, strInfo const & val);
		friend istream & operator >> (istream & out, strInfo & val);
	public:
		static NifInfo * getInfo(ios_base& str) {
			return (NifInfo *)str.pword(infoIdx);
		}
	};


	// hdrInfo
	struct Header;
	class hdrInfo
	{
	public:
		hdrInfo(Header * value) : info(value) {}
	private:
		Header *info;
		static const int infoIdx;
		friend ostream & operator<<(ostream & out, hdrInfo const & val);
		friend istream & operator >> (istream & out, hdrInfo & val);
	public:
		static Header * getInfo(ios_base& str) {
			return (Header *)str.pword(infoIdx);
		}
	};

	class NifStreamBuf : public std::streambuf {
		streamsize size;
		pos_type pos;
	public:
		NifStreamBuf() : size(0), pos(0) {}
	private:
		friend class NifSizeStream;
		char *pbase() const { return NULL; }
		char *pptr() const { return NULL; }
		char *epptr() const { return NULL; }
		// disable spurious msvc warning about xsgetn
#pragma warning (disable : 4996)
		virtual streamsize xsgetn(char_type *_Ptr, streamsize _Count) { return 0; }
		virtual streamsize xsputn(const char_type *_Ptr, streamsize _Count);
		virtual streampos seekoff(streamoff, ios_base::seekdir, ios_base::openmode = ios_base::in | ios_base::out);
		virtual streampos seekpos(streampos, ios_base::openmode = ios_base::in | ios_base::out);

		void reset() { size = 0; pos = 0; }
	};

	class NifSizeStream : public std::ostream {
		NifStreamBuf _buf;
	public:
		NifSizeStream() : std::ostream(&_buf) {}
		void reset() { _buf.reset(); }
	};

	//Can insert empty strings into the table
	void ForcedFromIndexString(IndexString const &value, Header* header, unsigned int& idx);

	void FromIndexString(IndexString const &value, Header* header, unsigned int& idx);

	void FromIndexString(Key<IndexString> const &value, Header* header, unsigned int& idx);

	void FromIndexString(vector<IndexString> const &value, Header* header, unsigned int& idx);

	void FromIndexString(vector<Key<IndexString>> const &value, Header* header, unsigned int& idx);

	template<typename T>
	bool ptr_equals(const T* a, const T* b) { return true; /* return a == b || (a != NULL && b != NULL && *a == *b);*/ }

	template<typename T>
	bool ref_equals(const Ref<T>& a, const Ref<T>& b) { return a == b || (a != NULL && b != NULL && *a == *b); }
}
#endif
