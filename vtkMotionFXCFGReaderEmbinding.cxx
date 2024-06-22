// JavaScript wrapper for vtkMotionFXCFGReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMotionFX.js/vtkIOMotionFX.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMotionFX.js/vtkMotionFXCFGReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/MotionFX/vtkMotionFXCFGReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMotionFXCFGReader.h"

template<> void emscripten::internal::raw_destructor<vtkMotionFXCFGReader>(vtkMotionFXCFGReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMotionFXCFGReader_class) {
  emscripten::class_<vtkMotionFXCFGReader, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkMotionFXCFGReader")
    .smart_ptr<vtkSmartPointer<vtkMotionFXCFGReader>>("vtkSmartPointer<vtkMotionFXCFGReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMotionFXCFGReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMotionFXCFGReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMotionFXCFGReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMotionFXCFGReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMotionFXCFGReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMotionFXCFGReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMotionFXCFGReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkMotionFXCFGReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkMotionFXCFGReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetTimeResolution", &vtkMotionFXCFGReader::SetTimeResolution)
    .function("GetTimeResolutionMinValue", &vtkMotionFXCFGReader::GetTimeResolutionMinValue)
    .function("GetTimeResolutionMaxValue", &vtkMotionFXCFGReader::GetTimeResolutionMaxValue)
    .function("GetTimeResolution", &vtkMotionFXCFGReader::GetTimeResolution);
}
