// JavaScript wrapper for vtkMergePoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkMergePointsEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkMergePoints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMergePoints.h"

template<> void emscripten::internal::raw_destructor<vtkMergePoints>(vtkMergePoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMergePoints_class) {
  emscripten::class_<vtkMergePoints, emscripten::base<vtkPointLocator>>("vtkMergePoints")
    .smart_ptr<vtkSmartPointer<vtkMergePoints>>("vtkSmartPointer<vtkMergePoints>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMergePoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergePoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMergePoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMergePoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMergePoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergePoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMergePoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsInsertedPoint", emscripten::select_overload<int(vtkMergePoints&, double, double, double)>([](vtkMergePoints& self, double arg_0, double arg_1, double arg_2) -> int { return self.IsInsertedPoint( arg_0, arg_1, arg_2); }));
}
