// JavaScript wrapper for vtkLine with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkLineEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkLine.h
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
#include "vtkLine.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkLine_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkLine>(vtkLine * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLine_class) {
  using IntersectionType=vtkLine::IntersectionType;
  using ToleranceType=vtkLine::ToleranceType;
  emscripten::class_<vtkLine, emscripten::base<vtkCell>>("vtkLine")
    .smart_ptr<vtkSmartPointer<vtkLine>>("vtkSmartPointer<vtkLine>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLine>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLine::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLine& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLine::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLine::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLine::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLine& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkLine::GetCellType)
    .function("GetCellDimension", &vtkLine::GetCellDimension)
    .function("GetNumberOfEdges", &vtkLine::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkLine::GetNumberOfFaces)
    .function("GetEdge", &vtkLine::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkLine::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkLine::Contour, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkLine::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("Inflate", &vtkLine::Inflate)
    .function("Clip", &vtkLine::Clip, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkLine_0_2_constants) {
    typedef vtkLine::IntersectionType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkLine_IntersectionType_NoIntersect", vtkLine::NoIntersect },
      { "vtkLine_IntersectionType_Intersect", vtkLine::Intersect },
      { "vtkLine_IntersectionType_OnLine", vtkLine::OnLine },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkLine_1_2_constants) {
    typedef vtkLine::ToleranceType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkLine_ToleranceType_Relative", vtkLine::Relative },
      { "vtkLine_ToleranceType_Absolute", vtkLine::Absolute },
      { "vtkLine_ToleranceType_RelativeFuzzy", vtkLine::RelativeFuzzy },
      { "vtkLine_ToleranceType_AbsoluteFuzzy", vtkLine::AbsoluteFuzzy },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
