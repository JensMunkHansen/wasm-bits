// JavaScript wrapper for vtkTexturedSphereSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkTexturedSphereSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkTexturedSphereSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTexturedSphereSource.h"

template<> void emscripten::internal::raw_destructor<vtkTexturedSphereSource>(vtkTexturedSphereSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTexturedSphereSource_class) {
  emscripten::class_<vtkTexturedSphereSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkTexturedSphereSource")
    .smart_ptr<vtkSmartPointer<vtkTexturedSphereSource>>("vtkSmartPointer<vtkTexturedSphereSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTexturedSphereSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTexturedSphereSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTexturedSphereSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTexturedSphereSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTexturedSphereSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTexturedSphereSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTexturedSphereSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRadius", &vtkTexturedSphereSource::SetRadius)
    .function("GetRadiusMinValue", &vtkTexturedSphereSource::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkTexturedSphereSource::GetRadiusMaxValue)
    .function("GetRadius", &vtkTexturedSphereSource::GetRadius)
    .function("SetThetaResolution", &vtkTexturedSphereSource::SetThetaResolution)
    .function("GetThetaResolutionMinValue", &vtkTexturedSphereSource::GetThetaResolutionMinValue)
    .function("GetThetaResolutionMaxValue", &vtkTexturedSphereSource::GetThetaResolutionMaxValue)
    .function("GetThetaResolution", &vtkTexturedSphereSource::GetThetaResolution)
    .function("SetPhiResolution", &vtkTexturedSphereSource::SetPhiResolution)
    .function("GetPhiResolutionMinValue", &vtkTexturedSphereSource::GetPhiResolutionMinValue)
    .function("GetPhiResolutionMaxValue", &vtkTexturedSphereSource::GetPhiResolutionMaxValue)
    .function("GetPhiResolution", &vtkTexturedSphereSource::GetPhiResolution)
    .function("SetTheta", &vtkTexturedSphereSource::SetTheta)
    .function("GetThetaMinValue", &vtkTexturedSphereSource::GetThetaMinValue)
    .function("GetThetaMaxValue", &vtkTexturedSphereSource::GetThetaMaxValue)
    .function("GetTheta", &vtkTexturedSphereSource::GetTheta)
    .function("SetPhi", &vtkTexturedSphereSource::SetPhi)
    .function("GetPhiMinValue", &vtkTexturedSphereSource::GetPhiMinValue)
    .function("GetPhiMaxValue", &vtkTexturedSphereSource::GetPhiMaxValue)
    .function("GetPhi", &vtkTexturedSphereSource::GetPhi)
    .function("SetOutputPointsPrecision", &vtkTexturedSphereSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkTexturedSphereSource::GetOutputPointsPrecision);
}
