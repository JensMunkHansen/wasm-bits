// JavaScript wrapper for vtkMCubesWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkMCubesWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkMCubesWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkMCubesWriter.h"

template<> void emscripten::internal::raw_destructor<vtkMCubesWriter>(vtkMCubesWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMCubesWriter_class) {
  emscripten::class_<vtkMCubesWriter, emscripten::base<vtkWriter>>("vtkMCubesWriter")
    .smart_ptr<vtkSmartPointer<vtkMCubesWriter>>("vtkSmartPointer<vtkMCubesWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMCubesWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMCubesWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMCubesWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMCubesWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMCubesWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMCubesWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMCubesWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLimitsFileName", emscripten::optional_override([](vtkMCubesWriter& self, const std::string & arg_0) -> void {  return self.SetLimitsFileName( arg_0.c_str());}))
    .function("GetLimitsFileName", emscripten::optional_override([](vtkMCubesWriter& self) -> std::string {  return self.GetLimitsFileName();}))
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkMCubesWriter&)>([](vtkMCubesWriter& self) -> vtkPolyData* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkMCubesWriter&, int)>([](vtkMCubesWriter& self, int arg_0) -> vtkPolyData* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetFileName", emscripten::optional_override([](vtkMCubesWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkMCubesWriter& self) -> std::string {  return self.GetFileName();}));
}
