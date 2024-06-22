// JavaScript wrapper for vtkConvexPointSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkConvexPointSetEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkConvexPointSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCell.h"
#include "vtkDataArray.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkCellArray.h"
#include "vtkPointData.h"
#include "vtkCellData.h"
#include "vtkIdList.h"
#include "vtkConvexPointSet.h"

template<> void emscripten::internal::raw_destructor<vtkConvexPointSet>(vtkConvexPointSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConvexPointSet_class) {
  emscripten::class_<vtkConvexPointSet, emscripten::base<vtkCell3D>>("vtkConvexPointSet")
    .smart_ptr<vtkSmartPointer<vtkConvexPointSet>>("vtkSmartPointer<vtkConvexPointSet>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkConvexPointSet>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConvexPointSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConvexPointSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConvexPointSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConvexPointSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConvexPointSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConvexPointSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("HasFixedTopology", &vtkConvexPointSet::HasFixedTopology)
    .function("GetCellType", &vtkConvexPointSet::GetCellType)
    .function("RequiresInitialization", &vtkConvexPointSet::RequiresInitialization)
    .function("Initialize", &vtkConvexPointSet::Initialize)
    .function("GetNumberOfEdges", &vtkConvexPointSet::GetNumberOfEdges)
    .function("GetEdge", &vtkConvexPointSet::GetEdge, emscripten::allow_raw_pointers())
    .function("GetNumberOfFaces", &vtkConvexPointSet::GetNumberOfFaces)
    .function("GetFace", &vtkConvexPointSet::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkConvexPointSet::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkConvexPointSet::Clip, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkConvexPointSet::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("IsPrimaryCell", &vtkConvexPointSet::IsPrimaryCell);
}
