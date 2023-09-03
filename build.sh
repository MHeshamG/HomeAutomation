#!/bin/bash

echo "............... Building HomeAutomation .............."
rm -rf build
mkdir build
echo "-- Step 1 Conan Install --"
conan install .
cd build/
echo "-- Step 2 Source Conan Build ENV --"
source Release/generators/conanbuild.sh
echo "-- Step 3 CMake Generate --"
cmake .. -G Ninja -DCMAKE_TOOLCHAIN_FILE=Release/generators/conan_toolchain.cmake -DCMAKE_BUILD_TYPE=release
echo "-- Step 4 Ninja Build --"
ninja -j0
source Release/generators/deactivate_conanbuild.sh 