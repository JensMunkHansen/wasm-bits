// JavaScript wrapper for vtkTestingInteractor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkTestingRendering.js/vtkTestingRendering.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkTestingRendering.js/vtkTestingInteractorEmbinding.cxx \
 /home/jmh/github/vtk/Testing/Rendering/vtkTestingInteractor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkTestingInteractor.h"

template<> void emscripten::internal::raw_destructor<vtkTestingInteractor>(vtkTestingInteractor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTestingInteractor_class) {
  emscripten::class_<vtkTestingInteractor, emscripten::base<vtkRenderWindowInteractor>>("vtkTestingInteractor")
    .smart_ptr<vtkSmartPointer<vtkTestingInteractor>>("vtkSmartPointer<vtkTestingInteractor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTestingInteractor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTestingInteractor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTestingInteractor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTestingInteractor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTestingInteractor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTestingInteractor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTestingInteractor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Start", &vtkTestingInteractor::Start)
    .function("GetController", &vtkTestingInteractor::GetController, emscripten::allow_raw_pointers())
    .function("SetController", &vtkTestingInteractor::SetController, emscripten::allow_raw_pointers());
}
