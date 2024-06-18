// JavaScript wrapper for vtkDGAttributeInformation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGAttributeInformationEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGAttributeInformation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDGCell.h"
#include "vtkSmartPointer.h"
#include "vtkCellMetadata.h"
#include "vtkCellAttribute.h"
#include "vtkDGAttributeInformation.h"

template<> void emscripten::internal::raw_destructor<vtkDGAttributeInformation>(vtkDGAttributeInformation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDGAttributeInformation_class) {
  emscripten::class_<vtkDGAttributeInformation, emscripten::base<vtkCellAttributeInformation>>("vtkDGAttributeInformation")
    .smart_ptr<vtkSmartPointer<vtkDGAttributeInformation>>("vtkSmartPointer<vtkDGAttributeInformation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDGAttributeInformation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGAttributeInformation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDGAttributeInformation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDGAttributeInformation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDGAttributeInformation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDGAttributeInformation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDGAttributeInformation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetBasisOrder", &vtkDGAttributeInformation::GetBasisOrder)
    .function("GetBasisValueSize", &vtkDGAttributeInformation::GetBasisValueSize)
    .function("GetNumberOfBasisFunctions", &vtkDGAttributeInformation::GetNumberOfBasisFunctions)
    .function("GetDegreeOfFreedomSize", &vtkDGAttributeInformation::GetDegreeOfFreedomSize)
    .function("GetSharedDegreesOfFreedom", &vtkDGAttributeInformation::GetSharedDegreesOfFreedom)
    .function("GetBasisName", &vtkDGAttributeInformation::GetBasisName)
    .class_function("BasisShapeName", &vtkDGAttributeInformation::BasisShapeName, emscripten::allow_raw_pointers())
    .function("PrepareForGrid", &vtkDGAttributeInformation::PrepareForGrid, emscripten::allow_raw_pointers());
}
