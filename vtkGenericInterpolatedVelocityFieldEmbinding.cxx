// JavaScript wrapper for vtkGenericInterpolatedVelocityField with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkGenericInterpolatedVelocityFieldEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkGenericInterpolatedVelocityField.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericDataSet.h"
#include "vtkGenericAdaptorCell.h"
#include "vtkGenericInterpolatedVelocityField.h"

template<> void emscripten::internal::raw_destructor<vtkGenericInterpolatedVelocityField>(vtkGenericInterpolatedVelocityField * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericInterpolatedVelocityField_class) {
  emscripten::class_<vtkGenericInterpolatedVelocityField, emscripten::base<vtkFunctionSet>>("vtkGenericInterpolatedVelocityField")
    .smart_ptr<vtkSmartPointer<vtkGenericInterpolatedVelocityField>>("vtkSmartPointer<vtkGenericInterpolatedVelocityField>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGenericInterpolatedVelocityField>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericInterpolatedVelocityField::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericInterpolatedVelocityField& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericInterpolatedVelocityField::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericInterpolatedVelocityField::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericInterpolatedVelocityField::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericInterpolatedVelocityField& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("FunctionValues", emscripten::select_overload<int(vtkGenericInterpolatedVelocityField&, std::uintptr_t, std::uintptr_t)>([](vtkGenericInterpolatedVelocityField& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> int { return self.FunctionValues(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double))); }))
    .function("FunctionValues", emscripten::select_overload<int(vtkGenericInterpolatedVelocityField&, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([](vtkGenericInterpolatedVelocityField& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> int { return self.FunctionValues(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<void*>(arg_2)); }))
    .function("AddDataSet", &vtkGenericInterpolatedVelocityField::AddDataSet, emscripten::allow_raw_pointers())
    .function("ClearLastCell", &vtkGenericInterpolatedVelocityField::ClearLastCell)
    .function("GetLastCell", &vtkGenericInterpolatedVelocityField::GetLastCell, emscripten::allow_raw_pointers())
    .function("GetCaching", &vtkGenericInterpolatedVelocityField::GetCaching)
    .function("SetCaching", &vtkGenericInterpolatedVelocityField::SetCaching)
    .function("CachingOn", &vtkGenericInterpolatedVelocityField::CachingOn)
    .function("CachingOff", &vtkGenericInterpolatedVelocityField::CachingOff)
    .function("GetCacheHit", &vtkGenericInterpolatedVelocityField::GetCacheHit)
    .function("GetCacheMiss", &vtkGenericInterpolatedVelocityField::GetCacheMiss)
    .function("GetVectorsSelection", emscripten::optional_override([](vtkGenericInterpolatedVelocityField& self) -> std::string {  return self.GetVectorsSelection();}))
    .function("SelectVectors", emscripten::optional_override([](vtkGenericInterpolatedVelocityField& self, const std::string & arg_0) -> void {  return self.SelectVectors( arg_0.c_str());}))
    .function("GetLastDataSet", &vtkGenericInterpolatedVelocityField::GetLastDataSet, emscripten::allow_raw_pointers())
    .function("CopyParameters", &vtkGenericInterpolatedVelocityField::CopyParameters, emscripten::allow_raw_pointers());
}
