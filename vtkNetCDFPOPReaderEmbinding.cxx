// JavaScript wrapper for vtkNetCDFPOPReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkIONetCDF.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkNetCDFPOPReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/NetCDF/vtkNetCDFPOPReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkNetCDFPOPReader.h"

template<> void emscripten::internal::raw_destructor<vtkNetCDFPOPReader>(vtkNetCDFPOPReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNetCDFPOPReader_class) {
  emscripten::class_<vtkNetCDFPOPReader, emscripten::base<vtkRectilinearGridAlgorithm>>("vtkNetCDFPOPReader")
    .smart_ptr<vtkSmartPointer<vtkNetCDFPOPReader>>("vtkSmartPointer<vtkNetCDFPOPReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkNetCDFPOPReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNetCDFPOPReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNetCDFPOPReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNetCDFPOPReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNetCDFPOPReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNetCDFPOPReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNetCDFPOPReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkNetCDFPOPReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkNetCDFPOPReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetStride", emscripten::select_overload<void(vtkNetCDFPOPReader&, int, int, int)>([](vtkNetCDFPOPReader& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetStride( arg_0, arg_1, arg_2); }))
    .function("GetNumberOfVariableArrays", &vtkNetCDFPOPReader::GetNumberOfVariableArrays)
    .function("GetVariableArrayName", emscripten::optional_override([](vtkNetCDFPOPReader& self, int arg_0) -> std::string {  return self.GetVariableArrayName( arg_0);}))
    .function("GetVariableArrayStatus", emscripten::optional_override([](vtkNetCDFPOPReader& self, const std::string & arg_0) -> int {  return self.GetVariableArrayStatus( arg_0.c_str());}))
    .function("SetVariableArrayStatus", emscripten::optional_override([](vtkNetCDFPOPReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetVariableArrayStatus( arg_0.c_str(), arg_1);}));
}
