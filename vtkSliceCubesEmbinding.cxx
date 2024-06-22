// JavaScript wrapper for vtkSliceCubes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkImagingHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkSliceCubesEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Hybrid/vtkSliceCubes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVolumeReader.h"
#include "vtkSliceCubes.h"

template<> void emscripten::internal::raw_destructor<vtkSliceCubes>(vtkSliceCubes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSliceCubes_class) {
  emscripten::class_<vtkSliceCubes, emscripten::base<vtkObject>>("vtkSliceCubes")
    .smart_ptr<vtkSmartPointer<vtkSliceCubes>>("vtkSmartPointer<vtkSliceCubes>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSliceCubes>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSliceCubes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSliceCubes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSliceCubes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSliceCubes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSliceCubes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSliceCubes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Write", &vtkSliceCubes::Write)
    .function("Update", &vtkSliceCubes::Update)
    .function("SetReader", &vtkSliceCubes::SetReader, emscripten::allow_raw_pointers())
    .function("GetReader", &vtkSliceCubes::GetReader, emscripten::allow_raw_pointers())
    .function("SetFileName", emscripten::optional_override([](vtkSliceCubes& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkSliceCubes& self) -> std::string {  return self.GetFileName();}))
    .function("SetValue", &vtkSliceCubes::SetValue)
    .function("GetValue", &vtkSliceCubes::GetValue)
    .function("SetLimitsFileName", emscripten::optional_override([](vtkSliceCubes& self, const std::string & arg_0) -> void {  return self.SetLimitsFileName( arg_0.c_str());}))
    .function("GetLimitsFileName", emscripten::optional_override([](vtkSliceCubes& self) -> std::string {  return self.GetLimitsFileName();}));
}
