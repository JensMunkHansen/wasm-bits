// JavaScript wrapper for vtkCoincidentPoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkCoincidentPointsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkCoincidentPoints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkPoints.h"
#include "vtkCoincidentPoints.h"

template<> void emscripten::internal::raw_destructor<vtkCoincidentPoints>(vtkCoincidentPoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCoincidentPoints_class) {
  emscripten::class_<vtkCoincidentPoints, emscripten::base<vtkObject>>("vtkCoincidentPoints")
    .smart_ptr<vtkSmartPointer<vtkCoincidentPoints>>("vtkSmartPointer<vtkCoincidentPoints>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCoincidentPoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCoincidentPoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCoincidentPoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCoincidentPoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCoincidentPoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCoincidentPoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCoincidentPoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNextCoincidentPointIds", &vtkCoincidentPoints::GetNextCoincidentPointIds, emscripten::allow_raw_pointers())
    .function("InitTraversal", &vtkCoincidentPoints::InitTraversal)
    .function("RemoveNonCoincidentPoints", &vtkCoincidentPoints::RemoveNonCoincidentPoints)
    .function("Clear", &vtkCoincidentPoints::Clear)
    .class_function("SpiralPoints", &vtkCoincidentPoints::SpiralPoints, emscripten::allow_raw_pointers());
}
