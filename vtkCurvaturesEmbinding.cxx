// JavaScript wrapper for vtkCurvatures with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkCurvaturesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkCurvatures.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCurvatures.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkCurvatures_0_1_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "VTK_CURVATURE_GAUSS", 0 },
      { "VTK_CURVATURE_MEAN", 1 },
      { "VTK_CURVATURE_MAXIMUM", 2 },
      { "VTK_CURVATURE_MINIMUM", 3 },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkCurvatures>(vtkCurvatures * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCurvatures_class) {
  emscripten::class_<vtkCurvatures, emscripten::base<vtkPolyDataAlgorithm>>("vtkCurvatures")
    .smart_ptr<vtkSmartPointer<vtkCurvatures>>("vtkSmartPointer<vtkCurvatures>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCurvatures>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCurvatures::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCurvatures& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCurvatures::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCurvatures::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCurvatures::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCurvatures& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCurvatureType", &vtkCurvatures::SetCurvatureType)
    .function("GetCurvatureType", &vtkCurvatures::GetCurvatureType)
    .function("SetCurvatureTypeToGaussian", &vtkCurvatures::SetCurvatureTypeToGaussian)
    .function("SetCurvatureTypeToMean", &vtkCurvatures::SetCurvatureTypeToMean)
    .function("SetCurvatureTypeToMaximum", &vtkCurvatures::SetCurvatureTypeToMaximum)
    .function("SetCurvatureTypeToMinimum", &vtkCurvatures::SetCurvatureTypeToMinimum)
    .function("SetInvertMeanCurvature", &vtkCurvatures::SetInvertMeanCurvature)
    .function("GetInvertMeanCurvature", &vtkCurvatures::GetInvertMeanCurvature)
    .function("InvertMeanCurvatureOn", &vtkCurvatures::InvertMeanCurvatureOn)
    .function("InvertMeanCurvatureOff", &vtkCurvatures::InvertMeanCurvatureOff);
}
