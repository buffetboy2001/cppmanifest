//
// Created by Stuart to test cppmanifest. This is NOT needed to use cppmanifest!
//
#include "include/cppmanifest.h"

using namespace std;

int main(int argc, char* argv[]) {
    cout << "Starting logging" << endl;
    cout << "Build version: " << cppmanifest::getVersion() << endl;
    cout << "Created-by: " << cppmanifest::getUserName() << endl;

}