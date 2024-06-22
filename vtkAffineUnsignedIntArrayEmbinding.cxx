// JavaScript wrapper for vtkAffineUnsignedIntArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkAffineUnsignedIntArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkAffineUnsignedIntArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkAffineUnsignedIntArray.h"

template<> void emscripten::internal::raw_destructor<vtkAffineUnsignedIntArray>(vtkAffineUnsignedIntArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAffineUnsignedIntArray_class) {
  emscripten::class_<vtkAffineUnsignedIntArray, emscripten::base<vtkDataArray>>("vtkAffineUnsignedIntArray")
    .smart_ptr<vtkSmartPointer<vtkAffineUnsignedIntArray>>("vtkSmartPointer<vtkAffineUnsignedIntArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAffineUnsignedIntArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineUnsignedIntArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAffineUnsignedIntArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAffineUnsignedIntArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAffineUnsignedIntArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineUnsignedIntArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAffineUnsignedIntArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkAffineUnsignedIntArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkAffineUnsignedIntArray::GetDataType)
    .function("GetValue", &vtkAffineUnsignedIntArray::GetValue)
    .class_function("FastDownCast", &vtkAffineUnsignedIntArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkAffineUnsignedIntArray::ConstructBackend);
}
