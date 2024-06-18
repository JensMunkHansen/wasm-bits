// JavaScript wrapper for vtkDiscreteMarchingCubes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkDiscreteMarchingCubesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkDiscreteMarchingCubes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDiscreteMarchingCubes.h"

template<> void emscripten::internal::raw_destructor<vtkDiscreteMarchingCubes>(vtkDiscreteMarchingCubes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDiscreteMarchingCubes_class) {
  emscripten::class_<vtkDiscreteMarchingCubes, emscripten::base<vtkMarchingCubes>>("vtkDiscreteMarchingCubes")
    .smart_ptr<vtkSmartPointer<vtkDiscreteMarchingCubes>>("vtkSmartPointer<vtkDiscreteMarchingCubes>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDiscreteMarchingCubes>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDiscreteMarchingCubes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDiscreteMarchingCubes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDiscreteMarchingCubes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDiscreteMarchingCubes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDiscreteMarchingCubes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDiscreteMarchingCubes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetComputeAdjacentScalars", &vtkDiscreteMarchingCubes::SetComputeAdjacentScalars)
    .function("GetComputeAdjacentScalars", &vtkDiscreteMarchingCubes::GetComputeAdjacentScalars)
    .function("ComputeAdjacentScalarsOn", &vtkDiscreteMarchingCubes::ComputeAdjacentScalarsOn)
    .function("ComputeAdjacentScalarsOff", &vtkDiscreteMarchingCubes::ComputeAdjacentScalarsOff);
}
