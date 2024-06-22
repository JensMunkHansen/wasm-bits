// JavaScript wrapper for vtkIVWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIVWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkIVWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkIVWriter.h"

template<> void emscripten::internal::raw_destructor<vtkIVWriter>(vtkIVWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIVWriter_class) {
  emscripten::class_<vtkIVWriter, emscripten::base<vtkWriter>>("vtkIVWriter")
    .smart_ptr<vtkSmartPointer<vtkIVWriter>>("vtkSmartPointer<vtkIVWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkIVWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIVWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIVWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIVWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIVWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIVWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIVWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkIVWriter&)>([](vtkIVWriter& self) -> vtkPolyData* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkIVWriter&, int)>([](vtkIVWriter& self, int arg_0) -> vtkPolyData* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetFileName", emscripten::optional_override([](vtkIVWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkIVWriter& self) -> std::string {  return self.GetFileName();}));
}
