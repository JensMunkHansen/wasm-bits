// JavaScript wrapper for vtkPolyDataWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkPolyDataWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkPolyDataWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkPolyDataWriter.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataWriter>(vtkPolyDataWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataWriter_class) {
  emscripten::class_<vtkPolyDataWriter, emscripten::base<vtkDataWriter>>("vtkPolyDataWriter")
    .smart_ptr<vtkSmartPointer<vtkPolyDataWriter>>("vtkSmartPointer<vtkPolyDataWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolyDataWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkPolyDataWriter&)>([](vtkPolyDataWriter& self) -> vtkPolyData* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkPolyDataWriter&, int)>([](vtkPolyDataWriter& self, int arg_0) -> vtkPolyData* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers());
}
