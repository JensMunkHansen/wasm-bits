// JavaScript wrapper for vtkInteractorStyle3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkInteractorStyle3DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkInteractorStyle3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkEventData.h"
#include "vtkCamera.h"
#include "vtkAbstractPropPicker.h"
#include "vtkInteractorStyle3D.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorStyle3D>(vtkInteractorStyle3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyle3D_class) {
  emscripten::class_<vtkInteractorStyle3D, emscripten::base<vtkInteractorStyle>>("vtkInteractorStyle3D")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyle3D>>("vtkSmartPointer<vtkInteractorStyle3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkInteractorStyle3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyle3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyle3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyle3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyle3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyle3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyle3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("PositionProp", emscripten::optional_override([](vtkInteractorStyle3D& self, vtkEventData* arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> void {  return self.PositionProp( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double)));}), emscripten::allow_raw_pointers())
    .function("Dolly3D", &vtkInteractorStyle3D::Dolly3D, emscripten::allow_raw_pointers())
    .function("SetDollyPhysicalSpeed", &vtkInteractorStyle3D::SetDollyPhysicalSpeed)
    .function("GetDollyPhysicalSpeed", &vtkInteractorStyle3D::GetDollyPhysicalSpeed)
    .function("SetScale", &vtkInteractorStyle3D::SetScale, emscripten::allow_raw_pointers())
    .function("GetInteractionPicker", &vtkInteractorStyle3D::GetInteractionPicker, emscripten::allow_raw_pointers())
    .function("SetInteractionPicker", &vtkInteractorStyle3D::SetInteractionPicker, emscripten::allow_raw_pointers());
}
