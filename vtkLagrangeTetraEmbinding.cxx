// JavaScript wrapper for vtkLagrangeTetra with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkLagrangeTetraEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkLagrangeTetra.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCell.h"
#include "vtkHigherOrderCurve.h"
#include "vtkHigherOrderTriangle.h"
#include "vtkLagrangeTetra.h"

template<> void emscripten::internal::raw_destructor<vtkLagrangeTetra>(vtkLagrangeTetra * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLagrangeTetra_class) {
  emscripten::class_<vtkLagrangeTetra, emscripten::base<vtkHigherOrderTetra>>("vtkLagrangeTetra")
    .smart_ptr<vtkSmartPointer<vtkLagrangeTetra>>("vtkSmartPointer<vtkLagrangeTetra>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLagrangeTetra>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangeTetra::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLagrangeTetra& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLagrangeTetra::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLagrangeTetra::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangeTetra::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLagrangeTetra& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkLagrangeTetra::GetCellType)
    .function("GetEdge", &vtkLagrangeTetra::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkLagrangeTetra::GetFace, emscripten::allow_raw_pointers())
    .function("GetEdgeCell", &vtkLagrangeTetra::GetEdgeCell, emscripten::allow_raw_pointers())
    .function("GetFaceCell", &vtkLagrangeTetra::GetFaceCell, emscripten::allow_raw_pointers());
}
