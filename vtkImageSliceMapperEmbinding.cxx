// JavaScript wrapper for vtkImageSliceMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkImageSliceMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkImageSliceMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkImageSlice.h"
#include "vtkWindow.h"
#include "vtkMatrix4x4.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkImageSliceMapper.h"

template<> void emscripten::internal::raw_destructor<vtkImageSliceMapper>(vtkImageSliceMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageSliceMapper_class) {
  emscripten::class_<vtkImageSliceMapper, emscripten::base<vtkImageMapper3D>>("vtkImageSliceMapper")
    .smart_ptr<vtkSmartPointer<vtkImageSliceMapper>>("vtkSmartPointer<vtkImageSliceMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageSliceMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSliceMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageSliceMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageSliceMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageSliceMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSliceMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageSliceMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSliceNumber", &vtkImageSliceMapper::SetSliceNumber)
    .function("GetSliceNumber", &vtkImageSliceMapper::GetSliceNumber)
    .function("GetSliceNumberMinValue", &vtkImageSliceMapper::GetSliceNumberMinValue)
    .function("GetSliceNumberMaxValue", &vtkImageSliceMapper::GetSliceNumberMaxValue)
    .function("SetOrientation", &vtkImageSliceMapper::SetOrientation)
    .function("GetOrientationMinValue", &vtkImageSliceMapper::GetOrientationMinValue)
    .function("GetOrientationMaxValue", &vtkImageSliceMapper::GetOrientationMaxValue)
    .function("GetOrientation", &vtkImageSliceMapper::GetOrientation)
    .function("SetOrientationToI", &vtkImageSliceMapper::SetOrientationToI)
    .function("SetOrientationToJ", &vtkImageSliceMapper::SetOrientationToJ)
    .function("SetOrientationToK", &vtkImageSliceMapper::SetOrientationToK)
    .function("SetOrientationToX", &vtkImageSliceMapper::SetOrientationToX)
    .function("SetOrientationToY", &vtkImageSliceMapper::SetOrientationToY)
    .function("SetOrientationToZ", &vtkImageSliceMapper::SetOrientationToZ)
    .function("SetCropping", &vtkImageSliceMapper::SetCropping)
    .function("CroppingOn", &vtkImageSliceMapper::CroppingOn)
    .function("CroppingOff", &vtkImageSliceMapper::CroppingOff)
    .function("GetCropping", &vtkImageSliceMapper::GetCropping)
    .function("SetCroppingRegion", emscripten::select_overload<void(vtkImageSliceMapper&, int, int, int, int, int, int)>([](vtkImageSliceMapper& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetCroppingRegion( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("Render", &vtkImageSliceMapper::Render, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkImageSliceMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkImageSliceMapper::GetMTime);
}
