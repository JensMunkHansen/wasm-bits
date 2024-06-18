// JavaScript wrapper for vtkGraphLayout with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkGraphLayoutEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkGraphLayout.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraphLayoutStrategy.h"
#include "vtkAbstractTransform.h"
#include "vtkGraphLayout.h"

template<> void emscripten::internal::raw_destructor<vtkGraphLayout>(vtkGraphLayout * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphLayout_class) {
  emscripten::class_<vtkGraphLayout, emscripten::base<vtkGraphAlgorithm>>("vtkGraphLayout")
    .smart_ptr<vtkSmartPointer<vtkGraphLayout>>("vtkSmartPointer<vtkGraphLayout>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGraphLayout>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphLayout::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphLayout& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphLayout::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphLayout::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphLayout::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphLayout& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLayoutStrategy", &vtkGraphLayout::SetLayoutStrategy, emscripten::allow_raw_pointers())
    .function("GetLayoutStrategy", &vtkGraphLayout::GetLayoutStrategy, emscripten::allow_raw_pointers())
    .function("IsLayoutComplete", &vtkGraphLayout::IsLayoutComplete)
    .function("GetMTime", &vtkGraphLayout::GetMTime)
    .function("GetZRange", &vtkGraphLayout::GetZRange)
    .function("SetZRange", &vtkGraphLayout::SetZRange)
    .function("GetTransform", &vtkGraphLayout::GetTransform, emscripten::allow_raw_pointers())
    .function("SetTransform", &vtkGraphLayout::SetTransform, emscripten::allow_raw_pointers())
    .function("SetUseTransform", &vtkGraphLayout::SetUseTransform)
    .function("GetUseTransform", &vtkGraphLayout::GetUseTransform)
    .function("UseTransformOn", &vtkGraphLayout::UseTransformOn)
    .function("UseTransformOff", &vtkGraphLayout::UseTransformOff);
}
