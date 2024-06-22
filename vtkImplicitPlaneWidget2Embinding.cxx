// JavaScript wrapper for vtkImplicitPlaneWidget2 with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkImplicitPlaneWidget2Embinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkImplicitPlaneWidget2.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitPlaneRepresentation.h"
#include "vtkImplicitPlaneWidget2.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkImplicitPlaneWidget2_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkImplicitPlaneWidget2>(vtkImplicitPlaneWidget2 * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitPlaneWidget2_class) {
  emscripten::class_<vtkImplicitPlaneWidget2, emscripten::base<vtkAbstractWidget>>("vtkImplicitPlaneWidget2")
    .smart_ptr<vtkSmartPointer<vtkImplicitPlaneWidget2>>("vtkSmartPointer<vtkImplicitPlaneWidget2>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImplicitPlaneWidget2>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitPlaneWidget2::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitPlaneWidget2& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitPlaneWidget2::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitPlaneWidget2::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitPlaneWidget2::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitPlaneWidget2& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRepresentation", &vtkImplicitPlaneWidget2::SetRepresentation, emscripten::allow_raw_pointers())
    .function("SetEnabled", &vtkImplicitPlaneWidget2::SetEnabled)
    .function("SetLockNormalToCamera", &vtkImplicitPlaneWidget2::SetLockNormalToCamera)
    .function("GetImplicitPlaneRepresentation", &vtkImplicitPlaneWidget2::GetImplicitPlaneRepresentation, emscripten::allow_raw_pointers())
    .function("CreateDefaultRepresentation", &vtkImplicitPlaneWidget2::CreateDefaultRepresentation);
}
