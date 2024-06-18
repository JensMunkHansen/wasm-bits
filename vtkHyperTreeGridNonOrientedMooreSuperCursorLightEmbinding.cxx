// JavaScript wrapper for vtkHyperTreeGridNonOrientedMooreSuperCursorLight with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeGridNonOrientedMooreSuperCursorLightEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTreeGridNonOrientedMooreSuperCursorLight.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"
#include "vtkIdList.h"
#include "vtkHyperTreeGridNonOrientedMooreSuperCursorLight.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridNonOrientedMooreSuperCursorLight>(vtkHyperTreeGridNonOrientedMooreSuperCursorLight * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridNonOrientedMooreSuperCursorLight_class) {
  emscripten::class_<vtkHyperTreeGridNonOrientedMooreSuperCursorLight, emscripten::base<vtkHyperTreeGridNonOrientedSuperCursorLight>>("vtkHyperTreeGridNonOrientedMooreSuperCursorLight")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridNonOrientedMooreSuperCursorLight>>("vtkSmartPointer<vtkHyperTreeGridNonOrientedMooreSuperCursorLight>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHyperTreeGridNonOrientedMooreSuperCursorLight>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedMooreSuperCursorLight::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridNonOrientedMooreSuperCursorLight& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridNonOrientedMooreSuperCursorLight::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridNonOrientedMooreSuperCursorLight::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedMooreSuperCursorLight::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridNonOrientedMooreSuperCursorLight& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkHyperTreeGridNonOrientedMooreSuperCursorLight::Initialize, emscripten::allow_raw_pointers())
    .function("GetCornerCursors", &vtkHyperTreeGridNonOrientedMooreSuperCursorLight::GetCornerCursors, emscripten::allow_raw_pointers());
}
