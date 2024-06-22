// JavaScript wrapper for vtkErrorCode with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMisc.js/vtkCommonMisc.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMisc.js/vtkErrorCodeEmbinding.cxx \
 /home/jmh/github/vtk/Common/Misc/vtkErrorCode.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkErrorCode.h"

EMSCRIPTEN_BINDINGS(vtkCommonMisc_vtkErrorCode_class_enums) {
}

EMSCRIPTEN_BINDINGS(vtkErrorCode_class) {
  using ErrorIds=vtkErrorCode::ErrorIds;
  emscripten::class_<vtkErrorCode>("vtkErrorCode")
    .class_function("GetStringFromErrorCode", emscripten::optional_override([]( unsigned long arg_0) -> std::string {  return vtkErrorCode::GetStringFromErrorCode( arg_0);}))
    .class_function("GetErrorCodeFromString", emscripten::optional_override([]( const std::string & arg_0) -> unsigned long {  return vtkErrorCode::GetErrorCodeFromString( arg_0.c_str());}))
    .class_function("GetLastSystemError", &vtkErrorCode::GetLastSystemError);
}
EMSCRIPTEN_BINDINGS(vtkCommonMisc_vtkErrorCode_0_2_constants) {
    typedef vtkErrorCode::ErrorIds cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[11] = {
      { "vtkErrorCode_ErrorIds_NoError", vtkErrorCode::NoError },
      { "vtkErrorCode_ErrorIds_FirstVTKErrorCode", vtkErrorCode::FirstVTKErrorCode },
      { "vtkErrorCode_ErrorIds_FileNotFoundError", vtkErrorCode::FileNotFoundError },
      { "vtkErrorCode_ErrorIds_CannotOpenFileError", vtkErrorCode::CannotOpenFileError },
      { "vtkErrorCode_ErrorIds_UnrecognizedFileTypeError", vtkErrorCode::UnrecognizedFileTypeError },
      { "vtkErrorCode_ErrorIds_PrematureEndOfFileError", vtkErrorCode::PrematureEndOfFileError },
      { "vtkErrorCode_ErrorIds_FileFormatError", vtkErrorCode::FileFormatError },
      { "vtkErrorCode_ErrorIds_NoFileNameError", vtkErrorCode::NoFileNameError },
      { "vtkErrorCode_ErrorIds_OutOfDiskSpaceError", vtkErrorCode::OutOfDiskSpaceError },
      { "vtkErrorCode_ErrorIds_UnknownError", vtkErrorCode::UnknownError },
      { "vtkErrorCode_ErrorIds_UserError", vtkErrorCode::UserError },
  };
  for (int c = 0; c < 11; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
