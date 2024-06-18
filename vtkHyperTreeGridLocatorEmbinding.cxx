// JavaScript wrapper for vtkHyperTreeGridLocator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeGridLocatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTreeGridLocator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"
#include "vtkGenericCell.h"
#include "vtkPoints.h"
#include "vtkIdList.h"
#include "vtkHyperTreeGridLocator.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridLocator>(vtkHyperTreeGridLocator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridLocator_class) {
  emscripten::class_<vtkHyperTreeGridLocator, emscripten::base<vtkObject>>("vtkHyperTreeGridLocator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridLocator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridLocator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridLocator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridLocator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridLocator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridLocator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetHTG", &vtkHyperTreeGridLocator::GetHTG, emscripten::allow_raw_pointers())
    .function("SetHTG", &vtkHyperTreeGridLocator::SetHTG, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkHyperTreeGridLocator::Initialize)
    .function("Update", &vtkHyperTreeGridLocator::Update)
    .function("SetTolerance", &vtkHyperTreeGridLocator::SetTolerance)
    .function("GetTolerance", &vtkHyperTreeGridLocator::GetTolerance);
}
