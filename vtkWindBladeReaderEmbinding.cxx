// JavaScript wrapper for vtkWindBladeReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkWindBladeReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkWindBladeReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStructuredGrid.h"
#include "vtkUnstructuredGrid.h"
#include "vtkWindBladeReader.h"

template<> void emscripten::internal::raw_destructor<vtkWindBladeReader>(vtkWindBladeReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWindBladeReader_class) {
  emscripten::class_<vtkWindBladeReader, emscripten::base<vtkStructuredGridAlgorithm>>("vtkWindBladeReader")
    .smart_ptr<vtkSmartPointer<vtkWindBladeReader>>("vtkSmartPointer<vtkWindBladeReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkWindBladeReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWindBladeReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWindBladeReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWindBladeReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWindBladeReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWindBladeReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWindBladeReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFilename", emscripten::optional_override([](vtkWindBladeReader& self, const std::string & arg_0) -> void {  return self.SetFilename( arg_0.c_str());}))
    .function("GetFilename", emscripten::optional_override([](vtkWindBladeReader& self) -> std::string {  return self.GetFilename();}))
    .function("SetWholeExtent", emscripten::select_overload<void(vtkWindBladeReader&, int, int, int, int, int, int)>([](vtkWindBladeReader& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetSubExtent", emscripten::select_overload<void(vtkWindBladeReader&, int, int, int, int, int, int)>([](vtkWindBladeReader& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetSubExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetFieldOutput", &vtkWindBladeReader::GetFieldOutput, emscripten::allow_raw_pointers())
    .function("GetBladeOutput", &vtkWindBladeReader::GetBladeOutput, emscripten::allow_raw_pointers())
    .function("GetGroundOutput", &vtkWindBladeReader::GetGroundOutput, emscripten::allow_raw_pointers())
    .function("GetNumberOfPointArrays", &vtkWindBladeReader::GetNumberOfPointArrays)
    .function("GetPointArrayName", emscripten::optional_override([](vtkWindBladeReader& self, int arg_0) -> std::string {  return self.GetPointArrayName( arg_0);}))
    .function("GetPointArrayStatus", emscripten::optional_override([](vtkWindBladeReader& self, const std::string & arg_0) -> int {  return self.GetPointArrayStatus( arg_0.c_str());}))
    .function("SetPointArrayStatus", emscripten::optional_override([](vtkWindBladeReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetPointArrayStatus( arg_0.c_str(), arg_1);}))
    .function("DisableAllPointArrays", &vtkWindBladeReader::DisableAllPointArrays)
    .function("EnableAllPointArrays", &vtkWindBladeReader::EnableAllPointArrays);
}
