// JavaScript wrapper for vtkCellGridPointProbe with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkCellGridPointProbeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkCellGridPointProbe.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkCellGridPointProbe.h"

template<> void emscripten::internal::raw_destructor<vtkCellGridPointProbe>(vtkCellGridPointProbe * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGridPointProbe_class) {
  emscripten::class_<vtkCellGridPointProbe, emscripten::base<vtkPolyDataAlgorithm>>("vtkCellGridPointProbe")
    .smart_ptr<vtkSmartPointer<vtkCellGridPointProbe>>("vtkSmartPointer<vtkCellGridPointProbe>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellGridPointProbe>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridPointProbe::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGridPointProbe& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGridPointProbe::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGridPointProbe::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridPointProbe::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGridPointProbe& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceConnection", &vtkCellGridPointProbe::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("SetAttributeName", emscripten::optional_override([](vtkCellGridPointProbe& self, const std::string & arg_0) -> void {  return self.SetAttributeName( arg_0.c_str());}))
    .function("GetAttributeName", emscripten::optional_override([](vtkCellGridPointProbe& self) -> std::string {  return self.GetAttributeName();}));
}
