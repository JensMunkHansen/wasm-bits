// JavaScript wrapper for vtkXMLWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkXMLWriter.h"

template<> void emscripten::internal::raw_destructor<vtkXMLWriter>(vtkXMLWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLWriter_class) {
  emscripten::class_<vtkXMLWriter, emscripten::base<vtkXMLWriterBase>>("vtkXMLWriter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", emscripten::select_overload<void(vtkXMLWriter&, vtkDataObject*)>([](vtkXMLWriter& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkXMLWriter&, int, vtkDataObject*)>([](vtkXMLWriter& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkXMLWriter&, int)>([](vtkXMLWriter& self, int arg_0) -> vtkDataObject* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkXMLWriter&)>([](vtkXMLWriter& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetNumberOfTimeSteps", &vtkXMLWriter::GetNumberOfTimeSteps)
    .function("SetNumberOfTimeSteps", &vtkXMLWriter::SetNumberOfTimeSteps)
    .function("Start", &vtkXMLWriter::Start)
    .function("Stop", &vtkXMLWriter::Stop)
    .function("WriteNextTime", &vtkXMLWriter::WriteNextTime);
}
