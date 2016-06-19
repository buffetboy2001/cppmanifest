# Project setup
cmake_minimum_required(VERSION 3.0)
project(cppmanifest)
enable_language(CXX)

# report version based on include/version.h
include (.cmake/VersionUtils.cmake)
get_version ("${PROJECT_SOURCE_DIR}/include"
        cppmanifest_version_major cppmanifest_version_minor cppmanifest_version_patch cppmanifest_version_suffix)
string(LENGTH ${cppmanifest_version_suffix} cppmanifest_version_suffix_length)
if(cppmanifest_version_suffix_length EQUAL 1)
	# ignore this suffix
	set(VERSION ${cppmanifest_version_major}.${cppmanifest_version_minor}.${cppmanifest_version_patch})
else()
	# use the suffix
	set(VERSION ${cppmanifest_version_major}.${cppmanifest_version_minor}.${cppmanifest_version_patch}-${cppmanifest_version_suffix})
endif()
message("-- Generating build for cppmanifest version ${VERSION}")

# Write the build_info
set(USERNAME $ENV{USERNAME})
string(TIMESTAMP BUILDDATETIME %Y/%m/%d-%H:%M:%S) # example: 20160101.010101
configure_file(${PROJECT_SOURCE_DIR}/include/build_info.h.template ${PROJECT_SOURCE_DIR}/include/build_info.h)

# build test application
include_directories(${PROJECT_SOURCE_DIR})
add_executable(cpptestapp src/main.cpp)