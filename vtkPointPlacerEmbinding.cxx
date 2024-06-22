// JavaScript wrapper for vtkPointPlacer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkPointPlacerEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkPointPlacer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkPointPlacer.h"

template<> void emscripten::internal::raw_destructor<vtkPointPlacer>(vtkPointPlacer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointPlacer_class) {
  emscripten::class_<vtkPointPlacer, emscripten::base<vtkObject>>("vtkPointPlacer")
    .smart_ptr<vtkSmartPointer<vtkPointPlacer>>("vtkSmartPointer<vtkPointPlacer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPointPlacer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointPlacer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointPlacer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointPlacer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointPlacer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointPlacer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointPlacer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("UpdateInternalState", &vtkPointPlacer::UpdateInternalState)
    .function("SetPixelTolerance", &vtkPointPlacer::SetPixelTolerance)
    .function("GetPixelToleranceMinValue", &vtkPointPlacer::GetPixelToleranceMinValue)
    .function("GetPixelToleranceMaxValue", &vtkPointPlacer::GetPixelToleranceMaxValue)
    .function("GetPixelTolerance", &vtkPointPlacer::GetPixelTolerance)
    .function("SetWorldTolerance", &vtkPointPlacer::SetWorldTolerance)
    .function("GetWorldToleranceMinValue", &vtkPointPlacer::GetWorldToleranceMinValue)
    .function("GetWorldToleranceMaxValue", &vtkPointPlacer::GetWorldToleranceMaxValue)
    .function("GetWorldTolerance", &vtkPointPlacer::GetWorldTolerance);
}
