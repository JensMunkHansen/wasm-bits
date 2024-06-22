// JavaScript wrapper for vtkDataAssemblyVisitor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkDataAssemblyVisitorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkDataAssemblyVisitor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataAssemblyVisitor.h"

template<> void emscripten::internal::raw_destructor<vtkDataAssemblyVisitor>(vtkDataAssemblyVisitor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataAssemblyVisitor_class) {
  emscripten::class_<vtkDataAssemblyVisitor, emscripten::base<vtkObject>>("vtkDataAssemblyVisitor")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataAssemblyVisitor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataAssemblyVisitor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataAssemblyVisitor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataAssemblyVisitor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataAssemblyVisitor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataAssemblyVisitor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}