// JavaScript wrapper for vtkImageCursor3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkImagingHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkImageCursor3DEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Hybrid/vtkImageCursor3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageCursor3D.h"

template<> void emscripten::internal::raw_destructor<vtkImageCursor3D>(vtkImageCursor3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageCursor3D_class) {
  emscripten::class_<vtkImageCursor3D, emscripten::base<vtkImageInPlaceFilter>>("vtkImageCursor3D")
    .smart_ptr<vtkSmartPointer<vtkImageCursor3D>>("vtkSmartPointer<vtkImageCursor3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageCursor3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageCursor3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageCursor3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageCursor3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageCursor3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageCursor3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageCursor3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCursorPosition", emscripten::select_overload<void(vtkImageCursor3D&, double, double, double)>([](vtkImageCursor3D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCursorPosition( arg_0, arg_1, arg_2); }))
    .function("SetCursorValue", &vtkImageCursor3D::SetCursorValue)
    .function("GetCursorValue", &vtkImageCursor3D::GetCursorValue)
    .function("SetCursorRadius", &vtkImageCursor3D::SetCursorRadius)
    .function("GetCursorRadius", &vtkImageCursor3D::GetCursorRadius);
}
