// JavaScript wrapper for vtkTextureUnitManager with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkTextureUnitManagerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkTextureUnitManager.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextureUnitManager.h"

template<> void emscripten::internal::raw_destructor<vtkTextureUnitManager>(vtkTextureUnitManager * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTextureUnitManager_class) {
  emscripten::class_<vtkTextureUnitManager, emscripten::base<vtkObject>>("vtkTextureUnitManager")
    .smart_ptr<vtkSmartPointer<vtkTextureUnitManager>>("vtkSmartPointer<vtkTextureUnitManager>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTextureUnitManager>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextureUnitManager::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTextureUnitManager& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTextureUnitManager::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTextureUnitManager::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextureUnitManager::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTextureUnitManager& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkTextureUnitManager::Initialize)
    .function("GetNumberOfTextureUnits", &vtkTextureUnitManager::GetNumberOfTextureUnits)
    .function("Allocate", emscripten::select_overload<int(vtkTextureUnitManager&)>([](vtkTextureUnitManager& self) -> int { return self.Allocate(); }))
    .function("Allocate", emscripten::select_overload<int(vtkTextureUnitManager&, int)>([](vtkTextureUnitManager& self, int arg_0) -> int { return self.Allocate( arg_0); }))
    .function("IsAllocated", &vtkTextureUnitManager::IsAllocated)
    .function("Free", &vtkTextureUnitManager::Free);
}
