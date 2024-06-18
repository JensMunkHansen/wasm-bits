// JavaScript wrapper for vtkNonLinearCell with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkNonLinearCellEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkNonLinearCell.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkCellArray.h"
#include "vtkPointData.h"
#include "vtkCellData.h"
#include "vtkNonLinearCell.h"

template<> void emscripten::internal::raw_destructor<vtkNonLinearCell>(vtkNonLinearCell * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNonLinearCell_class) {
  emscripten::class_<vtkNonLinearCell, emscripten::base<vtkCell>>("vtkNonLinearCell")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNonLinearCell::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNonLinearCell& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNonLinearCell::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNonLinearCell::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNonLinearCell::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNonLinearCell& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsLinear", &vtkNonLinearCell::IsLinear)
    .function("StableClip", &vtkNonLinearCell::StableClip, emscripten::allow_raw_pointers());
}
