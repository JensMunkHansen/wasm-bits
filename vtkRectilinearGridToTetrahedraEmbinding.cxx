// JavaScript wrapper for vtkRectilinearGridToTetrahedra with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkRectilinearGridToTetrahedraEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkRectilinearGridToTetrahedra.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRectilinearGridToTetrahedra.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkRectilinearGridToTetrahedra_0_1_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "VTK_VOXEL_TO_12_TET", 12 },
      { "VTK_VOXEL_TO_5_TET", 5 },
      { "VTK_VOXEL_TO_6_TET", 6 },
      { "VTK_VOXEL_TO_5_AND_12_TET", -1 },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkRectilinearGridToTetrahedra>(vtkRectilinearGridToTetrahedra * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRectilinearGridToTetrahedra_class) {
  emscripten::class_<vtkRectilinearGridToTetrahedra, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkRectilinearGridToTetrahedra")
    .smart_ptr<vtkSmartPointer<vtkRectilinearGridToTetrahedra>>("vtkSmartPointer<vtkRectilinearGridToTetrahedra>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRectilinearGridToTetrahedra>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGridToTetrahedra::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRectilinearGridToTetrahedra& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRectilinearGridToTetrahedra::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRectilinearGridToTetrahedra::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGridToTetrahedra::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRectilinearGridToTetrahedra& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTetraPerCellTo5", &vtkRectilinearGridToTetrahedra::SetTetraPerCellTo5)
    .function("SetTetraPerCellTo6", &vtkRectilinearGridToTetrahedra::SetTetraPerCellTo6)
    .function("SetTetraPerCellTo12", &vtkRectilinearGridToTetrahedra::SetTetraPerCellTo12)
    .function("SetTetraPerCellTo5And12", &vtkRectilinearGridToTetrahedra::SetTetraPerCellTo5And12)
    .function("SetTetraPerCell", &vtkRectilinearGridToTetrahedra::SetTetraPerCell)
    .function("GetTetraPerCell", &vtkRectilinearGridToTetrahedra::GetTetraPerCell)
    .function("SetRememberVoxelId", &vtkRectilinearGridToTetrahedra::SetRememberVoxelId)
    .function("GetRememberVoxelId", &vtkRectilinearGridToTetrahedra::GetRememberVoxelId)
    .function("RememberVoxelIdOn", &vtkRectilinearGridToTetrahedra::RememberVoxelIdOn)
    .function("RememberVoxelIdOff", &vtkRectilinearGridToTetrahedra::RememberVoxelIdOff)
    .function("SetInput", emscripten::select_overload<void(vtkRectilinearGridToTetrahedra&, double, double, double, double, double, double, double)>([](vtkRectilinearGridToTetrahedra& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5, double arg_6) -> void { return self.SetInput( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }));
}
