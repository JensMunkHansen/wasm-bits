// JavaScript wrapper for vtkFocalPlanePointPlacer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkFocalPlanePointPlacerEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkFocalPlanePointPlacer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkFocalPlanePointPlacer.h"

template<> void emscripten::internal::raw_destructor<vtkFocalPlanePointPlacer>(vtkFocalPlanePointPlacer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFocalPlanePointPlacer_class) {
  emscripten::class_<vtkFocalPlanePointPlacer, emscripten::base<vtkPointPlacer>>("vtkFocalPlanePointPlacer")
    .smart_ptr<vtkSmartPointer<vtkFocalPlanePointPlacer>>("vtkSmartPointer<vtkFocalPlanePointPlacer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFocalPlanePointPlacer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFocalPlanePointPlacer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFocalPlanePointPlacer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFocalPlanePointPlacer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFocalPlanePointPlacer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFocalPlanePointPlacer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFocalPlanePointPlacer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOffset", &vtkFocalPlanePointPlacer::SetOffset)
    .function("GetOffset", &vtkFocalPlanePointPlacer::GetOffset)
    .function("SetPointBounds", emscripten::select_overload<void(vtkFocalPlanePointPlacer&, double, double, double, double, double, double)>([](vtkFocalPlanePointPlacer& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetPointBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }));
}
