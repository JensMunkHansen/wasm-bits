// JavaScript wrapper for vtkImageAppend with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkImageAppendEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkImageAppend.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkImageAppend.h"

template<> void emscripten::internal::raw_destructor<vtkImageAppend>(vtkImageAppend * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageAppend_class) {
  emscripten::class_<vtkImageAppend, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageAppend")
    .smart_ptr<vtkSmartPointer<vtkImageAppend>>("vtkSmartPointer<vtkImageAppend>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageAppend>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageAppend::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageAppend& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageAppend::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageAppend::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageAppend::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageAppend& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReplaceNthInputConnection", &vtkImageAppend::ReplaceNthInputConnection, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkImageAppend&, int, vtkDataObject*)>([](vtkImageAppend& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkImageAppend&, vtkDataObject*)>([](vtkImageAppend& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkImageAppend&, int)>([](vtkImageAppend& self, int arg_0) -> vtkDataObject* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkImageAppend&)>([](vtkImageAppend& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetNumberOfInputs", &vtkImageAppend::GetNumberOfInputs)
    .function("SetAppendAxis", &vtkImageAppend::SetAppendAxis)
    .function("GetAppendAxis", &vtkImageAppend::GetAppendAxis)
    .function("SetPreserveExtents", &vtkImageAppend::SetPreserveExtents)
    .function("GetPreserveExtents", &vtkImageAppend::GetPreserveExtents)
    .function("PreserveExtentsOn", &vtkImageAppend::PreserveExtentsOn)
    .function("PreserveExtentsOff", &vtkImageAppend::PreserveExtentsOff);
}
