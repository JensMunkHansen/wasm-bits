// JavaScript wrapper for vtkNek5000Reader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkIOParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkNek5000ReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Parallel/vtkNek5000Reader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkNek5000Reader.h"

template<> void emscripten::internal::raw_destructor<vtkNek5000Reader>(vtkNek5000Reader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNek5000Reader_class) {
  emscripten::class_<vtkNek5000Reader, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkNek5000Reader")
    .smart_ptr<vtkSmartPointer<vtkNek5000Reader>>("vtkSmartPointer<vtkNek5000Reader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkNek5000Reader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNek5000Reader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNek5000Reader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNek5000Reader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNek5000Reader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNek5000Reader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNek5000Reader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkNek5000Reader::GetMTime)
    .function("SetFileName", emscripten::optional_override([](vtkNek5000Reader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkNek5000Reader& self) -> std::string {  return self.GetFileName();}))
    .function("SetDataFileName", emscripten::optional_override([](vtkNek5000Reader& self, const std::string & arg_0) -> void {  return self.SetDataFileName( arg_0.c_str());}))
    .function("GetDataFileName", emscripten::optional_override([](vtkNek5000Reader& self) -> std::string {  return self.GetDataFileName();}))
    .function("GetNumberOfTimeSteps", &vtkNek5000Reader::GetNumberOfTimeSteps)
    .function("SetTimeStepRange", emscripten::select_overload<void(vtkNek5000Reader&, int, int)>([](vtkNek5000Reader& self, int arg_0, int arg_1) -> void { return self.SetTimeStepRange( arg_0, arg_1); }))
    .function("GetNumberOfPointArrays", &vtkNek5000Reader::GetNumberOfPointArrays)
    .function("GetPointArrayName", emscripten::optional_override([](vtkNek5000Reader& self, int arg_0) -> std::string {  return self.GetPointArrayName( arg_0);}))
    .function("SetCleanGrid", &vtkNek5000Reader::SetCleanGrid)
    .function("GetCleanGrid", &vtkNek5000Reader::GetCleanGrid)
    .function("CleanGridOn", &vtkNek5000Reader::CleanGridOn)
    .function("CleanGridOff", &vtkNek5000Reader::CleanGridOff)
    .function("SetSpectralElementIds", &vtkNek5000Reader::SetSpectralElementIds)
    .function("GetSpectralElementIds", &vtkNek5000Reader::GetSpectralElementIds)
    .function("SpectralElementIdsOn", &vtkNek5000Reader::SpectralElementIdsOn)
    .function("SpectralElementIdsOff", &vtkNek5000Reader::SpectralElementIdsOff)
    .function("GetPointArrayStatus", emscripten::select_overload<bool(vtkNek5000Reader&, const std::string &)>([](vtkNek5000Reader& self, const std::string & arg_0) -> bool { return self.GetPointArrayStatus( arg_0.c_str()); }))
    .function("GetPointArrayStatus", emscripten::select_overload<bool(vtkNek5000Reader&, int)>([](vtkNek5000Reader& self, int arg_0) -> bool { return self.GetPointArrayStatus( arg_0); }))
    .function("SetPointArrayStatus", emscripten::optional_override([](vtkNek5000Reader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetPointArrayStatus( arg_0.c_str(), arg_1);}))
    .function("DisableAllPointArrays", &vtkNek5000Reader::DisableAllPointArrays)
    .function("EnableAllPointArrays", &vtkNek5000Reader::EnableAllPointArrays)
    .function("GetVariableNamesFromData", emscripten::optional_override([](vtkNek5000Reader& self, std::uintptr_t arg_0) -> size_t {  return self.GetVariableNamesFromData(reinterpret_cast<char*>(arg_0 * sizeof(char)));}))
    .function("CanReadFile", emscripten::optional_override([](vtkNek5000Reader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}));
}
