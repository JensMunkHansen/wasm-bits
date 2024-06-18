// JavaScript wrapper for vtkWindowLevelLookupTable with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkWindowLevelLookupTableEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkWindowLevelLookupTable.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWindowLevelLookupTable.h"

template<> void emscripten::internal::raw_destructor<vtkWindowLevelLookupTable>(vtkWindowLevelLookupTable * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWindowLevelLookupTable_class) {
  emscripten::class_<vtkWindowLevelLookupTable, emscripten::base<vtkLookupTable>>("vtkWindowLevelLookupTable")
    .smart_ptr<vtkSmartPointer<vtkWindowLevelLookupTable>>("vtkSmartPointer<vtkWindowLevelLookupTable>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkWindowLevelLookupTable>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWindowLevelLookupTable::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWindowLevelLookupTable& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWindowLevelLookupTable::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWindowLevelLookupTable::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWindowLevelLookupTable::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWindowLevelLookupTable& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ForceBuild", &vtkWindowLevelLookupTable::ForceBuild)
    .function("SetWindow", &vtkWindowLevelLookupTable::SetWindow)
    .function("GetWindow", &vtkWindowLevelLookupTable::GetWindow)
    .function("SetLevel", &vtkWindowLevelLookupTable::SetLevel)
    .function("GetLevel", &vtkWindowLevelLookupTable::GetLevel)
    .function("SetInverseVideo", &vtkWindowLevelLookupTable::SetInverseVideo)
    .function("GetInverseVideo", &vtkWindowLevelLookupTable::GetInverseVideo)
    .function("InverseVideoOn", &vtkWindowLevelLookupTable::InverseVideoOn)
    .function("InverseVideoOff", &vtkWindowLevelLookupTable::InverseVideoOff)
    .function("SetMinimumTableValue", emscripten::select_overload<void(vtkWindowLevelLookupTable&, double, double, double, double)>([](vtkWindowLevelLookupTable& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetMinimumTableValue( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetMaximumTableValue", emscripten::select_overload<void(vtkWindowLevelLookupTable&, double, double, double, double)>([](vtkWindowLevelLookupTable& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetMaximumTableValue( arg_0, arg_1, arg_2, arg_3); }));
}
