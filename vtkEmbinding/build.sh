#!/bin/bash

(
    source "$HOME/github/emsdk/emsdk_env.sh"
    if [ -d "$TSPKG_ROOT/ArtifactoryInstall/Wasm32/Release/lib/cmake/vtk" ]; then
	emcmake cmake -S. -Bbuild -DVTK_DIR=$TSPKG_ROOT/ArtifactoryInstall/Wasm32/Release/lib/cmake/vtk -DVTK_ENABLE_LOGGING=ON -DBUILD_TESTING=ON
    else
	emcmake cmake -S. -Bbuild -DVTK_DIR=/home/jmh/github/VTKCMake/install/lib/cmake/vtk -DVTK_ENABLE_LOGGING=ON -DBUILD_TESTING=ON
    fi
    cmake --build build 
)
