// JavaScript wrapper for vtkAMRInterpolatedVelocityField with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkAMRInterpolatedVelocityFieldEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkAMRInterpolatedVelocityField.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOverlappingAMR.h"
#include "vtkAbstractInterpolatedVelocityField.h"
#include "vtkAMRInterpolatedVelocityField.h"

template<> void emscripten::internal::raw_destructor<vtkAMRInterpolatedVelocityField>(vtkAMRInterpolatedVelocityField * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMRInterpolatedVelocityField_class) {
  emscripten::class_<vtkAMRInterpolatedVelocityField, emscripten::base<vtkAbstractInterpolatedVelocityField>>("vtkAMRInterpolatedVelocityField")
    .smart_ptr<vtkSmartPointer<vtkAMRInterpolatedVelocityField>>("vtkSmartPointer<vtkAMRInterpolatedVelocityField>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAMRInterpolatedVelocityField>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRInterpolatedVelocityField::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMRInterpolatedVelocityField& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMRInterpolatedVelocityField::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMRInterpolatedVelocityField::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRInterpolatedVelocityField::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMRInterpolatedVelocityField& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAmrDataSet", &vtkAMRInterpolatedVelocityField::SetAmrDataSet, emscripten::allow_raw_pointers())
    .function("GetAmrDataSet", &vtkAMRInterpolatedVelocityField::GetAmrDataSet, emscripten::allow_raw_pointers())
    .function("SetAMRData", &vtkAMRInterpolatedVelocityField::SetAMRData, emscripten::allow_raw_pointers())
    .function("CopyParameters", &vtkAMRInterpolatedVelocityField::CopyParameters, emscripten::allow_raw_pointers())
    .function("SetLastCellId", emscripten::select_overload<void(vtkAMRInterpolatedVelocityField&, int)>([](vtkAMRInterpolatedVelocityField& self, int arg_0) -> void { return self.SetLastCellId( arg_0); }))
    .function("SetLastCellId", emscripten::select_overload<void(vtkAMRInterpolatedVelocityField&, int, int)>([](vtkAMRInterpolatedVelocityField& self, int arg_0, int arg_1) -> void { return self.SetLastCellId( arg_0, arg_1); }))
    .function("FunctionValues", emscripten::select_overload<int(vtkAMRInterpolatedVelocityField&, std::uintptr_t, std::uintptr_t)>([](vtkAMRInterpolatedVelocityField& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> int { return self.FunctionValues(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double))); }))
    .function("FunctionValues", emscripten::select_overload<int(vtkAMRInterpolatedVelocityField&, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([](vtkAMRInterpolatedVelocityField& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> int { return self.FunctionValues(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<void*>(arg_2)); }))
    .function("SetLastDataSet", &vtkAMRInterpolatedVelocityField::SetLastDataSet);
}
