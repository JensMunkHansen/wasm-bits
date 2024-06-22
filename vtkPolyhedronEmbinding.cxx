// JavaScript wrapper for vtkPolyhedron with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPolyhedronEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPolyhedron.h
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
#include "vtkPolyData.h"
#include "vtkPolyhedron.h"

template<> void emscripten::internal::raw_destructor<vtkPolyhedron>(vtkPolyhedron * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyhedron_class) {
  emscripten::class_<vtkPolyhedron, emscripten::base<vtkCell3D>>("vtkPolyhedron")
    .smart_ptr<vtkSmartPointer<vtkPolyhedron>>("vtkSmartPointer<vtkPolyhedron>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolyhedron>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyhedron::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyhedron& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyhedron::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyhedron::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyhedron::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyhedron& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkPolyhedron::GetCellType)
    .function("RequiresInitialization", &vtkPolyhedron::RequiresInitialization)
    .function("Initialize", &vtkPolyhedron::Initialize)
    .function("GetNumberOfEdges", &vtkPolyhedron::GetNumberOfEdges)
    .function("GetEdge", &vtkPolyhedron::GetEdge, emscripten::allow_raw_pointers())
    .function("GetNumberOfFaces", &vtkPolyhedron::GetNumberOfFaces)
    .function("GetFace", &vtkPolyhedron::GetFace, emscripten::allow_raw_pointers())
    .function("Contour", &vtkPolyhedron::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkPolyhedron::Clip, emscripten::allow_raw_pointers())
    .function("TriangulateLocalIds", &vtkPolyhedron::TriangulateLocalIds, emscripten::allow_raw_pointers())
    .function("TriangulateFaces", emscripten::select_overload<int(vtkPolyhedron&, vtkIdList*)>([](vtkPolyhedron& self, vtkIdList* arg_0) -> int { return self.TriangulateFaces( arg_0); }), emscripten::allow_raw_pointers())
    .function("TriangulateFaces", emscripten::select_overload<int(vtkPolyhedron&, vtkCellArray*)>([](vtkPolyhedron& self, vtkCellArray* arg_0) -> int { return self.TriangulateFaces( arg_0); }), emscripten::allow_raw_pointers())
    .function("IsPrimaryCell", &vtkPolyhedron::IsPrimaryCell)
    .function("RequiresExplicitFaceRepresentation", &vtkPolyhedron::RequiresExplicitFaceRepresentation)
    .function("SetFaces", emscripten::optional_override([](vtkPolyhedron& self, std::uintptr_t arg_0) -> void {  return self.SetFaces(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .function("GetFaces", emscripten::optional_override([](vtkPolyhedron& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetFaces()) / sizeof(int);}))
    .function("SetCellFaces", &vtkPolyhedron::SetCellFaces, emscripten::allow_raw_pointers())
    .function("GetCellFaces", emscripten::select_overload<vtkCellArray*(vtkPolyhedron&)>([](vtkPolyhedron& self) -> vtkCellArray* { return self.GetCellFaces(); }), emscripten::allow_raw_pointers())
    .function("GetCellFaces", emscripten::select_overload<void(vtkPolyhedron&, vtkCellArray*)>([](vtkPolyhedron& self, vtkCellArray* arg_0) -> void { return self.GetCellFaces( arg_0); }), emscripten::allow_raw_pointers())
    .function("IsConvex", &vtkPolyhedron::IsConvex)
    .function("GetPolyData", &vtkPolyhedron::GetPolyData, emscripten::allow_raw_pointers());
}
