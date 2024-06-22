// JavaScript wrapper for vtkSignedDistance with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkSignedDistanceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkSignedDistance.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractPointLocator.h"
#include "vtkPolyData.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkSignedDistance.h"

template<> void emscripten::internal::raw_destructor<vtkSignedDistance>(vtkSignedDistance * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSignedDistance_class) {
  emscripten::class_<vtkSignedDistance, emscripten::base<vtkImageAlgorithm>>("vtkSignedDistance")
    .smart_ptr<vtkSmartPointer<vtkSignedDistance>>("vtkSmartPointer<vtkSignedDistance>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSignedDistance>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSignedDistance::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSignedDistance& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSignedDistance::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSignedDistance::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSignedDistance::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSignedDistance& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDimensions", emscripten::select_overload<void(vtkSignedDistance&, int, int, int)>([](vtkSignedDistance& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetDimensions( arg_0, arg_1, arg_2); }))
    .function("SetBounds", emscripten::select_overload<void(vtkSignedDistance&, double, double, double, double, double, double)>([](vtkSignedDistance& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetRadius", &vtkSignedDistance::SetRadius)
    .function("GetRadiusMinValue", &vtkSignedDistance::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkSignedDistance::GetRadiusMaxValue)
    .function("GetRadius", &vtkSignedDistance::GetRadius)
    .function("SetLocator", &vtkSignedDistance::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkSignedDistance::GetLocator, emscripten::allow_raw_pointers())
    .function("StartAppend", &vtkSignedDistance::StartAppend)
    .function("Append", &vtkSignedDistance::Append, emscripten::allow_raw_pointers())
    .function("EndAppend", &vtkSignedDistance::EndAppend);
}
