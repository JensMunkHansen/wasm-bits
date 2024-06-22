// JavaScript wrapper for vtkVolumePicker with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkVolumePickerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkVolumePicker.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVolumePicker.h"

template<> void emscripten::internal::raw_destructor<vtkVolumePicker>(vtkVolumePicker * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVolumePicker_class) {
  emscripten::class_<vtkVolumePicker, emscripten::base<vtkCellPicker>>("vtkVolumePicker")
    .smart_ptr<vtkSmartPointer<vtkVolumePicker>>("vtkSmartPointer<vtkVolumePicker>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVolumePicker>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumePicker::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVolumePicker& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVolumePicker::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVolumePicker::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumePicker::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVolumePicker& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPickCroppingPlanes", &vtkVolumePicker::SetPickCroppingPlanes)
    .function("PickCroppingPlanesOn", &vtkVolumePicker::PickCroppingPlanesOn)
    .function("PickCroppingPlanesOff", &vtkVolumePicker::PickCroppingPlanesOff)
    .function("GetPickCroppingPlanes", &vtkVolumePicker::GetPickCroppingPlanes)
    .function("GetCroppingPlaneId", &vtkVolumePicker::GetCroppingPlaneId);
}
