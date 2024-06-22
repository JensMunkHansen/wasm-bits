// JavaScript wrapper for vtkImageIslandRemoval2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImagingMorphological.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImageIslandRemoval2DEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Morphological/vtkImageIslandRemoval2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageIslandRemoval2D.h"


EMSCRIPTEN_BINDINGS(vtkImage2DIslandPixel_t_class) {
  emscripten::class_<vtkImage2DIslandPixel_t>("vtkImage2DIslandPixel_t");
}
template<> void emscripten::internal::raw_destructor<vtkImageIslandRemoval2D>(vtkImageIslandRemoval2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageIslandRemoval2D_class) {
  emscripten::class_<vtkImageIslandRemoval2D, emscripten::base<vtkImageAlgorithm>>("vtkImageIslandRemoval2D")
    .smart_ptr<vtkSmartPointer<vtkImageIslandRemoval2D>>("vtkSmartPointer<vtkImageIslandRemoval2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageIslandRemoval2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageIslandRemoval2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageIslandRemoval2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageIslandRemoval2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageIslandRemoval2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageIslandRemoval2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageIslandRemoval2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAreaThreshold", &vtkImageIslandRemoval2D::SetAreaThreshold)
    .function("GetAreaThreshold", &vtkImageIslandRemoval2D::GetAreaThreshold)
    .function("SetSquareNeighborhood", &vtkImageIslandRemoval2D::SetSquareNeighborhood)
    .function("GetSquareNeighborhood", &vtkImageIslandRemoval2D::GetSquareNeighborhood)
    .function("SquareNeighborhoodOn", &vtkImageIslandRemoval2D::SquareNeighborhoodOn)
    .function("SquareNeighborhoodOff", &vtkImageIslandRemoval2D::SquareNeighborhoodOff)
    .function("SetIslandValue", &vtkImageIslandRemoval2D::SetIslandValue)
    .function("GetIslandValue", &vtkImageIslandRemoval2D::GetIslandValue)
    .function("SetReplaceValue", &vtkImageIslandRemoval2D::SetReplaceValue)
    .function("GetReplaceValue", &vtkImageIslandRemoval2D::GetReplaceValue);
}
