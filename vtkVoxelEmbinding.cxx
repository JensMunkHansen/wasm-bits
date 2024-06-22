// JavaScript wrapper for vtkVoxel with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkVoxelEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkVoxel.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCell.h"
#include "vtkIdList.h"
#include "vtkDataArray.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkCellArray.h"
#include "vtkPointData.h"
#include "vtkCellData.h"
#include "vtkPoints.h"
#include "vtkVoxel.h"

template<> void emscripten::internal::raw_destructor<vtkVoxel>(vtkVoxel * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVoxel_class) {
  emscripten::class_<vtkVoxel, emscripten::base<vtkCell3D>>("vtkVoxel")
    .smart_ptr<vtkSmartPointer<vtkVoxel>>("vtkSmartPointer<vtkVoxel>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkVoxel>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVoxel::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVoxel& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVoxel::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVoxel::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVoxel::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVoxel& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsInsideOut", &vtkVoxel::IsInsideOut)
    .function("GetCellType", &vtkVoxel::GetCellType)
    .function("GetCellDimension", &vtkVoxel::GetCellDimension)
    .function("GetNumberOfEdges", &vtkVoxel::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkVoxel::GetNumberOfFaces)
    .function("GetEdge", &vtkVoxel::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkVoxel::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkVoxel::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkVoxel::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Inflate", &vtkVoxel::Inflate)
    .class_function("GetTriangleCases", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkVoxel::GetTriangleCases( arg_0)) / sizeof(int);}));
}
