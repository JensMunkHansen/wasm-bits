// JavaScript wrapper for vtkInteractorStyleDrawPolygon with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractionStyle.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractorStyleDrawPolygonEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Style/vtkInteractorStyleDrawPolygon.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleDrawPolygon.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorStyleDrawPolygon>(vtkInteractorStyleDrawPolygon * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleDrawPolygon_class) {
  emscripten::class_<vtkInteractorStyleDrawPolygon, emscripten::base<vtkInteractorStyle>>("vtkInteractorStyleDrawPolygon")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleDrawPolygon>>("vtkSmartPointer<vtkInteractorStyleDrawPolygon>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkInteractorStyleDrawPolygon>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleDrawPolygon::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleDrawPolygon& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleDrawPolygon::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleDrawPolygon::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleDrawPolygon::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleDrawPolygon& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("OnMouseMove", &vtkInteractorStyleDrawPolygon::OnMouseMove)
    .function("OnLeftButtonDown", &vtkInteractorStyleDrawPolygon::OnLeftButtonDown)
    .function("OnLeftButtonUp", &vtkInteractorStyleDrawPolygon::OnLeftButtonUp)
    .function("SetDrawPolygonPixels", &vtkInteractorStyleDrawPolygon::SetDrawPolygonPixels)
    .function("GetDrawPolygonPixels", &vtkInteractorStyleDrawPolygon::GetDrawPolygonPixels)
    .function("DrawPolygonPixelsOn", &vtkInteractorStyleDrawPolygon::DrawPolygonPixelsOn)
    .function("DrawPolygonPixelsOff", &vtkInteractorStyleDrawPolygon::DrawPolygonPixelsOff);
}
