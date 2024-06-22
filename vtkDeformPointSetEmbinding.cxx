// JavaScript wrapper for vtkDeformPointSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkDeformPointSetEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkDeformPointSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDeformPointSet.h"

template<> void emscripten::internal::raw_destructor<vtkDeformPointSet>(vtkDeformPointSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDeformPointSet_class) {
  emscripten::class_<vtkDeformPointSet, emscripten::base<vtkPointSetAlgorithm>>("vtkDeformPointSet")
    .smart_ptr<vtkSmartPointer<vtkDeformPointSet>>("vtkSmartPointer<vtkDeformPointSet>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDeformPointSet>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDeformPointSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDeformPointSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDeformPointSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDeformPointSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDeformPointSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDeformPointSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetControlMeshData", &vtkDeformPointSet::SetControlMeshData, emscripten::allow_raw_pointers())
    .function("GetControlMeshData", &vtkDeformPointSet::GetControlMeshData, emscripten::allow_raw_pointers())
    .function("SetControlMeshConnection", &vtkDeformPointSet::SetControlMeshConnection, emscripten::allow_raw_pointers())
    .function("SetInitializeWeights", &vtkDeformPointSet::SetInitializeWeights)
    .function("GetInitializeWeights", &vtkDeformPointSet::GetInitializeWeights)
    .function("InitializeWeightsOn", &vtkDeformPointSet::InitializeWeightsOn)
    .function("InitializeWeightsOff", &vtkDeformPointSet::InitializeWeightsOff);
}
