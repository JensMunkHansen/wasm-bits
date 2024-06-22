// JavaScript wrapper for vtkBezierTetra with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkBezierTetraEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkBezierTetra.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCell.h"
#include "vtkPointData.h"
#include "vtkHigherOrderCurve.h"
#include "vtkHigherOrderTriangle.h"
#include "vtkDoubleArray.h"
#include "vtkBezierTetra.h"

template<> void emscripten::internal::raw_destructor<vtkBezierTetra>(vtkBezierTetra * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBezierTetra_class) {
  emscripten::class_<vtkBezierTetra, emscripten::base<vtkHigherOrderTetra>>("vtkBezierTetra")
    .smart_ptr<vtkSmartPointer<vtkBezierTetra>>("vtkSmartPointer<vtkBezierTetra>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBezierTetra>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBezierTetra::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBezierTetra& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBezierTetra::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBezierTetra::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBezierTetra::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBezierTetra& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellType", &vtkBezierTetra::GetCellType)
    .function("GetEdge", &vtkBezierTetra::GetEdge, emscripten::allow_raw_pointers())
    .function("GetFace", &vtkBezierTetra::GetFace, emscripten::allow_raw_pointers())
    .function("SetRationalWeightsFromPointData", &vtkBezierTetra::SetRationalWeightsFromPointData, emscripten::allow_raw_pointers())
    .function("GetEdgeCell", &vtkBezierTetra::GetEdgeCell, emscripten::allow_raw_pointers())
    .function("GetFaceCell", &vtkBezierTetra::GetFaceCell, emscripten::allow_raw_pointers())
    .function("GetRationalWeights", &vtkBezierTetra::GetRationalWeights, emscripten::allow_raw_pointers());
}
