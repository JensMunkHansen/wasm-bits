// JavaScript wrapper for vtkGenericAttribute with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkGenericAttributeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkGenericAttribute.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericAdaptorCell.h"
#include "vtkGenericCellIterator.h"
#include "vtkGenericPointIterator.h"
#include "vtkGenericAttribute.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkGenericAttribute_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkPointCentered", vtkPointCentered },
      { "vtkCellCentered", vtkCellCentered },
      { "vtkBoundaryCentered", vtkBoundaryCentered },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkGenericAttribute>(vtkGenericAttribute * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericAttribute_class) {
  emscripten::class_<vtkGenericAttribute, emscripten::base<vtkObject>>("vtkGenericAttribute")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericAttribute::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericAttribute& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericAttribute::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericAttribute::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericAttribute::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericAttribute& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
