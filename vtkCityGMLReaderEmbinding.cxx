// JavaScript wrapper for vtkCityGMLReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCityGML.js/vtkIOCityGML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCityGML.js/vtkCityGMLReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/CityGML/vtkCityGMLReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCityGMLReader.h"

template<> void emscripten::internal::raw_destructor<vtkCityGMLReader>(vtkCityGMLReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCityGMLReader_class) {
  emscripten::class_<vtkCityGMLReader, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkCityGMLReader")
    .smart_ptr<vtkSmartPointer<vtkCityGMLReader>>("vtkSmartPointer<vtkCityGMLReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCityGMLReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCityGMLReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCityGMLReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCityGMLReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCityGMLReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCityGMLReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCityGMLReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkCityGMLReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkCityGMLReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetLOD", &vtkCityGMLReader::SetLOD)
    .function("GetLODMinValue", &vtkCityGMLReader::GetLODMinValue)
    .function("GetLODMaxValue", &vtkCityGMLReader::GetLODMaxValue)
    .function("GetLOD", &vtkCityGMLReader::GetLOD)
    .function("SetUseTransparencyAsOpacity", &vtkCityGMLReader::SetUseTransparencyAsOpacity)
    .function("GetUseTransparencyAsOpacity", &vtkCityGMLReader::GetUseTransparencyAsOpacity)
    .function("UseTransparencyAsOpacityOn", &vtkCityGMLReader::UseTransparencyAsOpacityOn)
    .function("UseTransparencyAsOpacityOff", &vtkCityGMLReader::UseTransparencyAsOpacityOff)
    .function("SetNumberOfBuildings", &vtkCityGMLReader::SetNumberOfBuildings)
    .function("GetNumberOfBuildings", &vtkCityGMLReader::GetNumberOfBuildings)
    .function("SetBeginBuildingIndex", &vtkCityGMLReader::SetBeginBuildingIndex)
    .function("GetBeginBuildingIndex", &vtkCityGMLReader::GetBeginBuildingIndex)
    .function("SetEndBuildingIndex", &vtkCityGMLReader::SetEndBuildingIndex)
    .function("GetEndBuildingIndex", &vtkCityGMLReader::GetEndBuildingIndex);
}
