// JavaScript wrapper for vtkTransformFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkTransformFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkTransformFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractTransform.h"
#include "vtkTransformFilter.h"

template<> void emscripten::internal::raw_destructor<vtkTransformFilter>(vtkTransformFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransformFilter_class) {
  emscripten::class_<vtkTransformFilter, emscripten::base<vtkPointSetAlgorithm>>("vtkTransformFilter")
    .smart_ptr<vtkSmartPointer<vtkTransformFilter>>("vtkSmartPointer<vtkTransformFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTransformFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransformFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransformFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransformFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransformFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransformFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransformFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkTransformFilter::GetMTime)
    .function("SetTransform", &vtkTransformFilter::SetTransform, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkTransformFilter::GetTransform, emscripten::allow_raw_pointers())
    .function("SetOutputPointsPrecision", &vtkTransformFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkTransformFilter::GetOutputPointsPrecision)
    .function("SetTransformAllInputVectors", &vtkTransformFilter::SetTransformAllInputVectors)
    .function("GetTransformAllInputVectors", &vtkTransformFilter::GetTransformAllInputVectors)
    .function("TransformAllInputVectorsOn", &vtkTransformFilter::TransformAllInputVectorsOn)
    .function("TransformAllInputVectorsOff", &vtkTransformFilter::TransformAllInputVectorsOff);
}
