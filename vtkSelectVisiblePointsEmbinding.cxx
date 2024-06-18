// JavaScript wrapper for vtkSelectVisiblePoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkSelectVisiblePointsEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkSelectVisiblePoints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkSelectVisiblePoints.h"

template<> void emscripten::internal::raw_destructor<vtkSelectVisiblePoints>(vtkSelectVisiblePoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSelectVisiblePoints_class) {
  emscripten::class_<vtkSelectVisiblePoints, emscripten::base<vtkPolyDataAlgorithm>>("vtkSelectVisiblePoints")
    .smart_ptr<vtkSmartPointer<vtkSelectVisiblePoints>>("vtkSmartPointer<vtkSelectVisiblePoints>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSelectVisiblePoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSelectVisiblePoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSelectVisiblePoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSelectVisiblePoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSelectVisiblePoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSelectVisiblePoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSelectVisiblePoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRenderer", &vtkSelectVisiblePoints::SetRenderer, emscripten::allow_raw_pointers())
    .function("GetRenderer", &vtkSelectVisiblePoints::GetRenderer, emscripten::allow_raw_pointers())
    .function("SetSelectionWindow", &vtkSelectVisiblePoints::SetSelectionWindow)
    .function("GetSelectionWindow", &vtkSelectVisiblePoints::GetSelectionWindow)
    .function("SelectionWindowOn", &vtkSelectVisiblePoints::SelectionWindowOn)
    .function("SelectionWindowOff", &vtkSelectVisiblePoints::SelectionWindowOff)
    .function("SetSelection", emscripten::select_overload<void(vtkSelectVisiblePoints&, int, int, int, int)>([](vtkSelectVisiblePoints& self, int arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetSelection( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetSelectInvisible", &vtkSelectVisiblePoints::SetSelectInvisible)
    .function("GetSelectInvisible", &vtkSelectVisiblePoints::GetSelectInvisible)
    .function("SelectInvisibleOn", &vtkSelectVisiblePoints::SelectInvisibleOn)
    .function("SelectInvisibleOff", &vtkSelectVisiblePoints::SelectInvisibleOff)
    .function("SetTolerance", &vtkSelectVisiblePoints::SetTolerance)
    .function("GetToleranceMinValue", &vtkSelectVisiblePoints::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkSelectVisiblePoints::GetToleranceMaxValue)
    .function("GetTolerance", &vtkSelectVisiblePoints::GetTolerance)
    .function("SetToleranceWorld", &vtkSelectVisiblePoints::SetToleranceWorld)
    .function("GetToleranceWorldMinValue", &vtkSelectVisiblePoints::GetToleranceWorldMinValue)
    .function("GetToleranceWorldMaxValue", &vtkSelectVisiblePoints::GetToleranceWorldMaxValue)
    .function("GetToleranceWorld", &vtkSelectVisiblePoints::GetToleranceWorld)
    .function("Initialize", emscripten::optional_override([](vtkSelectVisiblePoints& self, bool arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.Initialize( arg_0)) / sizeof(float);}))
    .function("GetMTime", &vtkSelectVisiblePoints::GetMTime);
}
