cmake_minimum_required (VERSION 2.8.12)
project ( niflib )

#It seems Cmake does not set default build type so we force it
if( NOT CMAKE_BUILD_TYPE )
    set( CMAKE_BUILD_TYPE Debug CACHE STRING "Debug" FORCE )
endif()

# Fix for wrong scoping from the main project
if (MSVC)
	message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
	if(CMAKE_BUILD_TYPE STREQUAL "Debug")
		add_definitions(/MTd)
	else()
		add_definitions(/MT)
	endif()
	if("${CMAKE_SIZEOF_VOID_P}" STREQUAL "8")
		message(STATUS "detected Win64 build, adding /bigobj")
		add_definitions(/bigobj)
	endif()
endif()

add_subdirectory(lib/mikktspace)

#include_directories(${PROJECT_SOURCE_DIR}/lib/mikktspace )
#include_directories(${PROJECT_SOURCE_DIR}/lib/eigen )
#include_directories(${PROJECT_SOURCE_DIR}/lib/libigl/include )
#include_directories(${PROJECT_SOURCE_DIR}/lib/bounding-mesh/src/boundingmesh )

add_subdirectory(test)
add_custom_target(
	check_niflib
  COMMAND ${CMAKE_COMMAND} -P ${PROJECT_SOURCE_DIR}/gen/checknifxml.cmake
  DEPENDS
	${PROJECT_SOURCE_DIR}/gen/nifxml/nif.xml
  COMMENT "Checking if NIF.XML is changed"
  WORKING_DIRECTORY
	${PROJECT_SOURCE_DIR}/gen
  SOURCES
	${PROJECT_SOURCE_DIR}/gen/nifxml/nif.xml  
)

include_directories(${PROJECT_SOURCE_DIR}/include )

option(BUILD_DOCUMENTATION "Create and install the HTML based API documentation (requires Doxygen)" OFF)

message(STATUS "BUILDING PROJECT niflib")
message(STATUS "SOURCE DIR IS: " ${PROJECT_SOURCE_DIR})
if (MSVC)
	message(STATUS "Lowering warning level to W3")
    add_definitions(/W3)
	message(STATUS "Adding MSVC parallel build")
	add_definitions(/MP)
endif()

set(sources
	src/BSComplexShape.cpp
	src/ComplexShape.cpp
	src/half.cpp
	src/Inertia.cpp
	src/kfm.cpp
	src/MatTexCollection.cpp
	src/niflib.cpp
	src/nifqhull.cpp
	src/NIF_IO.cpp
	src/nif_math.cpp
	src/ObjectRegistry.cpp
	src/RefObject.cpp
	src/Type.cpp
	src/nif_members_expr.cpp
)

set(custom_types
	src/custom_types/BSVertexData.cpp
	src/custom_types/BSVertexDesc.cpp
)

set(interfaces
	src/interfaces/interpolators.cpp
	src/interfaces/misc.cpp
)

#Game-Specific Documentation
set(game_specific
	include/game_specific/skyrim.h
	include/game_specific/oblivion.h
)


if(EXISTS ${PROJECT_SOURCE_DIR}/sources.cmake)
	include("sources.cmake")
else()
	message(STATUS "Generating sources...")
	execute_process(COMMAND ${CMAKE_COMMAND} -P ${PROJECT_SOURCE_DIR}/gen/checknifxml.cmake
		WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/gen
		RESULT_VARIABLE git_result
		OUTPUT_VARIABLE git_ver)
	message(STATUS "Done: " + ${git_result})
	include("sources.cmake")
endif()

source_group(Core FILES ${sources})
source_group(CustomTypes FILES ${custom_types})
source_group(Interfaces FILES ${interfaces})
source_group(GeneratedMisc FILES ${misc})
source_group(GeneratedCompounds FILES ${compounds})
source_group(GeneratedObjects FILES ${niobjects})
source_group(GameSpecifics FILES ${game_specific})

add_library(niflib ${sources} ${custom_types} ${misc} ${compounds} ${niobjects} ${interfaces} ${game_specific} ${PROJECT_SOURCE_DIR}/README.md ${PROJECT_SOURCE_DIR}/LICENSE.md)
add_dependencies(niflib check_niflib)

if (NOT BUILD_SHARED_LIBS)
	target_compile_definitions(niflib PUBLIC "NIFLIB_STATIC_LINK")
endif()
target_compile_definitions(niflib PUBLIC "_CRT_SECURE_NO_DEPRECATE")
target_compile_definitions(niflib PUBLIC "_CRT_NONSTDC_NO_DEPRECATE")
target_compile_definitions(niflib PUBLIC "_SCL_SECURE_NO_WARNINGS")

############################################################################
#Documentation
############################################################################

find_package(Doxygen)

if(BUILD_DOCUMENTATION)
    if(NOT DOXYGEN_FOUND)
         message(FATAL_ERROR "Doxygen is needed to build the documentation.")
    endif()

    set(doxyfile_in ${PROJECT_SOURCE_DIR}/doc/niflib.doxygen)
    set(doxyfile ${PROJECT_SOURCE_DIR}/build)

    configure_file(${doxyfile_in} ${doxyfile} @ONLY)

    message("Doxygen build started.")

	add_custom_target(
		doc ALL
		COMMAND ${DOXYGEN_EXECUTABLE} ${doxyfile_in}
		WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/doc
		COMMENT "Generating API documentation with Doxygen"
		VERBATIM
	)

    #    install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/html DESTINATION     share/doc)
endif()
