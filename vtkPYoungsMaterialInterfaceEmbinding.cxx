// JavaScript wrapper for vtkPYoungsMaterialInterface with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPYoungsMaterialInterfaceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPYoungsMaterialInterface.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPYoungsMaterialInterface.h"

template<> void emscripten::internal::raw_destructor<vtkPYoungsMaterialInterface>(vtkPYoungsMaterialInterface * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPYoungsMaterialInterface_class) {
  emscripten::class_<vtkPYoungsMaterialInterface, emscripten::base<vtkYoungsMaterialInterface>>("vtkPYoungsMaterialInterface")
    .smart_ptr<vtkSmartPointer<vtkPYoungsMaterialInterface>>("vtkSmartPointer<vtkPYoungsMaterialInterface>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPYoungsMaterialInterface>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPYoungsMaterialInterface::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPYoungsMaterialInterface& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPYoungsMaterialInterface::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPYoungsMaterialInterface::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPYoungsMaterialInterface::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPYoungsMaterialInterface& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Aggregate", emscripten::optional_override([](vtkPYoungsMaterialInterface& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.Aggregate( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)));}))
    .function("SetController", &vtkPYoungsMaterialInterface::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPYoungsMaterialInterface::GetController, emscripten::allow_raw_pointers());
}
