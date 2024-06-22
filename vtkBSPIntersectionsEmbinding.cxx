// JavaScript wrapper for vtkBSPIntersections with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkBSPIntersectionsEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkBSPIntersections.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBSPCuts.h"
#include "vtkCell.h"
#include "vtkBSPIntersections.h"

template<> void emscripten::internal::raw_destructor<vtkBSPIntersections>(vtkBSPIntersections * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBSPIntersections_class) {
  emscripten::class_<vtkBSPIntersections, emscripten::base<vtkObject>>("vtkBSPIntersections")
    .smart_ptr<vtkSmartPointer<vtkBSPIntersections>>("vtkSmartPointer<vtkBSPIntersections>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBSPIntersections>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBSPIntersections::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBSPIntersections& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBSPIntersections::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBSPIntersections::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBSPIntersections::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBSPIntersections& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCuts", &vtkBSPIntersections::SetCuts, emscripten::allow_raw_pointers())
    .function("GetCuts", &vtkBSPIntersections::GetCuts, emscripten::allow_raw_pointers())
    .function("GetBounds", emscripten::optional_override([](vtkBSPIntersections& self, std::uintptr_t arg_0) -> int {  return self.GetBounds(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("GetNumberOfRegions", &vtkBSPIntersections::GetNumberOfRegions)
    .function("IntersectsBox", emscripten::select_overload<int(vtkBSPIntersections&, int, std::uintptr_t)>([](vtkBSPIntersections& self, int arg_0, std::uintptr_t arg_1) -> int { return self.IntersectsBox( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double))); }))
    .function("IntersectsBox", emscripten::select_overload<int(vtkBSPIntersections&, int, double, double, double, double, double, double)>([](vtkBSPIntersections& self, int arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5, double arg_6) -> int { return self.IntersectsBox( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }))
    .function("IntersectsBox", emscripten::select_overload<int(vtkBSPIntersections&, std::uintptr_t, int, std::uintptr_t)>([](vtkBSPIntersections& self, std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2) -> int { return self.IntersectsBox(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double))); }))
    .function("IntersectsBox", emscripten::select_overload<int(vtkBSPIntersections&, std::uintptr_t, int, double, double, double, double, double, double)>([](vtkBSPIntersections& self, std::uintptr_t arg_0, int arg_1, double arg_2, double arg_3, double arg_4, double arg_5, double arg_6, double arg_7) -> int { return self.IntersectsBox(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7); }))
    .function("IntersectsSphere2", emscripten::select_overload<int(vtkBSPIntersections&, int, double, double, double, double)>([](vtkBSPIntersections& self, int arg_0, double arg_1, double arg_2, double arg_3, double arg_4) -> int { return self.IntersectsSphere2( arg_0, arg_1, arg_2, arg_3, arg_4); }))
    .function("IntersectsSphere2", emscripten::select_overload<int(vtkBSPIntersections&, std::uintptr_t, int, double, double, double, double)>([](vtkBSPIntersections& self, std::uintptr_t arg_0, int arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> int { return self.IntersectsSphere2(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("IntersectsCell", emscripten::select_overload<int(vtkBSPIntersections&, int, vtkCell*, int)>([](vtkBSPIntersections& self, int arg_0, vtkCell* arg_1, int arg_2) -> int { return self.IntersectsCell( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("IntersectsCell", emscripten::select_overload<int(vtkBSPIntersections&, std::uintptr_t, int, vtkCell*, int)>([](vtkBSPIntersections& self, std::uintptr_t arg_0, int arg_1, vtkCell* arg_2, int arg_3) -> int { return self.IntersectsCell(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("GetComputeIntersectionsUsingDataBounds", &vtkBSPIntersections::GetComputeIntersectionsUsingDataBounds)
    .function("SetComputeIntersectionsUsingDataBounds", &vtkBSPIntersections::SetComputeIntersectionsUsingDataBounds)
    .function("ComputeIntersectionsUsingDataBoundsOn", &vtkBSPIntersections::ComputeIntersectionsUsingDataBoundsOn)
    .function("ComputeIntersectionsUsingDataBoundsOff", &vtkBSPIntersections::ComputeIntersectionsUsingDataBoundsOff);
}
