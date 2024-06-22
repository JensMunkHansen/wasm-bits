// JavaScript wrapper for vtkGraphInternals with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkGraphInternalsEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkGraphInternals.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraphInternals.h"


EMSCRIPTEN_BINDINGS(vtkVertexAdjacencyList_class) {
  emscripten::class_<vtkVertexAdjacencyList>("vtkVertexAdjacencyList");
}
template<> void emscripten::internal::raw_destructor<vtkGraphInternals>(vtkGraphInternals * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphInternals_class) {
  emscripten::class_<vtkGraphInternals, emscripten::base<vtkObject>>("vtkGraphInternals")
    .smart_ptr<vtkSmartPointer<vtkGraphInternals>>("vtkSmartPointer<vtkGraphInternals>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGraphInternals>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphInternals::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphInternals& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphInternals::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphInternals::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphInternals::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphInternals& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
