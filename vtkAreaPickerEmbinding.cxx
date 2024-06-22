// JavaScript wrapper for vtkAreaPicker with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkAreaPickerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkAreaPicker.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkAbstractMapper3D.h"
#include "vtkDataSet.h"
#include "vtkProp3DCollection.h"
#include "vtkPlanes.h"
#include "vtkPoints.h"
#include "vtkAreaPicker.h"

template<> void emscripten::internal::raw_destructor<vtkAreaPicker>(vtkAreaPicker * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAreaPicker_class) {
  emscripten::class_<vtkAreaPicker, emscripten::base<vtkAbstractPropPicker>>("vtkAreaPicker")
    .smart_ptr<vtkSmartPointer<vtkAreaPicker>>("vtkSmartPointer<vtkAreaPicker>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAreaPicker>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAreaPicker::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAreaPicker& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAreaPicker::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAreaPicker::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAreaPicker::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAreaPicker& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPickCoords", &vtkAreaPicker::SetPickCoords)
    .function("SetRenderer", &vtkAreaPicker::SetRenderer, emscripten::allow_raw_pointers())
    .function("Pick", emscripten::select_overload<int(vtkAreaPicker&)>([](vtkAreaPicker& self) -> int { return self.Pick(); }))
    .function("Pick", emscripten::select_overload<int(vtkAreaPicker&, double, double, double, vtkRenderer*)>([](vtkAreaPicker& self, double arg_0, double arg_1, double arg_2, vtkRenderer* arg_3) -> int { return self.Pick( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("AreaPick", &vtkAreaPicker::AreaPick, emscripten::allow_raw_pointers())
    .function("GetMapper", &vtkAreaPicker::GetMapper, emscripten::allow_raw_pointers())
    .function("GetDataSet", &vtkAreaPicker::GetDataSet, emscripten::allow_raw_pointers())
    .function("GetProp3Ds", &vtkAreaPicker::GetProp3Ds, emscripten::allow_raw_pointers())
    .function("GetFrustum", &vtkAreaPicker::GetFrustum, emscripten::allow_raw_pointers())
    .function("GetClipPoints", &vtkAreaPicker::GetClipPoints, emscripten::allow_raw_pointers());
}
