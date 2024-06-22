// JavaScript wrapper for vtkVoxelModeller with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkImagingHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkVoxelModellerEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Hybrid/vtkVoxelModeller.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVoxelModeller.h"

template<> void emscripten::internal::raw_destructor<vtkVoxelModeller>(vtkVoxelModeller * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVoxelModeller_class) {
  emscripten::class_<vtkVoxelModeller, emscripten::base<vtkImageAlgorithm>>("vtkVoxelModeller")
    .smart_ptr<vtkSmartPointer<vtkVoxelModeller>>("vtkSmartPointer<vtkVoxelModeller>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkVoxelModeller>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVoxelModeller::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVoxelModeller& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVoxelModeller::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVoxelModeller::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVoxelModeller::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVoxelModeller& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSampleDimensions", emscripten::select_overload<void(vtkVoxelModeller&, int, int, int)>([](vtkVoxelModeller& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetSampleDimensions( arg_0, arg_1, arg_2); }))
    .function("SetMaximumDistance", &vtkVoxelModeller::SetMaximumDistance)
    .function("GetMaximumDistanceMinValue", &vtkVoxelModeller::GetMaximumDistanceMinValue)
    .function("GetMaximumDistanceMaxValue", &vtkVoxelModeller::GetMaximumDistanceMaxValue)
    .function("GetMaximumDistance", &vtkVoxelModeller::GetMaximumDistance)
    .function("SetModelBounds", emscripten::select_overload<void(vtkVoxelModeller&, double, double, double, double, double, double)>([](vtkVoxelModeller& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetModelBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetScalarType", &vtkVoxelModeller::SetScalarType)
    .function("SetScalarTypeToFloat", &vtkVoxelModeller::SetScalarTypeToFloat)
    .function("SetScalarTypeToDouble", &vtkVoxelModeller::SetScalarTypeToDouble)
    .function("SetScalarTypeToInt", &vtkVoxelModeller::SetScalarTypeToInt)
    .function("SetScalarTypeToUnsignedInt", &vtkVoxelModeller::SetScalarTypeToUnsignedInt)
    .function("SetScalarTypeToLong", &vtkVoxelModeller::SetScalarTypeToLong)
    .function("SetScalarTypeToUnsignedLong", &vtkVoxelModeller::SetScalarTypeToUnsignedLong)
    .function("SetScalarTypeToShort", &vtkVoxelModeller::SetScalarTypeToShort)
    .function("SetScalarTypeToUnsignedShort", &vtkVoxelModeller::SetScalarTypeToUnsignedShort)
    .function("SetScalarTypeToUnsignedChar", &vtkVoxelModeller::SetScalarTypeToUnsignedChar)
    .function("SetScalarTypeToChar", &vtkVoxelModeller::SetScalarTypeToChar)
    .function("SetScalarTypeToBit", &vtkVoxelModeller::SetScalarTypeToBit)
    .function("GetScalarType", &vtkVoxelModeller::GetScalarType)
    .function("SetForegroundValue", &vtkVoxelModeller::SetForegroundValue)
    .function("GetForegroundValue", &vtkVoxelModeller::GetForegroundValue)
    .function("SetBackgroundValue", &vtkVoxelModeller::SetBackgroundValue)
    .function("GetBackgroundValue", &vtkVoxelModeller::GetBackgroundValue);
}
