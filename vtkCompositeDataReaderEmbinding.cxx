// JavaScript wrapper for vtkCompositeDataReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkCompositeDataReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkCompositeDataReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCompositeDataSet.h"
#include "vtkDataObject.h"
#include "vtkCompositeDataReader.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeDataReader>(vtkCompositeDataReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeDataReader_class) {
  emscripten::class_<vtkCompositeDataReader, emscripten::base<vtkDataReader>>("vtkCompositeDataReader")
    .smart_ptr<vtkSmartPointer<vtkCompositeDataReader>>("vtkSmartPointer<vtkCompositeDataReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCompositeDataReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeDataReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeDataReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeDataReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeDataReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkCompositeDataSet*(vtkCompositeDataReader&)>([](vtkCompositeDataReader& self) -> vtkCompositeDataSet* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkCompositeDataSet*(vtkCompositeDataReader&, int)>([](vtkCompositeDataReader& self, int arg_0) -> vtkCompositeDataSet* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkCompositeDataReader::SetOutput, emscripten::allow_raw_pointers())
    .function("ReadMeshSimple", &vtkCompositeDataReader::ReadMeshSimple, emscripten::allow_raw_pointers());
}
