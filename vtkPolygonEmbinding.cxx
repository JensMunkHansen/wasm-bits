// JavaScript wrapper for vtkPolygon with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPolygonEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPolygon.h
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
#include "vtkIdTypeArray.h"
#include "vtkPolygon.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkPolygon_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPolygon>(vtkPolygon * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolygon_class) {
  using EarCutMeasureTypes=vtkPolygon::EarCutMeasureTypes;
  emscripten::class_<vtkPolygon, emscripten::base<vtkCell>>("vtkPolygon")
    .smart_ptr<vtkSmartPointer<vtkPolygon>>("vtkSmartPointer<vtkPolygon>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolygon>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolygon::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolygon& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolygon::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolygon::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolygon::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolygon& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkPolygon::GetCellType)
    .function("GetCellDimension", &vtkPolygon::GetCellDimension)
    .function("GetNumberOfEdges", &vtkPolygon::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkPolygon::GetNumberOfFaces)
    .function("GetEdge", &vtkPolygon::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkPolygon::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkPolygon::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkPolygon::Clip, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkPolygon::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("IsPrimaryCell", &vtkPolygon::IsPrimaryCell)
    .function("ComputeArea", emscripten::select_overload<double(vtkPolygon&)>([](vtkPolygon& self) -> double { return self.ComputeArea(); }))
    .function("IsConvex", emscripten::select_overload<bool(vtkPolygon&)>([](vtkPolygon& self) -> bool { return self.IsConvex(); }))
    .class_function("IsConvex", emscripten::select_overload<bool( vtkPoints*, int, std::uintptr_t)>([]( vtkPoints* arg_0, int arg_1, std::uintptr_t arg_2) -> bool { return vtkPolygon::IsConvex( arg_0, arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int))); }), emscripten::allow_raw_pointers())
    .class_function("IsConvex", emscripten::select_overload<bool( vtkIdTypeArray*, vtkPoints*)>([]( vtkIdTypeArray* arg_0, vtkPoints* arg_1) -> bool { return vtkPolygon::IsConvex( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("IsConvex", emscripten::select_overload<bool( vtkPoints*)>([]( vtkPoints* arg_0) -> bool { return vtkPolygon::IsConvex( arg_0); }), emscripten::allow_raw_pointers())
    .function("Triangulate", emscripten::select_overload<int(vtkPolygon&, int, vtkIdList*, vtkPoints*)>([](vtkPolygon& self, int arg_0, vtkIdList* arg_1, vtkPoints* arg_2) -> int { return self.Triangulate( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("NonDegenerateTriangulate", &vtkPolygon::NonDegenerateTriangulate, emscripten::allow_raw_pointers())
    .function("BoundedTriangulate", &vtkPolygon::BoundedTriangulate, emscripten::allow_raw_pointers())
    .function("GetUseMVCInterpolation", &vtkPolygon::GetUseMVCInterpolation)
    .function("SetUseMVCInterpolation", &vtkPolygon::SetUseMVCInterpolation)
    .function("SetTolerance", &vtkPolygon::SetTolerance)
    .function("GetToleranceMinValue", &vtkPolygon::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkPolygon::GetToleranceMaxValue)
    .function("GetTolerance", &vtkPolygon::GetTolerance)
    .function("EarCutTriangulation", emscripten::select_overload<int(vtkPolygon&, int)>([](vtkPolygon& self, int arg_0) -> int { return self.EarCutTriangulation( arg_0); }))
    .function("EarCutTriangulation", emscripten::select_overload<int(vtkPolygon&, vtkIdList*, int)>([](vtkPolygon& self, vtkIdList* arg_0, int arg_1) -> int { return self.EarCutTriangulation( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("UnbiasedEarCutTriangulation", emscripten::select_overload<int(vtkPolygon&, int, int)>([](vtkPolygon& self, int arg_0, int arg_1) -> int { return self.UnbiasedEarCutTriangulation( arg_0, arg_1); }))
    .function("UnbiasedEarCutTriangulation", emscripten::select_overload<int(vtkPolygon&, int, vtkIdList*, int)>([](vtkPolygon& self, int arg_0, vtkIdList* arg_1, int arg_2) -> int { return self.UnbiasedEarCutTriangulation( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkPolygon_0_2_constants) {
    typedef vtkPolygon::EarCutMeasureTypes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkPolygon_EarCutMeasureTypes_PERIMETER2_TO_AREA_RATIO", vtkPolygon::PERIMETER2_TO_AREA_RATIO },
      { "vtkPolygon_EarCutMeasureTypes_DOT_PRODUCT", vtkPolygon::DOT_PRODUCT },
      { "vtkPolygon_EarCutMeasureTypes_BEST_QUALITY", vtkPolygon::BEST_QUALITY },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
