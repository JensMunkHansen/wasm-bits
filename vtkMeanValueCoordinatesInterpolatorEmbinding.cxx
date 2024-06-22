// JavaScript wrapper for vtkMeanValueCoordinatesInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkMeanValueCoordinatesInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkMeanValueCoordinatesInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkIdList.h"
#include "vtkCellArray.h"
#include "vtkMeanValueCoordinatesInterpolator.h"

template<> void emscripten::internal::raw_destructor<vtkMeanValueCoordinatesInterpolator>(vtkMeanValueCoordinatesInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMeanValueCoordinatesInterpolator_class) {
  emscripten::class_<vtkMeanValueCoordinatesInterpolator, emscripten::base<vtkObject>>("vtkMeanValueCoordinatesInterpolator")
    .smart_ptr<vtkSmartPointer<vtkMeanValueCoordinatesInterpolator>>("vtkSmartPointer<vtkMeanValueCoordinatesInterpolator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMeanValueCoordinatesInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMeanValueCoordinatesInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMeanValueCoordinatesInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMeanValueCoordinatesInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMeanValueCoordinatesInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMeanValueCoordinatesInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMeanValueCoordinatesInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
