// JavaScript wrapper for vtkAvatar with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkAvatarEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkAvatar.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAvatar.h"

template<> void emscripten::internal::raw_destructor<vtkAvatar>(vtkAvatar * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAvatar_class) {
  emscripten::class_<vtkAvatar, emscripten::base<vtkActor>>("vtkAvatar")
    .smart_ptr<vtkSmartPointer<vtkAvatar>>("vtkSmartPointer<vtkAvatar>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAvatar>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAvatar::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAvatar& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAvatar::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAvatar::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAvatar::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAvatar& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetHeadPosition", emscripten::select_overload<void(vtkAvatar&, double, double, double)>([](vtkAvatar& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetHeadPosition( arg_0, arg_1, arg_2); }))
    .function("SetHeadOrientation", emscripten::select_overload<void(vtkAvatar&, double, double, double)>([](vtkAvatar& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetHeadOrientation( arg_0, arg_1, arg_2); }))
    .function("SetLeftHandPosition", emscripten::select_overload<void(vtkAvatar&, double, double, double)>([](vtkAvatar& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetLeftHandPosition( arg_0, arg_1, arg_2); }))
    .function("SetLeftHandOrientation", emscripten::select_overload<void(vtkAvatar&, double, double, double)>([](vtkAvatar& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetLeftHandOrientation( arg_0, arg_1, arg_2); }))
    .function("SetRightHandPosition", emscripten::select_overload<void(vtkAvatar&, double, double, double)>([](vtkAvatar& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetRightHandPosition( arg_0, arg_1, arg_2); }))
    .function("SetRightHandOrientation", emscripten::select_overload<void(vtkAvatar&, double, double, double)>([](vtkAvatar& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetRightHandOrientation( arg_0, arg_1, arg_2); }))
    .function("SetUpVector", emscripten::select_overload<void(vtkAvatar&, double, double, double)>([](vtkAvatar& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetUpVector( arg_0, arg_1, arg_2); }))
    .function("SetUseLeftHand", &vtkAvatar::SetUseLeftHand)
    .function("GetUseLeftHand", &vtkAvatar::GetUseLeftHand)
    .function("UseLeftHandOn", &vtkAvatar::UseLeftHandOn)
    .function("UseLeftHandOff", &vtkAvatar::UseLeftHandOff)
    .function("SetUseRightHand", &vtkAvatar::SetUseRightHand)
    .function("GetUseRightHand", &vtkAvatar::GetUseRightHand)
    .function("UseRightHandOn", &vtkAvatar::UseRightHandOn)
    .function("UseRightHandOff", &vtkAvatar::UseRightHandOff)
    .function("SetShowHandsOnly", &vtkAvatar::SetShowHandsOnly)
    .function("GetShowHandsOnly", &vtkAvatar::GetShowHandsOnly)
    .function("ShowHandsOnlyOn", &vtkAvatar::ShowHandsOnlyOn)
    .function("ShowHandsOnlyOff", &vtkAvatar::ShowHandsOnlyOff);
}
