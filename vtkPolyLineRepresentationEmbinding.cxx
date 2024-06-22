// JavaScript wrapper for vtkPolyLineRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkPolyLineRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkPolyLineRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkDoubleArray.h"
#include "vtkPoints.h"
#include "vtkPolyLineRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkPolyLineRepresentation>(vtkPolyLineRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyLineRepresentation_class) {
  emscripten::class_<vtkPolyLineRepresentation, emscripten::base<vtkCurveRepresentation>>("vtkPolyLineRepresentation")
    .smart_ptr<vtkSmartPointer<vtkPolyLineRepresentation>>("vtkSmartPointer<vtkPolyLineRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolyLineRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyLineRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyLineRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyLineRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyLineRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyLineRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyLineRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPolyData", &vtkPolyLineRepresentation::GetPolyData, emscripten::allow_raw_pointers())
    .function("SetNumberOfHandles", &vtkPolyLineRepresentation::SetNumberOfHandles)
    .function("GetHandlePositions", &vtkPolyLineRepresentation::GetHandlePositions, emscripten::allow_raw_pointers())
    .function("GetSummedLength", &vtkPolyLineRepresentation::GetSummedLength)
    .function("InitializeHandles", &vtkPolyLineRepresentation::InitializeHandles, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkPolyLineRepresentation::BuildRepresentation);
}
