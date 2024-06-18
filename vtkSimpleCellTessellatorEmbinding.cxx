// JavaScript wrapper for vtkSimpleCellTessellator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkSimpleCellTessellatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkSimpleCellTessellator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericAdaptorCell.h"
#include "vtkGenericAttributeCollection.h"
#include "vtkDoubleArray.h"
#include "vtkCellArray.h"
#include "vtkPointData.h"
#include "vtkGenericDataSet.h"
#include "vtkSimpleCellTessellator.h"

template<> void emscripten::internal::raw_destructor<vtkSimpleCellTessellator>(vtkSimpleCellTessellator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSimpleCellTessellator_class) {
  emscripten::class_<vtkSimpleCellTessellator, emscripten::base<vtkGenericCellTessellator>>("vtkSimpleCellTessellator")
    .smart_ptr<vtkSmartPointer<vtkSimpleCellTessellator>>("vtkSmartPointer<vtkSimpleCellTessellator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSimpleCellTessellator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimpleCellTessellator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSimpleCellTessellator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSimpleCellTessellator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSimpleCellTessellator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimpleCellTessellator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSimpleCellTessellator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetGenericCell", &vtkSimpleCellTessellator::GetGenericCell, emscripten::allow_raw_pointers())
    .function("TessellateFace", &vtkSimpleCellTessellator::TessellateFace, emscripten::allow_raw_pointers())
    .function("Tessellate", &vtkSimpleCellTessellator::Tessellate, emscripten::allow_raw_pointers())
    .function("Triangulate", &vtkSimpleCellTessellator::Triangulate, emscripten::allow_raw_pointers())
    .function("Reset", &vtkSimpleCellTessellator::Reset)
    .function("Initialize", &vtkSimpleCellTessellator::Initialize, emscripten::allow_raw_pointers())
    .function("GetFixedSubdivisions", &vtkSimpleCellTessellator::GetFixedSubdivisions)
    .function("GetMaxSubdivisionLevel", &vtkSimpleCellTessellator::GetMaxSubdivisionLevel)
    .function("GetMaxAdaptiveSubdivisions", &vtkSimpleCellTessellator::GetMaxAdaptiveSubdivisions)
    .function("SetFixedSubdivisions", &vtkSimpleCellTessellator::SetFixedSubdivisions)
    .function("SetMaxSubdivisionLevel", &vtkSimpleCellTessellator::SetMaxSubdivisionLevel)
    .function("SetSubdivisionLevels", &vtkSimpleCellTessellator::SetSubdivisionLevels);
}
