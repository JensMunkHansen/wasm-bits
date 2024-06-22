// JavaScript wrapper for vtkTextMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkTextMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkTextMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkTextProperty.h"
#include "vtkAbstractMapper.h"
#include "vtkActor2D.h"
#include "vtkWindow.h"
#include "vtkTextMapper.h"

template<> void emscripten::internal::raw_destructor<vtkTextMapper>(vtkTextMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTextMapper_class) {
  emscripten::class_<vtkTextMapper, emscripten::base<vtkMapper2D>>("vtkTextMapper")
    .smart_ptr<vtkSmartPointer<vtkTextMapper>>("vtkSmartPointer<vtkTextMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTextMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTextMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTextMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTextMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTextMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetWidth", &vtkTextMapper::GetWidth, emscripten::allow_raw_pointers())
    .function("GetHeight", &vtkTextMapper::GetHeight, emscripten::allow_raw_pointers())
    .function("SetInput", emscripten::optional_override([](vtkTextMapper& self, const std::string & arg_0) -> void {  return self.SetInput( arg_0.c_str());}))
    .function("GetInput", emscripten::optional_override([](vtkTextMapper& self) -> std::string {  return self.GetInput();}))
    .function("SetTextProperty", &vtkTextMapper::SetTextProperty, emscripten::allow_raw_pointers())
    .function("GetTextProperty", &vtkTextMapper::GetTextProperty, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkTextMapper::ShallowCopy, emscripten::allow_raw_pointers())
    .function("SetConstrainedFontSize", emscripten::select_overload<int(vtkTextMapper&, vtkViewport*, int, int)>([](vtkTextMapper& self, vtkViewport* arg_0, int arg_1, int arg_2) -> int { return self.SetConstrainedFontSize( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("SetConstrainedFontSize", emscripten::select_overload<int( vtkTextMapper*, vtkViewport*, int, int)>([]( vtkTextMapper* arg_0, vtkViewport* arg_1, int arg_2, int arg_3) -> int { return vtkTextMapper::SetConstrainedFontSize( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .class_function("SetRelativeFontSize", emscripten::optional_override([]( vtkTextMapper* arg_0, vtkViewport* arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3, float arg_4) -> int {  return vtkTextMapper::SetRelativeFontSize( arg_0, arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int)),reinterpret_cast<int*>(arg_3 * sizeof(int)), arg_4);}), emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkTextMapper::RenderOverlay, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkTextMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkTextMapper::GetMTime);
}
