// JavaScript wrapper for vtkGraphToPoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkGraphToPointsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkGraphToPoints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraphToPoints.h"

template<> void emscripten::internal::raw_destructor<vtkGraphToPoints>(vtkGraphToPoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphToPoints_class) {
  emscripten::class_<vtkGraphToPoints, emscripten::base<vtkPolyDataAlgorithm>>("vtkGraphToPoints")
    .smart_ptr<vtkSmartPointer<vtkGraphToPoints>>("vtkSmartPointer<vtkGraphToPoints>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGraphToPoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphToPoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphToPoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphToPoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphToPoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphToPoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphToPoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
