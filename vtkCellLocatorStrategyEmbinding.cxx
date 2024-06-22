// JavaScript wrapper for vtkCellLocatorStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellLocatorStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellLocatorStrategy.h
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
#include "vtkAbstractCellLocator.h"
#include "vtkFindCellStrategy.h"
#include "vtkCellLocatorStrategy.h"

template<> void emscripten::internal::raw_destructor<vtkCellLocatorStrategy>(vtkCellLocatorStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellLocatorStrategy_class) {
  emscripten::class_<vtkCellLocatorStrategy, emscripten::base<vtkFindCellStrategy>>("vtkCellLocatorStrategy")
    .smart_ptr<vtkSmartPointer<vtkCellLocatorStrategy>>("vtkSmartPointer<vtkCellLocatorStrategy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCellLocatorStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellLocatorStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellLocatorStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellLocatorStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellLocatorStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellLocatorStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellLocatorStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkCellLocatorStrategy::Initialize, emscripten::allow_raw_pointers())
    .function("SetCellLocator", &vtkCellLocatorStrategy::SetCellLocator, emscripten::allow_raw_pointers())
    .function("GetCellLocator", &vtkCellLocatorStrategy::GetCellLocator, emscripten::allow_raw_pointers())
    .function("CopyParameters", &vtkCellLocatorStrategy::CopyParameters, emscripten::allow_raw_pointers());
}
