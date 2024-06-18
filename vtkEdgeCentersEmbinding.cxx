// JavaScript wrapper for vtkEdgeCenters with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkEdgeCentersEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkEdgeCenters.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkEdgeCenters.h"

template<> void emscripten::internal::raw_destructor<vtkEdgeCenters>(vtkEdgeCenters * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEdgeCenters_class) {
  emscripten::class_<vtkEdgeCenters, emscripten::base<vtkPolyDataAlgorithm>>("vtkEdgeCenters")
    .smart_ptr<vtkSmartPointer<vtkEdgeCenters>>("vtkSmartPointer<vtkEdgeCenters>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkEdgeCenters>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEdgeCenters::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEdgeCenters& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEdgeCenters::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEdgeCenters::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEdgeCenters::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEdgeCenters& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetVertexCells", &vtkEdgeCenters::SetVertexCells)
    .function("GetVertexCells", &vtkEdgeCenters::GetVertexCells)
    .function("VertexCellsOn", &vtkEdgeCenters::VertexCellsOn)
    .function("VertexCellsOff", &vtkEdgeCenters::VertexCellsOff);
}
