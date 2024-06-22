// JavaScript wrapper for vtkResliceImageViewerMeasurements with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionImage.js/vtkInteractionImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionImage.js/vtkResliceImageViewerMeasurementsEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Image/vtkResliceImageViewerMeasurements.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractWidget.h"
#include "vtkResliceImageViewer.h"
#include "vtkResliceImageViewerMeasurements.h"

template<> void emscripten::internal::raw_destructor<vtkResliceImageViewerMeasurements>(vtkResliceImageViewerMeasurements * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkResliceImageViewerMeasurements_class) {
  emscripten::class_<vtkResliceImageViewerMeasurements, emscripten::base<vtkObject>>("vtkResliceImageViewerMeasurements")
    .smart_ptr<vtkSmartPointer<vtkResliceImageViewerMeasurements>>("vtkSmartPointer<vtkResliceImageViewerMeasurements>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkResliceImageViewerMeasurements>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceImageViewerMeasurements::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkResliceImageViewerMeasurements& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkResliceImageViewerMeasurements::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkResliceImageViewerMeasurements::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceImageViewerMeasurements::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkResliceImageViewerMeasurements& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkResliceImageViewerMeasurements::Render)
    .function("AddItem", &vtkResliceImageViewerMeasurements::AddItem, emscripten::allow_raw_pointers())
    .function("RemoveItem", &vtkResliceImageViewerMeasurements::RemoveItem, emscripten::allow_raw_pointers())
    .function("RemoveAllItems", &vtkResliceImageViewerMeasurements::RemoveAllItems)
    .function("SetProcessEvents", &vtkResliceImageViewerMeasurements::SetProcessEvents)
    .function("GetProcessEventsMinValue", &vtkResliceImageViewerMeasurements::GetProcessEventsMinValue)
    .function("GetProcessEventsMaxValue", &vtkResliceImageViewerMeasurements::GetProcessEventsMaxValue)
    .function("GetProcessEvents", &vtkResliceImageViewerMeasurements::GetProcessEvents)
    .function("ProcessEventsOn", &vtkResliceImageViewerMeasurements::ProcessEventsOn)
    .function("ProcessEventsOff", &vtkResliceImageViewerMeasurements::ProcessEventsOff)
    .function("SetTolerance", &vtkResliceImageViewerMeasurements::SetTolerance)
    .function("GetTolerance", &vtkResliceImageViewerMeasurements::GetTolerance)
    .function("SetResliceImageViewer", &vtkResliceImageViewerMeasurements::SetResliceImageViewer, emscripten::allow_raw_pointers())
    .function("GetResliceImageViewer", &vtkResliceImageViewerMeasurements::GetResliceImageViewer, emscripten::allow_raw_pointers())
    .function("Update", &vtkResliceImageViewerMeasurements::Update);
}
