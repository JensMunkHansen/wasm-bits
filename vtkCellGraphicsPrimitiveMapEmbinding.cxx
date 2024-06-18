// JavaScript wrapper for vtkCellGraphicsPrimitiveMap with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkCellGraphicsPrimitiveMapEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkCellGraphicsPrimitiveMap.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkCellGraphicsPrimitiveMap.h"

template<> void emscripten::internal::raw_destructor<vtkCellGraphicsPrimitiveMap>(vtkCellGraphicsPrimitiveMap * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGraphicsPrimitiveMap_class) {
  emscripten::class_<vtkCellGraphicsPrimitiveMap>("vtkCellGraphicsPrimitiveMap")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGraphicsPrimitiveMap::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGraphicsPrimitiveMap& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGraphicsPrimitiveMap::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGraphicsPrimitiveMap& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
