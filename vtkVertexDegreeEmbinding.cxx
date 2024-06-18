// JavaScript wrapper for vtkVertexDegree with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkVertexDegreeEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkVertexDegree.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVertexDegree.h"

template<> void emscripten::internal::raw_destructor<vtkVertexDegree>(vtkVertexDegree * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVertexDegree_class) {
  emscripten::class_<vtkVertexDegree, emscripten::base<vtkGraphAlgorithm>>("vtkVertexDegree")
    .smart_ptr<vtkSmartPointer<vtkVertexDegree>>("vtkSmartPointer<vtkVertexDegree>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkVertexDegree>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVertexDegree::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVertexDegree& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVertexDegree::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVertexDegree::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVertexDegree::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVertexDegree& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutputArrayName", emscripten::optional_override([](vtkVertexDegree& self, const std::string & arg_0) -> void {  return self.SetOutputArrayName( arg_0.c_str());}));
}
