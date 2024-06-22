// JavaScript wrapper for vtkImageReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkImageReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkImageReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTransform.h"
#include "vtkImageReader.h"

EMSCRIPTEN_BINDINGS(vtkIOImage_vtkImageReader_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_FILE_BYTE_ORDER_BIG_ENDIAN", 0 },
      { "VTK_FILE_BYTE_ORDER_LITTLE_ENDIAN", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkImageReader>(vtkImageReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageReader_class) {
  emscripten::class_<vtkImageReader, emscripten::base<vtkImageReader2>>("vtkImageReader")
    .smart_ptr<vtkSmartPointer<vtkImageReader>>("vtkSmartPointer<vtkImageReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDataVOI", emscripten::select_overload<void(vtkImageReader&, int, int, int, int, int, int)>([](vtkImageReader& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetDataVOI( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetDataMask", &vtkImageReader::GetDataMask)
    .function("SetDataMask", &vtkImageReader::SetDataMask)
    .function("SetTransform", &vtkImageReader::SetTransform, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkImageReader::GetTransform, emscripten::allow_raw_pointers())
    .function("SetScalarArrayName", emscripten::optional_override([](vtkImageReader& self, const std::string & arg_0) -> void {  return self.SetScalarArrayName( arg_0.c_str());}))
    .function("GetScalarArrayName", emscripten::optional_override([](vtkImageReader& self) -> std::string {  return self.GetScalarArrayName();}))
    .function("CanReadFile", emscripten::optional_override([](vtkImageReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}));
}
