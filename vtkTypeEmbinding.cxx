// JavaScript wrapper for vtkType with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkTypeEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkType.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkType.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_0_1_constants) {
  const struct { const char *name; int value; }
    constants[81] = {
      { "VTK_SIZEOF_CHAR", KWIML_ABI_SIZEOF_CHAR },
      { "VTK_SIZEOF_SHORT", KWIML_ABI_SIZEOF_SHORT },
      { "VTK_SIZEOF_INT", KWIML_ABI_SIZEOF_INT },
      { "VTK_SIZEOF_LONG", KWIML_ABI_SIZEOF_LONG },
      { "VTK_SIZEOF_LONG_LONG", KWIML_ABI_SIZEOF_LONG_LONG },
      { "VTK_SIZEOF_FLOAT", KWIML_ABI_SIZEOF_FLOAT },
      { "VTK_SIZEOF_DOUBLE", KWIML_ABI_SIZEOF_DOUBLE },
      { "VTK_SIZEOF_VOID_P", KWIML_ABI_SIZEOF_DATA_PTR },
      { "VTK_TYPE_CHAR_IS_SIGNED", 1 },
      { "VTK_VOID", 0 },
      { "VTK_BIT", 1 },
      { "VTK_CHAR", 2 },
      { "VTK_SIGNED_CHAR", 15 },
      { "VTK_UNSIGNED_CHAR", 3 },
      { "VTK_SHORT", 4 },
      { "VTK_UNSIGNED_SHORT", 5 },
      { "VTK_INT", 6 },
      { "VTK_UNSIGNED_INT", 7 },
      { "VTK_LONG", 8 },
      { "VTK_UNSIGNED_LONG", 9 },
      { "VTK_FLOAT", 10 },
      { "VTK_DOUBLE", 11 },
      { "VTK_ID_TYPE", 12 },
      { "VTK_STRING", 13 },
      { "VTK_OPAQUE", 14 },
      { "VTK_LONG_LONG", 16 },
      { "VTK_UNSIGNED_LONG_LONG", 17 },
      { "VTK_VARIANT", 20 },
      { "VTK_OBJECT", 21 },
      { "VTK_POLY_DATA", 0 },
      { "VTK_STRUCTURED_POINTS", 1 },
      { "VTK_STRUCTURED_GRID", 2 },
      { "VTK_RECTILINEAR_GRID", 3 },
      { "VTK_UNSTRUCTURED_GRID", 4 },
      { "VTK_PIECEWISE_FUNCTION", 5 },
      { "VTK_IMAGE_DATA", 6 },
      { "VTK_DATA_OBJECT", 7 },
      { "VTK_DATA_SET", 8 },
      { "VTK_POINT_SET", 9 },
      { "VTK_UNIFORM_GRID", 10 },
      { "VTK_COMPOSITE_DATA_SET", 11 },
      { "VTK_MULTIGROUP_DATA_SET", 12 },
      { "VTK_MULTIBLOCK_DATA_SET", 13 },
      { "VTK_HIERARCHICAL_DATA_SET", 14 },
      { "VTK_HIERARCHICAL_BOX_DATA_SET", 15 },
      { "VTK_GENERIC_DATA_SET", 16 },
      { "VTK_HYPER_OCTREE", 17 },
      { "VTK_TEMPORAL_DATA_SET", 18 },
      { "VTK_TABLE", 19 },
      { "VTK_GRAPH", 20 },
      { "VTK_TREE", 21 },
      { "VTK_SELECTION", 22 },
      { "VTK_DIRECTED_GRAPH", 23 },
      { "VTK_UNDIRECTED_GRAPH", 24 },
      { "VTK_MULTIPIECE_DATA_SET", 25 },
      { "VTK_DIRECTED_ACYCLIC_GRAPH", 26 },
      { "VTK_ARRAY_DATA", 27 },
      { "VTK_REEB_GRAPH", 28 },
      { "VTK_UNIFORM_GRID_AMR", 29 },
      { "VTK_NON_OVERLAPPING_AMR", 30 },
      { "VTK_OVERLAPPING_AMR", 31 },
      { "VTK_HYPER_TREE_GRID", 32 },
      { "VTK_MOLECULE", 33 },
      { "VTK_PISTON_DATA_OBJECT", 34 },
      { "VTK_PATH", 35 },
      { "VTK_UNSTRUCTURED_GRID_BASE", 36 },
      { "VTK_PARTITIONED_DATA_SET", 37 },
      { "VTK_PARTITIONED_DATA_SET_COLLECTION", 38 },
      { "VTK_UNIFORM_HYPER_TREE_GRID", 39 },
      { "VTK_EXPLICIT_STRUCTURED_GRID", 40 },
      { "VTK_DATA_OBJECT_TREE", 41 },
      { "VTK_ABSTRACT_ELECTRONIC_DATA", 42 },
      { "VTK_OPEN_QUBE_ELECTRONIC_DATA", 43 },
      { "VTK_ANNOTATION", 44 },
      { "VTK_ANNOTATION_LAYERS", 45 },
      { "VTK_BSP_CUTS", 46 },
      { "VTK_GEO_JSON_FEATURE", 47 },
      { "VTK_IMAGE_STENCIL_DATA", 48 },
      { "VTK_CELL_GRID", 49 },
      { "VTK_BIT_MIN", 0 },
      { "VTK_BIT_MAX", 1 },
  };
  for (int c = 0; c < 81; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_1_1_constants) {
  const struct { const char *name; char value; }
    constants[2] = {
      { "VTK_CHAR_MIN", VTK_TYPE_CAST(char, 0x80) },
      { "VTK_CHAR_MAX", VTK_TYPE_CAST(char, 0x7f) },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_2_1_constants) {
  const struct { const char *name; signed char value; }
    constants[2] = {
      { "VTK_SIGNED_CHAR_MIN", VTK_TYPE_CAST(signed char, 0x80) },
      { "VTK_SIGNED_CHAR_MAX", VTK_TYPE_CAST(signed char, 0x7f) },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_3_1_constants) {
  const struct { const char *name; unsigned char value; }
    constants[2] = {
      { "VTK_UNSIGNED_CHAR_MIN", VTK_TYPE_CAST(unsigned char, 0u) },
      { "VTK_UNSIGNED_CHAR_MAX", VTK_TYPE_CAST(unsigned char, 0xffu) },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_4_1_constants) {
  const struct { const char *name; short value; }
    constants[2] = {
      { "VTK_SHORT_MIN", VTK_TYPE_CAST(short, 0x8000) },
      { "VTK_SHORT_MAX", VTK_TYPE_CAST(short, 0x7fff) },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_5_1_constants) {
  const struct { const char *name; unsigned short value; }
    constants[2] = {
      { "VTK_UNSIGNED_SHORT_MIN", VTK_TYPE_CAST(unsigned short, 0u) },
      { "VTK_UNSIGNED_SHORT_MAX", VTK_TYPE_CAST(unsigned short, 0xffffu) },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_6_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_INT_MIN", VTK_TYPE_CAST(int, ~(~0u >> 1)) },
      { "VTK_INT_MAX", VTK_TYPE_CAST(int, ~0u >> 1) },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_7_1_constants) {
  const struct { const char *name; unsigned int value; }
    constants[2] = {
      { "VTK_UNSIGNED_INT_MIN", VTK_TYPE_CAST(unsigned int, 0) },
      { "VTK_UNSIGNED_INT_MAX", VTK_TYPE_CAST(unsigned int, ~0u) },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_8_1_constants) {
  const struct { const char *name; long long value; }
    constants[2] = {
      { "VTK_LONG_MIN", VTK_TYPE_CAST(long, ~(~0ul >> 1)) },
      { "VTK_LONG_MAX", VTK_TYPE_CAST(long, ~0ul >> 1) },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_9_1_constants) {
  const struct { const char *name; unsigned long long value; }
    constants[2] = {
      { "VTK_UNSIGNED_LONG_MIN", VTK_TYPE_CAST(unsigned long, 0ul) },
      { "VTK_UNSIGNED_LONG_MAX", VTK_TYPE_CAST(unsigned long, ~0ul) },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_10_1_constants) {
  const struct { const char *name; float value; }
    constants[2] = {
      { "VTK_FLOAT_MIN", VTK_TYPE_CAST(float, -1.0e+38f) },
      { "VTK_FLOAT_MAX", VTK_TYPE_CAST(float, 1.0e+38f) },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_11_1_constants) {
  const struct { const char *name; double value; }
    constants[2] = {
      { "VTK_DOUBLE_MIN", VTK_TYPE_CAST(double, -1.0e+299) },
      { "VTK_DOUBLE_MAX", VTK_TYPE_CAST(double, 1.0e+299) },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_12_1_constants) {
  const struct { const char *name; long long value; }
    constants[2] = {
      { "VTK_LONG_LONG_MIN", VTK_TYPE_CAST(long long, ~(~0ull >> 1)) },
      { "VTK_LONG_LONG_MAX", VTK_TYPE_CAST(long long, ~0ull >> 1) },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_13_1_constants) {
  const struct { const char *name; unsigned long long value; }
    constants[2] = {
      { "VTK_UNSIGNED_LONG_LONG_MIN", VTK_TYPE_CAST(unsigned long long, 0ull) },
      { "VTK_UNSIGNED_LONG_LONG_MAX", VTK_TYPE_CAST(unsigned long long, ~0ull) },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_14_1_constants) {
  emscripten::constant("VTK_TYPE_UINT8", VTK_UNSIGNED_CHAR);
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_15_1_constants) {
  const struct { const char *name; unsigned char value; }
    constants[2] = {
      { "VTK_TYPE_UINT8_MIN", VTK_UNSIGNED_CHAR_MIN },
      { "VTK_TYPE_UINT8_MAX", VTK_UNSIGNED_CHAR_MAX },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_16_1_constants) {
  emscripten::constant("VTK_TYPE_INT8", VTK_SIGNED_CHAR);
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_17_1_constants) {
  const struct { const char *name; signed char value; }
    constants[2] = {
      { "VTK_TYPE_INT8_MIN", VTK_SIGNED_CHAR_MIN },
      { "VTK_TYPE_INT8_MAX", VTK_SIGNED_CHAR_MAX },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_18_1_constants) {
  emscripten::constant("VTK_TYPE_UINT16", VTK_UNSIGNED_SHORT);
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_19_1_constants) {
  const struct { const char *name; unsigned short value; }
    constants[2] = {
      { "VTK_TYPE_UINT16_MIN", VTK_UNSIGNED_SHORT_MIN },
      { "VTK_TYPE_UINT16_MAX", VTK_UNSIGNED_SHORT_MAX },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_20_1_constants) {
  emscripten::constant("VTK_TYPE_INT16", VTK_SHORT);
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_21_1_constants) {
  const struct { const char *name; short value; }
    constants[2] = {
      { "VTK_TYPE_INT16_MIN", VTK_SHORT_MIN },
      { "VTK_TYPE_INT16_MAX", VTK_SHORT_MAX },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_22_1_constants) {
  emscripten::constant("VTK_TYPE_UINT32", VTK_UNSIGNED_INT);
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_23_1_constants) {
  const struct { const char *name; unsigned int value; }
    constants[2] = {
      { "VTK_TYPE_UINT32_MIN", VTK_UNSIGNED_INT_MIN },
      { "VTK_TYPE_UINT32_MAX", VTK_UNSIGNED_INT_MAX },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_24_1_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "VTK_TYPE_INT32", VTK_INT },
      { "VTK_TYPE_INT32_MIN", VTK_INT_MIN },
      { "VTK_TYPE_INT32_MAX", VTK_INT_MAX },
      { "VTK_TYPE_UINT64", VTK_UNSIGNED_LONG_LONG },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_25_1_constants) {
  const struct { const char *name; unsigned long long value; }
    constants[2] = {
      { "VTK_TYPE_UINT64_MIN", VTK_UNSIGNED_LONG_LONG_MIN },
      { "VTK_TYPE_UINT64_MAX", VTK_UNSIGNED_LONG_LONG_MAX },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_26_1_constants) {
  emscripten::constant("VTK_TYPE_INT64", VTK_LONG_LONG);
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_27_1_constants) {
  const struct { const char *name; long long value; }
    constants[2] = {
      { "VTK_TYPE_INT64_MIN", VTK_LONG_LONG_MIN },
      { "VTK_TYPE_INT64_MAX", VTK_LONG_LONG_MAX },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_28_1_constants) {
  emscripten::constant("VTK_MTIME_TYPE_IMPL", VTK_UNSIGNED_LONG);
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_29_1_constants) {
  const struct { const char *name; unsigned long long value; }
    constants[2] = {
      { "VTK_MTIME_MIN", VTK_UNSIGNED_LONG_MIN },
      { "VTK_MTIME_MAX", VTK_UNSIGNED_LONG_MAX },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_30_1_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "VTK_TYPE_FLOAT32", VTK_FLOAT },
      { "VTK_TYPE_FLOAT64", VTK_DOUBLE },
      { "VTK_ID_TYPE_IMPL", VTK_INT },
      { "VTK_SIZEOF_ID_TYPE", VTK_SIZEOF_INT },
      { "VTK_ID_MIN", VTK_INT_MIN },
      { "VTK_ID_MAX", VTK_INT_MAX },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkType_31_1_constants) {
  emscripten::constant("VTK_ID_TYPE_PRId", std::string("d"));
}
