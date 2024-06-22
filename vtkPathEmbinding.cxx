// JavaScript wrapper for vtkPath with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPathEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPath.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIntArray.h"
#include "vtkCell.h"
#include "vtkGenericCell.h"
#include "vtkIdList.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkPath.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkPath_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPath>(vtkPath * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPath_class) {
  using ControlPointType=vtkPath::ControlPointType;
  emscripten::class_<vtkPath, emscripten::base<vtkPointSet>>("vtkPath")
    .smart_ptr<vtkSmartPointer<vtkPath>>("vtkSmartPointer<vtkPath>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPath>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPath::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPath& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPath::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPath::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPath::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPath& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkPath::GetDataObjectType)
    .function("InsertNextPoint", emscripten::select_overload<void(vtkPath&, double, double, double, int)>([](vtkPath& self, double arg_0, double arg_1, double arg_2, int arg_3) -> void { return self.InsertNextPoint( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetCodes", &vtkPath::SetCodes, emscripten::allow_raw_pointers())
    .function("GetCodes", &vtkPath::GetCodes, emscripten::allow_raw_pointers())
    .function("GetNumberOfCells", &vtkPath::GetNumberOfCells)
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkPath&, int)>([](vtkPath& self, int arg_0) -> vtkCell* { return self.GetCell( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<void(vtkPath&, int, vtkGenericCell*)>([](vtkPath& self, int arg_0, vtkGenericCell* arg_1) -> void { return self.GetCell( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkPath&, int, int, int)>([](vtkPath& self, int arg_0, int arg_1, int arg_2) -> vtkCell* { return self.GetCell( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetCellType", &vtkPath::GetCellType)
    .function("GetCellPoints", &vtkPath::GetCellPoints, emscripten::allow_raw_pointers())
    .function("GetPointCells", &vtkPath::GetPointCells, emscripten::allow_raw_pointers())
    .function("GetMaxCellSize", &vtkPath::GetMaxCellSize)
    .function("GetMaxSpatialDimension", &vtkPath::GetMaxSpatialDimension)
    .function("Allocate", &vtkPath::Allocate)
    .function("Reset", &vtkPath::Reset)
    .class_function("GetData", emscripten::select_overload<vtkPath*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkPath* { return vtkPath::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkPath*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkPath* { return vtkPath::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkPath_0_2_constants) {
    typedef vtkPath::ControlPointType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkPath_ControlPointType_MOVE_TO", vtkPath::MOVE_TO },
      { "vtkPath_ControlPointType_LINE_TO", vtkPath::LINE_TO },
      { "vtkPath_ControlPointType_CONIC_CURVE", vtkPath::CONIC_CURVE },
      { "vtkPath_ControlPointType_CUBIC_CURVE", vtkPath::CUBIC_CURVE },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
