// JavaScript wrapper for vtkTerrainDataPointPlacer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkTerrainDataPointPlacerEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkTerrainDataPointPlacer.h
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
#include "vtkTerrainDataPointPlacer.h"

template<> void emscripten::internal::raw_destructor<vtkTerrainDataPointPlacer>(vtkTerrainDataPointPlacer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTerrainDataPointPlacer_class) {
  emscripten::class_<vtkTerrainDataPointPlacer, emscripten::base<vtkPointPlacer>>("vtkTerrainDataPointPlacer")
    .smart_ptr<vtkSmartPointer<vtkTerrainDataPointPlacer>>("vtkSmartPointer<vtkTerrainDataPointPlacer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTerrainDataPointPlacer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTerrainDataPointPlacer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTerrainDataPointPlacer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTerrainDataPointPlacer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTerrainDataPointPlacer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTerrainDataPointPlacer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTerrainDataPointPlacer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddProp", &vtkTerrainDataPointPlacer::AddProp, emscripten::allow_raw_pointers())
    .function("RemoveAllProps", &vtkTerrainDataPointPlacer::RemoveAllProps)
    .function("SetHeightOffset", &vtkTerrainDataPointPlacer::SetHeightOffset)
    .function("GetHeightOffset", &vtkTerrainDataPointPlacer::GetHeightOffset)
    .function("GetPropPicker", &vtkTerrainDataPointPlacer::GetPropPicker, emscripten::allow_raw_pointers());
}
