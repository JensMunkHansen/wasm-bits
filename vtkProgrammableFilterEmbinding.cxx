// JavaScript wrapper for vtkProgrammableFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersProgrammable.js/vtkFiltersProgrammable.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersProgrammable.js/vtkProgrammableFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Programmable/vtkProgrammableFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkStructuredPoints.h"
#include "vtkStructuredGrid.h"
#include "vtkUnstructuredGrid.h"
#include "vtkRectilinearGrid.h"
#include "vtkGraph.h"
#include "vtkMolecule.h"
#include "vtkTable.h"
#include "vtkHyperTreeGrid.h"
#include "vtkProgrammableFilter.h"

template<> void emscripten::internal::raw_destructor<vtkProgrammableFilter>(vtkProgrammableFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProgrammableFilter_class) {
  emscripten::class_<vtkProgrammableFilter, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkProgrammableFilter")
    .smart_ptr<vtkSmartPointer<vtkProgrammableFilter>>("vtkSmartPointer<vtkProgrammableFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkProgrammableFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgrammableFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProgrammableFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProgrammableFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProgrammableFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgrammableFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProgrammableFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetExecuteMethod", emscripten::optional_override([](vtkProgrammableFilter& self, emscripten::val arg_0, std::uintptr_t arg_1) -> void {  return self.SetExecuteMethod( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()),reinterpret_cast<void*>(arg_1));}))
    .function("SetExecuteMethodArgDelete", emscripten::optional_override([](vtkProgrammableFilter& self, emscripten::val arg_0) -> void {  return self.SetExecuteMethodArgDelete( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()));}))
    .function("GetPolyDataInput", &vtkProgrammableFilter::GetPolyDataInput, emscripten::allow_raw_pointers())
    .function("GetStructuredPointsInput", &vtkProgrammableFilter::GetStructuredPointsInput, emscripten::allow_raw_pointers())
    .function("GetStructuredGridInput", &vtkProgrammableFilter::GetStructuredGridInput, emscripten::allow_raw_pointers())
    .function("GetUnstructuredGridInput", &vtkProgrammableFilter::GetUnstructuredGridInput, emscripten::allow_raw_pointers())
    .function("GetRectilinearGridInput", &vtkProgrammableFilter::GetRectilinearGridInput, emscripten::allow_raw_pointers())
    .function("GetGraphInput", &vtkProgrammableFilter::GetGraphInput, emscripten::allow_raw_pointers())
    .function("GetMoleculeInput", &vtkProgrammableFilter::GetMoleculeInput, emscripten::allow_raw_pointers())
    .function("GetTableInput", &vtkProgrammableFilter::GetTableInput, emscripten::allow_raw_pointers())
    .function("GetHyperTreeGridInput", &vtkProgrammableFilter::GetHyperTreeGridInput, emscripten::allow_raw_pointers())
    .function("SetCopyArrays", &vtkProgrammableFilter::SetCopyArrays)
    .function("GetCopyArrays", &vtkProgrammableFilter::GetCopyArrays)
    .function("CopyArraysOn", &vtkProgrammableFilter::CopyArraysOn)
    .function("CopyArraysOff", &vtkProgrammableFilter::CopyArraysOff);
}
