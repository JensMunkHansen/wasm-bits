// JavaScript wrapper for vtkRectangularButtonSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkRectangularButtonSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkRectangularButtonSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkRectangularButtonSource.h"

template<> void emscripten::internal::raw_destructor<vtkRectangularButtonSource>(vtkRectangularButtonSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRectangularButtonSource_class) {
  emscripten::class_<vtkRectangularButtonSource, emscripten::base<vtkButtonSource>>("vtkRectangularButtonSource")
    .smart_ptr<vtkSmartPointer<vtkRectangularButtonSource>>("vtkSmartPointer<vtkRectangularButtonSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRectangularButtonSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectangularButtonSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRectangularButtonSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRectangularButtonSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRectangularButtonSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectangularButtonSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRectangularButtonSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWidth", &vtkRectangularButtonSource::SetWidth)
    .function("GetWidthMinValue", &vtkRectangularButtonSource::GetWidthMinValue)
    .function("GetWidthMaxValue", &vtkRectangularButtonSource::GetWidthMaxValue)
    .function("GetWidth", &vtkRectangularButtonSource::GetWidth)
    .function("SetHeight", &vtkRectangularButtonSource::SetHeight)
    .function("GetHeightMinValue", &vtkRectangularButtonSource::GetHeightMinValue)
    .function("GetHeightMaxValue", &vtkRectangularButtonSource::GetHeightMaxValue)
    .function("GetHeight", &vtkRectangularButtonSource::GetHeight)
    .function("SetDepth", &vtkRectangularButtonSource::SetDepth)
    .function("GetDepthMinValue", &vtkRectangularButtonSource::GetDepthMinValue)
    .function("GetDepthMaxValue", &vtkRectangularButtonSource::GetDepthMaxValue)
    .function("GetDepth", &vtkRectangularButtonSource::GetDepth)
    .function("SetBoxRatio", &vtkRectangularButtonSource::SetBoxRatio)
    .function("GetBoxRatioMinValue", &vtkRectangularButtonSource::GetBoxRatioMinValue)
    .function("GetBoxRatioMaxValue", &vtkRectangularButtonSource::GetBoxRatioMaxValue)
    .function("GetBoxRatio", &vtkRectangularButtonSource::GetBoxRatio)
    .function("SetTextureRatio", &vtkRectangularButtonSource::SetTextureRatio)
    .function("GetTextureRatioMinValue", &vtkRectangularButtonSource::GetTextureRatioMinValue)
    .function("GetTextureRatioMaxValue", &vtkRectangularButtonSource::GetTextureRatioMaxValue)
    .function("GetTextureRatio", &vtkRectangularButtonSource::GetTextureRatio)
    .function("SetTextureHeightRatio", &vtkRectangularButtonSource::SetTextureHeightRatio)
    .function("GetTextureHeightRatioMinValue", &vtkRectangularButtonSource::GetTextureHeightRatioMinValue)
    .function("GetTextureHeightRatioMaxValue", &vtkRectangularButtonSource::GetTextureHeightRatioMaxValue)
    .function("GetTextureHeightRatio", &vtkRectangularButtonSource::GetTextureHeightRatio)
    .function("SetOutputPointsPrecision", &vtkRectangularButtonSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkRectangularButtonSource::GetOutputPointsPrecision);
}
