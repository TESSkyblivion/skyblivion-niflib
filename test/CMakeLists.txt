find_package(Threads REQUIRED)

#It seems Cmake does not set default build type so we force it
if( NOT CMAKE_BUILD_TYPE )
    set( CMAKE_BUILD_TYPE Debug CACHE STRING "Debug" FORCE )
endif()

##########################

# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/test/googletest-download )
if(result)
  message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/test/googletest-download )
if(result)
  message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_BINARY_DIR}/googletest-src
                 ${CMAKE_BINARY_DIR}/googletest-build)

# The gtest/gtest_main targets carry header search path
# dependencies automatically when using CMake 2.8.11 or
# later. Otherwise we have to add them here ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
  include_directories("${gtest_SOURCE_DIR}/include")
endif()

##########################

# Visitor should be used in a single module, but for test we can avoid that
if (MSVC)
	set(CMAKE_EXE_LINKER_FLAGS "/FORCE:MULTIPLE" CACHE INTERNAL "" FORCE)
else()
	set(CMAKE_EXE_LINKER_FLAGS "-z muldefs" CACHE INTERNAL "" FORCE)
endif()

file(GLOB SRCS *.cpp)
file(GLOB SRCS_MIKTT mikktspace/*.cpp)

include_directories(${PROJECT_SOURCE_DIR}/include )
include_directories(${PROJECT_SOURCE_DIR}/lib/mikktspace )

add_executable(test_niflib ${SRCS} ${SRCS_MIKTT})
target_link_libraries(test_niflib
	mikktspace
	niflib
	gtest_main
)

