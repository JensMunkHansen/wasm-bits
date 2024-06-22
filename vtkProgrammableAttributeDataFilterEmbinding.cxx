// JavaScript wrapper for vtkProgrammableAttributeDataFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersProgrammable.js/vtkFiltersProgrammable.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersProgrammable.js/vtkProgrammableAttributeDataFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Programmable/vtkProgrammableAttributeDataFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkDataSetCollection.h"
#include "vtkProgrammableAttributeDataFilter.h"

template<> void emscripten::internal::raw_destructor<vtkProgrammableAttributeDataFilter>(vtkProgrammableAttributeDataFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProgrammableAttributeDataFilter_class) {
  emscripten::class_<vtkProgrammableAttributeDataFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkProgrammableAttributeDataFilter")
    .smart_ptr<vtkSmartPointer<vtkProgrammableAttributeDataFilter>>("vtkSmartPointer<vtkProgrammableAttributeDataFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkProgrammableAttributeDataFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgrammableAttributeDataFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProgrammableAttributeDataFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProgrammableAttributeDataFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProgrammableAttributeDataFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgrammableAttributeDataFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProgrammableAttributeDataFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddInput", emscripten::select_overload<void(vtkProgrammableAttributeDataFilter&, vtkDataSet*)>([](vtkProgrammableAttributeDataFilter& self, vtkDataSet* arg_0) -> void { return self.AddInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveInput", &vtkProgrammableAttributeDataFilter::RemoveInput, emscripten::allow_raw_pointers())
    .function("GetInputList", &vtkProgrammableAttributeDataFilter::GetInputList, emscripten::allow_raw_pointers())
    .function("SetExecuteMethod", emscripten::optional_override([](vtkProgrammableAttributeDataFilter& self, emscripten::val arg_0, std::uintptr_t arg_1) -> void {  return self.SetExecuteMethod( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()),reinterpret_cast<void*>(arg_1));}))
    .function("SetExecuteMethodArgDelete", emscripten::optional_override([](vtkProgrammableAttributeDataFilter& self, emscripten::val arg_0) -> void {  return self.SetExecuteMethodArgDelete( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()));}));
}
