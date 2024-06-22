// JavaScript wrapper for vtkCountVertices with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkCountVerticesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkCountVertices.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCountVertices.h"

template<> void emscripten::internal::raw_destructor<vtkCountVertices>(vtkCountVertices * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCountVertices_class) {
  emscripten::class_<vtkCountVertices, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkCountVertices")
    .smart_ptr<vtkSmartPointer<vtkCountVertices>>("vtkSmartPointer<vtkCountVertices>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCountVertices>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCountVertices::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCountVertices& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCountVertices::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCountVertices::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCountVertices::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCountVertices& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutputArrayName", emscripten::optional_override([](vtkCountVertices& self, const std::string & arg_0) -> void {  return self.SetOutputArrayName( arg_0.c_str());}))
    .function("GetOutputArrayName", emscripten::optional_override([](vtkCountVertices& self) -> std::string {  return self.GetOutputArrayName();}))
    .function("SetUseImplicitArray", &vtkCountVertices::SetUseImplicitArray)
    .function("GetUseImplicitArray", &vtkCountVertices::GetUseImplicitArray);
}
