// JavaScript wrapper for vtkResliceImageViewer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionImage.js/vtkInteractionImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionImage.js/vtkResliceImageViewerEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Image/vtkResliceImageViewer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkResliceCursorWidget.h"
#include "vtkResliceCursor.h"
#include "vtkScalarsToColors.h"
#include "vtkBoundedPlanePointPlacer.h"
#include "vtkResliceImageViewerMeasurements.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkResliceImageViewer.h"

template<> void emscripten::internal::raw_destructor<vtkResliceImageViewer>(vtkResliceImageViewer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkResliceImageViewer_class) {
  emscripten::class_<vtkResliceImageViewer, emscripten::base<vtkImageViewer2>>("vtkResliceImageViewer")
    .smart_ptr<vtkSmartPointer<vtkResliceImageViewer>>("vtkSmartPointer<vtkResliceImageViewer>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkResliceImageViewer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceImageViewer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkResliceImageViewer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkResliceImageViewer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkResliceImageViewer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceImageViewer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkResliceImageViewer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkResliceImageViewer::Render)
    .function("SetInputData", &vtkResliceImageViewer::SetInputData, emscripten::allow_raw_pointers())
    .function("SetInputConnection", &vtkResliceImageViewer::SetInputConnection, emscripten::allow_raw_pointers())
    .function("SetColorWindow", &vtkResliceImageViewer::SetColorWindow)
    .function("SetColorLevel", &vtkResliceImageViewer::SetColorLevel)
    .function("GetResliceCursorWidget", &vtkResliceImageViewer::GetResliceCursorWidget, emscripten::allow_raw_pointers())
    .function("GetResliceMode", &vtkResliceImageViewer::GetResliceMode)
    .function("SetResliceMode", &vtkResliceImageViewer::SetResliceMode)
    .function("SetResliceModeToAxisAligned", &vtkResliceImageViewer::SetResliceModeToAxisAligned)
    .function("SetResliceModeToOblique", &vtkResliceImageViewer::SetResliceModeToOblique)
    .function("GetResliceCursor", &vtkResliceImageViewer::GetResliceCursor, emscripten::allow_raw_pointers())
    .function("SetResliceCursor", &vtkResliceImageViewer::SetResliceCursor, emscripten::allow_raw_pointers())
    .function("SetLookupTable", &vtkResliceImageViewer::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkResliceImageViewer::GetLookupTable, emscripten::allow_raw_pointers())
    .function("SetThickMode", &vtkResliceImageViewer::SetThickMode)
    .function("GetThickMode", &vtkResliceImageViewer::GetThickMode)
    .function("Reset", &vtkResliceImageViewer::Reset)
    .function("GetPointPlacer", &vtkResliceImageViewer::GetPointPlacer, emscripten::allow_raw_pointers())
    .function("GetMeasurements", &vtkResliceImageViewer::GetMeasurements, emscripten::allow_raw_pointers())
    .function("GetInteractor", &vtkResliceImageViewer::GetInteractor, emscripten::allow_raw_pointers())
    .function("SetSliceScrollOnMouseWheel", &vtkResliceImageViewer::SetSliceScrollOnMouseWheel)
    .function("GetSliceScrollOnMouseWheel", &vtkResliceImageViewer::GetSliceScrollOnMouseWheel)
    .function("SliceScrollOnMouseWheelOn", &vtkResliceImageViewer::SliceScrollOnMouseWheelOn)
    .function("SliceScrollOnMouseWheelOff", &vtkResliceImageViewer::SliceScrollOnMouseWheelOff)
    .function("SetSliceScrollFactor", &vtkResliceImageViewer::SetSliceScrollFactor)
    .function("GetSliceScrollFactor", &vtkResliceImageViewer::GetSliceScrollFactor)
    .function("IncrementSlice", &vtkResliceImageViewer::IncrementSlice);
}
EMSCRIPTEN_BINDINGS(vtkInteractionImage_vtkResliceImageViewer_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkResliceImageViewer_RESLICE_AXIS_ALIGNED", vtkResliceImageViewer::RESLICE_AXIS_ALIGNED },
      { "vtkResliceImageViewer_RESLICE_OBLIQUE", vtkResliceImageViewer::RESLICE_OBLIQUE },
      { "vtkResliceImageViewer_SliceChangedEvent", vtkResliceImageViewer::SliceChangedEvent },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
