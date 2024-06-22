// JavaScript wrapper for vtkXMLPolyDataReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLPolyDataReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLPolyDataReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkXMLPolyDataReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLPolyDataReader>(vtkXMLPolyDataReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLPolyDataReader_class) {
  emscripten::class_<vtkXMLPolyDataReader, emscripten::base<vtkXMLUnstructuredDataReader>>("vtkXMLPolyDataReader")
    .smart_ptr<vtkSmartPointer<vtkXMLPolyDataReader>>("vtkSmartPointer<vtkXMLPolyDataReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLPolyDataReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPolyDataReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLPolyDataReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLPolyDataReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLPolyDataReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLPolyDataReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLPolyDataReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkPolyData*(vtkXMLPolyDataReader&)>([](vtkXMLPolyDataReader& self) -> vtkPolyData* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkPolyData*(vtkXMLPolyDataReader&, int)>([](vtkXMLPolyDataReader& self, int arg_0) -> vtkPolyData* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNumberOfVerts", &vtkXMLPolyDataReader::GetNumberOfVerts)
    .function("GetNumberOfLines", &vtkXMLPolyDataReader::GetNumberOfLines)
    .function("GetNumberOfStrips", &vtkXMLPolyDataReader::GetNumberOfStrips)
    .function("GetNumberOfPolys", &vtkXMLPolyDataReader::GetNumberOfPolys);
}
