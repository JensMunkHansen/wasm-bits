// JavaScript wrapper for vtkTransformPolyDataFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkTransformPolyDataFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkTransformPolyDataFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractTransform.h"
#include "vtkTransformPolyDataFilter.h"

template<> void emscripten::internal::raw_destructor<vtkTransformPolyDataFilter>(vtkTransformPolyDataFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransformPolyDataFilter_class) {
  emscripten::class_<vtkTransformPolyDataFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkTransformPolyDataFilter")
    .smart_ptr<vtkSmartPointer<vtkTransformPolyDataFilter>>("vtkSmartPointer<vtkTransformPolyDataFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTransformPolyDataFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransformPolyDataFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransformPolyDataFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransformPolyDataFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransformPolyDataFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransformPolyDataFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransformPolyDataFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkTransformPolyDataFilter::GetMTime)
    .function("SetTransform", &vtkTransformPolyDataFilter::SetTransform, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkTransformPolyDataFilter::GetTransform, emscripten::allow_raw_pointers())
    .function("SetOutputPointsPrecision", &vtkTransformPolyDataFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkTransformPolyDataFilter::GetOutputPointsPrecision);
}
