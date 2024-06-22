// JavaScript wrapper for vtkExtractPoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkExtractPointsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkExtractPoints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkExtractPoints.h"

template<> void emscripten::internal::raw_destructor<vtkExtractPoints>(vtkExtractPoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractPoints_class) {
  emscripten::class_<vtkExtractPoints, emscripten::base<vtkPointCloudFilter>>("vtkExtractPoints")
    .smart_ptr<vtkSmartPointer<vtkExtractPoints>>("vtkSmartPointer<vtkExtractPoints>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractPoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractPoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractPoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractPoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractPoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractPoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractPoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetImplicitFunction", &vtkExtractPoints::SetImplicitFunction, emscripten::allow_raw_pointers())
    .function("GetImplicitFunction", &vtkExtractPoints::GetImplicitFunction, emscripten::allow_raw_pointers())
    .function("SetExtractInside", &vtkExtractPoints::SetExtractInside)
    .function("GetExtractInside", &vtkExtractPoints::GetExtractInside)
    .function("ExtractInsideOn", &vtkExtractPoints::ExtractInsideOn)
    .function("ExtractInsideOff", &vtkExtractPoints::ExtractInsideOff)
    .function("GetMTime", &vtkExtractPoints::GetMTime);
}
