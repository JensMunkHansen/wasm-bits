// JavaScript wrapper for vtkStructuredPointsReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkStructuredPointsReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkStructuredPointsReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStructuredPoints.h"
#include "vtkInformation.h"
#include "vtkDataObject.h"
#include "vtkStructuredPointsReader.h"

template<> void emscripten::internal::raw_destructor<vtkStructuredPointsReader>(vtkStructuredPointsReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredPointsReader_class) {
  emscripten::class_<vtkStructuredPointsReader, emscripten::base<vtkDataReader>>("vtkStructuredPointsReader")
    .smart_ptr<vtkSmartPointer<vtkStructuredPointsReader>>("vtkSmartPointer<vtkStructuredPointsReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStructuredPointsReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredPointsReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredPointsReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredPointsReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredPointsReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredPointsReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredPointsReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutput", &vtkStructuredPointsReader::SetOutput, emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkStructuredPoints*(vtkStructuredPointsReader&, int)>([](vtkStructuredPointsReader& self, int arg_0) -> vtkStructuredPoints* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkStructuredPoints*(vtkStructuredPointsReader&)>([](vtkStructuredPointsReader& self) -> vtkStructuredPoints* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("ReadMetaDataSimple", &vtkStructuredPointsReader::ReadMetaDataSimple, emscripten::allow_raw_pointers())
    .function("ReadMeshSimple", &vtkStructuredPointsReader::ReadMeshSimple, emscripten::allow_raw_pointers());
}
