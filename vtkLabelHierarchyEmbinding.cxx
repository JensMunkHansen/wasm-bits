// JavaScript wrapper for vtkLabelHierarchy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkRenderingLabel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkLabelHierarchyEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Label/vtkLabelHierarchy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkTextProperty.h"
#include "vtkDataArray.h"
#include "vtkAbstractArray.h"
#include "vtkIntArray.h"
#include "vtkLabelHierarchyIterator.h"
#include "vtkRenderer.h"
#include "vtkCamera.h"
#include "vtkCell.h"
#include "vtkGenericCell.h"
#include "vtkIdList.h"
#include "vtkCoincidentPoints.h"
#include "vtkCoordinate.h"
#include "vtkLabelHierarchy.h"

EMSCRIPTEN_BINDINGS(vtkRenderingLabel_vtkLabelHierarchy_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkLabelHierarchy>(vtkLabelHierarchy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLabelHierarchy_class) {
  using IteratorType=vtkLabelHierarchy::IteratorType;
  emscripten::class_<vtkLabelHierarchy, emscripten::base<vtkPointSet>>("vtkLabelHierarchy")
    .smart_ptr<vtkSmartPointer<vtkLabelHierarchy>>("vtkSmartPointer<vtkLabelHierarchy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLabelHierarchy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabelHierarchy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLabelHierarchy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLabelHierarchy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLabelHierarchy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabelHierarchy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLabelHierarchy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPoints", &vtkLabelHierarchy::SetPoints, emscripten::allow_raw_pointers())
    .function("ComputeHierarchy", &vtkLabelHierarchy::ComputeHierarchy)
    .function("SetTargetLabelCount", &vtkLabelHierarchy::SetTargetLabelCount)
    .function("GetTargetLabelCount", &vtkLabelHierarchy::GetTargetLabelCount)
    .function("SetMaximumDepth", &vtkLabelHierarchy::SetMaximumDepth)
    .function("GetMaximumDepth", &vtkLabelHierarchy::GetMaximumDepth)
    .function("SetTextProperty", &vtkLabelHierarchy::SetTextProperty, emscripten::allow_raw_pointers())
    .function("GetTextProperty", &vtkLabelHierarchy::GetTextProperty, emscripten::allow_raw_pointers())
    .function("SetPriorities", &vtkLabelHierarchy::SetPriorities, emscripten::allow_raw_pointers())
    .function("GetPriorities", &vtkLabelHierarchy::GetPriorities, emscripten::allow_raw_pointers())
    .function("SetLabels", &vtkLabelHierarchy::SetLabels, emscripten::allow_raw_pointers())
    .function("GetLabels", &vtkLabelHierarchy::GetLabels, emscripten::allow_raw_pointers())
    .function("SetOrientations", &vtkLabelHierarchy::SetOrientations, emscripten::allow_raw_pointers())
    .function("GetOrientations", &vtkLabelHierarchy::GetOrientations, emscripten::allow_raw_pointers())
    .function("SetIconIndices", &vtkLabelHierarchy::SetIconIndices, emscripten::allow_raw_pointers())
    .function("GetIconIndices", &vtkLabelHierarchy::GetIconIndices, emscripten::allow_raw_pointers())
    .function("SetSizes", &vtkLabelHierarchy::SetSizes, emscripten::allow_raw_pointers())
    .function("GetSizes", &vtkLabelHierarchy::GetSizes, emscripten::allow_raw_pointers())
    .function("SetBoundedSizes", &vtkLabelHierarchy::SetBoundedSizes, emscripten::allow_raw_pointers())
    .function("GetBoundedSizes", &vtkLabelHierarchy::GetBoundedSizes, emscripten::allow_raw_pointers())
    .function("GetNumberOfCells", &vtkLabelHierarchy::GetNumberOfCells)
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkLabelHierarchy&, int)>([](vtkLabelHierarchy& self, int arg_0) -> vtkCell* { return self.GetCell( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<void(vtkLabelHierarchy&, int, vtkGenericCell*)>([](vtkLabelHierarchy& self, int arg_0, vtkGenericCell* arg_1) -> void { return self.GetCell( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkLabelHierarchy&, int, int, int)>([](vtkLabelHierarchy& self, int arg_0, int arg_1, int arg_2) -> vtkCell* { return self.GetCell( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetCellType", &vtkLabelHierarchy::GetCellType)
    .function("GetCellPoints", &vtkLabelHierarchy::GetCellPoints, emscripten::allow_raw_pointers())
    .function("GetPointCells", &vtkLabelHierarchy::GetPointCells, emscripten::allow_raw_pointers())
    .function("GetMaxCellSize", &vtkLabelHierarchy::GetMaxCellSize)
    .function("GetCenterPts", &vtkLabelHierarchy::GetCenterPts, emscripten::allow_raw_pointers())
    .function("GetCoincidentPoints", &vtkLabelHierarchy::GetCoincidentPoints, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingLabel_vtkLabelHierarchy_0_2_constants) {
    typedef vtkLabelHierarchy::IteratorType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkLabelHierarchy_IteratorType_FULL_SORT", vtkLabelHierarchy::FULL_SORT },
      { "vtkLabelHierarchy_IteratorType_QUEUE", vtkLabelHierarchy::QUEUE },
      { "vtkLabelHierarchy_IteratorType_DEPTH_FIRST", vtkLabelHierarchy::DEPTH_FIRST },
      { "vtkLabelHierarchy_IteratorType_FRUSTUM", vtkLabelHierarchy::FRUSTUM },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
