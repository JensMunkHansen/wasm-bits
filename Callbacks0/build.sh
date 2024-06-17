#!/bin/bash

(
    #rm -Rf build
    source "$HOME/github/emsdk/emsdk_env.sh"
    #emcmake cmake -S. -Bbuild -DVTK_DIR=$HOME/github/VTKCMake/install/lib/cmake/vtk -DVTK_ENABLE_LOGGING=ON
    emcmake cmake -S. -Bbuild 
    cmake --build build --target callback_example
)
