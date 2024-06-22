// JavaScript wrapper for vtkImageMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkImageMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkImageMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkActor2D.h"
#include "vtkImageData.h"
#include "vtkImageMapper.h"

template<> void emscripten::internal::raw_destructor<vtkImageMapper>(vtkImageMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageMapper_class) {
  emscripten::class_<vtkImageMapper, emscripten::base<vtkMapper2D>>("vtkImageMapper")
    .smart_ptr<vtkSmartPointer<vtkImageMapper>>("vtkSmartPointer<vtkImageMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkImageMapper::GetMTime)
    .function("SetColorWindow", &vtkImageMapper::SetColorWindow)
    .function("GetColorWindow", &vtkImageMapper::GetColorWindow)
    .function("SetColorLevel", &vtkImageMapper::SetColorLevel)
    .function("GetColorLevel", &vtkImageMapper::GetColorLevel)
    .function("SetZSlice", &vtkImageMapper::SetZSlice)
    .function("GetZSlice", &vtkImageMapper::GetZSlice)
    .function("GetWholeZMin", &vtkImageMapper::GetWholeZMin)
    .function("GetWholeZMax", &vtkImageMapper::GetWholeZMax)
    .function("RenderStart", &vtkImageMapper::RenderStart, emscripten::allow_raw_pointers())
    .function("RenderData", &vtkImageMapper::RenderData, emscripten::allow_raw_pointers())
    .function("GetColorShift", &vtkImageMapper::GetColorShift)
    .function("GetColorScale", &vtkImageMapper::GetColorScale)
    .function("SetInputData", &vtkImageMapper::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkImageMapper::GetInput, emscripten::allow_raw_pointers())
    .function("SetRenderToRectangle", &vtkImageMapper::SetRenderToRectangle)
    .function("GetRenderToRectangle", &vtkImageMapper::GetRenderToRectangle)
    .function("RenderToRectangleOn", &vtkImageMapper::RenderToRectangleOn)
    .function("RenderToRectangleOff", &vtkImageMapper::RenderToRectangleOff)
    .function("SetUseCustomExtents", &vtkImageMapper::SetUseCustomExtents)
    .function("GetUseCustomExtents", &vtkImageMapper::GetUseCustomExtents)
    .function("UseCustomExtentsOn", &vtkImageMapper::UseCustomExtentsOn)
    .function("UseCustomExtentsOff", &vtkImageMapper::UseCustomExtentsOff)
    .function("SetCustomDisplayExtents", emscripten::optional_override([](vtkImageMapper& self, std::uintptr_t arg_0) -> void {  return self.SetCustomDisplayExtents(reinterpret_cast<int*>(arg_0 * sizeof(int)));}));
}
