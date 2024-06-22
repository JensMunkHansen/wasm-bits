// JavaScript wrapper for vtkHyperTreeGridGeometricLocator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeGridGeometricLocatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTreeGridGeometricLocator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"
#include "vtkHyperTreeGridNonOrientedGeometryCursor.h"
#include "vtkGenericCell.h"
#include "vtkPoints.h"
#include "vtkIdList.h"
#include "vtkHyperTreeGridGeometricLocator.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridGeometricLocator>(vtkHyperTreeGridGeometricLocator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridGeometricLocator_class) {
  emscripten::class_<vtkHyperTreeGridGeometricLocator, emscripten::base<vtkHyperTreeGridLocator>>("vtkHyperTreeGridGeometricLocator")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridGeometricLocator>>("vtkSmartPointer<vtkHyperTreeGridGeometricLocator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridGeometricLocator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridGeometricLocator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridGeometricLocator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridGeometricLocator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridGeometricLocator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridGeometricLocator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridGeometricLocator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetHTG", &vtkHyperTreeGridGeometricLocator::SetHTG, emscripten::allow_raw_pointers());
}
