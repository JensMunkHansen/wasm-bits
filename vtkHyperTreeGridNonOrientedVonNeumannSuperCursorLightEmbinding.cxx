// JavaScript wrapper for vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLightEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"
#include "vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight>(vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_class) {
  emscripten::class_<vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight, emscripten::base<vtkHyperTreeGridNonOrientedSuperCursorLight>>("vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight>>("vtkSmartPointer<vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight::Initialize, emscripten::allow_raw_pointers());
}
