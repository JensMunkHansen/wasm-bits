// JavaScript wrapper for vtkAbstractCellLinks with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkAbstractCellLinksEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkAbstractCellLinks.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkCellArray.h"
#include "vtkAbstractCellLinks.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkAbstractCellLinks_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkAbstractCellLinks>(vtkAbstractCellLinks * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractCellLinks_class) {
  using CellLinksTypes=vtkAbstractCellLinks::CellLinksTypes;
  emscripten::class_<vtkAbstractCellLinks, emscripten::base<vtkObject>>("vtkAbstractCellLinks")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractCellLinks::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractCellLinks& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractCellLinks::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractCellLinks::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractCellLinks::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractCellLinks& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDataSet", &vtkAbstractCellLinks::SetDataSet, emscripten::allow_raw_pointers())
    .function("GetDataSet", &vtkAbstractCellLinks::GetDataSet, emscripten::allow_raw_pointers())
    .class_function("ComputeType", emscripten::select_overload<int( int, int, vtkCellArray*)>([]( int arg_0, int arg_1, vtkCellArray* arg_2) -> int { return vtkAbstractCellLinks::ComputeType( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("ComputeType", emscripten::select_overload<int( int, int, int)>([]( int arg_0, int arg_1, int arg_2) -> int { return vtkAbstractCellLinks::ComputeType( arg_0, arg_1, arg_2); }))
    .function("GetType", &vtkAbstractCellLinks::GetType)
    .function("SetSequentialProcessing", &vtkAbstractCellLinks::SetSequentialProcessing)
    .function("GetSequentialProcessing", &vtkAbstractCellLinks::GetSequentialProcessing)
    .function("SequentialProcessingOn", &vtkAbstractCellLinks::SequentialProcessingOn)
    .function("SequentialProcessingOff", &vtkAbstractCellLinks::SequentialProcessingOff)
    .function("GetBuildTime", &vtkAbstractCellLinks::GetBuildTime)
    .function("UsesGarbageCollector", &vtkAbstractCellLinks::UsesGarbageCollector);
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkAbstractCellLinks_0_2_constants) {
    typedef vtkAbstractCellLinks::CellLinksTypes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[6] = {
      { "vtkAbstractCellLinks_CellLinksTypes_LINKS_NOT_DEFINED", vtkAbstractCellLinks::LINKS_NOT_DEFINED },
      { "vtkAbstractCellLinks_CellLinksTypes_CELL_LINKS", vtkAbstractCellLinks::CELL_LINKS },
      { "vtkAbstractCellLinks_CellLinksTypes_STATIC_CELL_LINKS_USHORT", vtkAbstractCellLinks::STATIC_CELL_LINKS_USHORT },
      { "vtkAbstractCellLinks_CellLinksTypes_STATIC_CELL_LINKS_UINT", vtkAbstractCellLinks::STATIC_CELL_LINKS_UINT },
      { "vtkAbstractCellLinks_CellLinksTypes_STATIC_CELL_LINKS_IDTYPE", vtkAbstractCellLinks::STATIC_CELL_LINKS_IDTYPE },
      { "vtkAbstractCellLinks_CellLinksTypes_STATIC_CELL_LINKS_SPECIALIZED", vtkAbstractCellLinks::STATIC_CELL_LINKS_SPECIALIZED },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
