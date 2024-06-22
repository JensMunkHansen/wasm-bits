// JavaScript wrapper for vtkPointHandleRepresentation2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkPointHandleRepresentation2DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkPointHandleRepresentation2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkProperty2D.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkPointPlacer.h"
#include "vtkPointHandleRepresentation2D.h"

template<> void emscripten::internal::raw_destructor<vtkPointHandleRepresentation2D>(vtkPointHandleRepresentation2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointHandleRepresentation2D_class) {
  emscripten::class_<vtkPointHandleRepresentation2D, emscripten::base<vtkHandleRepresentation>>("vtkPointHandleRepresentation2D")
    .smart_ptr<vtkSmartPointer<vtkPointHandleRepresentation2D>>("vtkSmartPointer<vtkPointHandleRepresentation2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPointHandleRepresentation2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointHandleRepresentation2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointHandleRepresentation2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointHandleRepresentation2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointHandleRepresentation2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointHandleRepresentation2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointHandleRepresentation2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCursorShape", &vtkPointHandleRepresentation2D::SetCursorShape, emscripten::allow_raw_pointers())
    .function("GetCursorShape", &vtkPointHandleRepresentation2D::GetCursorShape, emscripten::allow_raw_pointers())
    .function("SetProperty", &vtkPointHandleRepresentation2D::SetProperty, emscripten::allow_raw_pointers())
    .function("SetSelectedProperty", &vtkPointHandleRepresentation2D::SetSelectedProperty, emscripten::allow_raw_pointers())
    .function("GetProperty", &vtkPointHandleRepresentation2D::GetProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedProperty", &vtkPointHandleRepresentation2D::GetSelectedProperty, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkPointHandleRepresentation2D::BuildRepresentation)
    .function("ComputeInteractionState", &vtkPointHandleRepresentation2D::ComputeInteractionState)
    .function("ShallowCopy", &vtkPointHandleRepresentation2D::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkPointHandleRepresentation2D::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetActors2D", &vtkPointHandleRepresentation2D::GetActors2D, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkPointHandleRepresentation2D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkPointHandleRepresentation2D::RenderOverlay, emscripten::allow_raw_pointers())
    .function("Highlight", &vtkPointHandleRepresentation2D::Highlight)
    .function("SetPointPlacer", &vtkPointHandleRepresentation2D::SetPointPlacer, emscripten::allow_raw_pointers())
    .function("SetVisibility", &vtkPointHandleRepresentation2D::SetVisibility)
    .function("Translate", emscripten::select_overload<void(vtkPointHandleRepresentation2D&, std::uintptr_t, std::uintptr_t)>([](vtkPointHandleRepresentation2D& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> void { return self.Translate(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double))); }));
}
