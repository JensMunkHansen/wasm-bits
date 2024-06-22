// JavaScript wrapper for vtkTerrainContourLineInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkTerrainContourLineInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkTerrainContourLineInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkContourRepresentation.h"
#include "vtkImageData.h"
#include "vtkProjectedTerrainPath.h"
#include "vtkTerrainContourLineInterpolator.h"

template<> void emscripten::internal::raw_destructor<vtkTerrainContourLineInterpolator>(vtkTerrainContourLineInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTerrainContourLineInterpolator_class) {
  emscripten::class_<vtkTerrainContourLineInterpolator, emscripten::base<vtkContourLineInterpolator>>("vtkTerrainContourLineInterpolator")
    .smart_ptr<vtkSmartPointer<vtkTerrainContourLineInterpolator>>("vtkSmartPointer<vtkTerrainContourLineInterpolator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTerrainContourLineInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTerrainContourLineInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTerrainContourLineInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTerrainContourLineInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTerrainContourLineInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTerrainContourLineInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTerrainContourLineInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("InterpolateLine", &vtkTerrainContourLineInterpolator::InterpolateLine, emscripten::allow_raw_pointers())
    .function("UpdateNode", emscripten::optional_override([](vtkTerrainContourLineInterpolator& self, vtkRenderer* arg_0, vtkContourRepresentation* arg_1, std::uintptr_t arg_2, int arg_3) -> int {  return self.UpdateNode( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)), arg_3);}), emscripten::allow_raw_pointers())
    .function("SetImageData", &vtkTerrainContourLineInterpolator::SetImageData, emscripten::allow_raw_pointers())
    .function("GetImageData", &vtkTerrainContourLineInterpolator::GetImageData, emscripten::allow_raw_pointers())
    .function("GetProjector", &vtkTerrainContourLineInterpolator::GetProjector, emscripten::allow_raw_pointers());
}
