// JavaScript wrapper for vtkStaticPointLocator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkStaticPointLocatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkStaticPointLocator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkDataArray.h"
#include "vtkPolyData.h"
#include "vtkStaticPointLocator.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkStaticPointLocator_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkStaticPointLocator>(vtkStaticPointLocator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStaticPointLocator_class) {
  using TraversalOrderType=vtkStaticPointLocator::TraversalOrderType;
  emscripten::class_<vtkStaticPointLocator, emscripten::base<vtkAbstractPointLocator>>("vtkStaticPointLocator")
    .smart_ptr<vtkSmartPointer<vtkStaticPointLocator>>("vtkSmartPointer<vtkStaticPointLocator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkStaticPointLocator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStaticPointLocator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStaticPointLocator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStaticPointLocator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStaticPointLocator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStaticPointLocator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStaticPointLocator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfPointsPerBucket", &vtkStaticPointLocator::SetNumberOfPointsPerBucket)
    .function("GetNumberOfPointsPerBucketMinValue", &vtkStaticPointLocator::GetNumberOfPointsPerBucketMinValue)
    .function("GetNumberOfPointsPerBucketMaxValue", &vtkStaticPointLocator::GetNumberOfPointsPerBucketMaxValue)
    .function("GetNumberOfPointsPerBucket", &vtkStaticPointLocator::GetNumberOfPointsPerBucket)
    .function("SetDivisions", emscripten::select_overload<void(vtkStaticPointLocator&, int, int, int)>([](vtkStaticPointLocator& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetDivisions( arg_0, arg_1, arg_2); }))
    .function("MergePoints", emscripten::optional_override([](vtkStaticPointLocator& self, double arg_0, std::uintptr_t arg_1) -> void {  return self.MergePoints( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)));}))
    .function("MergePointsWithData", emscripten::optional_override([](vtkStaticPointLocator& self, vtkDataArray* arg_0, std::uintptr_t arg_1) -> void {  return self.MergePointsWithData( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)));}), emscripten::allow_raw_pointers())
    .function("Initialize", &vtkStaticPointLocator::Initialize)
    .function("FreeSearchStructure", &vtkStaticPointLocator::FreeSearchStructure)
    .function("BuildLocator", emscripten::select_overload<void(vtkStaticPointLocator&)>([](vtkStaticPointLocator& self) -> void { return self.BuildLocator(); }))
    .function("BuildLocator", emscripten::select_overload<void(vtkStaticPointLocator&, std::uintptr_t)>([](vtkStaticPointLocator& self, std::uintptr_t arg_0) -> void { return self.BuildLocator(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("ForceBuildLocator", &vtkStaticPointLocator::ForceBuildLocator)
    .function("GenerateRepresentation", &vtkStaticPointLocator::GenerateRepresentation, emscripten::allow_raw_pointers())
    .function("GetNumberOfPointsInBucket", &vtkStaticPointLocator::GetNumberOfPointsInBucket)
    .function("GetBucketIds", &vtkStaticPointLocator::GetBucketIds, emscripten::allow_raw_pointers())
    .function("SetMaxNumberOfBuckets", &vtkStaticPointLocator::SetMaxNumberOfBuckets)
    .function("GetMaxNumberOfBucketsMinValue", &vtkStaticPointLocator::GetMaxNumberOfBucketsMinValue)
    .function("GetMaxNumberOfBucketsMaxValue", &vtkStaticPointLocator::GetMaxNumberOfBucketsMaxValue)
    .function("GetMaxNumberOfBuckets", &vtkStaticPointLocator::GetMaxNumberOfBuckets)
    .function("GetLargeIds", &vtkStaticPointLocator::GetLargeIds)
    .function("GetSpacing", emscripten::select_overload<std::uintptr_t(vtkStaticPointLocator&)>([](vtkStaticPointLocator& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetSpacing()); }))
    .function("SetTraversalOrder", &vtkStaticPointLocator::SetTraversalOrder)
    .function("GetTraversalOrderMinValue", &vtkStaticPointLocator::GetTraversalOrderMinValue)
    .function("GetTraversalOrderMaxValue", &vtkStaticPointLocator::GetTraversalOrderMaxValue)
    .function("GetTraversalOrder", &vtkStaticPointLocator::GetTraversalOrder)
    .function("SetTraversalOrderToPointOrder", &vtkStaticPointLocator::SetTraversalOrderToPointOrder)
    .function("SetTraversalOrderToBinOrder", &vtkStaticPointLocator::SetTraversalOrderToBinOrder)
    .function("FindClosestPoint", emscripten::select_overload<int(vtkStaticPointLocator&, double, double, double)>([](vtkStaticPointLocator& self, double arg_0, double arg_1, double arg_2) -> int { return self.FindClosestPoint( arg_0, arg_1, arg_2); }))
    .function("FindClosestNPoints", emscripten::select_overload<void(vtkStaticPointLocator&, int, double, double, double, vtkIdList*)>([](vtkStaticPointLocator& self, int arg_0, double arg_1, double arg_2, double arg_3, vtkIdList* arg_4) -> void { return self.FindClosestNPoints( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("FindPointsWithinRadius", emscripten::select_overload<void(vtkStaticPointLocator&, double, double, double, double, vtkIdList*)>([](vtkStaticPointLocator& self, double arg_0, double arg_1, double arg_2, double arg_3, vtkIdList* arg_4) -> void { return self.FindPointsWithinRadius( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("GetBounds", emscripten::select_overload<std::uintptr_t(vtkStaticPointLocator&)>([](vtkStaticPointLocator& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetBounds()); }))
    .function("GetBounds", emscripten::select_overload<void(vtkStaticPointLocator&, std::uintptr_t)>([](vtkStaticPointLocator& self, std::uintptr_t arg_0) -> void { return self.GetBounds(reinterpret_cast<double*>(arg_0 * sizeof(double))); }));
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkStaticPointLocator_0_2_constants) {
    typedef vtkStaticPointLocator::TraversalOrderType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkStaticPointLocator_TraversalOrderType_POINT_ORDER", vtkStaticPointLocator::POINT_ORDER },
      { "vtkStaticPointLocator_TraversalOrderType_BIN_ORDER", vtkStaticPointLocator::BIN_ORDER },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
