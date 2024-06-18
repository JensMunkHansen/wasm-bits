// JavaScript wrapper for vtkTecplotReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkTecplotReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkTecplotReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTecplotReader.h"

template<> void emscripten::internal::raw_destructor<vtkTecplotReader>(vtkTecplotReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTecplotReader_class) {
  emscripten::class_<vtkTecplotReader, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkTecplotReader")
    .smart_ptr<vtkSmartPointer<vtkTecplotReader>>("vtkSmartPointer<vtkTecplotReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTecplotReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTecplotReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTecplotReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTecplotReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTecplotReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTecplotReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTecplotReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfVariables", &vtkTecplotReader::GetNumberOfVariables)
    .function("SetFileName", emscripten::optional_override([](vtkTecplotReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetDataTitle", emscripten::optional_override([](vtkTecplotReader& self) -> std::string {  return self.GetDataTitle();}))
    .function("GetNumberOfBlocks", &vtkTecplotReader::GetNumberOfBlocks)
    .function("GetBlockName", emscripten::optional_override([](vtkTecplotReader& self, int arg_0) -> std::string {  return self.GetBlockName( arg_0);}))
    .function("GetNumberOfDataAttributes", &vtkTecplotReader::GetNumberOfDataAttributes)
    .function("GetDataAttributeName", emscripten::optional_override([](vtkTecplotReader& self, int arg_0) -> std::string {  return self.GetDataAttributeName( arg_0);}))
    .function("IsDataAttributeCellBased", emscripten::select_overload<int(vtkTecplotReader&, const std::string &)>([](vtkTecplotReader& self, const std::string & arg_0) -> int { return self.IsDataAttributeCellBased( arg_0.c_str()); }))
    .function("IsDataAttributeCellBased", emscripten::select_overload<int(vtkTecplotReader&, int)>([](vtkTecplotReader& self, int arg_0) -> int { return self.IsDataAttributeCellBased( arg_0); }))
    .function("GetNumberOfDataArrays", &vtkTecplotReader::GetNumberOfDataArrays)
    .function("GetDataArrayName", emscripten::optional_override([](vtkTecplotReader& self, int arg_0) -> std::string {  return self.GetDataArrayName( arg_0);}))
    .function("GetDataArrayStatus", emscripten::optional_override([](vtkTecplotReader& self, const std::string & arg_0) -> int {  return self.GetDataArrayStatus( arg_0.c_str());}))
    .function("SetDataArrayStatus", emscripten::optional_override([](vtkTecplotReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetDataArrayStatus( arg_0.c_str(), arg_1);}));
}
