// JavaScript wrapper for vtkImageMapper3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkImageMapper3DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkImageMapper3D.h
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
#include "vtkImageData.h"
#include "vtkDataSet.h"
#include "vtkDataObject.h"
#include "vtkPlane.h"
#include "vtkMatrix4x4.h"
#include "vtkImageMapper3D.h"

template<> void emscripten::internal::raw_destructor<vtkImageMapper3D>(vtkImageMapper3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageMapper3D_class) {
  emscripten::class_<vtkImageMapper3D, emscripten::base<vtkAbstractMapper3D>>("vtkImageMapper3D")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMapper3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageMapper3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageMapper3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageMapper3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMapper3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageMapper3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", &vtkImageMapper3D::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkImageMapper3D::GetInput, emscripten::allow_raw_pointers())
    .function("GetDataSetInput", &vtkImageMapper3D::GetDataSetInput, emscripten::allow_raw_pointers())
    .function("GetDataObjectInput", &vtkImageMapper3D::GetDataObjectInput, emscripten::allow_raw_pointers())
    .function("SetBorder", &vtkImageMapper3D::SetBorder)
    .function("BorderOn", &vtkImageMapper3D::BorderOn)
    .function("BorderOff", &vtkImageMapper3D::BorderOff)
    .function("GetBorder", &vtkImageMapper3D::GetBorder)
    .function("SetBackground", &vtkImageMapper3D::SetBackground)
    .function("BackgroundOn", &vtkImageMapper3D::BackgroundOn)
    .function("BackgroundOff", &vtkImageMapper3D::BackgroundOff)
    .function("GetBackground", &vtkImageMapper3D::GetBackground)
    .function("SetSliceAtFocalPoint", &vtkImageMapper3D::SetSliceAtFocalPoint)
    .function("SliceAtFocalPointOn", &vtkImageMapper3D::SliceAtFocalPointOn)
    .function("SliceAtFocalPointOff", &vtkImageMapper3D::SliceAtFocalPointOff)
    .function("GetSliceAtFocalPoint", &vtkImageMapper3D::GetSliceAtFocalPoint)
    .function("SetSliceFacesCamera", &vtkImageMapper3D::SetSliceFacesCamera)
    .function("SliceFacesCameraOn", &vtkImageMapper3D::SliceFacesCameraOn)
    .function("SliceFacesCameraOff", &vtkImageMapper3D::SliceFacesCameraOff)
    .function("GetSliceFacesCamera", &vtkImageMapper3D::GetSliceFacesCamera)
    .function("GetSlicePlane", &vtkImageMapper3D::GetSlicePlane, emscripten::allow_raw_pointers())
    .function("SetNumberOfThreads", &vtkImageMapper3D::SetNumberOfThreads)
    .function("GetNumberOfThreadsMinValue", &vtkImageMapper3D::GetNumberOfThreadsMinValue)
    .function("GetNumberOfThreadsMaxValue", &vtkImageMapper3D::GetNumberOfThreadsMaxValue)
    .function("GetNumberOfThreads", &vtkImageMapper3D::GetNumberOfThreads)
    .function("SetStreaming", &vtkImageMapper3D::SetStreaming)
    .function("GetStreaming", &vtkImageMapper3D::GetStreaming)
    .function("StreamingOn", &vtkImageMapper3D::StreamingOn)
    .function("StreamingOff", &vtkImageMapper3D::StreamingOff);
}
