// JavaScript wrapper for vtkPointsProjectedHull with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPointsProjectedHullEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPointsProjectedHull.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkPointsProjectedHull.h"

template<> void emscripten::internal::raw_destructor<vtkPointsProjectedHull>(vtkPointsProjectedHull * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointsProjectedHull_class) {
  emscripten::class_<vtkPointsProjectedHull, emscripten::base<vtkPoints>>("vtkPointsProjectedHull")
    .smart_ptr<vtkSmartPointer<vtkPointsProjectedHull>>("vtkSmartPointer<vtkPointsProjectedHull>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPointsProjectedHull>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointsProjectedHull::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointsProjectedHull& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointsProjectedHull::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointsProjectedHull::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointsProjectedHull::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointsProjectedHull& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RectangleIntersectionX", emscripten::select_overload<int(vtkPointsProjectedHull&, vtkPoints*)>([](vtkPointsProjectedHull& self, vtkPoints* arg_0) -> int { return self.RectangleIntersectionX( arg_0); }), emscripten::allow_raw_pointers())
    .function("RectangleIntersectionX", emscripten::select_overload<int(vtkPointsProjectedHull&, float, float, float, float)>([](vtkPointsProjectedHull& self, float arg_0, float arg_1, float arg_2, float arg_3) -> int { return self.RectangleIntersectionX( arg_0, arg_1, arg_2, arg_3); }))
    .function("RectangleIntersectionX", emscripten::select_overload<int(vtkPointsProjectedHull&, double, double, double, double)>([](vtkPointsProjectedHull& self, double arg_0, double arg_1, double arg_2, double arg_3) -> int { return self.RectangleIntersectionX( arg_0, arg_1, arg_2, arg_3); }))
    .function("RectangleIntersectionY", emscripten::select_overload<int(vtkPointsProjectedHull&, vtkPoints*)>([](vtkPointsProjectedHull& self, vtkPoints* arg_0) -> int { return self.RectangleIntersectionY( arg_0); }), emscripten::allow_raw_pointers())
    .function("RectangleIntersectionY", emscripten::select_overload<int(vtkPointsProjectedHull&, float, float, float, float)>([](vtkPointsProjectedHull& self, float arg_0, float arg_1, float arg_2, float arg_3) -> int { return self.RectangleIntersectionY( arg_0, arg_1, arg_2, arg_3); }))
    .function("RectangleIntersectionY", emscripten::select_overload<int(vtkPointsProjectedHull&, double, double, double, double)>([](vtkPointsProjectedHull& self, double arg_0, double arg_1, double arg_2, double arg_3) -> int { return self.RectangleIntersectionY( arg_0, arg_1, arg_2, arg_3); }))
    .function("RectangleIntersectionZ", emscripten::select_overload<int(vtkPointsProjectedHull&, vtkPoints*)>([](vtkPointsProjectedHull& self, vtkPoints* arg_0) -> int { return self.RectangleIntersectionZ( arg_0); }), emscripten::allow_raw_pointers())
    .function("RectangleIntersectionZ", emscripten::select_overload<int(vtkPointsProjectedHull&, float, float, float, float)>([](vtkPointsProjectedHull& self, float arg_0, float arg_1, float arg_2, float arg_3) -> int { return self.RectangleIntersectionZ( arg_0, arg_1, arg_2, arg_3); }))
    .function("RectangleIntersectionZ", emscripten::select_overload<int(vtkPointsProjectedHull&, double, double, double, double)>([](vtkPointsProjectedHull& self, double arg_0, double arg_1, double arg_2, double arg_3) -> int { return self.RectangleIntersectionZ( arg_0, arg_1, arg_2, arg_3); }))
    .function("GetCCWHullX", emscripten::select_overload<int(vtkPointsProjectedHull&, std::uintptr_t, int)>([](vtkPointsProjectedHull& self, std::uintptr_t arg_0, int arg_1) -> int { return self.GetCCWHullX(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1); }))
    .function("GetCCWHullX", emscripten::select_overload<int(vtkPointsProjectedHull&, std::uintptr_t, int)>([](vtkPointsProjectedHull& self, std::uintptr_t arg_0, int arg_1) -> int { return self.GetCCWHullX(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1); }))
    .function("GetCCWHullY", emscripten::select_overload<int(vtkPointsProjectedHull&, std::uintptr_t, int)>([](vtkPointsProjectedHull& self, std::uintptr_t arg_0, int arg_1) -> int { return self.GetCCWHullY(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1); }))
    .function("GetCCWHullY", emscripten::select_overload<int(vtkPointsProjectedHull&, std::uintptr_t, int)>([](vtkPointsProjectedHull& self, std::uintptr_t arg_0, int arg_1) -> int { return self.GetCCWHullY(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1); }))
    .function("GetCCWHullZ", emscripten::select_overload<int(vtkPointsProjectedHull&, std::uintptr_t, int)>([](vtkPointsProjectedHull& self, std::uintptr_t arg_0, int arg_1) -> int { return self.GetCCWHullZ(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1); }))
    .function("GetCCWHullZ", emscripten::select_overload<int(vtkPointsProjectedHull&, std::uintptr_t, int)>([](vtkPointsProjectedHull& self, std::uintptr_t arg_0, int arg_1) -> int { return self.GetCCWHullZ(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1); }))
    .function("GetSizeCCWHullX", &vtkPointsProjectedHull::GetSizeCCWHullX)
    .function("GetSizeCCWHullY", &vtkPointsProjectedHull::GetSizeCCWHullY)
    .function("GetSizeCCWHullZ", &vtkPointsProjectedHull::GetSizeCCWHullZ)
    .function("Initialize", &vtkPointsProjectedHull::Initialize)
    .function("Reset", &vtkPointsProjectedHull::Reset)
    .function("Update", &vtkPointsProjectedHull::Update);
}
