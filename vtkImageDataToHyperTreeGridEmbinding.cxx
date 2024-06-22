// JavaScript wrapper for vtkImageDataToHyperTreeGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkFiltersHyperTree.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkImageDataToHyperTreeGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/HyperTree/vtkImageDataToHyperTreeGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageDataToHyperTreeGrid.h"

template<> void emscripten::internal::raw_destructor<vtkImageDataToHyperTreeGrid>(vtkImageDataToHyperTreeGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageDataToHyperTreeGrid_class) {
  emscripten::class_<vtkImageDataToHyperTreeGrid, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkImageDataToHyperTreeGrid")
    .smart_ptr<vtkSmartPointer<vtkImageDataToHyperTreeGrid>>("vtkSmartPointer<vtkImageDataToHyperTreeGrid>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageDataToHyperTreeGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDataToHyperTreeGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageDataToHyperTreeGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageDataToHyperTreeGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageDataToHyperTreeGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDataToHyperTreeGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageDataToHyperTreeGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDepthMax", &vtkImageDataToHyperTreeGrid::SetDepthMax)
    .function("GetDepthMax", &vtkImageDataToHyperTreeGrid::GetDepthMax)
    .function("SetNbColors", &vtkImageDataToHyperTreeGrid::SetNbColors)
    .function("GetNbColors", &vtkImageDataToHyperTreeGrid::GetNbColors);
}
