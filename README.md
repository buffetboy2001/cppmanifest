# cppmanifest
An exploration of a cmake-integrated manifest for C++ projects. The goal is to allow [CMake](https://www.cmake.org) to inject build meta-date into a C++ project. The build information should then queryable from within the compiled application (e.g. via CLI) and should provide build traceability. This metadata is particularly useful in environments that employ automated build pipelines (continuous integration & delivery).

_Meta-data:_ 
* build version: DONE
* created-by: DONE
* build machine name DONE
* build date, time: DONE
* build architecture: DONE
* gcc/c++ compiler version: DONE

_Goal:_
Ideally, this is a header-only library with associated CMake scripts. It should be simple to incorporate these files directly into your build system with as little modification as possible.

_Acknowledgements:_
My ideas here are based on stuff I've seen in the build system for [log4cplus](https://sourceforge.net/projects/log4cplus/). So, thanks to them for the idea!

_Resources:_
Build meta-data can be defined lots of ways. Here's a [good list](https://www.smartics.eu/buildmetadata-maven-plugin/) of the kinds of things we look for in the software world.