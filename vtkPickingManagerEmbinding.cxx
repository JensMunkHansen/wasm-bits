// JavaScript wrapper for vtkPickingManager with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkPickingManagerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkPickingManager.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkAbstractPicker.h"
#include "vtkObject.h"
#include "vtkAssemblyPath.h"
#include "vtkAbstractPropPicker.h"
#include "vtkRenderer.h"
#include "vtkPickingManager.h"

template<> void emscripten::internal::raw_destructor<vtkPickingManager>(vtkPickingManager * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPickingManager_class) {
  emscripten::class_<vtkPickingManager, emscripten::base<vtkObject>>("vtkPickingManager")
    .smart_ptr<vtkSmartPointer<vtkPickingManager>>("vtkSmartPointer<vtkPickingManager>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPickingManager>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPickingManager::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPickingManager& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPickingManager::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPickingManager::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPickingManager::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPickingManager& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("EnabledOn", &vtkPickingManager::EnabledOn)
    .function("EnabledOff", &vtkPickingManager::EnabledOff)
    .function("SetEnabled", &vtkPickingManager::SetEnabled)
    .function("GetEnabled", &vtkPickingManager::GetEnabled)
    .function("SetOptimizeOnInteractorEvents", &vtkPickingManager::SetOptimizeOnInteractorEvents)
    .function("GetOptimizeOnInteractorEvents", &vtkPickingManager::GetOptimizeOnInteractorEvents)
    .function("SetInteractor", &vtkPickingManager::SetInteractor, emscripten::allow_raw_pointers())
    .function("GetInteractor", &vtkPickingManager::GetInteractor, emscripten::allow_raw_pointers())
    .function("AddPicker", &vtkPickingManager::AddPicker, emscripten::allow_raw_pointers())
    .function("RemovePicker", &vtkPickingManager::RemovePicker, emscripten::allow_raw_pointers())
    .function("RemoveObject", &vtkPickingManager::RemoveObject, emscripten::allow_raw_pointers())
    .function("Pick", emscripten::select_overload<bool(vtkPickingManager&, vtkAbstractPicker*, vtkObject*)>([](vtkPickingManager& self, vtkAbstractPicker* arg_0, vtkObject* arg_1) -> bool { return self.Pick( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Pick", emscripten::select_overload<bool(vtkPickingManager&, vtkObject*)>([](vtkPickingManager& self, vtkObject* arg_0) -> bool { return self.Pick( arg_0); }), emscripten::allow_raw_pointers())
    .function("Pick", emscripten::select_overload<bool(vtkPickingManager&, vtkAbstractPicker*)>([](vtkPickingManager& self, vtkAbstractPicker* arg_0) -> bool { return self.Pick( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetAssemblyPath", &vtkPickingManager::GetAssemblyPath, emscripten::allow_raw_pointers())
    .function("GetNumberOfPickers", &vtkPickingManager::GetNumberOfPickers)
    .function("GetNumberOfObjectsLinked", &vtkPickingManager::GetNumberOfObjectsLinked, emscripten::allow_raw_pointers());
}
