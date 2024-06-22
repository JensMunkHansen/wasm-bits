// JavaScript wrapper for vtkStructuredGridWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkStructuredGridWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkStructuredGridWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStructuredGrid.h"
#include "vtkStructuredGridWriter.h"

template<> void emscripten::internal::raw_destructor<vtkStructuredGridWriter>(vtkStructuredGridWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredGridWriter_class) {
  emscripten::class_<vtkStructuredGridWriter, emscripten::base<vtkDataWriter>>("vtkStructuredGridWriter")
    .smart_ptr<vtkSmartPointer<vtkStructuredGridWriter>>("vtkSmartPointer<vtkStructuredGridWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStructuredGridWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredGridWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredGridWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredGridWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredGridWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkStructuredGrid*(vtkStructuredGridWriter&)>([](vtkStructuredGridWriter& self) -> vtkStructuredGrid* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkStructuredGrid*(vtkStructuredGridWriter&, int)>([](vtkStructuredGridWriter& self, int arg_0) -> vtkStructuredGrid* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetWriteExtent", &vtkStructuredGridWriter::SetWriteExtent)
    .function("GetWriteExtent", &vtkStructuredGridWriter::GetWriteExtent)
    .function("WriteExtentOn", &vtkStructuredGridWriter::WriteExtentOn)
    .function("WriteExtentOff", &vtkStructuredGridWriter::WriteExtentOff);
}
