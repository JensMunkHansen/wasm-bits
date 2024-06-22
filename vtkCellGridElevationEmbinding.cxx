// JavaScript wrapper for vtkCellGridElevation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkCellGridElevationEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkCellGridElevation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellGridElevation.h"

template<> void emscripten::internal::raw_destructor<vtkCellGridElevation>(vtkCellGridElevation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGridElevation_class) {
  emscripten::class_<vtkCellGridElevation, emscripten::base<vtkCellGridAlgorithm>>("vtkCellGridElevation")
    .smart_ptr<vtkSmartPointer<vtkCellGridElevation>>("vtkSmartPointer<vtkCellGridElevation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCellGridElevation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridElevation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGridElevation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGridElevation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGridElevation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridElevation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGridElevation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAttributeName", emscripten::optional_override([](vtkCellGridElevation& self, const std::string & arg_0) -> void {  return self.SetAttributeName( arg_0.c_str());}))
    .function("GetAttributeName", emscripten::optional_override([](vtkCellGridElevation& self) -> std::string {  return self.GetAttributeName();}))
    .function("SetOrigin", emscripten::select_overload<void(vtkCellGridElevation&, double, double, double)>([](vtkCellGridElevation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetNumberOfAxes", &vtkCellGridElevation::SetNumberOfAxes)
    .function("GetNumberOfAxesMinValue", &vtkCellGridElevation::GetNumberOfAxesMinValue)
    .function("GetNumberOfAxesMaxValue", &vtkCellGridElevation::GetNumberOfAxesMaxValue)
    .function("GetNumberOfAxes", &vtkCellGridElevation::GetNumberOfAxes)
    .function("SetAxis", emscripten::select_overload<void(vtkCellGridElevation&, double, double, double)>([](vtkCellGridElevation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAxis( arg_0, arg_1, arg_2); }))
    .function("SetShock", &vtkCellGridElevation::SetShock)
    .function("GetShock", &vtkCellGridElevation::GetShock);
}
