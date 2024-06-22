// JavaScript wrapper for vtkExtractSelectedTree with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkExtractSelectedTreeEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkExtractSelectedTree.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkInformation.h"
#include "vtkExtractSelectedTree.h"

template<> void emscripten::internal::raw_destructor<vtkExtractSelectedTree>(vtkExtractSelectedTree * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractSelectedTree_class) {
  emscripten::class_<vtkExtractSelectedTree, emscripten::base<vtkTreeAlgorithm>>("vtkExtractSelectedTree")
    .smart_ptr<vtkSmartPointer<vtkExtractSelectedTree>>("vtkSmartPointer<vtkExtractSelectedTree>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractSelectedTree>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractSelectedTree::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractSelectedTree& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractSelectedTree::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractSelectedTree::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractSelectedTree::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractSelectedTree& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSelectionConnection", &vtkExtractSelectedTree::SetSelectionConnection, emscripten::allow_raw_pointers())
    .function("FillInputPortInformation", &vtkExtractSelectedTree::FillInputPortInformation, emscripten::allow_raw_pointers());
}
