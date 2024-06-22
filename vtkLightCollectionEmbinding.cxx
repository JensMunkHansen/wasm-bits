// JavaScript wrapper for vtkLightCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkLightCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkLightCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLight.h"
#include "vtkLightCollection.h"

template<> void emscripten::internal::raw_destructor<vtkLightCollection>(vtkLightCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLightCollection_class) {
  emscripten::class_<vtkLightCollection, emscripten::base<vtkCollection>>("vtkLightCollection")
    .smart_ptr<vtkSmartPointer<vtkLightCollection>>("vtkSmartPointer<vtkLightCollection>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLightCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLightCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLightCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLightCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLightCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLightCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLightCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkLightCollection&, vtkLight*)>([](vtkLightCollection& self, vtkLight* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextItem", &vtkLightCollection::GetNextItem, emscripten::allow_raw_pointers());
}
