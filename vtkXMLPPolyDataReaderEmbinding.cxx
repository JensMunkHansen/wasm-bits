// JavaScript wrapper for vtkXMLPPolyDataReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLPPolyDataReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLPPolyDataReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkXMLPPolyDataReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPPolyDataReader>(vtkXMLPPolyDataReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPPolyDataReader_class) {
  emscripten::class_<vtkXMLPPolyDataReader, emscripten::base<vtkXMLPUnstructuredDataReader>>("vtkXMLPPolyDataReader")
    .smart_ptr<vtkSmartPointer<vtkXMLPPolyDataReader>>("vtkSmartPointer<vtkXMLPPolyDataReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLPPolyDataReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPPolyDataReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPPolyDataReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPPolyDataReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPPolyDataReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPPolyDataReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPPolyDataReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkPolyData*(vtkXMLPPolyDataReader&)>([](vtkXMLPPolyDataReader& self) -> vtkPolyData* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkPolyData*(vtkXMLPPolyDataReader&, int)>([](vtkXMLPPolyDataReader& self, int arg_0) -> vtkPolyData* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers());
}
