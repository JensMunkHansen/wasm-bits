#!/bin/bash

(
    source "$HOME/emsdk/emsdk_env.sh"
    emcmake cmake -S. -Bbuild -DVTK_DIR=$TSPKG_ROOT/ArtifactoryInstall/Wasm32/Release/lib/cmake/vtk
#    bear -- bash -c 'cmake --build build --target main'
    cmake --build build --target main
)
