// JavaScript wrapper for vtkStructuredPointsWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkStructuredPointsWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkStructuredPointsWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkStructuredPointsWriter.h"

template<> void emscripten::internal::raw_destructor<vtkStructuredPointsWriter>(vtkStructuredPointsWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredPointsWriter_class) {
  emscripten::class_<vtkStructuredPointsWriter, emscripten::base<vtkDataWriter>>("vtkStructuredPointsWriter")
    .smart_ptr<vtkSmartPointer<vtkStructuredPointsWriter>>("vtkSmartPointer<vtkStructuredPointsWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkStructuredPointsWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredPointsWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredPointsWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredPointsWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredPointsWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredPointsWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredPointsWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkImageData*(vtkStructuredPointsWriter&)>([](vtkStructuredPointsWriter& self) -> vtkImageData* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkImageData*(vtkStructuredPointsWriter&, int)>([](vtkStructuredPointsWriter& self, int arg_0) -> vtkImageData* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetWriteExtent", &vtkStructuredPointsWriter::SetWriteExtent)
    .function("GetWriteExtent", &vtkStructuredPointsWriter::GetWriteExtent)
    .function("WriteExtentOn", &vtkStructuredPointsWriter::WriteExtentOn)
    .function("WriteExtentOff", &vtkStructuredPointsWriter::WriteExtentOff);
}
