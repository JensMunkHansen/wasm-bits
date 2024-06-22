// JavaScript wrapper for vtkUnstructuredGridWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkUnstructuredGridWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkUnstructuredGridWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGridBase.h"
#include "vtkUnstructuredGridWriter.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridWriter>(vtkUnstructuredGridWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridWriter_class) {
  emscripten::class_<vtkUnstructuredGridWriter, emscripten::base<vtkDataWriter>>("vtkUnstructuredGridWriter")
    .smart_ptr<vtkSmartPointer<vtkUnstructuredGridWriter>>("vtkSmartPointer<vtkUnstructuredGridWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkUnstructuredGridWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkUnstructuredGridBase*(vtkUnstructuredGridWriter&)>([](vtkUnstructuredGridWriter& self) -> vtkUnstructuredGridBase* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkUnstructuredGridBase*(vtkUnstructuredGridWriter&, int)>([](vtkUnstructuredGridWriter& self, int arg_0) -> vtkUnstructuredGridBase* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers());
}
