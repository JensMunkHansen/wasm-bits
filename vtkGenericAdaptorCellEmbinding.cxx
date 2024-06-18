// JavaScript wrapper for vtkGenericAdaptorCell with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkGenericAdaptorCellEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkGenericAdaptorCell.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericAttribute.h"
#include "vtkGenericAttributeCollection.h"
#include "vtkGenericPointIterator.h"
#include "vtkGenericCellIterator.h"
#include "vtkContourValues.h"
#include "vtkImplicitFunction.h"
#include "vtkGenericCellTessellator.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkCellArray.h"
#include "vtkPointData.h"
#include "vtkCellData.h"
#include "vtkPoints.h"
#include "vtkUnsignedCharArray.h"
#include "vtkGenericAdaptorCell.h"

template<> void emscripten::internal::raw_destructor<vtkGenericAdaptorCell>(vtkGenericAdaptorCell * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericAdaptorCell_class) {
  emscripten::class_<vtkGenericAdaptorCell, emscripten::base<vtkObject>>("vtkGenericAdaptorCell")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericAdaptorCell::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericAdaptorCell& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericAdaptorCell::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericAdaptorCell::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericAdaptorCell::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericAdaptorCell& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsGeometryLinear", &vtkGenericAdaptorCell::IsGeometryLinear)
    .function("GetHighestOrderAttribute", &vtkGenericAdaptorCell::GetHighestOrderAttribute, emscripten::allow_raw_pointers())
    .function("IsAttributeLinear", &vtkGenericAdaptorCell::IsAttributeLinear, emscripten::allow_raw_pointers())
    .function("Contour", &vtkGenericAdaptorCell::Contour, emscripten::allow_raw_pointers())
    .function("Clip", &vtkGenericAdaptorCell::Clip, emscripten::allow_raw_pointers())
    .function("GetBounds", emscripten::select_overload<std::uintptr_t(vtkGenericAdaptorCell&)>([](vtkGenericAdaptorCell& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetBounds()); }))
    .function("GetLength2", &vtkGenericAdaptorCell::GetLength2)
    .function("Tessellate", &vtkGenericAdaptorCell::Tessellate, emscripten::allow_raw_pointers())
    .function("TriangulateFace", &vtkGenericAdaptorCell::TriangulateFace, emscripten::allow_raw_pointers());
}
