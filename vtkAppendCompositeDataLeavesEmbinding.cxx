// JavaScript wrapper for vtkAppendCompositeDataLeaves with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkAppendCompositeDataLeavesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkAppendCompositeDataLeaves.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAppendCompositeDataLeaves.h"

template<> void emscripten::internal::raw_destructor<vtkAppendCompositeDataLeaves>(vtkAppendCompositeDataLeaves * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAppendCompositeDataLeaves_class) {
  emscripten::class_<vtkAppendCompositeDataLeaves, emscripten::base<vtkCompositeDataSetAlgorithm>>("vtkAppendCompositeDataLeaves")
    .smart_ptr<vtkSmartPointer<vtkAppendCompositeDataLeaves>>("vtkSmartPointer<vtkAppendCompositeDataLeaves>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAppendCompositeDataLeaves>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendCompositeDataLeaves::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAppendCompositeDataLeaves& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAppendCompositeDataLeaves::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAppendCompositeDataLeaves::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendCompositeDataLeaves::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAppendCompositeDataLeaves& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAppendFieldData", &vtkAppendCompositeDataLeaves::SetAppendFieldData)
    .function("GetAppendFieldData", &vtkAppendCompositeDataLeaves::GetAppendFieldData)
    .function("AppendFieldDataOn", &vtkAppendCompositeDataLeaves::AppendFieldDataOn)
    .function("AppendFieldDataOff", &vtkAppendCompositeDataLeaves::AppendFieldDataOff);
}
