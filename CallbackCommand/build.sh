#!/bin/bash

(
    source "$HOME/emsdk/emsdk_env.sh"
    #emcmake cmake -S. -Bbuild -DVTK_DIR=$TSPKG_ROOT/ArtifactoryInstall/Wasm32/Release/lib/cmake/vtk
    emcmake cmake -S. -Bbuild -DVTK_DIR=/home/jmh/github/VTKCMake/install/lib/cmake/vtk
#    bear -- bash -c 'cmake --build build --target main'
    cmake --build build --target main
)
