// JavaScript wrapper for vtkAffineUnsignedLongLongArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkAffineUnsignedLongLongArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkAffineUnsignedLongLongArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkAffineUnsignedLongLongArray.h"

template<> void emscripten::internal::raw_destructor<vtkAffineUnsignedLongLongArray>(vtkAffineUnsignedLongLongArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAffineUnsignedLongLongArray_class) {
  emscripten::class_<vtkAffineUnsignedLongLongArray, emscripten::base<vtkDataArray>>("vtkAffineUnsignedLongLongArray")
    .smart_ptr<vtkSmartPointer<vtkAffineUnsignedLongLongArray>>("vtkSmartPointer<vtkAffineUnsignedLongLongArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAffineUnsignedLongLongArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineUnsignedLongLongArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAffineUnsignedLongLongArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAffineUnsignedLongLongArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAffineUnsignedLongLongArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineUnsignedLongLongArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAffineUnsignedLongLongArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkAffineUnsignedLongLongArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkAffineUnsignedLongLongArray::GetDataType)
    .function("GetValue", &vtkAffineUnsignedLongLongArray::GetValue)
    .class_function("FastDownCast", &vtkAffineUnsignedLongLongArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkAffineUnsignedLongLongArray::ConstructBackend);
}
