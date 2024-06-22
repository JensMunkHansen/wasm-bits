// JavaScript wrapper for vtkRemoveIsolatedVertices with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkRemoveIsolatedVerticesEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkRemoveIsolatedVertices.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRemoveIsolatedVertices.h"

template<> void emscripten::internal::raw_destructor<vtkRemoveIsolatedVertices>(vtkRemoveIsolatedVertices * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRemoveIsolatedVertices_class) {
  emscripten::class_<vtkRemoveIsolatedVertices, emscripten::base<vtkGraphAlgorithm>>("vtkRemoveIsolatedVertices")
    .smart_ptr<vtkSmartPointer<vtkRemoveIsolatedVertices>>("vtkSmartPointer<vtkRemoveIsolatedVertices>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRemoveIsolatedVertices>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRemoveIsolatedVertices::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRemoveIsolatedVertices& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRemoveIsolatedVertices::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRemoveIsolatedVertices::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRemoveIsolatedVertices::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRemoveIsolatedVertices& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
