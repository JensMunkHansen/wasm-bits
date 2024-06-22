// JavaScript wrapper for vtkCellCenterDepthSort with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkCellCenterDepthSortEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkCellCenterDepthSort.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdTypeArray.h"
#include "vtkCellCenterDepthSort.h"

template<> void emscripten::internal::raw_destructor<vtkCellCenterDepthSort>(vtkCellCenterDepthSort * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellCenterDepthSort_class) {
  emscripten::class_<vtkCellCenterDepthSort, emscripten::base<vtkVisibilitySort>>("vtkCellCenterDepthSort")
    .smart_ptr<vtkSmartPointer<vtkCellCenterDepthSort>>("vtkSmartPointer<vtkCellCenterDepthSort>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCellCenterDepthSort>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellCenterDepthSort::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellCenterDepthSort& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellCenterDepthSort::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellCenterDepthSort::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellCenterDepthSort::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellCenterDepthSort& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("InitTraversal", &vtkCellCenterDepthSort::InitTraversal)
    .function("GetNextCells", &vtkCellCenterDepthSort::GetNextCells, emscripten::allow_raw_pointers());
}
