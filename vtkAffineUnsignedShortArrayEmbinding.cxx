// JavaScript wrapper for vtkAffineUnsignedShortArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkAffineUnsignedShortArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkAffineUnsignedShortArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkAffineUnsignedShortArray.h"

template<> void emscripten::internal::raw_destructor<vtkAffineUnsignedShortArray>(vtkAffineUnsignedShortArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAffineUnsignedShortArray_class) {
  emscripten::class_<vtkAffineUnsignedShortArray, emscripten::base<vtkDataArray>>("vtkAffineUnsignedShortArray")
    .smart_ptr<vtkSmartPointer<vtkAffineUnsignedShortArray>>("vtkSmartPointer<vtkAffineUnsignedShortArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAffineUnsignedShortArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineUnsignedShortArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAffineUnsignedShortArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAffineUnsignedShortArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAffineUnsignedShortArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineUnsignedShortArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAffineUnsignedShortArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkAffineUnsignedShortArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkAffineUnsignedShortArray::GetDataType)
    .function("GetValue", &vtkAffineUnsignedShortArray::GetValue)
    .class_function("FastDownCast", &vtkAffineUnsignedShortArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkAffineUnsignedShortArray::ConstructBackend);
}
