// JavaScript wrapper for vtkCell with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCell.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkIdList.h"
#include "vtkDataArray.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkCellArray.h"
#include "vtkPointData.h"
#include "vtkCellData.h"
#include "vtkBoundingBox.h"
#include "vtkCell.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkCell_0_1_constants) {
  emscripten::constant("VTK_CELL_SIZE", 512);
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkCell_1_1_constants) {
  emscripten::constant("VTK_TOL", 1.e-05);
}
template<> void emscripten::internal::raw_destructor<vtkCell>(vtkCell * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCell_class) {
  emscripten::class_<vtkCell, emscripten::base<vtkObject>>("vtkCell")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCell::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCell& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCell::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCell::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCell::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCell& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", emscripten::select_overload<void(vtkCell&, int, std::uintptr_t, vtkPoints*)>([](vtkCell& self, int arg_0, std::uintptr_t arg_1, vtkPoints* arg_2) -> void { return self.Initialize( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)), arg_2); }), emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<void(vtkCell&, int, vtkPoints*)>([](vtkCell& self, int arg_0, vtkPoints* arg_1) -> void { return self.Initialize( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<void(vtkCell&)>([](vtkCell& self) -> void { return self.Initialize(); }))
    .function("ShallowCopy", &vtkCell::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkCell::DeepCopy, emscripten::allow_raw_pointers())
    .function("IsLinear", &vtkCell::IsLinear)
    .function("RequiresInitialization", &vtkCell::RequiresInitialization)
    .function("IsExplicitCell", &vtkCell::IsExplicitCell)
    .function("RequiresExplicitFaceRepresentation", &vtkCell::RequiresExplicitFaceRepresentation)
    .function("GetPoints", &vtkCell::GetPoints, emscripten::allow_raw_pointers())
    .function("GetNumberOfPoints", &vtkCell::GetNumberOfPoints)
    .function("GetPointIds", &vtkCell::GetPointIds, emscripten::allow_raw_pointers())
    .function("GetPointId", &vtkCell::GetPointId)
    .function("Inflate", &vtkCell::Inflate)
    .function("IntersectWithCell", emscripten::select_overload<int(vtkCell&, vtkCell*, double)>([](vtkCell& self, vtkCell* arg_0, double arg_1) -> int { return self.IntersectWithCell( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("IntersectWithCell", emscripten::select_overload<int(vtkCell&, vtkCell*, const vtkBoundingBox&, const vtkBoundingBox&, double)>([](vtkCell& self, vtkCell* arg_0, const vtkBoundingBox& arg_1, const vtkBoundingBox& arg_2, double arg_3) -> int { return self.IntersectWithCell( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("Triangulate", &vtkCell::Triangulate, emscripten::allow_raw_pointers())
    .function("TriangulateIds", &vtkCell::TriangulateIds, emscripten::allow_raw_pointers())
    .function("GetLength2", &vtkCell::GetLength2)
    .function("IsPrimaryCell", &vtkCell::IsPrimaryCell);
}
