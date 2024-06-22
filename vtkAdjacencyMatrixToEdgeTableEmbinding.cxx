// JavaScript wrapper for vtkAdjacencyMatrixToEdgeTable with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkAdjacencyMatrixToEdgeTableEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkAdjacencyMatrixToEdgeTable.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAdjacencyMatrixToEdgeTable.h"

template<> void emscripten::internal::raw_destructor<vtkAdjacencyMatrixToEdgeTable>(vtkAdjacencyMatrixToEdgeTable * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAdjacencyMatrixToEdgeTable_class) {
  emscripten::class_<vtkAdjacencyMatrixToEdgeTable, emscripten::base<vtkTableAlgorithm>>("vtkAdjacencyMatrixToEdgeTable")
    .smart_ptr<vtkSmartPointer<vtkAdjacencyMatrixToEdgeTable>>("vtkSmartPointer<vtkAdjacencyMatrixToEdgeTable>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAdjacencyMatrixToEdgeTable>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAdjacencyMatrixToEdgeTable::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAdjacencyMatrixToEdgeTable& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAdjacencyMatrixToEdgeTable::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAdjacencyMatrixToEdgeTable::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAdjacencyMatrixToEdgeTable::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAdjacencyMatrixToEdgeTable& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetSourceDimension", &vtkAdjacencyMatrixToEdgeTable::GetSourceDimension)
    .function("SetSourceDimension", &vtkAdjacencyMatrixToEdgeTable::SetSourceDimension)
    .function("GetValueArrayName", emscripten::optional_override([](vtkAdjacencyMatrixToEdgeTable& self) -> std::string {  return self.GetValueArrayName();}))
    .function("SetValueArrayName", emscripten::optional_override([](vtkAdjacencyMatrixToEdgeTable& self, const std::string & arg_0) -> void {  return self.SetValueArrayName( arg_0.c_str());}))
    .function("GetMinimumCount", &vtkAdjacencyMatrixToEdgeTable::GetMinimumCount)
    .function("SetMinimumCount", &vtkAdjacencyMatrixToEdgeTable::SetMinimumCount)
    .function("GetMinimumThreshold", &vtkAdjacencyMatrixToEdgeTable::GetMinimumThreshold)
    .function("SetMinimumThreshold", &vtkAdjacencyMatrixToEdgeTable::SetMinimumThreshold);
}
