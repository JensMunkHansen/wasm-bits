// JavaScript wrapper for vtkGroupLeafVertices with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkGroupLeafVerticesEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkGroupLeafVertices.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGroupLeafVertices.h"

template<> void emscripten::internal::raw_destructor<vtkGroupLeafVertices>(vtkGroupLeafVertices * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGroupLeafVertices_class) {
  emscripten::class_<vtkGroupLeafVertices, emscripten::base<vtkTreeAlgorithm>>("vtkGroupLeafVertices")
    .smart_ptr<vtkSmartPointer<vtkGroupLeafVertices>>("vtkSmartPointer<vtkGroupLeafVertices>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGroupLeafVertices>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGroupLeafVertices::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGroupLeafVertices& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGroupLeafVertices::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGroupLeafVertices::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGroupLeafVertices::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGroupLeafVertices& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGroupDomain", emscripten::optional_override([](vtkGroupLeafVertices& self, const std::string & arg_0) -> void {  return self.SetGroupDomain( arg_0.c_str());}))
    .function("GetGroupDomain", emscripten::optional_override([](vtkGroupLeafVertices& self) -> std::string {  return self.GetGroupDomain();}));
}
