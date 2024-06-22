// JavaScript wrapper for vtkHull with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkHullEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkHull.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlanes.h"
#include "vtkPolyData.h"
#include "vtkHull.h"

template<> void emscripten::internal::raw_destructor<vtkHull>(vtkHull * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHull_class) {
  emscripten::class_<vtkHull, emscripten::base<vtkPointSetAlgorithm>>("vtkHull")
    .smart_ptr<vtkSmartPointer<vtkHull>>("vtkSmartPointer<vtkHull>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHull>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHull::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHull& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHull::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHull::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHull::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHull& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RemoveAllPlanes", &vtkHull::RemoveAllPlanes)
    .function("AddPlane", emscripten::select_overload<int(vtkHull&, double, double, double)>([](vtkHull& self, double arg_0, double arg_1, double arg_2) -> int { return self.AddPlane( arg_0, arg_1, arg_2); }))
    .function("AddPlane", emscripten::select_overload<int(vtkHull&, double, double, double, double)>([](vtkHull& self, double arg_0, double arg_1, double arg_2, double arg_3) -> int { return self.AddPlane( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetPlane", emscripten::select_overload<void(vtkHull&, int, double, double, double)>([](vtkHull& self, int arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetPlane( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetPlane", emscripten::select_overload<void(vtkHull&, int, double, double, double, double)>([](vtkHull& self, int arg_0, double arg_1, double arg_2, double arg_3, double arg_4) -> void { return self.SetPlane( arg_0, arg_1, arg_2, arg_3, arg_4); }))
    .function("SetPlanes", &vtkHull::SetPlanes, emscripten::allow_raw_pointers())
    .function("GetNumberOfPlanes", &vtkHull::GetNumberOfPlanes)
    .function("AddCubeVertexPlanes", &vtkHull::AddCubeVertexPlanes)
    .function("AddCubeEdgePlanes", &vtkHull::AddCubeEdgePlanes)
    .function("AddCubeFacePlanes", &vtkHull::AddCubeFacePlanes)
    .function("AddRecursiveSpherePlanes", &vtkHull::AddRecursiveSpherePlanes)
    .function("GenerateHull", emscripten::select_overload<void(vtkHull&, vtkPolyData*, std::uintptr_t)>([](vtkHull& self, vtkPolyData* arg_0, std::uintptr_t arg_1) -> void { return self.GenerateHull( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double))); }), emscripten::allow_raw_pointers())
    .function("GenerateHull", emscripten::select_overload<void(vtkHull&, vtkPolyData*, double, double, double, double, double, double)>([](vtkHull& self, vtkPolyData* arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5, double arg_6) -> void { return self.GenerateHull( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }), emscripten::allow_raw_pointers());
}
