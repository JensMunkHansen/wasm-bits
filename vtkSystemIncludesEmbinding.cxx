// JavaScript wrapper for vtkSystemIncludes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkSystemIncludesEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkSystemIncludes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkSystemIncludes.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkSystemIncludes_0_1_constants) {
  const struct { const char *name; int value; }
    constants[51] = {
      { "VTK_OK", 1 },
      { "VTK_ERROR", 2 },
      { "VTK_ARIAL", 0 },
      { "VTK_COURIER", 1 },
      { "VTK_TIMES", 2 },
      { "VTK_UNKNOWN_FONT", 3 },
      { "VTK_FONT_FILE", 4 },
      { "VTK_TEXT_LEFT", 0 },
      { "VTK_TEXT_CENTERED", 1 },
      { "VTK_TEXT_RIGHT", 2 },
      { "VTK_TEXT_BOTTOM", 0 },
      { "VTK_TEXT_TOP", 2 },
      { "VTK_TEXT_GLOBAL_ANTIALIASING_SOME", 0 },
      { "VTK_TEXT_GLOBAL_ANTIALIASING_NONE", 1 },
      { "VTK_TEXT_GLOBAL_ANTIALIASING_ALL", 2 },
      { "VTK_LUMINANCE", 1 },
      { "VTK_LUMINANCE_ALPHA", 2 },
      { "VTK_RGB", 3 },
      { "VTK_RGBA", 4 },
      { "VTK_COLOR_MODE_DEFAULT", 0 },
      { "VTK_COLOR_MODE_MAP_SCALARS", 1 },
      { "VTK_COLOR_MODE_DIRECT_SCALARS", 2 },
      { "VTK_NEAREST_INTERPOLATION", 0 },
      { "VTK_LINEAR_INTERPOLATION", 1 },
      { "VTK_CUBIC_INTERPOLATION", 2 },
      { "VTK_IMAGE_SLAB_MIN", 0 },
      { "VTK_IMAGE_SLAB_MAX", 1 },
      { "VTK_IMAGE_SLAB_MEAN", 2 },
      { "VTK_IMAGE_SLAB_SUM", 3 },
      { "VTK_MAX_VRCOMP", 4 },
      { "VTK_ENCODING_NONE", 0 },
      { "VTK_ENCODING_US_ASCII", 1 },
      { "VTK_ENCODING_UNICODE", 2 },
      { "VTK_ENCODING_UTF_8", 3 },
      { "VTK_ENCODING_ISO_8859_1", 4 },
      { "VTK_ENCODING_ISO_8859_2", 5 },
      { "VTK_ENCODING_ISO_8859_3", 6 },
      { "VTK_ENCODING_ISO_8859_4", 7 },
      { "VTK_ENCODING_ISO_8859_5", 8 },
      { "VTK_ENCODING_ISO_8859_6", 9 },
      { "VTK_ENCODING_ISO_8859_7", 10 },
      { "VTK_ENCODING_ISO_8859_8", 11 },
      { "VTK_ENCODING_ISO_8859_9", 12 },
      { "VTK_ENCODING_ISO_8859_10", 13 },
      { "VTK_ENCODING_ISO_8859_11", 14 },
      { "VTK_ENCODING_ISO_8859_12", 15 },
      { "VTK_ENCODING_ISO_8859_13", 16 },
      { "VTK_ENCODING_ISO_8859_14", 17 },
      { "VTK_ENCODING_ISO_8859_15", 18 },
      { "VTK_ENCODING_ISO_8859_16", 19 },
      { "VTK_ENCODING_UNKNOWN", 20 },
  };
  for (int c = 0; c < 51; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
