#!/bin/sh

set -e
set -x

sdk_version="v9.3.0-2490-g97c85d6930-20240401"
readonly sdk_version

sdk_image="kitware/vtk-wasm-sdk"
readonly sdk_image

sdk_config="Release"
readonly sdk_config

sdk_dir="/VTK-install/$sdk_config/lib/cmake/vtk"
readonly sdk_dir

docker run \
    --rm \
    -u "$(id -u):$(id -g)" \
    -v"$PWD":/work/JSConeNative \
    $sdk_image:$sdk_version \
    emcmake cmake -GNinja -S /work/JSConeNative -B /work/JSConeNative/out -DCMAKE_BUILD_TYPE=$sdk_config -DVTK_DIR=$sdk_dir

docker run \
    --rm \
    -v"$PWD":/work/JSConeNative \
    $sdk_image:$sdk_version \
    cmake --build /work/JSConeNative/out

