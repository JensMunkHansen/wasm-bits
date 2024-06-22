// JavaScript wrapper for vtkHyperTreeGridMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingHyperTreeGrid.js/vtkRenderingHyperTreeGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingHyperTreeGrid.js/vtkHyperTreeGridMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/HyperTreeGrid/vtkHyperTreeGridMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkInformation.h"
#include "vtkAlgorithmOutput.h"
#include "vtkHyperTreeGridMapper.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridMapper>(vtkHyperTreeGridMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridMapper_class) {
  emscripten::class_<vtkHyperTreeGridMapper, emscripten::base<vtkMapper>>("vtkHyperTreeGridMapper")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridMapper>>("vtkSmartPointer<vtkHyperTreeGridMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputDataObject", emscripten::select_overload<void(vtkHyperTreeGridMapper&, int, vtkDataObject*)>([](vtkHyperTreeGridMapper& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputDataObject( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetInputDataObject", emscripten::select_overload<void(vtkHyperTreeGridMapper&, vtkDataObject*)>([](vtkHyperTreeGridMapper& self, vtkDataObject* arg_0) -> void { return self.SetInputDataObject( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetUseAdaptiveDecimation", &vtkHyperTreeGridMapper::GetUseAdaptiveDecimation)
    .function("SetUseAdaptiveDecimation", &vtkHyperTreeGridMapper::SetUseAdaptiveDecimation)
    .function("UseAdaptiveDecimationOn", &vtkHyperTreeGridMapper::UseAdaptiveDecimationOn)
    .function("UseAdaptiveDecimationOff", &vtkHyperTreeGridMapper::UseAdaptiveDecimationOff)
    .function("Render", &vtkHyperTreeGridMapper::Render, emscripten::allow_raw_pointers())
    .function("FillInputPortInformation", &vtkHyperTreeGridMapper::FillInputPortInformation, emscripten::allow_raw_pointers())
    .function("SetInputConnection", emscripten::select_overload<void(vtkHyperTreeGridMapper&, int, vtkAlgorithmOutput*)>([](vtkHyperTreeGridMapper& self, int arg_0, vtkAlgorithmOutput* arg_1) -> void { return self.SetInputConnection( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetInputConnection", emscripten::select_overload<void(vtkHyperTreeGridMapper&, vtkAlgorithmOutput*)>([](vtkHyperTreeGridMapper& self, vtkAlgorithmOutput* arg_0) -> void { return self.SetInputConnection( arg_0); }), emscripten::allow_raw_pointers());
}
