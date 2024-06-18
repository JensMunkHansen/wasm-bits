// JavaScript wrapper for vtkImageActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkImageActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkImageActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkImageActor.h"

template<> void emscripten::internal::raw_destructor<vtkImageActor>(vtkImageActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageActor_class) {
  emscripten::class_<vtkImageActor, emscripten::base<vtkImageSlice>>("vtkImageActor")
    .smart_ptr<vtkSmartPointer<vtkImageActor>>("vtkSmartPointer<vtkImageActor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", &vtkImageActor::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkImageActor::GetInput, emscripten::allow_raw_pointers())
    .function("SetInterpolate", &vtkImageActor::SetInterpolate)
    .function("GetInterpolate", &vtkImageActor::GetInterpolate)
    .function("InterpolateOn", &vtkImageActor::InterpolateOn)
    .function("InterpolateOff", &vtkImageActor::InterpolateOff)
    .function("SetOpacity", &vtkImageActor::SetOpacity)
    .function("GetOpacity", &vtkImageActor::GetOpacity)
    .function("GetOpacityMinValue", &vtkImageActor::GetOpacityMinValue)
    .function("GetOpacityMaxValue", &vtkImageActor::GetOpacityMaxValue)
    .function("SetDisplayExtent", emscripten::select_overload<void(vtkImageActor&, int, int, int, int, int, int)>([](vtkImageActor& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetDisplayExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetSliceNumber", &vtkImageActor::GetSliceNumber)
    .function("GetSliceNumberMax", &vtkImageActor::GetSliceNumberMax)
    .function("GetSliceNumberMin", &vtkImageActor::GetSliceNumberMin)
    .function("SetZSlice", &vtkImageActor::SetZSlice)
    .function("GetZSlice", &vtkImageActor::GetZSlice)
    .function("GetWholeZMin", &vtkImageActor::GetWholeZMin)
    .function("GetWholeZMax", &vtkImageActor::GetWholeZMax)
    .function("HasTranslucentPolygonalGeometry", &vtkImageActor::HasTranslucentPolygonalGeometry)
    .function("GetForceOpaque", &vtkImageActor::GetForceOpaque)
    .function("SetForceOpaque", &vtkImageActor::SetForceOpaque)
    .function("ForceOpaqueOn", &vtkImageActor::ForceOpaqueOn)
    .function("ForceOpaqueOff", &vtkImageActor::ForceOpaqueOff);
}
