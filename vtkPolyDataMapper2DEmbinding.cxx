// JavaScript wrapper for vtkPolyDataMapper2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkPolyDataMapper2DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkPolyDataMapper2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkScalarsToColors.h"
#include "vtkCoordinate.h"
#include "vtkUnsignedCharArray.h"
#include "vtkAbstractMapper.h"
#include "vtkPolyDataMapper2D.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataMapper2D>(vtkPolyDataMapper2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataMapper2D_class) {
  emscripten::class_<vtkPolyDataMapper2D, emscripten::base<vtkMapper2D>>("vtkPolyDataMapper2D")
    .smart_ptr<vtkSmartPointer<vtkPolyDataMapper2D>>("vtkSmartPointer<vtkPolyDataMapper2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolyDataMapper2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataMapper2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataMapper2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataMapper2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataMapper2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataMapper2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataMapper2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", &vtkPolyDataMapper2D::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkPolyDataMapper2D::GetInput, emscripten::allow_raw_pointers())
    .function("SetLookupTable", &vtkPolyDataMapper2D::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkPolyDataMapper2D::GetLookupTable, emscripten::allow_raw_pointers())
    .function("CreateDefaultLookupTable", &vtkPolyDataMapper2D::CreateDefaultLookupTable)
    .function("SetScalarVisibility", &vtkPolyDataMapper2D::SetScalarVisibility)
    .function("GetScalarVisibility", &vtkPolyDataMapper2D::GetScalarVisibility)
    .function("ScalarVisibilityOn", &vtkPolyDataMapper2D::ScalarVisibilityOn)
    .function("ScalarVisibilityOff", &vtkPolyDataMapper2D::ScalarVisibilityOff)
    .function("SetColorMode", &vtkPolyDataMapper2D::SetColorMode)
    .function("GetColorMode", &vtkPolyDataMapper2D::GetColorMode)
    .function("SetColorModeToDefault", &vtkPolyDataMapper2D::SetColorModeToDefault)
    .function("SetColorModeToMapScalars", &vtkPolyDataMapper2D::SetColorModeToMapScalars)
    .function("SetColorModeToDirectScalars", &vtkPolyDataMapper2D::SetColorModeToDirectScalars)
    .function("GetColorModeAsString", emscripten::optional_override([](vtkPolyDataMapper2D& self) -> std::string {  return self.GetColorModeAsString();}))
    .function("SetUseLookupTableScalarRange", &vtkPolyDataMapper2D::SetUseLookupTableScalarRange)
    .function("GetUseLookupTableScalarRange", &vtkPolyDataMapper2D::GetUseLookupTableScalarRange)
    .function("UseLookupTableScalarRangeOn", &vtkPolyDataMapper2D::UseLookupTableScalarRangeOn)
    .function("UseLookupTableScalarRangeOff", &vtkPolyDataMapper2D::UseLookupTableScalarRangeOff)
    .function("SetScalarRange", emscripten::select_overload<void(vtkPolyDataMapper2D&, double, double)>([](vtkPolyDataMapper2D& self, double arg_0, double arg_1) -> void { return self.SetScalarRange( arg_0, arg_1); }))
    .function("SetScalarMode", &vtkPolyDataMapper2D::SetScalarMode)
    .function("GetScalarMode", &vtkPolyDataMapper2D::GetScalarMode)
    .function("SetScalarModeToDefault", &vtkPolyDataMapper2D::SetScalarModeToDefault)
    .function("SetScalarModeToUsePointData", &vtkPolyDataMapper2D::SetScalarModeToUsePointData)
    .function("SetScalarModeToUseCellData", &vtkPolyDataMapper2D::SetScalarModeToUseCellData)
    .function("SetScalarModeToUsePointFieldData", &vtkPolyDataMapper2D::SetScalarModeToUsePointFieldData)
    .function("SetScalarModeToUseCellFieldData", &vtkPolyDataMapper2D::SetScalarModeToUseCellFieldData)
    .function("ColorByArrayComponent", emscripten::select_overload<void(vtkPolyDataMapper2D&, int, int)>([](vtkPolyDataMapper2D& self, int arg_0, int arg_1) -> void { return self.ColorByArrayComponent( arg_0, arg_1); }))
    .function("ColorByArrayComponent", emscripten::select_overload<void(vtkPolyDataMapper2D&, const std::string &, int)>([](vtkPolyDataMapper2D& self, const std::string & arg_0, int arg_1) -> void { return self.ColorByArrayComponent( arg_0.c_str(), arg_1); }))
    .function("GetArrayName", emscripten::optional_override([](vtkPolyDataMapper2D& self) -> std::string {  return self.GetArrayName();}))
    .function("GetArrayId", &vtkPolyDataMapper2D::GetArrayId)
    .function("GetArrayAccessMode", &vtkPolyDataMapper2D::GetArrayAccessMode)
    .function("GetArrayComponent", &vtkPolyDataMapper2D::GetArrayComponent)
    .function("GetMTime", &vtkPolyDataMapper2D::GetMTime)
    .function("SetTransformCoordinate", &vtkPolyDataMapper2D::SetTransformCoordinate, emscripten::allow_raw_pointers())
    .function("GetTransformCoordinate", &vtkPolyDataMapper2D::GetTransformCoordinate, emscripten::allow_raw_pointers())
    .function("GetTransformCoordinateUseDouble", &vtkPolyDataMapper2D::GetTransformCoordinateUseDouble)
    .function("SetTransformCoordinateUseDouble", &vtkPolyDataMapper2D::SetTransformCoordinateUseDouble)
    .function("TransformCoordinateUseDoubleOn", &vtkPolyDataMapper2D::TransformCoordinateUseDoubleOn)
    .function("TransformCoordinateUseDoubleOff", &vtkPolyDataMapper2D::TransformCoordinateUseDoubleOff)
    .function("MapScalars", &vtkPolyDataMapper2D::MapScalars, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkPolyDataMapper2D::ShallowCopy, emscripten::allow_raw_pointers());
}
