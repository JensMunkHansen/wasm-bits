// JavaScript wrapper for vtkMatricizeArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkMatricizeArrayEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkMatricizeArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatricizeArray.h"

template<> void emscripten::internal::raw_destructor<vtkMatricizeArray>(vtkMatricizeArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMatricizeArray_class) {
  emscripten::class_<vtkMatricizeArray, emscripten::base<vtkArrayDataAlgorithm>>("vtkMatricizeArray")
    .smart_ptr<vtkSmartPointer<vtkMatricizeArray>>("vtkSmartPointer<vtkMatricizeArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMatricizeArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMatricizeArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMatricizeArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMatricizeArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMatricizeArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMatricizeArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMatricizeArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetSliceDimension", &vtkMatricizeArray::GetSliceDimension)
    .function("SetSliceDimension", &vtkMatricizeArray::SetSliceDimension);
}
