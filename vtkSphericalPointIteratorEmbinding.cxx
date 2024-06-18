// JavaScript wrapper for vtkSphericalPointIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkSphericalPointIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkSphericalPointIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkDoubleArray.h"
#include "vtkIdList.h"
#include "vtkPolyData.h"
#include "vtkSphericalPointIterator.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkSphericalPointIterator_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSphericalPointIterator>(vtkSphericalPointIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSphericalPointIterator_class) {
  using AxesType=vtkSphericalPointIterator::AxesType;
  using SortType=vtkSphericalPointIterator::SortType;
  emscripten::class_<vtkSphericalPointIterator, emscripten::base<vtkObject>>("vtkSphericalPointIterator")
    .smart_ptr<vtkSmartPointer<vtkSphericalPointIterator>>("vtkSmartPointer<vtkSphericalPointIterator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSphericalPointIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphericalPointIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSphericalPointIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSphericalPointIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSphericalPointIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphericalPointIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSphericalPointIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDataSet", &vtkSphericalPointIterator::SetDataSet, emscripten::allow_raw_pointers())
    .function("GetDataSet", &vtkSphericalPointIterator::GetDataSet, emscripten::allow_raw_pointers())
    .function("SetAxes", emscripten::select_overload<void(vtkSphericalPointIterator&, vtkDoubleArray*)>([](vtkSphericalPointIterator& self, vtkDoubleArray* arg_0) -> void { return self.SetAxes( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetAxes", emscripten::select_overload<void(vtkSphericalPointIterator&, int, int)>([](vtkSphericalPointIterator& self, int arg_0, int arg_1) -> void { return self.SetAxes( arg_0, arg_1); }))
    .function("GetAxes", &vtkSphericalPointIterator::GetAxes, emscripten::allow_raw_pointers())
    .function("SetSorting", &vtkSphericalPointIterator::SetSorting)
    .function("GetSortingMinValue", &vtkSphericalPointIterator::GetSortingMinValue)
    .function("GetSortingMaxValue", &vtkSphericalPointIterator::GetSortingMaxValue)
    .function("GetSorting", &vtkSphericalPointIterator::GetSorting)
    .function("SetSortTypeToNone", &vtkSphericalPointIterator::SetSortTypeToNone)
    .function("SetSortTypeToAscending", &vtkSphericalPointIterator::SetSortTypeToAscending)
    .function("SetSortTypeToDescending", &vtkSphericalPointIterator::SetSortTypeToDescending)
    .function("GoToFirstPoint", &vtkSphericalPointIterator::GoToFirstPoint)
    .function("IsDoneWithTraversal", &vtkSphericalPointIterator::IsDoneWithTraversal)
    .function("GoToNextPoint", &vtkSphericalPointIterator::GoToNextPoint)
    .function("GetCurrentPoint", emscripten::select_overload<int(vtkSphericalPointIterator&)>([](vtkSphericalPointIterator& self) -> int { return self.GetCurrentPoint(); }))
    .function("GetPoint", &vtkSphericalPointIterator::GetPoint)
    .function("GetNumberOfAxes", &vtkSphericalPointIterator::GetNumberOfAxes)
    .function("BuildRepresentation", &vtkSphericalPointIterator::BuildRepresentation, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkSphericalPointIterator_0_2_constants) {
    typedef vtkSphericalPointIterator::AxesType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[8] = {
      { "vtkSphericalPointIterator_AxesType_XY_CW_AXES", vtkSphericalPointIterator::XY_CW_AXES },
      { "vtkSphericalPointIterator_AxesType_XY_CCW_AXES", vtkSphericalPointIterator::XY_CCW_AXES },
      { "vtkSphericalPointIterator_AxesType_XY_SQUARE_AXES", vtkSphericalPointIterator::XY_SQUARE_AXES },
      { "vtkSphericalPointIterator_AxesType_CUBE_AXES", vtkSphericalPointIterator::CUBE_AXES },
      { "vtkSphericalPointIterator_AxesType_OCTAHEDRON_AXES", vtkSphericalPointIterator::OCTAHEDRON_AXES },
      { "vtkSphericalPointIterator_AxesType_CUBE_OCTAHEDRON_AXES", vtkSphericalPointIterator::CUBE_OCTAHEDRON_AXES },
      { "vtkSphericalPointIterator_AxesType_DODECAHEDRON_AXES", vtkSphericalPointIterator::DODECAHEDRON_AXES },
      { "vtkSphericalPointIterator_AxesType_ICOSAHEDRON_AXES", vtkSphericalPointIterator::ICOSAHEDRON_AXES },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkSphericalPointIterator_1_2_constants) {
    typedef vtkSphericalPointIterator::SortType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkSphericalPointIterator_SortType_SORT_NONE", vtkSphericalPointIterator::SORT_NONE },
      { "vtkSphericalPointIterator_SortType_SORT_ASCENDING", vtkSphericalPointIterator::SORT_ASCENDING },
      { "vtkSphericalPointIterator_SortType_SORT_DESCENDING", vtkSphericalPointIterator::SORT_DESCENDING },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
