// JavaScript wrapper for vtkBiomTableReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkIOInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOInfovis.js/vtkBiomTableReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Infovis/vtkBiomTableReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTable.h"
#include "vtkDataObject.h"
#include "vtkBiomTableReader.h"

template<> void emscripten::internal::raw_destructor<vtkBiomTableReader>(vtkBiomTableReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBiomTableReader_class) {
  emscripten::class_<vtkBiomTableReader, emscripten::base<vtkTableReader>>("vtkBiomTableReader")
    .smart_ptr<vtkSmartPointer<vtkBiomTableReader>>("vtkSmartPointer<vtkBiomTableReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBiomTableReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBiomTableReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBiomTableReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBiomTableReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBiomTableReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBiomTableReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBiomTableReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkTable*(vtkBiomTableReader&)>([](vtkBiomTableReader& self) -> vtkTable* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkTable*(vtkBiomTableReader&, int)>([](vtkBiomTableReader& self, int arg_0) -> vtkTable* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkBiomTableReader::SetOutput, emscripten::allow_raw_pointers())
    .function("ReadMeshSimple", &vtkBiomTableReader::ReadMeshSimple, emscripten::allow_raw_pointers());
}
