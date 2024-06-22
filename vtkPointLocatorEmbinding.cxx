// JavaScript wrapper for vtkPointLocator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPointLocatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPointLocator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkIdList.h"
#include "vtkPolyData.h"
#include "vtkPointLocator.h"

template<> void emscripten::internal::raw_destructor<vtkPointLocator>(vtkPointLocator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointLocator_class) {
  emscripten::class_<vtkPointLocator, emscripten::base<vtkIncrementalPointLocator>>("vtkPointLocator")
    .smart_ptr<vtkSmartPointer<vtkPointLocator>>("vtkSmartPointer<vtkPointLocator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPointLocator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointLocator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointLocator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointLocator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointLocator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointLocator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointLocator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDivisions", emscripten::select_overload<void(vtkPointLocator&, int, int, int)>([](vtkPointLocator& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetDivisions( arg_0, arg_1, arg_2); }))
    .function("SetNumberOfPointsPerBucket", &vtkPointLocator::SetNumberOfPointsPerBucket)
    .function("GetNumberOfPointsPerBucketMinValue", &vtkPointLocator::GetNumberOfPointsPerBucketMinValue)
    .function("GetNumberOfPointsPerBucketMaxValue", &vtkPointLocator::GetNumberOfPointsPerBucketMaxValue)
    .function("GetNumberOfPointsPerBucket", &vtkPointLocator::GetNumberOfPointsPerBucket)
    .function("IsInsertedPoint", emscripten::select_overload<int(vtkPointLocator&, double, double, double)>([](vtkPointLocator& self, double arg_0, double arg_1, double arg_2) -> int { return self.IsInsertedPoint( arg_0, arg_1, arg_2); }))
    .function("FindDistributedPoints", emscripten::select_overload<void(vtkPointLocator&, int, double, double, double, vtkIdList*, int)>([](vtkPointLocator& self, int arg_0, double arg_1, double arg_2, double arg_3, vtkIdList* arg_4, int arg_5) -> void { return self.FindDistributedPoints( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }), emscripten::allow_raw_pointers())
    .function("GetPoints", &vtkPointLocator::GetPoints, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkPointLocator::Initialize)
    .function("FreeSearchStructure", &vtkPointLocator::FreeSearchStructure)
    .function("BuildLocator", &vtkPointLocator::BuildLocator)
    .function("ForceBuildLocator", &vtkPointLocator::ForceBuildLocator)
    .function("GenerateRepresentation", &vtkPointLocator::GenerateRepresentation, emscripten::allow_raw_pointers())
    .function("FindClosestPoint", emscripten::select_overload<int(vtkPointLocator&, double, double, double)>([](vtkPointLocator& self, double arg_0, double arg_1, double arg_2) -> int { return self.FindClosestPoint( arg_0, arg_1, arg_2); }));
}
