// JavaScript wrapper for vtkRectilinearGridWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkRectilinearGridWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkRectilinearGridWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRectilinearGrid.h"
#include "vtkRectilinearGridWriter.h"

template<> void emscripten::internal::raw_destructor<vtkRectilinearGridWriter>(vtkRectilinearGridWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRectilinearGridWriter_class) {
  emscripten::class_<vtkRectilinearGridWriter, emscripten::base<vtkDataWriter>>("vtkRectilinearGridWriter")
    .smart_ptr<vtkSmartPointer<vtkRectilinearGridWriter>>("vtkSmartPointer<vtkRectilinearGridWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRectilinearGridWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGridWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRectilinearGridWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRectilinearGridWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRectilinearGridWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGridWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRectilinearGridWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkRectilinearGrid*(vtkRectilinearGridWriter&)>([](vtkRectilinearGridWriter& self) -> vtkRectilinearGrid* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkRectilinearGrid*(vtkRectilinearGridWriter&, int)>([](vtkRectilinearGridWriter& self, int arg_0) -> vtkRectilinearGrid* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetWriteExtent", &vtkRectilinearGridWriter::SetWriteExtent)
    .function("GetWriteExtent", &vtkRectilinearGridWriter::GetWriteExtent)
    .function("WriteExtentOn", &vtkRectilinearGridWriter::WriteExtentOn)
    .function("WriteExtentOff", &vtkRectilinearGridWriter::WriteExtentOff);
}
