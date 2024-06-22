// JavaScript wrapper for vtkDepthImageToPointCloud with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingImage.js/vtkRenderingImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingImage.js/vtkDepthImageToPointCloudEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Image/vtkDepthImageToPointCloud.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCamera.h"
#include "vtkDepthImageToPointCloud.h"

template<> void emscripten::internal::raw_destructor<vtkDepthImageToPointCloud>(vtkDepthImageToPointCloud * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDepthImageToPointCloud_class) {
  emscripten::class_<vtkDepthImageToPointCloud, emscripten::base<vtkPolyDataAlgorithm>>("vtkDepthImageToPointCloud")
    .smart_ptr<vtkSmartPointer<vtkDepthImageToPointCloud>>("vtkSmartPointer<vtkDepthImageToPointCloud>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDepthImageToPointCloud>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDepthImageToPointCloud::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDepthImageToPointCloud& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDepthImageToPointCloud::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDepthImageToPointCloud::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDepthImageToPointCloud::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDepthImageToPointCloud& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkDepthImageToPointCloud::GetMTime)
    .function("SetCamera", &vtkDepthImageToPointCloud::SetCamera, emscripten::allow_raw_pointers())
    .function("GetCamera", &vtkDepthImageToPointCloud::GetCamera, emscripten::allow_raw_pointers())
    .function("SetCullNearPoints", &vtkDepthImageToPointCloud::SetCullNearPoints)
    .function("GetCullNearPoints", &vtkDepthImageToPointCloud::GetCullNearPoints)
    .function("CullNearPointsOn", &vtkDepthImageToPointCloud::CullNearPointsOn)
    .function("CullNearPointsOff", &vtkDepthImageToPointCloud::CullNearPointsOff)
    .function("SetCullFarPoints", &vtkDepthImageToPointCloud::SetCullFarPoints)
    .function("GetCullFarPoints", &vtkDepthImageToPointCloud::GetCullFarPoints)
    .function("CullFarPointsOn", &vtkDepthImageToPointCloud::CullFarPointsOn)
    .function("CullFarPointsOff", &vtkDepthImageToPointCloud::CullFarPointsOff)
    .function("SetProduceColorScalars", &vtkDepthImageToPointCloud::SetProduceColorScalars)
    .function("GetProduceColorScalars", &vtkDepthImageToPointCloud::GetProduceColorScalars)
    .function("ProduceColorScalarsOn", &vtkDepthImageToPointCloud::ProduceColorScalarsOn)
    .function("ProduceColorScalarsOff", &vtkDepthImageToPointCloud::ProduceColorScalarsOff)
    .function("SetProduceVertexCellArray", &vtkDepthImageToPointCloud::SetProduceVertexCellArray)
    .function("GetProduceVertexCellArray", &vtkDepthImageToPointCloud::GetProduceVertexCellArray)
    .function("ProduceVertexCellArrayOn", &vtkDepthImageToPointCloud::ProduceVertexCellArrayOn)
    .function("ProduceVertexCellArrayOff", &vtkDepthImageToPointCloud::ProduceVertexCellArrayOff)
    .function("SetOutputPointsPrecision", &vtkDepthImageToPointCloud::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkDepthImageToPointCloud::GetOutputPointsPrecision);
}
