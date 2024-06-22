// JavaScript wrapper for vtkPolyDataReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkPolyDataReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkPolyDataReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkDataObject.h"
#include "vtkPolyDataReader.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataReader>(vtkPolyDataReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataReader_class) {
  emscripten::class_<vtkPolyDataReader, emscripten::base<vtkDataReader>>("vtkPolyDataReader")
    .smart_ptr<vtkSmartPointer<vtkPolyDataReader>>("vtkSmartPointer<vtkPolyDataReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolyDataReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkPolyData*(vtkPolyDataReader&)>([](vtkPolyDataReader& self) -> vtkPolyData* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkPolyData*(vtkPolyDataReader&, int)>([](vtkPolyDataReader& self, int arg_0) -> vtkPolyData* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkPolyDataReader::SetOutput, emscripten::allow_raw_pointers())
    .function("ReadMeshSimple", &vtkPolyDataReader::ReadMeshSimple, emscripten::allow_raw_pointers());
}
