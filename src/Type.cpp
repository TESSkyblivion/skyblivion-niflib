/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

#include "../include/Type.h"
#include "../include/ObjectRegistry.h"
using namespace Niflib;

int Type::num_types = 0;

Type::Type (const string & type_name, const Type * par_type ) : name(type_name), base_type(par_type), internal_type_number(num_types++) {} 

Type::Type(const Type& src) : name(src.name), base_type(src.base_type), internal_type_number(src.internal_type_number) {}

Type::~Type() {}

bool Type::operator<( const Type & compare_to ) const {
	return (internal_type_number < compare_to.internal_type_number);
}

bool Type::IsSameType( const Type & compare_to ) const {
	return compare_to.internal_type_number == internal_type_number;
}

bool Type::IsDerivedType( const Type & compare_to ) const {

	const Type * search = this;
	while ( search != NULL ) {
		if ( search->internal_type_number == compare_to.internal_type_number ) {
			return true;
		}
		search = search->base_type;
	}
	return false;
}

string Type::GetTypeName() const {
	return name;
}

NiObject * Type::Create() const {
	return ObjectRegistry::CreateObject(name);
}
