// JavaScript wrapper for vtkGenericMovieWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMovie.js/vtkIOMovie.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMovie.js/vtkGenericMovieWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Movie/vtkGenericMovieWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericMovieWriter.h"

EMSCRIPTEN_BINDINGS(vtkIOMovie_vtkGenericMovieWriter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkGenericMovieWriter>(vtkGenericMovieWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericMovieWriter_class) {
  using MovieWriterErrorIds=vtkGenericMovieWriter::MovieWriterErrorIds;
  emscripten::class_<vtkGenericMovieWriter, emscripten::base<vtkImageAlgorithm>>("vtkGenericMovieWriter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericMovieWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericMovieWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericMovieWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericMovieWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericMovieWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericMovieWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkGenericMovieWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkGenericMovieWriter& self) -> std::string {  return self.GetFileName();}))
    .function("GetError", &vtkGenericMovieWriter::GetError)
    .class_function("GetStringFromErrorCode", emscripten::optional_override([]( unsigned long arg_0) -> std::string {  return vtkGenericMovieWriter::GetStringFromErrorCode( arg_0);}));
}
EMSCRIPTEN_BINDINGS(vtkIOMovie_vtkGenericMovieWriter_0_2_constants) {
    typedef vtkGenericMovieWriter::MovieWriterErrorIds cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[6] = {
      { "vtkGenericMovieWriter_MovieWriterErrorIds_UserError", vtkGenericMovieWriter::UserError },
      { "vtkGenericMovieWriter_MovieWriterErrorIds_InitError", vtkGenericMovieWriter::InitError },
      { "vtkGenericMovieWriter_MovieWriterErrorIds_NoInputError", vtkGenericMovieWriter::NoInputError },
      { "vtkGenericMovieWriter_MovieWriterErrorIds_CanNotCompress", vtkGenericMovieWriter::CanNotCompress },
      { "vtkGenericMovieWriter_MovieWriterErrorIds_CanNotFormat", vtkGenericMovieWriter::CanNotFormat },
      { "vtkGenericMovieWriter_MovieWriterErrorIds_ChangedResolutionError", vtkGenericMovieWriter::ChangedResolutionError },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
