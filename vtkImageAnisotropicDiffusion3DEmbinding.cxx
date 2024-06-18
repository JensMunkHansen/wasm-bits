// JavaScript wrapper for vtkImageAnisotropicDiffusion3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageAnisotropicDiffusion3DEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageAnisotropicDiffusion3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageAnisotropicDiffusion3D.h"

template<> void emscripten::internal::raw_destructor<vtkImageAnisotropicDiffusion3D>(vtkImageAnisotropicDiffusion3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageAnisotropicDiffusion3D_class) {
  emscripten::class_<vtkImageAnisotropicDiffusion3D, emscripten::base<vtkImageSpatialAlgorithm>>("vtkImageAnisotropicDiffusion3D")
    .smart_ptr<vtkSmartPointer<vtkImageAnisotropicDiffusion3D>>("vtkSmartPointer<vtkImageAnisotropicDiffusion3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageAnisotropicDiffusion3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageAnisotropicDiffusion3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageAnisotropicDiffusion3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageAnisotropicDiffusion3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageAnisotropicDiffusion3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageAnisotropicDiffusion3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageAnisotropicDiffusion3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfIterations", &vtkImageAnisotropicDiffusion3D::SetNumberOfIterations)
    .function("GetNumberOfIterations", &vtkImageAnisotropicDiffusion3D::GetNumberOfIterations)
    .function("SetDiffusionThreshold", &vtkImageAnisotropicDiffusion3D::SetDiffusionThreshold)
    .function("GetDiffusionThreshold", &vtkImageAnisotropicDiffusion3D::GetDiffusionThreshold)
    .function("SetDiffusionFactor", &vtkImageAnisotropicDiffusion3D::SetDiffusionFactor)
    .function("GetDiffusionFactor", &vtkImageAnisotropicDiffusion3D::GetDiffusionFactor)
    .function("SetFaces", &vtkImageAnisotropicDiffusion3D::SetFaces)
    .function("GetFaces", &vtkImageAnisotropicDiffusion3D::GetFaces)
    .function("FacesOn", &vtkImageAnisotropicDiffusion3D::FacesOn)
    .function("FacesOff", &vtkImageAnisotropicDiffusion3D::FacesOff)
    .function("SetEdges", &vtkImageAnisotropicDiffusion3D::SetEdges)
    .function("GetEdges", &vtkImageAnisotropicDiffusion3D::GetEdges)
    .function("EdgesOn", &vtkImageAnisotropicDiffusion3D::EdgesOn)
    .function("EdgesOff", &vtkImageAnisotropicDiffusion3D::EdgesOff)
    .function("SetCorners", &vtkImageAnisotropicDiffusion3D::SetCorners)
    .function("GetCorners", &vtkImageAnisotropicDiffusion3D::GetCorners)
    .function("CornersOn", &vtkImageAnisotropicDiffusion3D::CornersOn)
    .function("CornersOff", &vtkImageAnisotropicDiffusion3D::CornersOff)
    .function("SetGradientMagnitudeThreshold", &vtkImageAnisotropicDiffusion3D::SetGradientMagnitudeThreshold)
    .function("GetGradientMagnitudeThreshold", &vtkImageAnisotropicDiffusion3D::GetGradientMagnitudeThreshold)
    .function("GradientMagnitudeThresholdOn", &vtkImageAnisotropicDiffusion3D::GradientMagnitudeThresholdOn)
    .function("GradientMagnitudeThresholdOff", &vtkImageAnisotropicDiffusion3D::GradientMagnitudeThresholdOff);
}
