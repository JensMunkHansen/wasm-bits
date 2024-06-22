// JavaScript wrapper for vtkGenericDataObjectReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkGenericDataObjectReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkGenericDataObjectReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkGraph.h"
#include "vtkMolecule.h"
#include "vtkPolyData.h"
#include "vtkRectilinearGrid.h"
#include "vtkStructuredGrid.h"
#include "vtkStructuredPoints.h"
#include "vtkTable.h"
#include "vtkTree.h"
#include "vtkUnstructuredGrid.h"
#include "vtkInformation.h"
#include "vtkGenericDataObjectReader.h"

template<> void emscripten::internal::raw_destructor<vtkGenericDataObjectReader>(vtkGenericDataObjectReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericDataObjectReader_class) {
  emscripten::class_<vtkGenericDataObjectReader, emscripten::base<vtkDataReader>>("vtkGenericDataObjectReader")
    .smart_ptr<vtkSmartPointer<vtkGenericDataObjectReader>>("vtkSmartPointer<vtkGenericDataObjectReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGenericDataObjectReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericDataObjectReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericDataObjectReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericDataObjectReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericDataObjectReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericDataObjectReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericDataObjectReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkDataObject*(vtkGenericDataObjectReader&)>([](vtkGenericDataObjectReader& self) -> vtkDataObject* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkDataObject*(vtkGenericDataObjectReader&, int)>([](vtkGenericDataObjectReader& self, int arg_0) -> vtkDataObject* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetGraphOutput", &vtkGenericDataObjectReader::GetGraphOutput, emscripten::allow_raw_pointers())
    .function("GetMoleculeOutput", &vtkGenericDataObjectReader::GetMoleculeOutput, emscripten::allow_raw_pointers())
    .function("GetPolyDataOutput", &vtkGenericDataObjectReader::GetPolyDataOutput, emscripten::allow_raw_pointers())
    .function("GetRectilinearGridOutput", &vtkGenericDataObjectReader::GetRectilinearGridOutput, emscripten::allow_raw_pointers())
    .function("GetStructuredGridOutput", &vtkGenericDataObjectReader::GetStructuredGridOutput, emscripten::allow_raw_pointers())
    .function("GetStructuredPointsOutput", &vtkGenericDataObjectReader::GetStructuredPointsOutput, emscripten::allow_raw_pointers())
    .function("GetTableOutput", &vtkGenericDataObjectReader::GetTableOutput, emscripten::allow_raw_pointers())
    .function("GetTreeOutput", &vtkGenericDataObjectReader::GetTreeOutput, emscripten::allow_raw_pointers())
    .function("GetUnstructuredGridOutput", &vtkGenericDataObjectReader::GetUnstructuredGridOutput, emscripten::allow_raw_pointers())
    .function("ReadOutputType", &vtkGenericDataObjectReader::ReadOutputType)
    .function("ReadMetaDataSimple", &vtkGenericDataObjectReader::ReadMetaDataSimple, emscripten::allow_raw_pointers())
    .function("ReadMeshSimple", &vtkGenericDataObjectReader::ReadMeshSimple, emscripten::allow_raw_pointers());
}
