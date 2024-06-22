// JavaScript wrapper for vtkObserverMediator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkObserverMediatorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkObserverMediator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkInteractorObserver.h"
#include "vtkObserverMediator.h"

template<> void emscripten::internal::raw_destructor<vtkObserverMediator>(vtkObserverMediator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkObserverMediator_class) {
  emscripten::class_<vtkObserverMediator, emscripten::base<vtkObject>>("vtkObserverMediator")
    .smart_ptr<vtkSmartPointer<vtkObserverMediator>>("vtkSmartPointer<vtkObserverMediator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkObserverMediator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkObserverMediator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkObserverMediator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkObserverMediator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkObserverMediator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkObserverMediator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkObserverMediator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInteractor", &vtkObserverMediator::SetInteractor, emscripten::allow_raw_pointers())
    .function("GetInteractor", &vtkObserverMediator::GetInteractor, emscripten::allow_raw_pointers())
    .function("RequestCursorShape", &vtkObserverMediator::RequestCursorShape, emscripten::allow_raw_pointers())
    .function("RemoveAllCursorShapeRequests", &vtkObserverMediator::RemoveAllCursorShapeRequests, emscripten::allow_raw_pointers());
}
