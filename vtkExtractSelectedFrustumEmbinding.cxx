// JavaScript wrapper for vtkExtractSelectedFrustum with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkExtractSelectedFrustumEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkExtractSelectedFrustum.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlanes.h"
#include "vtkPoints.h"
#include "vtkExtractSelectedFrustum.h"

template<> void emscripten::internal::raw_destructor<vtkExtractSelectedFrustum>(vtkExtractSelectedFrustum * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractSelectedFrustum_class) {
  emscripten::class_<vtkExtractSelectedFrustum, emscripten::base<vtkExtractSelectionBase>>("vtkExtractSelectedFrustum")
    .smart_ptr<vtkSmartPointer<vtkExtractSelectedFrustum>>("vtkSmartPointer<vtkExtractSelectedFrustum>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractSelectedFrustum>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractSelectedFrustum::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractSelectedFrustum& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractSelectedFrustum::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractSelectedFrustum::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractSelectedFrustum::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractSelectedFrustum& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkExtractSelectedFrustum::GetMTime)
    .function("SetFrustum", &vtkExtractSelectedFrustum::SetFrustum, emscripten::allow_raw_pointers())
    .function("GetFrustum", &vtkExtractSelectedFrustum::GetFrustum, emscripten::allow_raw_pointers())
    .function("GetClipPoints", &vtkExtractSelectedFrustum::GetClipPoints, emscripten::allow_raw_pointers())
    .function("SetFieldType", &vtkExtractSelectedFrustum::SetFieldType)
    .function("GetFieldType", &vtkExtractSelectedFrustum::GetFieldType)
    .function("SetContainingCells", &vtkExtractSelectedFrustum::SetContainingCells)
    .function("GetContainingCells", &vtkExtractSelectedFrustum::GetContainingCells)
    .function("OverallBoundsTest", emscripten::optional_override([](vtkExtractSelectedFrustum& self, std::uintptr_t arg_0) -> int {  return self.OverallBoundsTest(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SetShowBounds", &vtkExtractSelectedFrustum::SetShowBounds)
    .function("GetShowBounds", &vtkExtractSelectedFrustum::GetShowBounds)
    .function("ShowBoundsOn", &vtkExtractSelectedFrustum::ShowBoundsOn)
    .function("ShowBoundsOff", &vtkExtractSelectedFrustum::ShowBoundsOff)
    .function("SetInsideOut", &vtkExtractSelectedFrustum::SetInsideOut)
    .function("GetInsideOut", &vtkExtractSelectedFrustum::GetInsideOut)
    .function("InsideOutOn", &vtkExtractSelectedFrustum::InsideOutOn)
    .function("InsideOutOff", &vtkExtractSelectedFrustum::InsideOutOff);
}
