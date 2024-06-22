// JavaScript wrapper for vtkContextDevice3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkContextDevice3DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkContextDevice3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkUnsignedCharArray.h"
#include "vtkPen.h"
#include "vtkBrush.h"
#include "vtkMatrix4x4.h"
#include "vtkRect.h"
#include "vtkContextDevice3D.h"

template<> void emscripten::internal::raw_destructor<vtkContextDevice3D>(vtkContextDevice3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContextDevice3D_class) {
  emscripten::class_<vtkContextDevice3D, emscripten::base<vtkObject>>("vtkContextDevice3D")
    .smart_ptr<vtkSmartPointer<vtkContextDevice3D>>("vtkSmartPointer<vtkContextDevice3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkContextDevice3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextDevice3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContextDevice3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContextDevice3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContextDevice3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextDevice3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContextDevice3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DisableClipping", &vtkContextDevice3D::DisableClipping);
}
