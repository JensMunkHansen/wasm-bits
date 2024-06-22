// JavaScript wrapper for vtkVtkJSSceneGraphSerializer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVtkJS.js/vtkRenderingVtkJS.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVtkJS.js/vtkVtkJSSceneGraphSerializerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/VtkJS/vtkVtkJSSceneGraphSerializer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkDataArray.h"
#include "vtkViewNode.h"
#include "vtkActor.h"
#include "vtkCompositePolyDataMapper.h"
#include "vtkGlyph3DMapper.h"
#include "vtkMapper.h"
#include "vtkRenderer.h"
#include "vtkRenderWindow.h"
#include "vtkVtkJSSceneGraphSerializer.h"

template<> void emscripten::internal::raw_destructor<vtkVtkJSSceneGraphSerializer>(vtkVtkJSSceneGraphSerializer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVtkJSSceneGraphSerializer_class) {
  emscripten::class_<vtkVtkJSSceneGraphSerializer, emscripten::base<vtkObject>>("vtkVtkJSSceneGraphSerializer")
    .smart_ptr<vtkSmartPointer<vtkVtkJSSceneGraphSerializer>>("vtkSmartPointer<vtkVtkJSSceneGraphSerializer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVtkJSSceneGraphSerializer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVtkJSSceneGraphSerializer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVtkJSSceneGraphSerializer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVtkJSSceneGraphSerializer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVtkJSSceneGraphSerializer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVtkJSSceneGraphSerializer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVtkJSSceneGraphSerializer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Reset", &vtkVtkJSSceneGraphSerializer::Reset)
    .function("GetNumberOfDataObjects", &vtkVtkJSSceneGraphSerializer::GetNumberOfDataObjects)
    .function("GetDataObject", &vtkVtkJSSceneGraphSerializer::GetDataObject, emscripten::allow_raw_pointers())
    .function("GetNumberOfDataArrays", &vtkVtkJSSceneGraphSerializer::GetNumberOfDataArrays)
    .function("GetDataArrayId", &vtkVtkJSSceneGraphSerializer::GetDataArrayId)
    .function("GetDataArray", &vtkVtkJSSceneGraphSerializer::GetDataArray, emscripten::allow_raw_pointers())
    .function("Add", emscripten::select_overload<void(vtkVtkJSSceneGraphSerializer&, vtkViewNode*, vtkActor*)>([](vtkVtkJSSceneGraphSerializer& self, vtkViewNode* arg_0, vtkActor* arg_1) -> void { return self.Add( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Add", emscripten::select_overload<void(vtkVtkJSSceneGraphSerializer&, vtkViewNode*, vtkCompositePolyDataMapper*)>([](vtkVtkJSSceneGraphSerializer& self, vtkViewNode* arg_0, vtkCompositePolyDataMapper* arg_1) -> void { return self.Add( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Add", emscripten::select_overload<void(vtkVtkJSSceneGraphSerializer&, vtkViewNode*, vtkGlyph3DMapper*)>([](vtkVtkJSSceneGraphSerializer& self, vtkViewNode* arg_0, vtkGlyph3DMapper* arg_1) -> void { return self.Add( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Add", emscripten::select_overload<void(vtkVtkJSSceneGraphSerializer&, vtkViewNode*, vtkMapper*)>([](vtkVtkJSSceneGraphSerializer& self, vtkViewNode* arg_0, vtkMapper* arg_1) -> void { return self.Add( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Add", emscripten::select_overload<void(vtkVtkJSSceneGraphSerializer&, vtkViewNode*, vtkRenderer*)>([](vtkVtkJSSceneGraphSerializer& self, vtkViewNode* arg_0, vtkRenderer* arg_1) -> void { return self.Add( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Add", emscripten::select_overload<void(vtkVtkJSSceneGraphSerializer&, vtkViewNode*, vtkRenderWindow*)>([](vtkVtkJSSceneGraphSerializer& self, vtkViewNode* arg_0, vtkRenderWindow* arg_1) -> void { return self.Add( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
