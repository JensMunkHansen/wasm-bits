// JavaScript wrapper for vtkAffineUnsignedCharArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkAffineUnsignedCharArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkAffineUnsignedCharArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkAffineUnsignedCharArray.h"

template<> void emscripten::internal::raw_destructor<vtkAffineUnsignedCharArray>(vtkAffineUnsignedCharArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAffineUnsignedCharArray_class) {
  emscripten::class_<vtkAffineUnsignedCharArray, emscripten::base<vtkDataArray>>("vtkAffineUnsignedCharArray")
    .smart_ptr<vtkSmartPointer<vtkAffineUnsignedCharArray>>("vtkSmartPointer<vtkAffineUnsignedCharArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAffineUnsignedCharArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineUnsignedCharArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAffineUnsignedCharArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAffineUnsignedCharArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAffineUnsignedCharArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineUnsignedCharArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAffineUnsignedCharArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkAffineUnsignedCharArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkAffineUnsignedCharArray::GetDataType)
    .function("GetValue", &vtkAffineUnsignedCharArray::GetValue)
    .class_function("FastDownCast", &vtkAffineUnsignedCharArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkAffineUnsignedCharArray::ConstructBackend);
}
