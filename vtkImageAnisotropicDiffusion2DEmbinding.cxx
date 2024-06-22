// JavaScript wrapper for vtkImageAnisotropicDiffusion2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageAnisotropicDiffusion2DEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageAnisotropicDiffusion2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageAnisotropicDiffusion2D.h"

template<> void emscripten::internal::raw_destructor<vtkImageAnisotropicDiffusion2D>(vtkImageAnisotropicDiffusion2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageAnisotropicDiffusion2D_class) {
  emscripten::class_<vtkImageAnisotropicDiffusion2D, emscripten::base<vtkImageSpatialAlgorithm>>("vtkImageAnisotropicDiffusion2D")
    .smart_ptr<vtkSmartPointer<vtkImageAnisotropicDiffusion2D>>("vtkSmartPointer<vtkImageAnisotropicDiffusion2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageAnisotropicDiffusion2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageAnisotropicDiffusion2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageAnisotropicDiffusion2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageAnisotropicDiffusion2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageAnisotropicDiffusion2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageAnisotropicDiffusion2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageAnisotropicDiffusion2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfIterations", &vtkImageAnisotropicDiffusion2D::SetNumberOfIterations)
    .function("GetNumberOfIterations", &vtkImageAnisotropicDiffusion2D::GetNumberOfIterations)
    .function("SetDiffusionThreshold", &vtkImageAnisotropicDiffusion2D::SetDiffusionThreshold)
    .function("GetDiffusionThreshold", &vtkImageAnisotropicDiffusion2D::GetDiffusionThreshold)
    .function("SetDiffusionFactor", &vtkImageAnisotropicDiffusion2D::SetDiffusionFactor)
    .function("GetDiffusionFactor", &vtkImageAnisotropicDiffusion2D::GetDiffusionFactor)
    .function("SetFaces", &vtkImageAnisotropicDiffusion2D::SetFaces)
    .function("GetFaces", &vtkImageAnisotropicDiffusion2D::GetFaces)
    .function("FacesOn", &vtkImageAnisotropicDiffusion2D::FacesOn)
    .function("FacesOff", &vtkImageAnisotropicDiffusion2D::FacesOff)
    .function("SetEdges", &vtkImageAnisotropicDiffusion2D::SetEdges)
    .function("GetEdges", &vtkImageAnisotropicDiffusion2D::GetEdges)
    .function("EdgesOn", &vtkImageAnisotropicDiffusion2D::EdgesOn)
    .function("EdgesOff", &vtkImageAnisotropicDiffusion2D::EdgesOff)
    .function("SetCorners", &vtkImageAnisotropicDiffusion2D::SetCorners)
    .function("GetCorners", &vtkImageAnisotropicDiffusion2D::GetCorners)
    .function("CornersOn", &vtkImageAnisotropicDiffusion2D::CornersOn)
    .function("CornersOff", &vtkImageAnisotropicDiffusion2D::CornersOff)
    .function("SetGradientMagnitudeThreshold", &vtkImageAnisotropicDiffusion2D::SetGradientMagnitudeThreshold)
    .function("GetGradientMagnitudeThreshold", &vtkImageAnisotropicDiffusion2D::GetGradientMagnitudeThreshold)
    .function("GradientMagnitudeThresholdOn", &vtkImageAnisotropicDiffusion2D::GradientMagnitudeThresholdOn)
    .function("GradientMagnitudeThresholdOff", &vtkImageAnisotropicDiffusion2D::GradientMagnitudeThresholdOff);
}
