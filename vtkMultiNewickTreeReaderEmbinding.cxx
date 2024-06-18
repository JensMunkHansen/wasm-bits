// JavaScript wrapper for vtkMultiNewickTreeReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkIOInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkMultiNewickTreeReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Infovis/vtkMultiNewickTreeReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiPieceDataSet.h"
#include "vtkDataObject.h"
#include "vtkMultiNewickTreeReader.h"

template<> void emscripten::internal::raw_destructor<vtkMultiNewickTreeReader>(vtkMultiNewickTreeReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMultiNewickTreeReader_class) {
  emscripten::class_<vtkMultiNewickTreeReader, emscripten::base<vtkDataReader>>("vtkMultiNewickTreeReader")
    .smart_ptr<vtkSmartPointer<vtkMultiNewickTreeReader>>("vtkSmartPointer<vtkMultiNewickTreeReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMultiNewickTreeReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiNewickTreeReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMultiNewickTreeReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMultiNewickTreeReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMultiNewickTreeReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiNewickTreeReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMultiNewickTreeReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkMultiPieceDataSet*(vtkMultiNewickTreeReader&)>([](vtkMultiNewickTreeReader& self) -> vtkMultiPieceDataSet* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkMultiPieceDataSet*(vtkMultiNewickTreeReader&, int)>([](vtkMultiNewickTreeReader& self, int arg_0) -> vtkMultiPieceDataSet* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkMultiNewickTreeReader::SetOutput, emscripten::allow_raw_pointers())
    .function("ReadMeshSimple", &vtkMultiNewickTreeReader::ReadMeshSimple, emscripten::allow_raw_pointers());
}
