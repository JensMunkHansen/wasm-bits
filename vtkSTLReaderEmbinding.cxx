// JavaScript wrapper for vtkSTLReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkSTLReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkSTLReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkUnsignedCharArray.h"
#include "vtkSTLReader.h"

template<> void emscripten::internal::raw_destructor<vtkSTLReader>(vtkSTLReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSTLReader_class) {
  emscripten::class_<vtkSTLReader, emscripten::base<vtkAbstractPolyDataReader>>("vtkSTLReader")
    .smart_ptr<vtkSmartPointer<vtkSTLReader>>("vtkSmartPointer<vtkSTLReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSTLReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSTLReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSTLReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSTLReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSTLReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSTLReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSTLReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkSTLReader::GetMTime)
    .function("SetMerging", &vtkSTLReader::SetMerging)
    .function("GetMerging", &vtkSTLReader::GetMerging)
    .function("MergingOn", &vtkSTLReader::MergingOn)
    .function("MergingOff", &vtkSTLReader::MergingOff)
    .function("SetScalarTags", &vtkSTLReader::SetScalarTags)
    .function("GetScalarTags", &vtkSTLReader::GetScalarTags)
    .function("ScalarTagsOn", &vtkSTLReader::ScalarTagsOn)
    .function("ScalarTagsOff", &vtkSTLReader::ScalarTagsOff)
    .function("SetLocator", &vtkSTLReader::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkSTLReader::GetLocator, emscripten::allow_raw_pointers())
    .function("GetHeader", emscripten::optional_override([](vtkSTLReader& self) -> std::string {  return self.GetHeader();}))
    .function("GetBinaryHeader", &vtkSTLReader::GetBinaryHeader, emscripten::allow_raw_pointers());
}
