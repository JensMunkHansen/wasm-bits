// JavaScript wrapper for vtkPTSReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkPTSReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkPTSReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPTSReader.h"

template<> void emscripten::internal::raw_destructor<vtkPTSReader>(vtkPTSReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPTSReader_class) {
  emscripten::class_<vtkPTSReader, emscripten::base<vtkPolyDataAlgorithm>>("vtkPTSReader")
    .smart_ptr<vtkSmartPointer<vtkPTSReader>>("vtkSmartPointer<vtkPTSReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPTSReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPTSReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPTSReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPTSReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPTSReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPTSReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPTSReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkPTSReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkPTSReader& self) -> std::string {  return self.GetFileName();}))
    .function("LimitReadToBoundsOn", &vtkPTSReader::LimitReadToBoundsOn)
    .function("LimitReadToBoundsOff", &vtkPTSReader::LimitReadToBoundsOff)
    .function("SetLimitReadToBounds", &vtkPTSReader::SetLimitReadToBounds)
    .function("GetLimitReadToBounds", &vtkPTSReader::GetLimitReadToBounds)
    .function("SetReadBounds", emscripten::select_overload<void(vtkPTSReader&, double, double, double, double, double, double)>([](vtkPTSReader& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetReadBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("OutputDataTypeIsDoubleOn", &vtkPTSReader::OutputDataTypeIsDoubleOn)
    .function("OutputDataTypeIsDoubleOff", &vtkPTSReader::OutputDataTypeIsDoubleOff)
    .function("SetOutputDataTypeIsDouble", &vtkPTSReader::SetOutputDataTypeIsDouble)
    .function("GetOutputDataTypeIsDouble", &vtkPTSReader::GetOutputDataTypeIsDouble)
    .function("LimitToMaxNumberOfPointsOn", &vtkPTSReader::LimitToMaxNumberOfPointsOn)
    .function("LimitToMaxNumberOfPointsOff", &vtkPTSReader::LimitToMaxNumberOfPointsOff)
    .function("SetLimitToMaxNumberOfPoints", &vtkPTSReader::SetLimitToMaxNumberOfPoints)
    .function("GetLimitToMaxNumberOfPoints", &vtkPTSReader::GetLimitToMaxNumberOfPoints)
    .function("SetMaxNumberOfPoints", &vtkPTSReader::SetMaxNumberOfPoints)
    .function("GetMaxNumberOfPointsMinValue", &vtkPTSReader::GetMaxNumberOfPointsMinValue)
    .function("GetMaxNumberOfPointsMaxValue", &vtkPTSReader::GetMaxNumberOfPointsMaxValue)
    .function("GetMaxNumberOfPoints", &vtkPTSReader::GetMaxNumberOfPoints)
    .function("CreateCellsOn", &vtkPTSReader::CreateCellsOn)
    .function("CreateCellsOff", &vtkPTSReader::CreateCellsOff)
    .function("SetCreateCells", &vtkPTSReader::SetCreateCells)
    .function("GetCreateCells", &vtkPTSReader::GetCreateCells)
    .function("IncludeColorAndLuminanceOn", &vtkPTSReader::IncludeColorAndLuminanceOn)
    .function("IncludeColorAndLuminanceOff", &vtkPTSReader::IncludeColorAndLuminanceOff)
    .function("SetIncludeColorAndLuminance", &vtkPTSReader::SetIncludeColorAndLuminance)
    .function("GetIncludeColorAndLuminance", &vtkPTSReader::GetIncludeColorAndLuminance);
}
