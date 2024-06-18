// JavaScript wrapper for vtkThresholdTextureCoords with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTexture.js/vtkFiltersTexture.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTexture.js/vtkThresholdTextureCoordsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Texture/vtkThresholdTextureCoords.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkThresholdTextureCoords.h"

template<> void emscripten::internal::raw_destructor<vtkThresholdTextureCoords>(vtkThresholdTextureCoords * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkThresholdTextureCoords_class) {
  emscripten::class_<vtkThresholdTextureCoords, emscripten::base<vtkDataSetAlgorithm>>("vtkThresholdTextureCoords")
    .smart_ptr<vtkSmartPointer<vtkThresholdTextureCoords>>("vtkSmartPointer<vtkThresholdTextureCoords>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkThresholdTextureCoords>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThresholdTextureCoords::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkThresholdTextureCoords& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkThresholdTextureCoords::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkThresholdTextureCoords::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThresholdTextureCoords::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkThresholdTextureCoords& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ThresholdByLower", &vtkThresholdTextureCoords::ThresholdByLower)
    .function("ThresholdByUpper", &vtkThresholdTextureCoords::ThresholdByUpper)
    .function("ThresholdBetween", &vtkThresholdTextureCoords::ThresholdBetween)
    .function("GetUpperThreshold", &vtkThresholdTextureCoords::GetUpperThreshold)
    .function("GetLowerThreshold", &vtkThresholdTextureCoords::GetLowerThreshold)
    .function("SetTextureDimension", &vtkThresholdTextureCoords::SetTextureDimension)
    .function("GetTextureDimensionMinValue", &vtkThresholdTextureCoords::GetTextureDimensionMinValue)
    .function("GetTextureDimensionMaxValue", &vtkThresholdTextureCoords::GetTextureDimensionMaxValue)
    .function("GetTextureDimension", &vtkThresholdTextureCoords::GetTextureDimension)
    .function("SetInTextureCoord", emscripten::select_overload<void(vtkThresholdTextureCoords&, double, double, double)>([](vtkThresholdTextureCoords& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetInTextureCoord( arg_0, arg_1, arg_2); }))
    .function("SetOutTextureCoord", emscripten::select_overload<void(vtkThresholdTextureCoords&, double, double, double)>([](vtkThresholdTextureCoords& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOutTextureCoord( arg_0, arg_1, arg_2); }));
}
