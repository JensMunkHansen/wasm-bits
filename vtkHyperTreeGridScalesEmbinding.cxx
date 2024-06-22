// JavaScript wrapper for vtkHyperTreeGridScales with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeGridScalesEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTreeGridScales.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkHyperTreeGridScales.h"


EMSCRIPTEN_BINDINGS(vtkHyperTreeGridScales_class) {
  emscripten::class_<vtkHyperTreeGridScales>("vtkHyperTreeGridScales")
    .function("GetBranchFactor", &vtkHyperTreeGridScales::GetBranchFactor)
    .function("GetScale", emscripten::select_overload<std::uintptr_t(vtkHyperTreeGridScales&, unsigned int)>([](vtkHyperTreeGridScales& self, unsigned int arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetScale( arg_0)); }))
    .function("GetScaleX", &vtkHyperTreeGridScales::GetScaleX)
    .function("GetScaleY", &vtkHyperTreeGridScales::GetScaleY)
    .function("GetScaleZ", &vtkHyperTreeGridScales::GetScaleZ)
    .function("GetCurrentFailLevel", &vtkHyperTreeGridScales::GetCurrentFailLevel);
}
