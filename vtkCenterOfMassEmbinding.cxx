// JavaScript wrapper for vtkCenterOfMass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkCenterOfMassEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkCenterOfMass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkDataArray.h"
#include "vtkCenterOfMass.h"

template<> void emscripten::internal::raw_destructor<vtkCenterOfMass>(vtkCenterOfMass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCenterOfMass_class) {
  emscripten::class_<vtkCenterOfMass, emscripten::base<vtkPointSetAlgorithm>>("vtkCenterOfMass")
    .smart_ptr<vtkSmartPointer<vtkCenterOfMass>>("vtkSmartPointer<vtkCenterOfMass>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCenterOfMass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCenterOfMass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCenterOfMass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCenterOfMass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCenterOfMass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCenterOfMass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCenterOfMass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCenter", emscripten::select_overload<void(vtkCenterOfMass&, double, double, double)>([](vtkCenterOfMass& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetUseScalarsAsWeights", &vtkCenterOfMass::SetUseScalarsAsWeights)
    .function("GetUseScalarsAsWeights", &vtkCenterOfMass::GetUseScalarsAsWeights);
}
