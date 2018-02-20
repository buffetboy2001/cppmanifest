//
// Created by Stuart to test cppmanifest. This is NOT needed to use cppmanifest!
//
#include "include/cppmanifest.h"

using namespace std;

int main(int argc, char* argv[]) {
    cout << "Starting logging" << endl;
    cout << "Build version: " << cppmanifest::getVersion() << endl;
    cout << "Created-by: " << cppmanifest::getUserName() << endl;
    cout << "Created-on: " << cppmanifest::getBuildTimeStamp() << endl;
    cout << "Built with GCC version: " << cppmanifest::getBuildCompilerVersion() << endl;
    cout << "Built on system name: " << cppmanifest::getBuildSystemName() << endl;
    cout << "Built on system processor: " << cppmanifest::getBuildSystemProcessor() << endl;
    cout << "Built with system ver: " << cppmanifest::getBuildSystemVersion() << endl;
    cout << "Built with system host name: " << cppmanifest::getBuildHostName() << endl;
    cout << "Built from git branch: " << cppmanifest::getGitBranch() << endl;
    if (cppmanifest::getGitIsClean())
        cout << "Built from git hash: " << cppmanifest::getGitHash() << endl;
    else
        cout << "Built from git hash: " << cppmanifest::getGitHash() << "-DIRTY" << endl;

}
