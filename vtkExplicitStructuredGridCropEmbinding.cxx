// JavaScript wrapper for vtkExplicitStructuredGridCrop with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkExplicitStructuredGridCropEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkExplicitStructuredGridCrop.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkExplicitStructuredGridCrop.h"

template<> void emscripten::internal::raw_destructor<vtkExplicitStructuredGridCrop>(vtkExplicitStructuredGridCrop * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExplicitStructuredGridCrop_class) {
  emscripten::class_<vtkExplicitStructuredGridCrop, emscripten::base<vtkExplicitStructuredGridAlgorithm>>("vtkExplicitStructuredGridCrop")
    .smart_ptr<vtkSmartPointer<vtkExplicitStructuredGridCrop>>("vtkSmartPointer<vtkExplicitStructuredGridCrop>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExplicitStructuredGridCrop>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExplicitStructuredGridCrop::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExplicitStructuredGridCrop& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExplicitStructuredGridCrop::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExplicitStructuredGridCrop::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExplicitStructuredGridCrop::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExplicitStructuredGridCrop& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutputWholeExtent", emscripten::select_overload<void(vtkExplicitStructuredGridCrop&, int, int, int, int, int, int)>([](vtkExplicitStructuredGridCrop& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetOutputWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetOutputWholeExtent", emscripten::select_overload<std::uintptr_t(vtkExplicitStructuredGridCrop&)>([](vtkExplicitStructuredGridCrop& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetOutputWholeExtent()); }))
    .function("ResetOutputWholeExtent", &vtkExplicitStructuredGridCrop::ResetOutputWholeExtent);
}
