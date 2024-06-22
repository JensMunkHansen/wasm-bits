// JavaScript wrapper for vtkDataSetReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkDataSetReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkDataSetReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkPolyData.h"
#include "vtkStructuredPoints.h"
#include "vtkStructuredGrid.h"
#include "vtkUnstructuredGrid.h"
#include "vtkRectilinearGrid.h"
#include "vtkInformation.h"
#include "vtkDataObject.h"
#include "vtkDataSetReader.h"

template<> void emscripten::internal::raw_destructor<vtkDataSetReader>(vtkDataSetReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataSetReader_class) {
  emscripten::class_<vtkDataSetReader, emscripten::base<vtkDataReader>>("vtkDataSetReader")
    .smart_ptr<vtkSmartPointer<vtkDataSetReader>>("vtkSmartPointer<vtkDataSetReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataSetReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataSetReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataSetReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataSetReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataSetReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkDataSet*(vtkDataSetReader&)>([](vtkDataSetReader& self) -> vtkDataSet* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkDataSet*(vtkDataSetReader&, int)>([](vtkDataSetReader& self, int arg_0) -> vtkDataSet* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetPolyDataOutput", &vtkDataSetReader::GetPolyDataOutput, emscripten::allow_raw_pointers())
    .function("GetStructuredPointsOutput", &vtkDataSetReader::GetStructuredPointsOutput, emscripten::allow_raw_pointers())
    .function("GetStructuredGridOutput", &vtkDataSetReader::GetStructuredGridOutput, emscripten::allow_raw_pointers())
    .function("GetUnstructuredGridOutput", &vtkDataSetReader::GetUnstructuredGridOutput, emscripten::allow_raw_pointers())
    .function("GetRectilinearGridOutput", &vtkDataSetReader::GetRectilinearGridOutput, emscripten::allow_raw_pointers())
    .function("ReadOutputType", &vtkDataSetReader::ReadOutputType)
    .function("ReadMetaDataSimple", &vtkDataSetReader::ReadMetaDataSimple, emscripten::allow_raw_pointers())
    .function("ReadMeshSimple", &vtkDataSetReader::ReadMeshSimple, emscripten::allow_raw_pointers());
}
