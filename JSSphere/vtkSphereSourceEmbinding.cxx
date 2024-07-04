// JavaScript wrapper for vtkSphereSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkSphereSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkSphereSource.h
*/
#include "vtkEmbindSmartPointerTraits.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSphereSource.h"

template<> void emscripten::internal::raw_destructor<vtkSphereSource>(vtkSphereSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSphereSource_class) {
  emscripten::class_<vtkSphereSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkSphereSource")
    .smart_ptr<vtkSmartPointer<vtkSphereSource>>("vtkSmartPointer<vtkSphereSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSphereSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphereSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSphereSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSphereSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSphereSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphereSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSphereSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRadius", &vtkSphereSource::SetRadius)
    .function("GetRadiusMinValue", &vtkSphereSource::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkSphereSource::GetRadiusMaxValue)
    .function("GetRadius", &vtkSphereSource::GetRadius)
    .function("SetCenter", emscripten::select_overload<void(vtkSphereSource&, double, double, double)>([](vtkSphereSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetThetaResolution", &vtkSphereSource::SetThetaResolution)
    .function("GetThetaResolutionMinValue", &vtkSphereSource::GetThetaResolutionMinValue)
    .function("GetThetaResolutionMaxValue", &vtkSphereSource::GetThetaResolutionMaxValue)
    .function("GetThetaResolution", &vtkSphereSource::GetThetaResolution)
    .function("SetPhiResolution", &vtkSphereSource::SetPhiResolution)
    .function("GetPhiResolutionMinValue", &vtkSphereSource::GetPhiResolutionMinValue)
    .function("GetPhiResolutionMaxValue", &vtkSphereSource::GetPhiResolutionMaxValue)
    .function("GetPhiResolution", &vtkSphereSource::GetPhiResolution)
    .function("SetStartTheta", &vtkSphereSource::SetStartTheta)
    .function("GetStartThetaMinValue", &vtkSphereSource::GetStartThetaMinValue)
    .function("GetStartThetaMaxValue", &vtkSphereSource::GetStartThetaMaxValue)
    .function("GetStartTheta", &vtkSphereSource::GetStartTheta)
    .function("SetEndTheta", &vtkSphereSource::SetEndTheta)
    .function("GetEndThetaMinValue", &vtkSphereSource::GetEndThetaMinValue)
    .function("GetEndThetaMaxValue", &vtkSphereSource::GetEndThetaMaxValue)
    .function("GetEndTheta", &vtkSphereSource::GetEndTheta)
    .function("SetStartPhi", &vtkSphereSource::SetStartPhi)
    .function("GetStartPhiMinValue", &vtkSphereSource::GetStartPhiMinValue)
    .function("GetStartPhiMaxValue", &vtkSphereSource::GetStartPhiMaxValue)
    .function("GetStartPhi", &vtkSphereSource::GetStartPhi)
    .function("SetEndPhi", &vtkSphereSource::SetEndPhi)
    .function("GetEndPhiMinValue", &vtkSphereSource::GetEndPhiMinValue)
    .function("GetEndPhiMaxValue", &vtkSphereSource::GetEndPhiMaxValue)
    .function("GetEndPhi", &vtkSphereSource::GetEndPhi)
    .function("SetLatLongTessellation", &vtkSphereSource::SetLatLongTessellation)
    .function("GetLatLongTessellation", &vtkSphereSource::GetLatLongTessellation)
    .function("LatLongTessellationOn", &vtkSphereSource::LatLongTessellationOn)
    .function("LatLongTessellationOff", &vtkSphereSource::LatLongTessellationOff)
    .function("SetOutputPointsPrecision", &vtkSphereSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkSphereSource::GetOutputPointsPrecision)
    .function("SetGenerateNormals", &vtkSphereSource::SetGenerateNormals)
    .function("GetGenerateNormals", &vtkSphereSource::GetGenerateNormals)
    .function("GenerateNormalsOn", &vtkSphereSource::GenerateNormalsOn)
    .function("GenerateNormalsOff", &vtkSphereSource::GenerateNormalsOff);
}
