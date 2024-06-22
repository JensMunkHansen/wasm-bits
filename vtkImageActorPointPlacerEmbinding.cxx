// JavaScript wrapper for vtkImageActorPointPlacer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkImageActorPointPlacerEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkImageActorPointPlacer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkImageActor.h"
#include "vtkImageActorPointPlacer.h"

template<> void emscripten::internal::raw_destructor<vtkImageActorPointPlacer>(vtkImageActorPointPlacer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageActorPointPlacer_class) {
  emscripten::class_<vtkImageActorPointPlacer, emscripten::base<vtkPointPlacer>>("vtkImageActorPointPlacer")
    .smart_ptr<vtkSmartPointer<vtkImageActorPointPlacer>>("vtkSmartPointer<vtkImageActorPointPlacer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageActorPointPlacer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageActorPointPlacer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageActorPointPlacer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageActorPointPlacer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageActorPointPlacer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageActorPointPlacer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageActorPointPlacer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("UpdateInternalState", &vtkImageActorPointPlacer::UpdateInternalState)
    .function("SetImageActor", &vtkImageActorPointPlacer::SetImageActor, emscripten::allow_raw_pointers())
    .function("GetImageActor", &vtkImageActorPointPlacer::GetImageActor, emscripten::allow_raw_pointers())
    .function("SetBounds", emscripten::select_overload<void(vtkImageActorPointPlacer&, double, double, double, double, double, double)>([](vtkImageActorPointPlacer& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetWorldTolerance", &vtkImageActorPointPlacer::SetWorldTolerance);
}
