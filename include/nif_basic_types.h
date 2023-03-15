/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

#ifndef _NIF_BASIC_TYPES_H_
#define _NIF_BASIC_TYPES_H_

#include <string>
#include <stdarg.h>
#include <vector>
#include "gen/enums.h"
#include "nif_versions.h"
#include <array>

namespace Niflib {

	template<typename C>
	struct is_iterable
	{
		typedef long false_type;
		typedef char true_type;

		template<class T> static false_type check(...);
		template<class T> static true_type  check(int,
			typename T::const_iterator = C().end());

		enum { value = sizeof(check<C>(0)) == sizeof(true_type) };
	};

	template <template <typename...> class Base, typename Derived>
	struct is_base_of_template
	{
		using U = typename std::remove_cv<Derived>::type;

		template <typename... Args>
		static std::true_type test(Base<Args...>*);

		static std::false_type test(void*);

		using type = decltype(test(std::declval<U*>()));
	};

	template <template <typename...> class Base, typename Derived>
	using is_base_of_template_t = typename is_base_of_template<Base, Derived>::type;


	struct NifInfo;

	struct Native {};
	struct Compound {};
	struct HalfVector3;

	struct HeaderString : public Native {
		std::string header;

		bool operator==(const HeaderString& other) const { return header == other.header; }

	};

	struct ShortString : public Native {
		std::string str;

		bool operator==(const ShortString& other) const { return str == other.str; }
	};

	struct LineString : public Native {
		std::string line;

		bool operator==(const LineString& other) const { return line == other.line; }
	};

	struct IndexString : public std::string, public Native {
		IndexString() {}
		IndexString(const IndexString& ref) : std::string((std::string const&)ref) {}
		IndexString(const std::string& ref) : std::string(ref) {}
		IndexString& operator=(const IndexString& ref) { assign((std::string const&)ref); return *this; }
		IndexString& operator=(const std::string& ref) { assign(ref); return *this; }
		operator std::string const& () const { return *this; }
		operator std::string& () { return *this; }
	};

	struct Char8String : public std::string, public Native {
		Char8String() {}
		Char8String(const Char8String& ref) : std::string((std::string const&)ref) {}
		Char8String(const std::string& ref) : std::string(ref) {}
		Char8String& operator=(const Char8String& ref) { assign((std::string const&)ref); return *this; }
		Char8String& operator=(const std::string& ref) { assign(ref); return *this; }
		operator std::string const& () const { return *this; }
		operator std::string& () { return *this; }
	};

	struct ByteColor4 : public Native {
		union {
			uint32_t desc = 0;
			struct {
				/*! Red color component. */
				uint8_t r;
				/*! Green color component. */
				uint8_t g;
				/*! Blue color component. */
				uint8_t b;
				/*! Alpha color component. */
				uint8_t a;
			};
		};

		bool operator==(const ByteColor4& other) const { return desc == other.desc; }
	};

	//--Non-mathematical Basic Types--//
	typedef unsigned char Byte;


	/*! An array of bytes. */

	struct ByteArray : public std::vector<Byte>, public Compound {};
	//typedef std::vector<Niflib::byte> ByteArray;

	// Fallout 4 Declaration of half float
#ifndef hfloat
	struct hfloat {

		unsigned short value = 0;

		hfloat() {};
		hfloat(unsigned short val) { value = val; };
		hfloat& operator=(const unsigned short& ref) { value = ref; return *this; }
		bool operator==(const hfloat& other) const { return value == other.value; }
	};
	//typedef unsigned short	hfloat;
#endif

//--Structures--//

/*!
 * Used to specify optional ways the NIF file is to be written or retrieve information about
 * the way an existing file was stored.
 */
	struct NifInfo {
		NifInfo() : version(VER_4_0_0_2), userVersion(0), userVersion2(0), endian(ENDIAN_LITTLE) {}
		NifInfo(unsigned version, unsigned userVersion = 0, unsigned userVersion2 = 0) {
			this->version = version;
			this->userVersion = userVersion;
			this->userVersion2 = userVersion2;
			endian = ENDIAN_LITTLE;
		}
		unsigned version;
		unsigned userVersion;
		unsigned userVersion2;
		/*! Specifies which low-level number storage format to use. Should match the processor type for the target system. */
		EndianType endian;
		/*! This is only supported in Oblivion.  It contains the name of the person who created the NIF file. */
		std::string author;
		/*! This is only supported in Oblivion.  It seems to contain the type of script or program used to export the file. */
		std::string processScript;
		/*! This is only supported in Oblivion.  It seems to contain the more specific script or options of the above. */
		std::string exportScript;
	};

	//Need to use an iterable class
	template<size_t size, class T>
	using array = std::array<T, size>;

	//TODO:  This is temporary to make it compile.  Should eventually be adjusted to display 1's and 0's insted of as an int.
	typedef unsigned short Flags;
}
#endif
