// JavaScript wrapper for vtkInteractorStyleTerrain with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractionStyle.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractorStyleTerrainEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Style/vtkInteractorStyleTerrain.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleTerrain.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorStyleTerrain>(vtkInteractorStyleTerrain * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleTerrain_class) {
  emscripten::class_<vtkInteractorStyleTerrain, emscripten::base<vtkInteractorStyle>>("vtkInteractorStyleTerrain")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleTerrain>>("vtkSmartPointer<vtkInteractorStyleTerrain>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkInteractorStyleTerrain>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleTerrain::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleTerrain& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleTerrain::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleTerrain::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleTerrain::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleTerrain& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("OnMouseMove", &vtkInteractorStyleTerrain::OnMouseMove)
    .function("OnLeftButtonDown", &vtkInteractorStyleTerrain::OnLeftButtonDown)
    .function("OnLeftButtonUp", &vtkInteractorStyleTerrain::OnLeftButtonUp)
    .function("OnMiddleButtonDown", &vtkInteractorStyleTerrain::OnMiddleButtonDown)
    .function("OnMiddleButtonUp", &vtkInteractorStyleTerrain::OnMiddleButtonUp)
    .function("OnRightButtonDown", &vtkInteractorStyleTerrain::OnRightButtonDown)
    .function("OnRightButtonUp", &vtkInteractorStyleTerrain::OnRightButtonUp)
    .function("OnChar", &vtkInteractorStyleTerrain::OnChar)
    .function("Rotate", &vtkInteractorStyleTerrain::Rotate)
    .function("Pan", &vtkInteractorStyleTerrain::Pan)
    .function("Dolly", &vtkInteractorStyleTerrain::Dolly)
    .function("SetLatLongLines", &vtkInteractorStyleTerrain::SetLatLongLines)
    .function("GetLatLongLines", &vtkInteractorStyleTerrain::GetLatLongLines)
    .function("LatLongLinesOn", &vtkInteractorStyleTerrain::LatLongLinesOn)
    .function("LatLongLinesOff", &vtkInteractorStyleTerrain::LatLongLinesOff);
}
