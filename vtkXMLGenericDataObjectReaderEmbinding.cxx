// JavaScript wrapper for vtkXMLGenericDataObjectReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkIOXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOXML.js/vtkXMLGenericDataObjectReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/XML/vtkXMLGenericDataObjectReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkHierarchicalBoxDataSet.h"
#include "vtkImageData.h"
#include "vtkMultiBlockDataSet.h"
#include "vtkPolyData.h"
#include "vtkRectilinearGrid.h"
#include "vtkStructuredGrid.h"
#include "vtkUnstructuredGrid.h"
#include "vtkSmartPointer.h"
#include "vtkXMLGenericDataObjectReader.h"

template<> void emscripten::internal::raw_destructor<vtkXMLGenericDataObjectReader>(vtkXMLGenericDataObjectReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLGenericDataObjectReader_class) {
  emscripten::class_<vtkXMLGenericDataObjectReader, emscripten::base<vtkXMLDataReader>>("vtkXMLGenericDataObjectReader")
    .smart_ptr<vtkSmartPointer<vtkXMLGenericDataObjectReader>>("vtkSmartPointer<vtkXMLGenericDataObjectReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkXMLGenericDataObjectReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLGenericDataObjectReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLGenericDataObjectReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLGenericDataObjectReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLGenericDataObjectReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLGenericDataObjectReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLGenericDataObjectReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkDataObject*(vtkXMLGenericDataObjectReader&)>([](vtkXMLGenericDataObjectReader& self) -> vtkDataObject* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkDataObject*(vtkXMLGenericDataObjectReader&, int)>([](vtkXMLGenericDataObjectReader& self, int arg_0) -> vtkDataObject* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetHierarchicalBoxDataSetOutput", &vtkXMLGenericDataObjectReader::GetHierarchicalBoxDataSetOutput, emscripten::allow_raw_pointers())
    .function("GetImageDataOutput", &vtkXMLGenericDataObjectReader::GetImageDataOutput, emscripten::allow_raw_pointers())
    .function("GetMultiBlockDataSetOutput", &vtkXMLGenericDataObjectReader::GetMultiBlockDataSetOutput, emscripten::allow_raw_pointers())
    .function("GetPolyDataOutput", &vtkXMLGenericDataObjectReader::GetPolyDataOutput, emscripten::allow_raw_pointers())
    .function("GetRectilinearGridOutput", &vtkXMLGenericDataObjectReader::GetRectilinearGridOutput, emscripten::allow_raw_pointers())
    .function("GetStructuredGridOutput", &vtkXMLGenericDataObjectReader::GetStructuredGridOutput, emscripten::allow_raw_pointers())
    .function("GetUnstructuredGridOutput", &vtkXMLGenericDataObjectReader::GetUnstructuredGridOutput, emscripten::allow_raw_pointers())
    .function("GetNumberOfPoints", &vtkXMLGenericDataObjectReader::GetNumberOfPoints)
    .function("GetNumberOfCells", &vtkXMLGenericDataObjectReader::GetNumberOfCells)
    .function("SetupEmptyOutput", &vtkXMLGenericDataObjectReader::SetupEmptyOutput)
    .class_function("CreateReader", &vtkXMLGenericDataObjectReader::CreateReader);
}
