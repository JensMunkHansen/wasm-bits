// JavaScript wrapper for vtkVolumeReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkVolumeReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkVolumeReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkVolumeReader.h"

template<> void emscripten::internal::raw_destructor<vtkVolumeReader>(vtkVolumeReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVolumeReader_class) {
  emscripten::class_<vtkVolumeReader, emscripten::base<vtkImageAlgorithm>>("vtkVolumeReader")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVolumeReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVolumeReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVolumeReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVolumeReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFilePrefix", emscripten::optional_override([](vtkVolumeReader& self, const std::string & arg_0) -> void {  return self.SetFilePrefix( arg_0.c_str());}))
    .function("GetFilePrefix", emscripten::optional_override([](vtkVolumeReader& self) -> std::string {  return self.GetFilePrefix();}))
    .function("SetFilePattern", emscripten::optional_override([](vtkVolumeReader& self, const std::string & arg_0) -> void {  return self.SetFilePattern( arg_0.c_str());}))
    .function("GetFilePattern", emscripten::optional_override([](vtkVolumeReader& self) -> std::string {  return self.GetFilePattern();}))
    .function("SetImageRange", emscripten::select_overload<void(vtkVolumeReader&, int, int)>([](vtkVolumeReader& self, int arg_0, int arg_1) -> void { return self.SetImageRange( arg_0, arg_1); }))
    .function("SetDataSpacing", emscripten::select_overload<void(vtkVolumeReader&, double, double, double)>([](vtkVolumeReader& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDataSpacing( arg_0, arg_1, arg_2); }))
    .function("SetDataOrigin", emscripten::select_overload<void(vtkVolumeReader&, double, double, double)>([](vtkVolumeReader& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDataOrigin( arg_0, arg_1, arg_2); }));
}
