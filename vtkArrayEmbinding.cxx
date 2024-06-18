// JavaScript wrapper for vtkArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkArrayRange.h"
#include "vtkArrayExtents.h"
#include "vtkStdString.h"
#include "vtkArrayCoordinates.h"
#include "vtkArray.h"

template<> void emscripten::internal::raw_destructor<vtkArray>(vtkArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkArray_class) {
  emscripten::class_<vtkArray, emscripten::base<vtkObject>>("vtkArray")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("CreateArray", &vtkArray::CreateArray, emscripten::allow_raw_pointers())
    .function("Resize", emscripten::select_overload<void(vtkArray&, int)>([](vtkArray& self, int arg_0) -> void { return self.Resize( arg_0); }))
    .function("Resize", emscripten::select_overload<void(vtkArray&, const vtkArrayRange&)>([](vtkArray& self, const vtkArrayRange& arg_0) -> void { return self.Resize( arg_0); }))
    .function("Resize", emscripten::select_overload<void(vtkArray&, const vtkArrayExtents&)>([](vtkArray& self, const vtkArrayExtents& arg_0) -> void { return self.Resize( arg_0); }))
    .function("Resize", emscripten::select_overload<void(vtkArray&, int, int)>([](vtkArray& self, int arg_0, int arg_1) -> void { return self.Resize( arg_0, arg_1); }))
    .function("Resize", emscripten::select_overload<void(vtkArray&, const vtkArrayRange&, const vtkArrayRange&)>([](vtkArray& self, const vtkArrayRange& arg_0, const vtkArrayRange& arg_1) -> void { return self.Resize( arg_0, arg_1); }))
    .function("Resize", emscripten::select_overload<void(vtkArray&, int, int, int)>([](vtkArray& self, int arg_0, int arg_1, int arg_2) -> void { return self.Resize( arg_0, arg_1, arg_2); }))
    .function("Resize", emscripten::select_overload<void(vtkArray&, const vtkArrayRange&, const vtkArrayRange&, const vtkArrayRange&)>([](vtkArray& self, const vtkArrayRange& arg_0, const vtkArrayRange& arg_1, const vtkArrayRange& arg_2) -> void { return self.Resize( arg_0, arg_1, arg_2); }))
    .function("GetExtent", &vtkArray::GetExtent)
    .function("GetDimensions", &vtkArray::GetDimensions)
    .function("GetSize", &vtkArray::GetSize)
    .function("SetName", &vtkArray::SetName)
    .function("GetName", &vtkArray::GetName)
    .function("SetDimensionLabel", &vtkArray::SetDimensionLabel)
    .function("GetDimensionLabel", &vtkArray::GetDimensionLabel)
    .function("GetVariantValue", emscripten::select_overload<vtkVariant(vtkArray&, int)>([](vtkArray& self, int arg_0) -> vtkVariant { return self.GetVariantValue( arg_0); }))
    .function("GetVariantValue", emscripten::select_overload<vtkVariant(vtkArray&, int, int)>([](vtkArray& self, int arg_0, int arg_1) -> vtkVariant { return self.GetVariantValue( arg_0, arg_1); }))
    .function("GetVariantValue", emscripten::select_overload<vtkVariant(vtkArray&, int, int, int)>([](vtkArray& self, int arg_0, int arg_1, int arg_2) -> vtkVariant { return self.GetVariantValue( arg_0, arg_1, arg_2); }))
    .function("SetVariantValue", emscripten::select_overload<void(vtkArray&, int, const vtkVariant&)>([](vtkArray& self, int arg_0, const vtkVariant& arg_1) -> void { return self.SetVariantValue( arg_0, arg_1); }))
    .function("SetVariantValue", emscripten::select_overload<void(vtkArray&, int, int, const vtkVariant&)>([](vtkArray& self, int arg_0, int arg_1, const vtkVariant& arg_2) -> void { return self.SetVariantValue( arg_0, arg_1, arg_2); }))
    .function("SetVariantValue", emscripten::select_overload<void(vtkArray&, int, int, int, const vtkVariant&)>([](vtkArray& self, int arg_0, int arg_1, int arg_2, const vtkVariant& arg_3) -> void { return self.SetVariantValue( arg_0, arg_1, arg_2, arg_3); }));
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkArray_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkArray_DENSE", vtkArray::DENSE },
      { "vtkArray_SPARSE", vtkArray::SPARSE },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
