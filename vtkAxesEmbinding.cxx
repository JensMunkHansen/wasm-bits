// JavaScript wrapper for vtkAxes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkAxesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkAxes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAxes.h"

template<> void emscripten::internal::raw_destructor<vtkAxes>(vtkAxes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAxes_class) {
  emscripten::class_<vtkAxes, emscripten::base<vtkPolyDataAlgorithm>>("vtkAxes")
    .smart_ptr<vtkSmartPointer<vtkAxes>>("vtkSmartPointer<vtkAxes>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAxes>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAxes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAxes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAxes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAxes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAxes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOrigin", emscripten::select_overload<void(vtkAxes&, double, double, double)>([](vtkAxes& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetScaleFactor", &vtkAxes::SetScaleFactor)
    .function("GetScaleFactor", &vtkAxes::GetScaleFactor)
    .function("SetSymmetric", &vtkAxes::SetSymmetric)
    .function("GetSymmetric", &vtkAxes::GetSymmetric)
    .function("SymmetricOn", &vtkAxes::SymmetricOn)
    .function("SymmetricOff", &vtkAxes::SymmetricOff)
    .function("SetComputeNormals", &vtkAxes::SetComputeNormals)
    .function("GetComputeNormals", &vtkAxes::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkAxes::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkAxes::ComputeNormalsOff);
}
