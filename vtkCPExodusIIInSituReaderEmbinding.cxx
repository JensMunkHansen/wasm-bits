// JavaScript wrapper for vtkCPExodusIIInSituReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExodus.js/vtkIOExodus.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExodus.js/vtkCPExodusIIInSituReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Exodus/vtkCPExodusIIInSituReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCPExodusIIInSituReader.h"

template<> void emscripten::internal::raw_destructor<vtkCPExodusIIInSituReader>(vtkCPExodusIIInSituReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCPExodusIIInSituReader_class) {
  emscripten::class_<vtkCPExodusIIInSituReader, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkCPExodusIIInSituReader")
    .smart_ptr<vtkSmartPointer<vtkCPExodusIIInSituReader>>("vtkSmartPointer<vtkCPExodusIIInSituReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCPExodusIIInSituReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCPExodusIIInSituReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCPExodusIIInSituReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCPExodusIIInSituReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCPExodusIIInSituReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCPExodusIIInSituReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCPExodusIIInSituReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkCPExodusIIInSituReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkCPExodusIIInSituReader& self) -> std::string {  return self.GetFileName();}))
    .function("GetCurrentTimeStep", &vtkCPExodusIIInSituReader::GetCurrentTimeStep)
    .function("SetCurrentTimeStep", &vtkCPExodusIIInSituReader::SetCurrentTimeStep)
    .function("GetTimeStepValue", &vtkCPExodusIIInSituReader::GetTimeStepValue);
}
