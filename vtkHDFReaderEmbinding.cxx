// JavaScript wrapper for vtkHDFReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOHDF.js/vtkIOHDF.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOHDF.js/vtkHDFReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/HDF/vtkHDFReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkDataArraySelection.h"
#include "vtkHDFReader.h"

template<> void emscripten::internal::raw_destructor<vtkHDFReader>(vtkHDFReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHDFReader_class) {
  emscripten::class_<vtkHDFReader, emscripten::base<vtkDataObjectAlgorithm>>("vtkHDFReader")
    .smart_ptr<vtkSmartPointer<vtkHDFReader>>("vtkSmartPointer<vtkHDFReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHDFReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHDFReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHDFReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHDFReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHDFReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHDFReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHDFReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkHDFReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkHDFReader& self) -> std::string {  return self.GetFileName();}))
    .function("CanReadFile", emscripten::optional_override([](vtkHDFReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetOutputAsDataSet", emscripten::select_overload<vtkDataSet*(vtkHDFReader&)>([](vtkHDFReader& self) -> vtkDataSet* { return self.GetOutputAsDataSet(); }), emscripten::allow_raw_pointers())
    .function("GetOutputAsDataSet", emscripten::select_overload<vtkDataSet*(vtkHDFReader&, int)>([](vtkHDFReader& self, int arg_0) -> vtkDataSet* { return self.GetOutputAsDataSet( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetPointDataArraySelection", &vtkHDFReader::GetPointDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetCellDataArraySelection", &vtkHDFReader::GetCellDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetFieldDataArraySelection", &vtkHDFReader::GetFieldDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetNumberOfPointArrays", &vtkHDFReader::GetNumberOfPointArrays)
    .function("GetNumberOfCellArrays", &vtkHDFReader::GetNumberOfCellArrays)
    .function("GetPointArrayName", emscripten::optional_override([](vtkHDFReader& self, int arg_0) -> std::string {  return self.GetPointArrayName( arg_0);}))
    .function("GetCellArrayName", emscripten::optional_override([](vtkHDFReader& self, int arg_0) -> std::string {  return self.GetCellArrayName( arg_0);}))
    .function("GetHasTemporalData", &vtkHDFReader::GetHasTemporalData)
    .function("GetNumberOfSteps", &vtkHDFReader::GetNumberOfSteps)
    .function("GetStep", &vtkHDFReader::GetStep)
    .function("SetStep", &vtkHDFReader::SetStep)
    .function("GetTimeValue", &vtkHDFReader::GetTimeValue)
    .function("GetUseCache", &vtkHDFReader::GetUseCache)
    .function("SetUseCache", &vtkHDFReader::SetUseCache)
    .function("UseCacheOn", &vtkHDFReader::UseCacheOn)
    .function("UseCacheOff", &vtkHDFReader::UseCacheOff)
    .function("GetMergeParts", &vtkHDFReader::GetMergeParts)
    .function("SetMergeParts", &vtkHDFReader::SetMergeParts)
    .function("MergePartsOn", &vtkHDFReader::MergePartsOn)
    .function("MergePartsOff", &vtkHDFReader::MergePartsOff)
    .function("SetMaximumLevelsToReadByDefaultForAMR", &vtkHDFReader::SetMaximumLevelsToReadByDefaultForAMR)
    .function("GetMaximumLevelsToReadByDefaultForAMR", &vtkHDFReader::GetMaximumLevelsToReadByDefaultForAMR)
    .function("GetAttributeOriginalIdName", &vtkHDFReader::GetAttributeOriginalIdName)
    .function("SetAttributeOriginalIdName", &vtkHDFReader::SetAttributeOriginalIdName);
}
