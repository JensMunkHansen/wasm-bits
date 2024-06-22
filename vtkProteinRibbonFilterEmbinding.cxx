// JavaScript wrapper for vtkProteinRibbonFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkDomainsChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkProteinRibbonFilterEmbinding.cxx \
 /home/jmh/github/vtk/Domains/Chemistry/vtkProteinRibbonFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProteinRibbonFilter.h"

template<> void emscripten::internal::raw_destructor<vtkProteinRibbonFilter>(vtkProteinRibbonFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProteinRibbonFilter_class) {
  emscripten::class_<vtkProteinRibbonFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkProteinRibbonFilter")
    .smart_ptr<vtkSmartPointer<vtkProteinRibbonFilter>>("vtkSmartPointer<vtkProteinRibbonFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkProteinRibbonFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProteinRibbonFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProteinRibbonFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProteinRibbonFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProteinRibbonFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProteinRibbonFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProteinRibbonFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCoilWidth", &vtkProteinRibbonFilter::GetCoilWidth)
    .function("SetCoilWidth", &vtkProteinRibbonFilter::SetCoilWidth)
    .function("GetHelixWidth", &vtkProteinRibbonFilter::GetHelixWidth)
    .function("SetHelixWidth", &vtkProteinRibbonFilter::SetHelixWidth)
    .function("GetSubdivideFactor", &vtkProteinRibbonFilter::GetSubdivideFactor)
    .function("SetSubdivideFactor", &vtkProteinRibbonFilter::SetSubdivideFactor)
    .function("GetDrawSmallMoleculesAsSpheres", &vtkProteinRibbonFilter::GetDrawSmallMoleculesAsSpheres)
    .function("SetDrawSmallMoleculesAsSpheres", &vtkProteinRibbonFilter::SetDrawSmallMoleculesAsSpheres)
    .function("GetSphereResolution", &vtkProteinRibbonFilter::GetSphereResolution)
    .function("SetSphereResolution", &vtkProteinRibbonFilter::SetSphereResolution);
}
