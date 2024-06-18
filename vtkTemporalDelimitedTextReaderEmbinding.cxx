// JavaScript wrapper for vtkTemporalDelimitedTextReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkIOInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkTemporalDelimitedTextReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Infovis/vtkTemporalDelimitedTextReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTemporalDelimitedTextReader.h"

template<> void emscripten::internal::raw_destructor<vtkTemporalDelimitedTextReader>(vtkTemporalDelimitedTextReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTemporalDelimitedTextReader_class) {
  emscripten::class_<vtkTemporalDelimitedTextReader, emscripten::base<vtkDelimitedTextReader>>("vtkTemporalDelimitedTextReader")
    .smart_ptr<vtkSmartPointer<vtkTemporalDelimitedTextReader>>("vtkSmartPointer<vtkTemporalDelimitedTextReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTemporalDelimitedTextReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalDelimitedTextReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTemporalDelimitedTextReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTemporalDelimitedTextReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTemporalDelimitedTextReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalDelimitedTextReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTemporalDelimitedTextReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetTimeColumnName", &vtkTemporalDelimitedTextReader::GetTimeColumnName)
    .function("SetTimeColumnName", &vtkTemporalDelimitedTextReader::SetTimeColumnName)
    .function("GetTimeColumnId", &vtkTemporalDelimitedTextReader::GetTimeColumnId)
    .function("SetTimeColumnId", &vtkTemporalDelimitedTextReader::SetTimeColumnId)
    .function("GetRemoveTimeStepColumn", &vtkTemporalDelimitedTextReader::GetRemoveTimeStepColumn)
    .function("SetRemoveTimeStepColumn", &vtkTemporalDelimitedTextReader::SetRemoveTimeStepColumn)
    .function("GetMTime", &vtkTemporalDelimitedTextReader::GetMTime);
}
