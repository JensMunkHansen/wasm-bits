// JavaScript wrapper for vtkFindCellStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkFindCellStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkFindCellStrategy.h
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
#include "vtkFindCellStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkFindCellStrategy>(vtkFindCellStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFindCellStrategy_class) {
  emscripten::class_<vtkFindCellStrategy, emscripten::base<vtkObject>>("vtkFindCellStrategy")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFindCellStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFindCellStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFindCellStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFindCellStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFindCellStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFindCellStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkFindCellStrategy::Initialize, emscripten::allow_raw_pointers())
    .function("CopyParameters", &vtkFindCellStrategy::CopyParameters, emscripten::allow_raw_pointers());
}
