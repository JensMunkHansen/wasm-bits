// JavaScript wrapper for vtkInterpolateDataSetAttributes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkInterpolateDataSetAttributesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkInterpolateDataSetAttributes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSetCollection.h"
#include "vtkInterpolateDataSetAttributes.h"

template<> void emscripten::internal::raw_destructor<vtkInterpolateDataSetAttributes>(vtkInterpolateDataSetAttributes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInterpolateDataSetAttributes_class) {
  emscripten::class_<vtkInterpolateDataSetAttributes, emscripten::base<vtkDataSetAlgorithm>>("vtkInterpolateDataSetAttributes")
    .smart_ptr<vtkSmartPointer<vtkInterpolateDataSetAttributes>>("vtkSmartPointer<vtkInterpolateDataSetAttributes>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkInterpolateDataSetAttributes>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInterpolateDataSetAttributes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInterpolateDataSetAttributes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInterpolateDataSetAttributes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInterpolateDataSetAttributes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInterpolateDataSetAttributes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInterpolateDataSetAttributes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInputList", &vtkInterpolateDataSetAttributes::GetInputList, emscripten::allow_raw_pointers())
    .function("SetT", &vtkInterpolateDataSetAttributes::SetT)
    .function("GetTMinValue", &vtkInterpolateDataSetAttributes::GetTMinValue)
    .function("GetTMaxValue", &vtkInterpolateDataSetAttributes::GetTMaxValue)
    .function("GetT", &vtkInterpolateDataSetAttributes::GetT);
}
