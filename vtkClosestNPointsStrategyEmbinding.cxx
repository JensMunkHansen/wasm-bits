// JavaScript wrapper for vtkClosestNPointsStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkClosestNPointsStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkClosestNPointsStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCell.h"
#include "vtkGenericCell.h"
#include "vtkFindCellStrategy.h"
#include "vtkPointSet.h"
#include "vtkClosestNPointsStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkClosestNPointsStrategy>(vtkClosestNPointsStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkClosestNPointsStrategy_class) {
  emscripten::class_<vtkClosestNPointsStrategy, emscripten::base<vtkClosestPointStrategy>>("vtkClosestNPointsStrategy")
    .smart_ptr<vtkSmartPointer<vtkClosestNPointsStrategy>>("vtkSmartPointer<vtkClosestNPointsStrategy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkClosestNPointsStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClosestNPointsStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkClosestNPointsStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkClosestNPointsStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkClosestNPointsStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClosestNPointsStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkClosestNPointsStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetClosestNPoints", &vtkClosestNPointsStrategy::SetClosestNPoints)
    .function("GetClosestNPointsMinValue", &vtkClosestNPointsStrategy::GetClosestNPointsMinValue)
    .function("GetClosestNPointsMaxValue", &vtkClosestNPointsStrategy::GetClosestNPointsMaxValue)
    .function("GetClosestNPoints", &vtkClosestNPointsStrategy::GetClosestNPoints)
    .function("CopyParameters", &vtkClosestNPointsStrategy::CopyParameters, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkClosestNPointsStrategy::Initialize, emscripten::allow_raw_pointers());
}
