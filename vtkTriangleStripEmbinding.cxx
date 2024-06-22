// JavaScript wrapper for vtkTriangleStrip with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkTriangleStripEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkTriangleStrip.h
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
#include "vtkTriangleStrip.h"

template<> void emscripten::internal::raw_destructor<vtkTriangleStrip>(vtkTriangleStrip * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTriangleStrip_class) {
  emscripten::class_<vtkTriangleStrip, emscripten::base<vtkCell>>("vtkTriangleStrip")
    .smart_ptr<vtkSmartPointer<vtkTriangleStrip>>("vtkSmartPointer<vtkTriangleStrip>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTriangleStrip>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTriangleStrip::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTriangleStrip& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTriangleStrip::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTriangleStrip::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTriangleStrip::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTriangleStrip& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkTriangleStrip::GetCellType)
    .function("GetCellDimension", &vtkTriangleStrip::GetCellDimension)
    .function("GetNumberOfEdges", &vtkTriangleStrip::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkTriangleStrip::GetNumberOfFaces)
    .function("GetEdge", &vtkTriangleStrip::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkTriangleStrip::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkTriangleStrip::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkTriangleStrip::Clip, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkTriangleStrip::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("IsPrimaryCell", &vtkTriangleStrip::IsPrimaryCell)
    .class_function("DecomposeStrip", emscripten::optional_override([]( int arg_0, std::uintptr_t arg_1, vtkCellArray* arg_2) -> void {  return vtkTriangleStrip::DecomposeStrip( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)), arg_2);}), emscripten::allow_raw_pointers());
}
