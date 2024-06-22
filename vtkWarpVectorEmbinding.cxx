// JavaScript wrapper for vtkWarpVector with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkWarpVectorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkWarpVector.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkWarpVector.h"

template<> void emscripten::internal::raw_destructor<vtkWarpVector>(vtkWarpVector * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWarpVector_class) {
  emscripten::class_<vtkWarpVector, emscripten::base<vtkPointSetAlgorithm>>("vtkWarpVector")
    .smart_ptr<vtkSmartPointer<vtkWarpVector>>("vtkSmartPointer<vtkWarpVector>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkWarpVector>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWarpVector::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWarpVector& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWarpVector::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWarpVector::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWarpVector::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWarpVector& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetScaleFactor", &vtkWarpVector::SetScaleFactor)
    .function("GetScaleFactor", &vtkWarpVector::GetScaleFactor)
    .function("SetOutputPointsPrecision", &vtkWarpVector::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkWarpVector::GetOutputPointsPrecision)
    .function("FillInputPortInformation", &vtkWarpVector::FillInputPortInformation, emscripten::allow_raw_pointers());
}
