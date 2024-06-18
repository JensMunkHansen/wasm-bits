// JavaScript wrapper for vtkStructuredData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkStructuredDataEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkStructuredData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnsignedCharArray.h"
#include "vtkIdList.h"
#include "vtkSmartPointer.h"
#include "vtkDataArray.h"
#include "vtkStructuredData.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkStructuredData_0_1_constants) {
  const struct { const char *name; int value; }
    constants[10] = {
      { "VTK_UNCHANGED", 0 },
      { "VTK_SINGLE_POINT", 1 },
      { "VTK_X_LINE", 2 },
      { "VTK_Y_LINE", 3 },
      { "VTK_Z_LINE", 4 },
      { "VTK_XY_PLANE", 5 },
      { "VTK_YZ_PLANE", 6 },
      { "VTK_XZ_PLANE", 7 },
      { "VTK_XYZ_GRID", 8 },
      { "VTK_EMPTY", 9 },
  };
  for (int c = 0; c < 10; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkStructuredData>(vtkStructuredData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredData_class) {
  emscripten::class_<vtkStructuredData, emscripten::base<vtkObject>>("vtkStructuredData")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("GetDataDimension", emscripten::select_overload<int( int)>([]( int arg_0) -> int { return vtkStructuredData::GetDataDimension( arg_0); }))
    .class_function("IsPointVisible", &vtkStructuredData::IsPointVisible, emscripten::allow_raw_pointers());
}
