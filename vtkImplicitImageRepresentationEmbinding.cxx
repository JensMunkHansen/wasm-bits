// JavaScript wrapper for vtkImplicitImageRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkImplicitImageRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkImplicitImageRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkLookupTable.h"
#include "vtkImageMapToColors.h"
#include "vtkImageReslice.h"
#include "vtkImplicitImageRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkImplicitImageRepresentation>(vtkImplicitImageRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitImageRepresentation_class) {
  emscripten::class_<vtkImplicitImageRepresentation, emscripten::base<vtkImplicitPlaneRepresentation>>("vtkImplicitImageRepresentation")
    .smart_ptr<vtkSmartPointer<vtkImplicitImageRepresentation>>("vtkSmartPointer<vtkImplicitImageRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImplicitImageRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitImageRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitImageRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitImageRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitImageRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitImageRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitImageRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("PlaceImage", emscripten::select_overload<void(vtkImplicitImageRepresentation&, vtkImageData*)>([](vtkImplicitImageRepresentation& self, vtkImageData* arg_0) -> void { return self.PlaceImage( arg_0); }), emscripten::allow_raw_pointers())
    .function("PlaceImage", emscripten::select_overload<void(vtkImplicitImageRepresentation&, vtkAlgorithmOutput*)>([](vtkImplicitImageRepresentation& self, vtkAlgorithmOutput* arg_0) -> void { return self.PlaceImage( arg_0); }), emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkImplicitImageRepresentation::BuildRepresentation)
    .function("SetUserControlledLookupTable", &vtkImplicitImageRepresentation::SetUserControlledLookupTable)
    .function("GetUserControlledLookupTable", &vtkImplicitImageRepresentation::GetUserControlledLookupTable)
    .function("UserControlledLookupTableOn", &vtkImplicitImageRepresentation::UserControlledLookupTableOn)
    .function("UserControlledLookupTableOff", &vtkImplicitImageRepresentation::UserControlledLookupTableOff)
    .function("SetLookupTable", &vtkImplicitImageRepresentation::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkImplicitImageRepresentation::GetLookupTable, emscripten::allow_raw_pointers())
    .function("SetTextureInterpolate", &vtkImplicitImageRepresentation::SetTextureInterpolate)
    .function("GetTextureInterpolate", &vtkImplicitImageRepresentation::GetTextureInterpolate)
    .function("TextureInterpolateOn", &vtkImplicitImageRepresentation::TextureInterpolateOn)
    .function("TextureInterpolateOff", &vtkImplicitImageRepresentation::TextureInterpolateOff)
    .function("SetResliceInterpolate", &vtkImplicitImageRepresentation::SetResliceInterpolate)
    .function("GetResliceInterpolate", &vtkImplicitImageRepresentation::GetResliceInterpolate)
    .function("SetResliceInterpolateToNearestNeighbour", &vtkImplicitImageRepresentation::SetResliceInterpolateToNearestNeighbour)
    .function("SetResliceInterpolateToLinear", &vtkImplicitImageRepresentation::SetResliceInterpolateToLinear)
    .function("SetResliceInterpolateToCubic", &vtkImplicitImageRepresentation::SetResliceInterpolateToCubic)
    .function("SetColorMap", &vtkImplicitImageRepresentation::SetColorMap, emscripten::allow_raw_pointers())
    .function("GetColorMap", &vtkImplicitImageRepresentation::GetColorMap, emscripten::allow_raw_pointers())
    .function("GetReslice", &vtkImplicitImageRepresentation::GetReslice, emscripten::allow_raw_pointers())
    .function("SetCropPlaneToBoundingBox", &vtkImplicitImageRepresentation::SetCropPlaneToBoundingBox);
}
