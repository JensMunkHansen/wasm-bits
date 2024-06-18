#!/bin/bash

(
    source "$HOME/github/emsdk/emsdk_env.sh"
    emcmake cmake -S. -Bbuild -DVTK_DIR=$TSPKG_ROOT/ArtifactoryInstall/Wasm32/Release/lib/cmake/vtk
    cmake --build build --target main
)
