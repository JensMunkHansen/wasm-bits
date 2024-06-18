// JavaScript wrapper for vtkPerturbCoincidentVertices with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkPerturbCoincidentVerticesEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkPerturbCoincidentVertices.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPerturbCoincidentVertices.h"

template<> void emscripten::internal::raw_destructor<vtkPerturbCoincidentVertices>(vtkPerturbCoincidentVertices * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPerturbCoincidentVertices_class) {
  emscripten::class_<vtkPerturbCoincidentVertices, emscripten::base<vtkGraphAlgorithm>>("vtkPerturbCoincidentVertices")
    .smart_ptr<vtkSmartPointer<vtkPerturbCoincidentVertices>>("vtkSmartPointer<vtkPerturbCoincidentVertices>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPerturbCoincidentVertices>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPerturbCoincidentVertices::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPerturbCoincidentVertices& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPerturbCoincidentVertices::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPerturbCoincidentVertices::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPerturbCoincidentVertices::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPerturbCoincidentVertices& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPerturbFactor", &vtkPerturbCoincidentVertices::SetPerturbFactor)
    .function("GetPerturbFactor", &vtkPerturbCoincidentVertices::GetPerturbFactor);
}
