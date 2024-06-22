// JavaScript wrapper for vtkAffineUnsignedLongArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkAffineUnsignedLongArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkAffineUnsignedLongArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkAffineUnsignedLongArray.h"

template<> void emscripten::internal::raw_destructor<vtkAffineUnsignedLongArray>(vtkAffineUnsignedLongArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAffineUnsignedLongArray_class) {
  emscripten::class_<vtkAffineUnsignedLongArray, emscripten::base<vtkDataArray>>("vtkAffineUnsignedLongArray")
    .smart_ptr<vtkSmartPointer<vtkAffineUnsignedLongArray>>("vtkSmartPointer<vtkAffineUnsignedLongArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAffineUnsignedLongArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineUnsignedLongArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAffineUnsignedLongArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAffineUnsignedLongArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAffineUnsignedLongArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineUnsignedLongArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAffineUnsignedLongArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkAffineUnsignedLongArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkAffineUnsignedLongArray::GetDataType)
    .function("GetValue", &vtkAffineUnsignedLongArray::GetValue)
    .class_function("FastDownCast", &vtkAffineUnsignedLongArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkAffineUnsignedLongArray::ConstructBackend);
}
