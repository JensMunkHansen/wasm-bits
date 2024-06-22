// JavaScript wrapper for vtkNormalizeMatrixVectors with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkNormalizeMatrixVectorsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkNormalizeMatrixVectors.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkNormalizeMatrixVectors.h"

template<> void emscripten::internal::raw_destructor<vtkNormalizeMatrixVectors>(vtkNormalizeMatrixVectors * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNormalizeMatrixVectors_class) {
  emscripten::class_<vtkNormalizeMatrixVectors, emscripten::base<vtkArrayDataAlgorithm>>("vtkNormalizeMatrixVectors")
    .smart_ptr<vtkSmartPointer<vtkNormalizeMatrixVectors>>("vtkSmartPointer<vtkNormalizeMatrixVectors>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkNormalizeMatrixVectors>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNormalizeMatrixVectors::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNormalizeMatrixVectors& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNormalizeMatrixVectors::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNormalizeMatrixVectors::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNormalizeMatrixVectors::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNormalizeMatrixVectors& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetVectorDimension", &vtkNormalizeMatrixVectors::GetVectorDimension)
    .function("SetVectorDimension", &vtkNormalizeMatrixVectors::SetVectorDimension)
    .function("GetPValue", &vtkNormalizeMatrixVectors::GetPValue)
    .function("SetPValue", &vtkNormalizeMatrixVectors::SetPValue);
}
