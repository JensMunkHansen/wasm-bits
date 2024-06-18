// JavaScript wrapper for vtkPassThrough with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkPassThroughEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkPassThrough.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkPassThrough.h"

template<> void emscripten::internal::raw_destructor<vtkPassThrough>(vtkPassThrough * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPassThrough_class) {
  emscripten::class_<vtkPassThrough, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkPassThrough")
    .smart_ptr<vtkSmartPointer<vtkPassThrough>>("vtkSmartPointer<vtkPassThrough>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPassThrough>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPassThrough::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPassThrough& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPassThrough::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPassThrough::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPassThrough::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPassThrough& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("FillInputPortInformation", &vtkPassThrough::FillInputPortInformation, emscripten::allow_raw_pointers())
    .function("SetDeepCopyInput", &vtkPassThrough::SetDeepCopyInput)
    .function("GetDeepCopyInput", &vtkPassThrough::GetDeepCopyInput)
    .function("DeepCopyInputOn", &vtkPassThrough::DeepCopyInputOn)
    .function("DeepCopyInputOff", &vtkPassThrough::DeepCopyInputOff)
    .function("SetAllowNullInput", &vtkPassThrough::SetAllowNullInput)
    .function("GetAllowNullInput", &vtkPassThrough::GetAllowNullInput)
    .function("AllowNullInputOn", &vtkPassThrough::AllowNullInputOn)
    .function("AllowNullInputOff", &vtkPassThrough::AllowNullInputOff);
}
