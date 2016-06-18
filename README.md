# cppmanifest
An exploration of a cmake-integrated manifest for C++ projects. The goal is to allow [CMake](https://www.cmake.org) to inject build meta-date into a C++ project. The build information should then queryable from within the compiled application (e.g. via CLI).

Target information: 
* build version
* created-by 
* build date, time
* build architecture
* C++ version

Goal:
Ideally, this is a header-only library with associated CMake scripts. It should be simple to incorporate these files directly into your build system with as little modification as possible.

Acknowledgements:
My ideas here are based on stuff I've seen in the build system for [log4cplus](https://sourceforge.net/projects/log4cplus/). So, thanks to them for the idea!