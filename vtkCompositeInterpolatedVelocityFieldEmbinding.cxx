// JavaScript wrapper for vtkCompositeInterpolatedVelocityField with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkCompositeInterpolatedVelocityFieldEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkCompositeInterpolatedVelocityField.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkAbstractInterpolatedVelocityField.h"
#include "vtkCompositeInterpolatedVelocityField.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeInterpolatedVelocityField>(vtkCompositeInterpolatedVelocityField * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeInterpolatedVelocityField_class) {
  emscripten::class_<vtkCompositeInterpolatedVelocityField, emscripten::base<vtkAbstractInterpolatedVelocityField>>("vtkCompositeInterpolatedVelocityField")
    .smart_ptr<vtkSmartPointer<vtkCompositeInterpolatedVelocityField>>("vtkSmartPointer<vtkCompositeInterpolatedVelocityField>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCompositeInterpolatedVelocityField>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeInterpolatedVelocityField::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeInterpolatedVelocityField& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeInterpolatedVelocityField::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeInterpolatedVelocityField::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeInterpolatedVelocityField::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeInterpolatedVelocityField& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddDataSet", &vtkCompositeInterpolatedVelocityField::AddDataSet, emscripten::allow_raw_pointers())
    .function("FunctionValues", emscripten::select_overload<int(vtkCompositeInterpolatedVelocityField&, std::uintptr_t, std::uintptr_t)>([](vtkCompositeInterpolatedVelocityField& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> int { return self.FunctionValues(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double))); }))
    .function("FunctionValues", emscripten::select_overload<int(vtkCompositeInterpolatedVelocityField&, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([](vtkCompositeInterpolatedVelocityField& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> int { return self.FunctionValues(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<void*>(arg_2)); }))
    .function("InsideTest", emscripten::optional_override([](vtkCompositeInterpolatedVelocityField& self, std::uintptr_t arg_0) -> int {  return self.InsideTest(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SnapPointOnCell", emscripten::optional_override([](vtkCompositeInterpolatedVelocityField& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> int {  return self.SnapPointOnCell(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("SetLastCellId", emscripten::select_overload<void(vtkCompositeInterpolatedVelocityField&, int, int)>([](vtkCompositeInterpolatedVelocityField& self, int arg_0, int arg_1) -> void { return self.SetLastCellId( arg_0, arg_1); }))
    .function("SetLastCellId", emscripten::select_overload<void(vtkCompositeInterpolatedVelocityField&, int)>([](vtkCompositeInterpolatedVelocityField& self, int arg_0) -> void { return self.SetLastCellId( arg_0); }))
    .function("GetLastDataSetIndex", &vtkCompositeInterpolatedVelocityField::GetLastDataSetIndex)
    .function("GetCacheDataSetHit", &vtkCompositeInterpolatedVelocityField::GetCacheDataSetHit)
    .function("GetCacheDataSetMiss", &vtkCompositeInterpolatedVelocityField::GetCacheDataSetMiss)
    .function("CopyParameters", &vtkCompositeInterpolatedVelocityField::CopyParameters, emscripten::allow_raw_pointers());
}
