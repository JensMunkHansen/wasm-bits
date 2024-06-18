// JavaScript wrapper for vtkImageViewer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionImage.js/vtkInteractionImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionImage.js/vtkImageViewerEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Image/vtkImageViewer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkRenderWindow.h"
#include "vtkRenderer.h"
#include "vtkImageMapper.h"
#include "vtkActor2D.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkImageViewer.h"

template<> void emscripten::internal::raw_destructor<vtkImageViewer>(vtkImageViewer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageViewer_class) {
  emscripten::class_<vtkImageViewer, emscripten::base<vtkObject>>("vtkImageViewer")
    .smart_ptr<vtkSmartPointer<vtkImageViewer>>("vtkSmartPointer<vtkImageViewer>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageViewer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageViewer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageViewer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageViewer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageViewer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageViewer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageViewer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetWindowName", emscripten::optional_override([](vtkImageViewer& self) -> std::string {  return self.GetWindowName();}))
    .function("Render", &vtkImageViewer::Render)
    .function("SetInputData", &vtkImageViewer::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkImageViewer::GetInput, emscripten::allow_raw_pointers())
    .function("SetInputConnection", &vtkImageViewer::SetInputConnection, emscripten::allow_raw_pointers())
    .function("GetWholeZMin", &vtkImageViewer::GetWholeZMin)
    .function("GetWholeZMax", &vtkImageViewer::GetWholeZMax)
    .function("GetZSlice", &vtkImageViewer::GetZSlice)
    .function("SetZSlice", &vtkImageViewer::SetZSlice)
    .function("GetColorWindow", &vtkImageViewer::GetColorWindow)
    .function("GetColorLevel", &vtkImageViewer::GetColorLevel)
    .function("SetColorWindow", &vtkImageViewer::SetColorWindow)
    .function("SetColorLevel", &vtkImageViewer::SetColorLevel)
    .function("SetDisplayId", emscripten::optional_override([](vtkImageViewer& self, std::uintptr_t arg_0) -> void {  return self.SetDisplayId(reinterpret_cast<void*>(arg_0));}))
    .function("SetWindowId", emscripten::optional_override([](vtkImageViewer& self, std::uintptr_t arg_0) -> void {  return self.SetWindowId(reinterpret_cast<void*>(arg_0));}))
    .function("SetParentId", emscripten::optional_override([](vtkImageViewer& self, std::uintptr_t arg_0) -> void {  return self.SetParentId(reinterpret_cast<void*>(arg_0));}))
    .function("SetPosition", emscripten::select_overload<void(vtkImageViewer&, int, int)>([](vtkImageViewer& self, int arg_0, int arg_1) -> void { return self.SetPosition( arg_0, arg_1); }))
    .function("SetSize", emscripten::select_overload<void(vtkImageViewer&, int, int)>([](vtkImageViewer& self, int arg_0, int arg_1) -> void { return self.SetSize( arg_0, arg_1); }))
    .function("GetRenderWindow", &vtkImageViewer::GetRenderWindow, emscripten::allow_raw_pointers())
    .function("SetRenderWindow", &vtkImageViewer::SetRenderWindow, emscripten::allow_raw_pointers())
    .function("GetRenderer", &vtkImageViewer::GetRenderer, emscripten::allow_raw_pointers())
    .function("GetImageMapper", &vtkImageViewer::GetImageMapper, emscripten::allow_raw_pointers())
    .function("GetActor2D", &vtkImageViewer::GetActor2D, emscripten::allow_raw_pointers())
    .function("SetupInteractor", &vtkImageViewer::SetupInteractor, emscripten::allow_raw_pointers())
    .function("SetOffScreenRendering", &vtkImageViewer::SetOffScreenRendering)
    .function("GetOffScreenRendering", &vtkImageViewer::GetOffScreenRendering)
    .function("OffScreenRenderingOn", &vtkImageViewer::OffScreenRenderingOn)
    .function("OffScreenRenderingOff", &vtkImageViewer::OffScreenRenderingOff);
}
