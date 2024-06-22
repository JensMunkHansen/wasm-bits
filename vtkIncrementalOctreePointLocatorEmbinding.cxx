// JavaScript wrapper for vtkIncrementalOctreePointLocator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkIncrementalOctreePointLocatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkIncrementalOctreePointLocator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkPolyData.h"
#include "vtkIdList.h"
#include "vtkIncrementalOctreeNode.h"
#include "vtkIncrementalOctreePointLocator.h"

template<> void emscripten::internal::raw_destructor<vtkIncrementalOctreePointLocator>(vtkIncrementalOctreePointLocator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIncrementalOctreePointLocator_class) {
  emscripten::class_<vtkIncrementalOctreePointLocator, emscripten::base<vtkIncrementalPointLocator>>("vtkIncrementalOctreePointLocator")
    .smart_ptr<vtkSmartPointer<vtkIncrementalOctreePointLocator>>("vtkSmartPointer<vtkIncrementalOctreePointLocator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkIncrementalOctreePointLocator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIncrementalOctreePointLocator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIncrementalOctreePointLocator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIncrementalOctreePointLocator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIncrementalOctreePointLocator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIncrementalOctreePointLocator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIncrementalOctreePointLocator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMaxPointsPerLeaf", &vtkIncrementalOctreePointLocator::SetMaxPointsPerLeaf)
    .function("GetMaxPointsPerLeaf", &vtkIncrementalOctreePointLocator::GetMaxPointsPerLeaf)
    .function("SetBuildCubicOctree", &vtkIncrementalOctreePointLocator::SetBuildCubicOctree)
    .function("GetBuildCubicOctree", &vtkIncrementalOctreePointLocator::GetBuildCubicOctree)
    .function("BuildCubicOctreeOn", &vtkIncrementalOctreePointLocator::BuildCubicOctreeOn)
    .function("BuildCubicOctreeOff", &vtkIncrementalOctreePointLocator::BuildCubicOctreeOff)
    .function("GetLocatorPoints", &vtkIncrementalOctreePointLocator::GetLocatorPoints, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkIncrementalOctreePointLocator::Initialize)
    .function("FreeSearchStructure", &vtkIncrementalOctreePointLocator::FreeSearchStructure)
    .function("GetBounds", emscripten::select_overload<void(vtkIncrementalOctreePointLocator&, std::uintptr_t)>([](vtkIncrementalOctreePointLocator& self, std::uintptr_t arg_0) -> void { return self.GetBounds(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("GetBounds", emscripten::select_overload<std::uintptr_t(vtkIncrementalOctreePointLocator&)>([](vtkIncrementalOctreePointLocator& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetBounds()); }))
    .function("GetNumberOfPoints", &vtkIncrementalOctreePointLocator::GetNumberOfPoints)
    .function("GetNumberOfNodes", &vtkIncrementalOctreePointLocator::GetNumberOfNodes)
    .function("GenerateRepresentation", emscripten::select_overload<void(vtkIncrementalOctreePointLocator&, int, vtkPolyData*)>([](vtkIncrementalOctreePointLocator& self, int arg_0, vtkPolyData* arg_1) -> void { return self.GenerateRepresentation( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GenerateRepresentation", emscripten::select_overload<void(vtkIncrementalOctreePointLocator&, int, vtkPolyData*, emscripten::val, std::uintptr_t)>([](vtkIncrementalOctreePointLocator& self, int arg_0, vtkPolyData* arg_1, emscripten::val arg_2, std::uintptr_t arg_3) -> void { return self.GenerateRepresentation( arg_0, arg_1, reinterpret_cast<bool(*)( void*, vtkIncrementalOctreeNode*, double*)>(emscripten::val::module_property("addFunction")(arg_2, std::string("xiii")).as<int>()),reinterpret_cast<void*>(arg_3)); }), emscripten::allow_raw_pointers())
    .function("BuildLocator", &vtkIncrementalOctreePointLocator::BuildLocator)
    .function("ForceBuildLocator", &vtkIncrementalOctreePointLocator::ForceBuildLocator)
    .function("FindClosestPoint", emscripten::select_overload<int(vtkIncrementalOctreePointLocator&, double, double, double)>([](vtkIncrementalOctreePointLocator& self, double arg_0, double arg_1, double arg_2) -> int { return self.FindClosestPoint( arg_0, arg_1, arg_2); }))
    .function("FindClosestPoint", emscripten::select_overload<int(vtkIncrementalOctreePointLocator&, double, double, double, std::uintptr_t)>([](vtkIncrementalOctreePointLocator& self, double arg_0, double arg_1, double arg_2, std::uintptr_t arg_3) -> int { return self.FindClosestPoint( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double))); }))
    .function("IsInsertedPoint", emscripten::select_overload<int(vtkIncrementalOctreePointLocator&, double, double, double)>([](vtkIncrementalOctreePointLocator& self, double arg_0, double arg_1, double arg_2) -> int { return self.IsInsertedPoint( arg_0, arg_1, arg_2); }))
    .function("GetRoot", &vtkIncrementalOctreePointLocator::GetRoot, emscripten::allow_raw_pointers())
    .function("GetNumberOfLevels", &vtkIncrementalOctreePointLocator::GetNumberOfLevels);
}
