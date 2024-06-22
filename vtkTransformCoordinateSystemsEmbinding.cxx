// JavaScript wrapper for vtkTransformCoordinateSystems with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkTransformCoordinateSystemsEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkTransformCoordinateSystems.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkTransformCoordinateSystems.h"

template<> void emscripten::internal::raw_destructor<vtkTransformCoordinateSystems>(vtkTransformCoordinateSystems * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransformCoordinateSystems_class) {
  emscripten::class_<vtkTransformCoordinateSystems, emscripten::base<vtkPointSetAlgorithm>>("vtkTransformCoordinateSystems")
    .smart_ptr<vtkSmartPointer<vtkTransformCoordinateSystems>>("vtkSmartPointer<vtkTransformCoordinateSystems>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTransformCoordinateSystems>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransformCoordinateSystems::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransformCoordinateSystems& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransformCoordinateSystems::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransformCoordinateSystems::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransformCoordinateSystems::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransformCoordinateSystems& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputCoordinateSystem", &vtkTransformCoordinateSystems::SetInputCoordinateSystem)
    .function("GetInputCoordinateSystem", &vtkTransformCoordinateSystems::GetInputCoordinateSystem)
    .function("SetInputCoordinateSystemToDisplay", &vtkTransformCoordinateSystems::SetInputCoordinateSystemToDisplay)
    .function("SetInputCoordinateSystemToViewport", &vtkTransformCoordinateSystems::SetInputCoordinateSystemToViewport)
    .function("SetInputCoordinateSystemToWorld", &vtkTransformCoordinateSystems::SetInputCoordinateSystemToWorld)
    .function("SetOutputCoordinateSystem", &vtkTransformCoordinateSystems::SetOutputCoordinateSystem)
    .function("GetOutputCoordinateSystem", &vtkTransformCoordinateSystems::GetOutputCoordinateSystem)
    .function("SetOutputCoordinateSystemToDisplay", &vtkTransformCoordinateSystems::SetOutputCoordinateSystemToDisplay)
    .function("SetOutputCoordinateSystemToViewport", &vtkTransformCoordinateSystems::SetOutputCoordinateSystemToViewport)
    .function("SetOutputCoordinateSystemToWorld", &vtkTransformCoordinateSystems::SetOutputCoordinateSystemToWorld)
    .function("GetMTime", &vtkTransformCoordinateSystems::GetMTime)
    .function("SetViewport", &vtkTransformCoordinateSystems::SetViewport, emscripten::allow_raw_pointers())
    .function("GetViewport", &vtkTransformCoordinateSystems::GetViewport, emscripten::allow_raw_pointers());
}
