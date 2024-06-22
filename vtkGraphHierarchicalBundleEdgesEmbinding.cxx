// JavaScript wrapper for vtkGraphHierarchicalBundleEdges with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkGraphHierarchicalBundleEdgesEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkGraphHierarchicalBundleEdges.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkGraphHierarchicalBundleEdges.h"

template<> void emscripten::internal::raw_destructor<vtkGraphHierarchicalBundleEdges>(vtkGraphHierarchicalBundleEdges * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphHierarchicalBundleEdges_class) {
  emscripten::class_<vtkGraphHierarchicalBundleEdges, emscripten::base<vtkGraphAlgorithm>>("vtkGraphHierarchicalBundleEdges")
    .smart_ptr<vtkSmartPointer<vtkGraphHierarchicalBundleEdges>>("vtkSmartPointer<vtkGraphHierarchicalBundleEdges>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGraphHierarchicalBundleEdges>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphHierarchicalBundleEdges::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphHierarchicalBundleEdges& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphHierarchicalBundleEdges::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphHierarchicalBundleEdges::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphHierarchicalBundleEdges::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphHierarchicalBundleEdges& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetBundlingStrength", &vtkGraphHierarchicalBundleEdges::SetBundlingStrength)
    .function("GetBundlingStrengthMinValue", &vtkGraphHierarchicalBundleEdges::GetBundlingStrengthMinValue)
    .function("GetBundlingStrengthMaxValue", &vtkGraphHierarchicalBundleEdges::GetBundlingStrengthMaxValue)
    .function("GetBundlingStrength", &vtkGraphHierarchicalBundleEdges::GetBundlingStrength)
    .function("SetDirectMapping", &vtkGraphHierarchicalBundleEdges::SetDirectMapping)
    .function("GetDirectMapping", &vtkGraphHierarchicalBundleEdges::GetDirectMapping)
    .function("DirectMappingOn", &vtkGraphHierarchicalBundleEdges::DirectMappingOn)
    .function("DirectMappingOff", &vtkGraphHierarchicalBundleEdges::DirectMappingOff)
    .function("FillInputPortInformation", &vtkGraphHierarchicalBundleEdges::FillInputPortInformation, emscripten::allow_raw_pointers());
}
