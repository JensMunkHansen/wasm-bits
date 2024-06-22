// JavaScript wrapper for vtkStaticPointLocator2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkStaticPointLocator2DEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkStaticPointLocator2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkPolyData.h"
#include "vtkStaticPointLocator2D.h"

template<> void emscripten::internal::raw_destructor<vtkStaticPointLocator2D>(vtkStaticPointLocator2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStaticPointLocator2D_class) {
  emscripten::class_<vtkStaticPointLocator2D, emscripten::base<vtkAbstractPointLocator>>("vtkStaticPointLocator2D")
    .smart_ptr<vtkSmartPointer<vtkStaticPointLocator2D>>("vtkSmartPointer<vtkStaticPointLocator2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStaticPointLocator2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStaticPointLocator2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStaticPointLocator2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStaticPointLocator2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStaticPointLocator2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStaticPointLocator2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStaticPointLocator2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfPointsPerBucket", &vtkStaticPointLocator2D::SetNumberOfPointsPerBucket)
    .function("GetNumberOfPointsPerBucketMinValue", &vtkStaticPointLocator2D::GetNumberOfPointsPerBucketMinValue)
    .function("GetNumberOfPointsPerBucketMaxValue", &vtkStaticPointLocator2D::GetNumberOfPointsPerBucketMaxValue)
    .function("GetNumberOfPointsPerBucket", &vtkStaticPointLocator2D::GetNumberOfPointsPerBucket)
    .function("SetDivisions", emscripten::select_overload<void(vtkStaticPointLocator2D&, int, int)>([](vtkStaticPointLocator2D& self, int arg_0, int arg_1) -> void { return self.SetDivisions( arg_0, arg_1); }))
    .function("MergePoints", emscripten::optional_override([](vtkStaticPointLocator2D& self, double arg_0, std::uintptr_t arg_1) -> void {  return self.MergePoints( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)));}))
    .function("Initialize", &vtkStaticPointLocator2D::Initialize)
    .function("FreeSearchStructure", &vtkStaticPointLocator2D::FreeSearchStructure)
    .function("BuildLocator", &vtkStaticPointLocator2D::BuildLocator)
    .function("ForceBuildLocator", &vtkStaticPointLocator2D::ForceBuildLocator)
    .function("GetNumberOfPointsInBucket", &vtkStaticPointLocator2D::GetNumberOfPointsInBucket)
    .function("GetBucketIds", &vtkStaticPointLocator2D::GetBucketIds, emscripten::allow_raw_pointers())
    .function("SetMaxNumberOfBuckets", &vtkStaticPointLocator2D::SetMaxNumberOfBuckets)
    .function("GetMaxNumberOfBucketsMinValue", &vtkStaticPointLocator2D::GetMaxNumberOfBucketsMinValue)
    .function("GetMaxNumberOfBucketsMaxValue", &vtkStaticPointLocator2D::GetMaxNumberOfBucketsMaxValue)
    .function("GetMaxNumberOfBuckets", &vtkStaticPointLocator2D::GetMaxNumberOfBuckets)
    .function("GetLargeIds", &vtkStaticPointLocator2D::GetLargeIds)
    .function("GetBounds", emscripten::select_overload<void(vtkStaticPointLocator2D&, std::uintptr_t)>([](vtkStaticPointLocator2D& self, std::uintptr_t arg_0) -> void { return self.GetBounds(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("GetBounds", emscripten::select_overload<std::uintptr_t(vtkStaticPointLocator2D&)>([](vtkStaticPointLocator2D& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetBounds()); }))
    .function("GetSpacing", emscripten::select_overload<std::uintptr_t(vtkStaticPointLocator2D&)>([](vtkStaticPointLocator2D& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetSpacing()); }))
    .function("GetBucketIndex", emscripten::optional_override([](vtkStaticPointLocator2D& self, std::uintptr_t arg_0) -> int {  return self.GetBucketIndex(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("GenerateRepresentation", &vtkStaticPointLocator2D::GenerateRepresentation, emscripten::allow_raw_pointers())
    .function("FindClosestPoint", emscripten::select_overload<int(vtkStaticPointLocator2D&, double, double, double)>([](vtkStaticPointLocator2D& self, double arg_0, double arg_1, double arg_2) -> int { return self.FindClosestPoint( arg_0, arg_1, arg_2); }))
    .function("FindClosestNPoints", emscripten::select_overload<void(vtkStaticPointLocator2D&, int, double, double, double, vtkIdList*)>([](vtkStaticPointLocator2D& self, int arg_0, double arg_1, double arg_2, double arg_3, vtkIdList* arg_4) -> void { return self.FindClosestNPoints( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("FindPointsWithinRadius", emscripten::select_overload<void(vtkStaticPointLocator2D&, double, double, double, double, vtkIdList*)>([](vtkStaticPointLocator2D& self, double arg_0, double arg_1, double arg_2, double arg_3, vtkIdList* arg_4) -> void { return self.FindPointsWithinRadius( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers());
}
