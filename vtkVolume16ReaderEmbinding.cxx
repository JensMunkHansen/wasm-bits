// JavaScript wrapper for vtkVolume16Reader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkVolume16ReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkVolume16Reader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTransform.h"
#include "vtkImageData.h"
#include "vtkVolume16Reader.h"

EMSCRIPTEN_BINDINGS(vtkIOImage_vtkVolume16Reader_0_1_constants) {
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
template<> void emscripten::internal::raw_destructor<vtkVolume16Reader>(vtkVolume16Reader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVolume16Reader_class) {
  emscripten::class_<vtkVolume16Reader, emscripten::base<vtkVolumeReader>>("vtkVolume16Reader")
    .smart_ptr<vtkSmartPointer<vtkVolume16Reader>>("vtkSmartPointer<vtkVolume16Reader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVolume16Reader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolume16Reader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVolume16Reader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVolume16Reader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVolume16Reader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolume16Reader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVolume16Reader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDataDimensions", emscripten::select_overload<void(vtkVolume16Reader&, int, int)>([](vtkVolume16Reader& self, int arg_0, int arg_1) -> void { return self.SetDataDimensions( arg_0, arg_1); }))
    .function("SetDataMask", &vtkVolume16Reader::SetDataMask)
    .function("GetDataMask", &vtkVolume16Reader::GetDataMask)
    .function("SetHeaderSize", &vtkVolume16Reader::SetHeaderSize)
    .function("GetHeaderSize", &vtkVolume16Reader::GetHeaderSize)
    .function("SetDataByteOrderToBigEndian", &vtkVolume16Reader::SetDataByteOrderToBigEndian)
    .function("SetDataByteOrderToLittleEndian", &vtkVolume16Reader::SetDataByteOrderToLittleEndian)
    .function("GetDataByteOrder", &vtkVolume16Reader::GetDataByteOrder)
    .function("SetDataByteOrder", &vtkVolume16Reader::SetDataByteOrder)
    .function("GetDataByteOrderAsString", emscripten::optional_override([](vtkVolume16Reader& self) -> std::string {  return self.GetDataByteOrderAsString();}))
    .function("SetSwapBytes", &vtkVolume16Reader::SetSwapBytes)
    .function("GetSwapBytes", &vtkVolume16Reader::GetSwapBytes)
    .function("SwapBytesOn", &vtkVolume16Reader::SwapBytesOn)
    .function("SwapBytesOff", &vtkVolume16Reader::SwapBytesOff)
    .function("SetTransform", &vtkVolume16Reader::SetTransform, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkVolume16Reader::GetTransform, emscripten::allow_raw_pointers())
    .function("GetImage", &vtkVolume16Reader::GetImage, emscripten::allow_raw_pointers());
}
