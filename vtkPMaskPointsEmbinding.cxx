// JavaScript wrapper for vtkPMaskPoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPMaskPointsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPMaskPoints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPMaskPoints.h"

template<> void emscripten::internal::raw_destructor<vtkPMaskPoints>(vtkPMaskPoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPMaskPoints_class) {
  emscripten::class_<vtkPMaskPoints, emscripten::base<vtkMaskPoints>>("vtkPMaskPoints")
    .smart_ptr<vtkSmartPointer<vtkPMaskPoints>>("vtkSmartPointer<vtkPMaskPoints>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPMaskPoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPMaskPoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPMaskPoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPMaskPoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPMaskPoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPMaskPoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPMaskPoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetController", &vtkPMaskPoints::GetController, emscripten::allow_raw_pointers())
    .function("SetController", &vtkPMaskPoints::SetController, emscripten::allow_raw_pointers());
}
