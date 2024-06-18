// JavaScript wrapper for vtkClosestPointStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkClosestPointStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkClosestPointStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointSet.h"
#include "vtkCell.h"
#include "vtkGenericCell.h"
#include "vtkAbstractPointLocator.h"
#include "vtkFindCellStrategy.h"
#include "vtkClosestPointStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkClosestPointStrategy>(vtkClosestPointStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkClosestPointStrategy_class) {
  emscripten::class_<vtkClosestPointStrategy, emscripten::base<vtkFindCellStrategy>>("vtkClosestPointStrategy")
    .smart_ptr<vtkSmartPointer<vtkClosestPointStrategy>>("vtkSmartPointer<vtkClosestPointStrategy>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkClosestPointStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClosestPointStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkClosestPointStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkClosestPointStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkClosestPointStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClosestPointStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkClosestPointStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkClosestPointStrategy::Initialize, emscripten::allow_raw_pointers())
    .function("SetPointLocator", &vtkClosestPointStrategy::SetPointLocator, emscripten::allow_raw_pointers())
    .function("GetPointLocator", &vtkClosestPointStrategy::GetPointLocator, emscripten::allow_raw_pointers())
    .function("SelectCell", &vtkClosestPointStrategy::SelectCell, emscripten::allow_raw_pointers())
    .function("CopyParameters", &vtkClosestPointStrategy::CopyParameters, emscripten::allow_raw_pointers());
}
