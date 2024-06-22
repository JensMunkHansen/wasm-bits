// JavaScript wrapper for vtkHardwarePicker with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkHardwarePickerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkHardwarePicker.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractMapper3D.h"
#include "vtkDataSet.h"
#include "vtkCompositeDataSet.h"
#include "vtkRenderer.h"
#include "vtkHardwarePicker.h"

template<> void emscripten::internal::raw_destructor<vtkHardwarePicker>(vtkHardwarePicker * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHardwarePicker_class) {
  emscripten::class_<vtkHardwarePicker, emscripten::base<vtkAbstractPropPicker>>("vtkHardwarePicker")
    .smart_ptr<vtkSmartPointer<vtkHardwarePicker>>("vtkSmartPointer<vtkHardwarePicker>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHardwarePicker>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHardwarePicker::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHardwarePicker& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHardwarePicker::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHardwarePicker::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHardwarePicker::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHardwarePicker& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSnapToMeshPoint", &vtkHardwarePicker::SetSnapToMeshPoint)
    .function("GetSnapToMeshPoint", &vtkHardwarePicker::GetSnapToMeshPoint)
    .function("SnapToMeshPointOn", &vtkHardwarePicker::SnapToMeshPointOn)
    .function("SnapToMeshPointOff", &vtkHardwarePicker::SnapToMeshPointOff)
    .function("SetPixelTolerance", &vtkHardwarePicker::SetPixelTolerance)
    .function("GetPixelTolerance", &vtkHardwarePicker::GetPixelTolerance)
    .function("GetMapper", &vtkHardwarePicker::GetMapper, emscripten::allow_raw_pointers())
    .function("GetDataSet", &vtkHardwarePicker::GetDataSet, emscripten::allow_raw_pointers())
    .function("GetCompositeDataSet", &vtkHardwarePicker::GetCompositeDataSet, emscripten::allow_raw_pointers())
    .function("GetFlatBlockIndex", &vtkHardwarePicker::GetFlatBlockIndex)
    .function("GetPointId", &vtkHardwarePicker::GetPointId)
    .function("GetCellId", &vtkHardwarePicker::GetCellId)
    .function("GetSubId", &vtkHardwarePicker::GetSubId)
    .function("GetNormalFlipped", &vtkHardwarePicker::GetNormalFlipped)
    .function("Pick", &vtkHardwarePicker::Pick, emscripten::allow_raw_pointers());
}
