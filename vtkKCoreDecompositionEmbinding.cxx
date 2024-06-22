// JavaScript wrapper for vtkKCoreDecomposition with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkKCoreDecompositionEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkKCoreDecomposition.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkKCoreDecomposition.h"

template<> void emscripten::internal::raw_destructor<vtkKCoreDecomposition>(vtkKCoreDecomposition * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkKCoreDecomposition_class) {
  emscripten::class_<vtkKCoreDecomposition, emscripten::base<vtkGraphAlgorithm>>("vtkKCoreDecomposition")
    .smart_ptr<vtkSmartPointer<vtkKCoreDecomposition>>("vtkSmartPointer<vtkKCoreDecomposition>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkKCoreDecomposition>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKCoreDecomposition::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkKCoreDecomposition& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkKCoreDecomposition::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkKCoreDecomposition::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKCoreDecomposition::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkKCoreDecomposition& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutputArrayName", emscripten::optional_override([](vtkKCoreDecomposition& self, const std::string & arg_0) -> void {  return self.SetOutputArrayName( arg_0.c_str());}))
    .function("SetUseInDegreeNeighbors", &vtkKCoreDecomposition::SetUseInDegreeNeighbors)
    .function("GetUseInDegreeNeighbors", &vtkKCoreDecomposition::GetUseInDegreeNeighbors)
    .function("UseInDegreeNeighborsOn", &vtkKCoreDecomposition::UseInDegreeNeighborsOn)
    .function("UseInDegreeNeighborsOff", &vtkKCoreDecomposition::UseInDegreeNeighborsOff)
    .function("SetUseOutDegreeNeighbors", &vtkKCoreDecomposition::SetUseOutDegreeNeighbors)
    .function("GetUseOutDegreeNeighbors", &vtkKCoreDecomposition::GetUseOutDegreeNeighbors)
    .function("UseOutDegreeNeighborsOn", &vtkKCoreDecomposition::UseOutDegreeNeighborsOn)
    .function("UseOutDegreeNeighborsOff", &vtkKCoreDecomposition::UseOutDegreeNeighborsOff)
    .function("SetCheckInputGraph", &vtkKCoreDecomposition::SetCheckInputGraph)
    .function("GetCheckInputGraph", &vtkKCoreDecomposition::GetCheckInputGraph)
    .function("CheckInputGraphOn", &vtkKCoreDecomposition::CheckInputGraphOn)
    .function("CheckInputGraphOff", &vtkKCoreDecomposition::CheckInputGraphOff);
}
