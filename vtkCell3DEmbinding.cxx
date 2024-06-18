// JavaScript wrapper for vtkCell3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCell3DEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCell3D.h
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
#include "vtkCell3D.h"

template<> void emscripten::internal::raw_destructor<vtkCell3D>(vtkCell3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCell3D_class) {
  emscripten::class_<vtkCell3D, emscripten::base<vtkCell>>("vtkCell3D")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCell3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCell3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCell3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCell3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCell3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCell3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsInsideOut", &vtkCell3D::IsInsideOut)
    .function("Contour", &vtkCell3D::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkCell3D::Clip, emscripten::allow_raw_pointers())
    .function("GetCellDimension", &vtkCell3D::GetCellDimension)
    .function("Inflate", &vtkCell3D::Inflate)
    .function("SetMergeTolerance", &vtkCell3D::SetMergeTolerance)
    .function("GetMergeToleranceMinValue", &vtkCell3D::GetMergeToleranceMinValue)
    .function("GetMergeToleranceMaxValue", &vtkCell3D::GetMergeToleranceMaxValue)
    .function("GetMergeTolerance", &vtkCell3D::GetMergeTolerance);
}
