// JavaScript wrapper for vtkScalarsToTextureFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTexture.js/vtkFiltersTexture.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTexture.js/vtkScalarsToTextureFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Texture/vtkScalarsToTextureFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkScalarsToColors.h"
#include "vtkScalarsToTextureFilter.h"

template<> void emscripten::internal::raw_destructor<vtkScalarsToTextureFilter>(vtkScalarsToTextureFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkScalarsToTextureFilter_class) {
  emscripten::class_<vtkScalarsToTextureFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkScalarsToTextureFilter")
    .smart_ptr<vtkSmartPointer<vtkScalarsToTextureFilter>>("vtkSmartPointer<vtkScalarsToTextureFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkScalarsToTextureFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkScalarsToTextureFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkScalarsToTextureFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkScalarsToTextureFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkScalarsToTextureFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkScalarsToTextureFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkScalarsToTextureFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTransferFunction", &vtkScalarsToTextureFilter::SetTransferFunction, emscripten::allow_raw_pointers())
    .function("GetTransferFunction", &vtkScalarsToTextureFilter::GetTransferFunction, emscripten::allow_raw_pointers())
    .function("GetUseTransferFunction", &vtkScalarsToTextureFilter::GetUseTransferFunction)
    .function("SetUseTransferFunction", &vtkScalarsToTextureFilter::SetUseTransferFunction)
    .function("UseTransferFunctionOn", &vtkScalarsToTextureFilter::UseTransferFunctionOn)
    .function("UseTransferFunctionOff", &vtkScalarsToTextureFilter::UseTransferFunctionOff)
    .function("SetTextureDimensions", emscripten::select_overload<void(vtkScalarsToTextureFilter&, int, int)>([](vtkScalarsToTextureFilter& self, int arg_0, int arg_1) -> void { return self.SetTextureDimensions( arg_0, arg_1); }));
}
