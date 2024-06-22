// JavaScript wrapper for vtkTetra with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkTetraEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkTetra.h
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
#include "vtkPoints.h"
#include "vtkTetra.h"

template<> void emscripten::internal::raw_destructor<vtkTetra>(vtkTetra * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTetra_class) {
  emscripten::class_<vtkTetra, emscripten::base<vtkCell3D>>("vtkTetra")
    .smart_ptr<vtkSmartPointer<vtkTetra>>("vtkSmartPointer<vtkTetra>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTetra>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTetra::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTetra& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTetra::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTetra::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTetra::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTetra& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsInsideOut", &vtkTetra::IsInsideOut)
    .function("GetCellType", &vtkTetra::GetCellType)
    .function("GetNumberOfEdges", &vtkTetra::GetNumberOfEdges)
    .function("GetNumberOfFaces", &vtkTetra::GetNumberOfFaces)
    .function("GetEdge", &vtkTetra::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkTetra::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkTetra::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkTetra::Clip, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkTetra::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .class_function("GetTriangleCases", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkTetra::GetTriangleCases( arg_0)) / sizeof(int);}));
}
