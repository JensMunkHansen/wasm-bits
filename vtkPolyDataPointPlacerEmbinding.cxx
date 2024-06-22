// JavaScript wrapper for vtkPolyDataPointPlacer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkPolyDataPointPlacerEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkPolyDataPointPlacer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProp.h"
#include "vtkRenderer.h"
#include "vtkPropPicker.h"
#include "vtkPolyDataPointPlacer.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataPointPlacer>(vtkPolyDataPointPlacer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataPointPlacer_class) {
  emscripten::class_<vtkPolyDataPointPlacer, emscripten::base<vtkPointPlacer>>("vtkPolyDataPointPlacer")
    .smart_ptr<vtkSmartPointer<vtkPolyDataPointPlacer>>("vtkSmartPointer<vtkPolyDataPointPlacer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolyDataPointPlacer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataPointPlacer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataPointPlacer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataPointPlacer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataPointPlacer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataPointPlacer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataPointPlacer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddProp", &vtkPolyDataPointPlacer::AddProp, emscripten::allow_raw_pointers())
    .function("RemoveViewProp", &vtkPolyDataPointPlacer::RemoveViewProp, emscripten::allow_raw_pointers())
    .function("RemoveAllProps", &vtkPolyDataPointPlacer::RemoveAllProps)
    .function("HasProp", &vtkPolyDataPointPlacer::HasProp, emscripten::allow_raw_pointers())
    .function("GetNumberOfProps", &vtkPolyDataPointPlacer::GetNumberOfProps)
    .function("GetPropPicker", &vtkPolyDataPointPlacer::GetPropPicker, emscripten::allow_raw_pointers());
}
