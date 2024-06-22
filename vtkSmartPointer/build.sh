#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Usage: $0 [wasm|static|shared]"
    exit 1
fi

# Convert parameter to lowercase for case-insensitive comparison
param=$(echo "$1" | tr '[:upper:]' '[:lower:]')

if [ "$param" = "static" ]; then
    rm -Rf build
    cmake -S. -Bbuild -DBUILD_SHARED_LIBS=OFF
    cmake --build build --target main
elif [ "$param" = "wasm" ]; then
(
    #rm -Rf build
    source "$HOME/github/emsdk/emsdk_env.sh"
    #emcmake cmake -S. -Bbuild -DVTK_DIR=$HOME/github/VTKCMake/install/lib/cmake/vtk -DVTK_ENABLE_LOGGING=ON
    if [ -d "$TSPKG_ROOT/ArtifactoryInstall/Wasm32/Release/lib/cmake/vtk"]; then
	emcmake cmake -S. -Bbuild -DVTK_DIR=$TSPKG_ROOT/ArtifactoryInstall/Wasm32/Release/lib/cmake/vtk -DVTK_ENABLE_LOGGING=ON
    else
	emcmake cmake -S. -Bbuild -DVTK_DIR=/home/jmh/github/VTKCMake/install/lib/cmake/vtk -DVTK_ENABLE_LOGGING=ON
    fi
    cmake --build build --target main
)
else
    echo "Invalid argument. Usage: $0 [wasm|static|shared]"
    exit 1    
fi
