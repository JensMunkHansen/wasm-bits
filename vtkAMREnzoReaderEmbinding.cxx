// JavaScript wrapper for vtkAMREnzoReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkIOAMR.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkAMREnzoReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/AMR/vtkAMREnzoReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAMREnzoReader.h"

template<> void emscripten::internal::raw_destructor<vtkAMREnzoReader>(vtkAMREnzoReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMREnzoReader_class) {
  emscripten::class_<vtkAMREnzoReader, emscripten::base<vtkAMRBaseReader>>("vtkAMREnzoReader")
    .smart_ptr<vtkSmartPointer<vtkAMREnzoReader>>("vtkSmartPointer<vtkAMREnzoReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAMREnzoReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMREnzoReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMREnzoReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMREnzoReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMREnzoReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMREnzoReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMREnzoReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetConvertToCGS", &vtkAMREnzoReader::SetConvertToCGS)
    .function("GetConvertToCGS", &vtkAMREnzoReader::GetConvertToCGS)
    .function("ConvertToCGSOn", &vtkAMREnzoReader::ConvertToCGSOn)
    .function("ConvertToCGSOff", &vtkAMREnzoReader::ConvertToCGSOff)
    .function("GetNumberOfBlocks", &vtkAMREnzoReader::GetNumberOfBlocks)
    .function("GetNumberOfLevels", &vtkAMREnzoReader::GetNumberOfLevels)
    .function("SetFileName", emscripten::optional_override([](vtkAMREnzoReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}));
}
