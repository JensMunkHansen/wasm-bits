// JavaScript wrapper for vtkContourTriangulator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkContourTriangulatorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkContourTriangulator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkPoints.h"
#include "vtkCellArray.h"
#include "vtkPolyData.h"
#include "vtkPolyDataAlgorithm.h"
#include "vtkContourTriangulator.h"

template<> void emscripten::internal::raw_destructor<vtkContourTriangulator>(vtkContourTriangulator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContourTriangulator_class) {
  emscripten::class_<vtkContourTriangulator, emscripten::base<vtkPolyDataAlgorithm>>("vtkContourTriangulator")
    .smart_ptr<vtkSmartPointer<vtkContourTriangulator>>("vtkSmartPointer<vtkContourTriangulator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkContourTriangulator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContourTriangulator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContourTriangulator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContourTriangulator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContourTriangulator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContourTriangulator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContourTriangulator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetTriangulationError", &vtkContourTriangulator::GetTriangulationError)
    .function("SetTriangulationErrorDisplay", &vtkContourTriangulator::SetTriangulationErrorDisplay)
    .function("TriangulationErrorDisplayOn", &vtkContourTriangulator::TriangulationErrorDisplayOn)
    .function("TriangulationErrorDisplayOff", &vtkContourTriangulator::TriangulationErrorDisplayOff)
    .function("GetTriangulationErrorDisplay", &vtkContourTriangulator::GetTriangulationErrorDisplay)
    .class_function("TriangulatePolygon", &vtkContourTriangulator::TriangulatePolygon, emscripten::allow_raw_pointers());
}
