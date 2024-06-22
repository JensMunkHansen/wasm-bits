// JavaScript wrapper for vtkRendererSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRendererSourceEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkRendererSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkImageData.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkRendererSource.h"

template<> void emscripten::internal::raw_destructor<vtkRendererSource>(vtkRendererSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRendererSource_class) {
  emscripten::class_<vtkRendererSource, emscripten::base<vtkAlgorithm>>("vtkRendererSource")
    .smart_ptr<vtkSmartPointer<vtkRendererSource>>("vtkSmartPointer<vtkRendererSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRendererSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRendererSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRendererSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRendererSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRendererSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRendererSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRendererSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkRendererSource::GetMTime)
    .function("SetInput", &vtkRendererSource::SetInput, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkRendererSource::GetInput, emscripten::allow_raw_pointers())
    .function("SetWholeWindow", &vtkRendererSource::SetWholeWindow)
    .function("GetWholeWindow", &vtkRendererSource::GetWholeWindow)
    .function("WholeWindowOn", &vtkRendererSource::WholeWindowOn)
    .function("WholeWindowOff", &vtkRendererSource::WholeWindowOff)
    .function("SetRenderFlag", &vtkRendererSource::SetRenderFlag)
    .function("GetRenderFlag", &vtkRendererSource::GetRenderFlag)
    .function("RenderFlagOn", &vtkRendererSource::RenderFlagOn)
    .function("RenderFlagOff", &vtkRendererSource::RenderFlagOff)
    .function("SetDepthValues", &vtkRendererSource::SetDepthValues)
    .function("GetDepthValues", &vtkRendererSource::GetDepthValues)
    .function("DepthValuesOn", &vtkRendererSource::DepthValuesOn)
    .function("DepthValuesOff", &vtkRendererSource::DepthValuesOff)
    .function("SetDepthValuesInScalars", &vtkRendererSource::SetDepthValuesInScalars)
    .function("GetDepthValuesInScalars", &vtkRendererSource::GetDepthValuesInScalars)
    .function("DepthValuesInScalarsOn", &vtkRendererSource::DepthValuesInScalarsOn)
    .function("DepthValuesInScalarsOff", &vtkRendererSource::DepthValuesInScalarsOff)
    .function("SetDepthValuesOnly", &vtkRendererSource::SetDepthValuesOnly)
    .function("GetDepthValuesOnly", &vtkRendererSource::GetDepthValuesOnly)
    .function("DepthValuesOnlyOn", &vtkRendererSource::DepthValuesOnlyOn)
    .function("DepthValuesOnlyOff", &vtkRendererSource::DepthValuesOnlyOff)
    .function("GetOutput", &vtkRendererSource::GetOutput, emscripten::allow_raw_pointers());
}
