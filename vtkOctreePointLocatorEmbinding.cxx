// JavaScript wrapper for vtkOctreePointLocator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkOctreePointLocatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkOctreePointLocator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkIdTypeArray.h"
#include "vtkPolyData.h"
#include "vtkOctreePointLocator.h"

template<> void emscripten::internal::raw_destructor<vtkOctreePointLocator>(vtkOctreePointLocator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOctreePointLocator_class) {
  emscripten::class_<vtkOctreePointLocator, emscripten::base<vtkAbstractPointLocator>>("vtkOctreePointLocator")
    .smart_ptr<vtkSmartPointer<vtkOctreePointLocator>>("vtkSmartPointer<vtkOctreePointLocator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOctreePointLocator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOctreePointLocator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOctreePointLocator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOctreePointLocator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOctreePointLocator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOctreePointLocator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOctreePointLocator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMaximumPointsPerRegion", &vtkOctreePointLocator::SetMaximumPointsPerRegion)
    .function("GetMaximumPointsPerRegion", &vtkOctreePointLocator::GetMaximumPointsPerRegion)
    .function("SetCreateCubicOctants", &vtkOctreePointLocator::SetCreateCubicOctants)
    .function("GetCreateCubicOctants", &vtkOctreePointLocator::GetCreateCubicOctants)
    .function("GetFudgeFactor", &vtkOctreePointLocator::GetFudgeFactor)
    .function("SetFudgeFactor", &vtkOctreePointLocator::SetFudgeFactor)
    .function("GetBounds", emscripten::select_overload<std::uintptr_t(vtkOctreePointLocator&)>([](vtkOctreePointLocator& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetBounds()); }))
    .function("GetBounds", emscripten::select_overload<void(vtkOctreePointLocator&, std::uintptr_t)>([](vtkOctreePointLocator& self, std::uintptr_t arg_0) -> void { return self.GetBounds(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("GetNumberOfLeafNodes", &vtkOctreePointLocator::GetNumberOfLeafNodes)
    .function("GetRegionContainingPoint", &vtkOctreePointLocator::GetRegionContainingPoint)
    .function("BuildLocator", &vtkOctreePointLocator::BuildLocator)
    .function("ForceBuildLocator", &vtkOctreePointLocator::ForceBuildLocator)
    .function("GetPointsInRegion", &vtkOctreePointLocator::GetPointsInRegion, emscripten::allow_raw_pointers())
    .function("FreeSearchStructure", &vtkOctreePointLocator::FreeSearchStructure)
    .function("GenerateRepresentation", &vtkOctreePointLocator::GenerateRepresentation, emscripten::allow_raw_pointers())
    .function("FindPointsInArea", emscripten::select_overload<void(vtkOctreePointLocator&, std::uintptr_t, vtkIdTypeArray*, bool)>([](vtkOctreePointLocator& self, std::uintptr_t arg_0, vtkIdTypeArray* arg_1, bool arg_2) -> void { return self.FindPointsInArea(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1, arg_2); }), emscripten::allow_raw_pointers());
}
