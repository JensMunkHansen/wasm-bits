// JavaScript wrapper for vtkStructuredGridAppend with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkStructuredGridAppendEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkStructuredGridAppend.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkStructuredGridAppend.h"

template<> void emscripten::internal::raw_destructor<vtkStructuredGridAppend>(vtkStructuredGridAppend * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredGridAppend_class) {
  emscripten::class_<vtkStructuredGridAppend, emscripten::base<vtkStructuredGridAlgorithm>>("vtkStructuredGridAppend")
    .smart_ptr<vtkSmartPointer<vtkStructuredGridAppend>>("vtkSmartPointer<vtkStructuredGridAppend>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStructuredGridAppend>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridAppend::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredGridAppend& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredGridAppend::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredGridAppend::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridAppend::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredGridAppend& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReplaceNthInputConnection", &vtkStructuredGridAppend::ReplaceNthInputConnection, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkStructuredGridAppend&, int, vtkDataObject*)>([](vtkStructuredGridAppend& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkStructuredGridAppend&, vtkDataObject*)>([](vtkStructuredGridAppend& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkStructuredGridAppend&, int)>([](vtkStructuredGridAppend& self, int arg_0) -> vtkDataObject* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkStructuredGridAppend&)>([](vtkStructuredGridAppend& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetNumberOfInputs", &vtkStructuredGridAppend::GetNumberOfInputs);
}
