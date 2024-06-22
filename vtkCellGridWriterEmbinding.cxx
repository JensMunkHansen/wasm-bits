// JavaScript wrapper for vtkCellGridWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCellGrid.js/vtkIOCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCellGrid.js/vtkCellGridWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/CellGrid/vtkCellGridWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellGrid.h"
#include "vtkCellGridWriter.h"

template<> void emscripten::internal::raw_destructor<vtkCellGridWriter>(vtkCellGridWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGridWriter_class) {
  emscripten::class_<vtkCellGridWriter, emscripten::base<vtkWriter>>("vtkCellGridWriter")
    .smart_ptr<vtkSmartPointer<vtkCellGridWriter>>("vtkSmartPointer<vtkCellGridWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellGridWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGridWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGridWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGridWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGridWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkCellGridWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkCellGridWriter& self) -> std::string {  return self.GetFileName();}))
    .function("GetInput", emscripten::select_overload<vtkCellGrid*(vtkCellGridWriter&)>([](vtkCellGridWriter& self) -> vtkCellGrid* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkCellGrid*(vtkCellGridWriter&, int)>([](vtkCellGridWriter& self, int arg_0) -> vtkCellGrid* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers());
}
