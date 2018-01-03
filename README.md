# niflib

A modified version of NifLib, a C++ parser for NetImmerse/Gamebryo File Format (and some game-specific implementations, all rights reserved). Original project available here 
https://github.com/niftools/niflib.

This version is WIP and has a number of still-to-be-cleaned modifications to the original project:

1. Updated generation to Niflib 0.9.0.1 [into its submodule](gen/nifxml/nif.xml)
2. Moved docsys project as direct file inclusion [on gen subfolder](gen/gen_niflib.py)
3. Cleaned of (almost) all custom code and hence currently dropped *qhull* dependancy. Sources into include/gen, include/obj/, src/gen/ and include/obj/are [git ignored](.gitignore), as generated from 2.
4. Switched to CMake:
  * Added Python dependency module
  * Automatic source generation when [nif.xml](gen/nifxml/nif.xml) is changed.
  * sources.cmake generation for grouping
  * added google test link and basic read/write testing
5. Experimental visitor interface [visitor.h](include/visitor.h) and implementation examples [typed_visitor.cpp](include/interfaces/typed_visitor.h)
6. Oblivion/skyblivion customizations.

Please see [niflib.h](include/niflib.h) for licensing. All the derivative work from this repository is distributed under this license, while any third party work is released under its proprietary license. 