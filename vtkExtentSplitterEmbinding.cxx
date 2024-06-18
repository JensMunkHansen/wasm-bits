// JavaScript wrapper for vtkExtentSplitter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkExtentSplitterEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkExtentSplitter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtentSplitter.h"

template<> void emscripten::internal::raw_destructor<vtkExtentSplitter>(vtkExtentSplitter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtentSplitter_class) {
  emscripten::class_<vtkExtentSplitter, emscripten::base<vtkObject>>("vtkExtentSplitter")
    .smart_ptr<vtkSmartPointer<vtkExtentSplitter>>("vtkSmartPointer<vtkExtentSplitter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtentSplitter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtentSplitter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtentSplitter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtentSplitter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtentSplitter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtentSplitter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtentSplitter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddExtentSource", emscripten::select_overload<void(vtkExtentSplitter&, int, int, int, int, int, int, int, int)>([](vtkExtentSplitter& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7) -> void { return self.AddExtentSource( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7); }))
    .function("AddExtentSource", emscripten::select_overload<void(vtkExtentSplitter&, int, int, std::uintptr_t)>([](vtkExtentSplitter& self, int arg_0, int arg_1, std::uintptr_t arg_2) -> void { return self.AddExtentSource( arg_0, arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int))); }))
    .function("RemoveExtentSource", &vtkExtentSplitter::RemoveExtentSource)
    .function("RemoveAllExtentSources", &vtkExtentSplitter::RemoveAllExtentSources)
    .function("AddExtent", emscripten::select_overload<void(vtkExtentSplitter&, int, int, int, int, int, int)>([](vtkExtentSplitter& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.AddExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("AddExtent", emscripten::select_overload<void(vtkExtentSplitter&, std::uintptr_t)>([](vtkExtentSplitter& self, std::uintptr_t arg_0) -> void { return self.AddExtent(reinterpret_cast<int*>(arg_0 * sizeof(int))); }))
    .function("ComputeSubExtents", &vtkExtentSplitter::ComputeSubExtents)
    .function("GetNumberOfSubExtents", &vtkExtentSplitter::GetNumberOfSubExtents)
    .function("GetSubExtent", emscripten::select_overload<void(vtkExtentSplitter&, int, std::uintptr_t)>([](vtkExtentSplitter& self, int arg_0, std::uintptr_t arg_1) -> void { return self.GetSubExtent( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int))); }))
    .function("GetSubExtentSource", &vtkExtentSplitter::GetSubExtentSource)
    .function("GetPointMode", &vtkExtentSplitter::GetPointMode)
    .function("SetPointMode", &vtkExtentSplitter::SetPointMode)
    .function("PointModeOn", &vtkExtentSplitter::PointModeOn)
    .function("PointModeOff", &vtkExtentSplitter::PointModeOff);
}
