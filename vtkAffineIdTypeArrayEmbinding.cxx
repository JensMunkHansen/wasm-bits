// JavaScript wrapper for vtkAffineIdTypeArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkAffineIdTypeArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkAffineIdTypeArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkAffineIdTypeArray.h"

template<> void emscripten::internal::raw_destructor<vtkAffineIdTypeArray>(vtkAffineIdTypeArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAffineIdTypeArray_class) {
  emscripten::class_<vtkAffineIdTypeArray, emscripten::base<vtkDataArray>>("vtkAffineIdTypeArray")
    .smart_ptr<vtkSmartPointer<vtkAffineIdTypeArray>>("vtkSmartPointer<vtkAffineIdTypeArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAffineIdTypeArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineIdTypeArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAffineIdTypeArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAffineIdTypeArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAffineIdTypeArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineIdTypeArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAffineIdTypeArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkAffineIdTypeArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkAffineIdTypeArray::GetDataType)
    .function("GetValue", &vtkAffineIdTypeArray::GetValue)
    .class_function("FastDownCast", &vtkAffineIdTypeArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkAffineIdTypeArray::ConstructBackend);
}
