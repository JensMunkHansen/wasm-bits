// JavaScript wrapper for vtkCompositeDataWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkCompositeDataWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkCompositeDataWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCompositeDataSet.h"
#include "vtkCompositeDataWriter.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeDataWriter>(vtkCompositeDataWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeDataWriter_class) {
  emscripten::class_<vtkCompositeDataWriter, emscripten::base<vtkDataWriter>>("vtkCompositeDataWriter")
    .smart_ptr<vtkSmartPointer<vtkCompositeDataWriter>>("vtkSmartPointer<vtkCompositeDataWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCompositeDataWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeDataWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeDataWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeDataWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeDataWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkCompositeDataSet*(vtkCompositeDataWriter&)>([](vtkCompositeDataWriter& self) -> vtkCompositeDataSet* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkCompositeDataSet*(vtkCompositeDataWriter&, int)>([](vtkCompositeDataWriter& self, int arg_0) -> vtkCompositeDataSet* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers());
}
