// JavaScript wrapper for vtkProp3DCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkProp3DCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkProp3DCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProp3D.h"
#include "vtkProp3DCollection.h"

template<> void emscripten::internal::raw_destructor<vtkProp3DCollection>(vtkProp3DCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProp3DCollection_class) {
  emscripten::class_<vtkProp3DCollection, emscripten::base<vtkPropCollection>>("vtkProp3DCollection")
    .smart_ptr<vtkSmartPointer<vtkProp3DCollection>>("vtkSmartPointer<vtkProp3DCollection>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkProp3DCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProp3DCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProp3DCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProp3DCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProp3DCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProp3DCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProp3DCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddItem", emscripten::select_overload<void(vtkProp3DCollection&, vtkProp3D*)>([](vtkProp3DCollection& self, vtkProp3D* arg_0) -> void { return self.AddItem( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNextProp3D", emscripten::select_overload<vtkProp3D*(vtkProp3DCollection&)>([](vtkProp3DCollection& self) -> vtkProp3D* { return self.GetNextProp3D(); }), emscripten::allow_raw_pointers())
    .function("GetLastProp3D", &vtkProp3DCollection::GetLastProp3D, emscripten::allow_raw_pointers());
}
