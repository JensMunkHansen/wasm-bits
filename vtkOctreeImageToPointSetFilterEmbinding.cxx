// JavaScript wrapper for vtkOctreeImageToPointSetFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometryPreview.js/vtkFiltersGeometryPreview.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometryPreview.js/vtkOctreeImageToPointSetFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/GeometryPreview/vtkOctreeImageToPointSetFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOctreeImageToPointSetFilter.h"

template<> void emscripten::internal::raw_destructor<vtkOctreeImageToPointSetFilter>(vtkOctreeImageToPointSetFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOctreeImageToPointSetFilter_class) {
  emscripten::class_<vtkOctreeImageToPointSetFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkOctreeImageToPointSetFilter")
    .smart_ptr<vtkSmartPointer<vtkOctreeImageToPointSetFilter>>("vtkSmartPointer<vtkOctreeImageToPointSetFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOctreeImageToPointSetFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOctreeImageToPointSetFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOctreeImageToPointSetFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOctreeImageToPointSetFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOctreeImageToPointSetFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOctreeImageToPointSetFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOctreeImageToPointSetFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCreateVerticesCellArray", &vtkOctreeImageToPointSetFilter::SetCreateVerticesCellArray)
    .function("GetCreateVerticesCellArray", &vtkOctreeImageToPointSetFilter::GetCreateVerticesCellArray)
    .function("CreateVerticesCellArrayOn", &vtkOctreeImageToPointSetFilter::CreateVerticesCellArrayOn)
    .function("CreateVerticesCellArrayOff", &vtkOctreeImageToPointSetFilter::CreateVerticesCellArrayOff)
    .function("SetProcessInputCellArray", &vtkOctreeImageToPointSetFilter::SetProcessInputCellArray)
    .function("GetProcessInputCellArray", &vtkOctreeImageToPointSetFilter::GetProcessInputCellArray)
    .function("ProcessInputCellArrayOn", &vtkOctreeImageToPointSetFilter::ProcessInputCellArrayOn)
    .function("ProcessInputCellArrayOff", &vtkOctreeImageToPointSetFilter::ProcessInputCellArrayOff)
    .function("SetCellArrayComponent", &vtkOctreeImageToPointSetFilter::SetCellArrayComponent)
    .function("GetCellArrayComponentMinValue", &vtkOctreeImageToPointSetFilter::GetCellArrayComponentMinValue)
    .function("GetCellArrayComponentMaxValue", &vtkOctreeImageToPointSetFilter::GetCellArrayComponentMaxValue)
    .function("GetCellArrayComponent", &vtkOctreeImageToPointSetFilter::GetCellArrayComponent);
}
