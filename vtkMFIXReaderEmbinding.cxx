// JavaScript wrapper for vtkMFIXReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkMFIXReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkMFIXReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMFIXReader.h"

template<> void emscripten::internal::raw_destructor<vtkMFIXReader>(vtkMFIXReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMFIXReader_class) {
  emscripten::class_<vtkMFIXReader, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkMFIXReader")
    .smart_ptr<vtkSmartPointer<vtkMFIXReader>>("vtkSmartPointer<vtkMFIXReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMFIXReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMFIXReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMFIXReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMFIXReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMFIXReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMFIXReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMFIXReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkMFIXReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkMFIXReader& self) -> std::string {  return self.GetFileName();}))
    .function("GetNumberOfCells", &vtkMFIXReader::GetNumberOfCells)
    .function("GetNumberOfPoints", &vtkMFIXReader::GetNumberOfPoints)
    .function("GetNumberOfCellFields", &vtkMFIXReader::GetNumberOfCellFields)
    .function("SetTimeStep", &vtkMFIXReader::SetTimeStep)
    .function("GetTimeStep", &vtkMFIXReader::GetTimeStep)
    .function("GetNumberOfTimeSteps", &vtkMFIXReader::GetNumberOfTimeSteps)
    .function("SetTimeStepRange", emscripten::select_overload<void(vtkMFIXReader&, int, int)>([](vtkMFIXReader& self, int arg_0, int arg_1) -> void { return self.SetTimeStepRange( arg_0, arg_1); }))
    .function("GetNumberOfCellArrays", &vtkMFIXReader::GetNumberOfCellArrays)
    .function("GetCellArrayName", emscripten::optional_override([](vtkMFIXReader& self, int arg_0) -> std::string {  return self.GetCellArrayName( arg_0);}))
    .function("GetCellArrayStatus", emscripten::optional_override([](vtkMFIXReader& self, const std::string & arg_0) -> int {  return self.GetCellArrayStatus( arg_0.c_str());}))
    .function("SetCellArrayStatus", emscripten::optional_override([](vtkMFIXReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetCellArrayStatus( arg_0.c_str(), arg_1);}))
    .function("DisableAllCellArrays", &vtkMFIXReader::DisableAllCellArrays)
    .function("EnableAllCellArrays", &vtkMFIXReader::EnableAllCellArrays)
    .function("GetCellDataRange", emscripten::optional_override([](vtkMFIXReader& self, int arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> void {  return self.GetCellDataRange( arg_0,reinterpret_cast<float*>(arg_1 * sizeof(float)),reinterpret_cast<float*>(arg_2 * sizeof(float)));}));
}
