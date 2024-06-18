// JavaScript wrapper for vtkIOSSCellGridReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOIOSS.js/vtkIOIOSS.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOIOSS.js/vtkIOSSCellGridReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/IOSS/vtkIOSSCellGridReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkDataObject.h"
#include "vtkIOSSCellGridReader.h"

template<> void emscripten::internal::raw_destructor<vtkIOSSCellGridReader>(vtkIOSSCellGridReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIOSSCellGridReader_class) {
  emscripten::class_<vtkIOSSCellGridReader, emscripten::base<vtkIOSSReader>>("vtkIOSSCellGridReader")
    .smart_ptr<vtkSmartPointer<vtkIOSSCellGridReader>>("vtkSmartPointer<vtkIOSSCellGridReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkIOSSCellGridReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIOSSCellGridReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIOSSCellGridReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIOSSCellGridReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIOSSCellGridReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIOSSCellGridReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIOSSCellGridReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReadMetaData", &vtkIOSSCellGridReader::ReadMetaData, emscripten::allow_raw_pointers())
    .function("ReadMesh", &vtkIOSSCellGridReader::ReadMesh, emscripten::allow_raw_pointers())
    .function("ReadPoints", &vtkIOSSCellGridReader::ReadPoints, emscripten::allow_raw_pointers())
    .function("ReadArrays", &vtkIOSSCellGridReader::ReadArrays, emscripten::allow_raw_pointers());
}
