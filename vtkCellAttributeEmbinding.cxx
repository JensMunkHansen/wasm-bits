// JavaScript wrapper for vtkCellAttribute with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellAttributeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellAttribute.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStringToken.h"
#include "vtkAbstractArray.h"
#include "vtkScalarsToColors.h"
#include "vtkCellAttribute.h"

template<> void emscripten::internal::raw_destructor<vtkCellAttribute>(vtkCellAttribute * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellAttribute_class) {
  emscripten::class_<vtkCellAttribute, emscripten::base<vtkObject>>("vtkCellAttribute")
    .smart_ptr<vtkSmartPointer<vtkCellAttribute>>("vtkSmartPointer<vtkCellAttribute>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCellAttribute>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellAttribute::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellAttribute& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellAttribute::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellAttribute::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellAttribute::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellAttribute& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetName", &vtkCellAttribute::GetName)
    .function("GetId", &vtkCellAttribute::GetId)
    .function("SetId", &vtkCellAttribute::SetId)
    .function("GetSpace", &vtkCellAttribute::GetSpace)
    .function("GetNumberOfComponents", &vtkCellAttribute::GetNumberOfComponents)
    .function("Initialize", &vtkCellAttribute::Initialize)
    .function("GetArrayForCellTypeAndRole", &vtkCellAttribute::GetArrayForCellTypeAndRole, emscripten::allow_raw_pointers())
    .function("GetColormap", &vtkCellAttribute::GetColormap, emscripten::allow_raw_pointers())
    .function("SetColormap", &vtkCellAttribute::SetColormap, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkCellAttribute::ShallowCopy, emscripten::allow_raw_pointers())
    .class_function("EncodeSpace", &vtkCellAttribute::EncodeSpace);
}
