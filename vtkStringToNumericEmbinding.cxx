// JavaScript wrapper for vtkStringToNumeric with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkStringToNumericEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkStringToNumeric.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkStringToNumeric.h"

template<> void emscripten::internal::raw_destructor<vtkStringToNumeric>(vtkStringToNumeric * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStringToNumeric_class) {
  emscripten::class_<vtkStringToNumeric, emscripten::base<vtkDataObjectAlgorithm>>("vtkStringToNumeric")
    .smart_ptr<vtkSmartPointer<vtkStringToNumeric>>("vtkSmartPointer<vtkStringToNumeric>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkStringToNumeric>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStringToNumeric::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStringToNumeric& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStringToNumeric::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStringToNumeric::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStringToNumeric::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStringToNumeric& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetForceDouble", &vtkStringToNumeric::SetForceDouble)
    .function("GetForceDouble", &vtkStringToNumeric::GetForceDouble)
    .function("ForceDoubleOn", &vtkStringToNumeric::ForceDoubleOn)
    .function("ForceDoubleOff", &vtkStringToNumeric::ForceDoubleOff)
    .function("SetDefaultIntegerValue", &vtkStringToNumeric::SetDefaultIntegerValue)
    .function("GetDefaultIntegerValue", &vtkStringToNumeric::GetDefaultIntegerValue)
    .function("SetDefaultDoubleValue", &vtkStringToNumeric::SetDefaultDoubleValue)
    .function("GetDefaultDoubleValue", &vtkStringToNumeric::GetDefaultDoubleValue)
    .function("SetTrimWhitespacePriorToNumericConversion", &vtkStringToNumeric::SetTrimWhitespacePriorToNumericConversion)
    .function("GetTrimWhitespacePriorToNumericConversion", &vtkStringToNumeric::GetTrimWhitespacePriorToNumericConversion)
    .function("TrimWhitespacePriorToNumericConversionOn", &vtkStringToNumeric::TrimWhitespacePriorToNumericConversionOn)
    .function("TrimWhitespacePriorToNumericConversionOff", &vtkStringToNumeric::TrimWhitespacePriorToNumericConversionOff)
    .function("SetConvertFieldData", &vtkStringToNumeric::SetConvertFieldData)
    .function("GetConvertFieldData", &vtkStringToNumeric::GetConvertFieldData)
    .function("ConvertFieldDataOn", &vtkStringToNumeric::ConvertFieldDataOn)
    .function("ConvertFieldDataOff", &vtkStringToNumeric::ConvertFieldDataOff)
    .function("SetConvertPointData", &vtkStringToNumeric::SetConvertPointData)
    .function("GetConvertPointData", &vtkStringToNumeric::GetConvertPointData)
    .function("ConvertPointDataOn", &vtkStringToNumeric::ConvertPointDataOn)
    .function("ConvertPointDataOff", &vtkStringToNumeric::ConvertPointDataOff)
    .function("SetConvertCellData", &vtkStringToNumeric::SetConvertCellData)
    .function("GetConvertCellData", &vtkStringToNumeric::GetConvertCellData)
    .function("ConvertCellDataOn", &vtkStringToNumeric::ConvertCellDataOn)
    .function("ConvertCellDataOff", &vtkStringToNumeric::ConvertCellDataOff)
    .function("SetConvertVertexData", &vtkStringToNumeric::SetConvertVertexData)
    .function("GetConvertVertexData", &vtkStringToNumeric::GetConvertVertexData)
    .function("ConvertVertexDataOn", &vtkStringToNumeric::ConvertVertexDataOn)
    .function("ConvertVertexDataOff", &vtkStringToNumeric::ConvertVertexDataOff)
    .function("SetConvertEdgeData", &vtkStringToNumeric::SetConvertEdgeData)
    .function("GetConvertEdgeData", &vtkStringToNumeric::GetConvertEdgeData)
    .function("ConvertEdgeDataOn", &vtkStringToNumeric::ConvertEdgeDataOn)
    .function("ConvertEdgeDataOff", &vtkStringToNumeric::ConvertEdgeDataOff)
    .function("SetConvertRowData", &vtkStringToNumeric::SetConvertRowData)
    .function("GetConvertRowData", &vtkStringToNumeric::GetConvertRowData)
    .function("ConvertRowDataOn", &vtkStringToNumeric::ConvertRowDataOn)
    .function("ConvertRowDataOff", &vtkStringToNumeric::ConvertRowDataOff);
}
