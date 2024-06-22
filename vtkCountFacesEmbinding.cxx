// JavaScript wrapper for vtkCountFaces with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkCountFacesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkCountFaces.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCountFaces.h"

template<> void emscripten::internal::raw_destructor<vtkCountFaces>(vtkCountFaces * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCountFaces_class) {
  emscripten::class_<vtkCountFaces, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkCountFaces")
    .smart_ptr<vtkSmartPointer<vtkCountFaces>>("vtkSmartPointer<vtkCountFaces>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCountFaces>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCountFaces::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCountFaces& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCountFaces::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCountFaces::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCountFaces::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCountFaces& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutputArrayName", emscripten::optional_override([](vtkCountFaces& self, const std::string & arg_0) -> void {  return self.SetOutputArrayName( arg_0.c_str());}))
    .function("GetOutputArrayName", emscripten::optional_override([](vtkCountFaces& self) -> std::string {  return self.GetOutputArrayName();}))
    .function("SetUseImplicitArray", &vtkCountFaces::SetUseImplicitArray)
    .function("GetUseImplicitArray", &vtkCountFaces::GetUseImplicitArray);
}