// JavaScript wrapper for vtkAbstractMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkAbstractMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkAbstractMapper.h
*/
#include "vtkEmbindSmartPointerTraits.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWindow.h"
#include "vtkPlane.h"
#include "vtkPlaneCollection.h"
#include "vtkPlanes.h"
#include "vtkDataArray.h"
#include "vtkDataSet.h"
#include "vtkAbstractArray.h"
#include "vtkUnsignedCharArray.h"
#include "vtkAbstractMapper.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkAbstractMapper_0_1_constants) {
  const struct { const char *name; int value; }
    constants[8] = {
      { "VTK_SCALAR_MODE_DEFAULT", 0 },
      { "VTK_SCALAR_MODE_USE_POINT_DATA", 1 },
      { "VTK_SCALAR_MODE_USE_CELL_DATA", 2 },
      { "VTK_SCALAR_MODE_USE_POINT_FIELD_DATA", 3 },
      { "VTK_SCALAR_MODE_USE_CELL_FIELD_DATA", 4 },
      { "VTK_SCALAR_MODE_USE_FIELD_DATA", 5 },
      { "VTK_GET_ARRAY_BY_ID", 0 },
      { "VTK_GET_ARRAY_BY_NAME", 1 },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkAbstractMapper>(vtkAbstractMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractMapper_class) {
  emscripten::class_<vtkAbstractMapper, emscripten::base<vtkAlgorithm>>("vtkAbstractMapper")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkAbstractMapper::GetMTime)
    .function("ReleaseGraphicsResources", &vtkAbstractMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetTimeToDraw", &vtkAbstractMapper::GetTimeToDraw)
    .function("AddClippingPlane", &vtkAbstractMapper::AddClippingPlane, emscripten::allow_raw_pointers())
    .function("RemoveClippingPlane", &vtkAbstractMapper::RemoveClippingPlane, emscripten::allow_raw_pointers())
    .function("RemoveAllClippingPlanes", &vtkAbstractMapper::RemoveAllClippingPlanes)
    .function("SetClippingPlanes", emscripten::select_overload<void(vtkAbstractMapper&, vtkPlaneCollection*)>([](vtkAbstractMapper& self, vtkPlaneCollection* arg_0) -> void { return self.SetClippingPlanes( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetClippingPlanes", emscripten::select_overload<void(vtkAbstractMapper&, vtkPlanes*)>([](vtkAbstractMapper& self, vtkPlanes* arg_0) -> void { return self.SetClippingPlanes( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetClippingPlanes", &vtkAbstractMapper::GetClippingPlanes, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkAbstractMapper::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetNumberOfClippingPlanes", &vtkAbstractMapper::GetNumberOfClippingPlanes);
}
