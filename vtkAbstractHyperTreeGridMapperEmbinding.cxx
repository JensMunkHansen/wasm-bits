// JavaScript wrapper for vtkAbstractHyperTreeGridMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkAbstractHyperTreeGridMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkAbstractHyperTreeGridMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUniformHyperTreeGrid.h"
#include "vtkAlgorithmOutput.h"
#include "vtkRenderer.h"
#include "vtkScalarsToColors.h"
#include "vtkWindow.h"
#include "vtkVolume.h"
#include "vtkAbstractHyperTreeGridMapper.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractHyperTreeGridMapper>(vtkAbstractHyperTreeGridMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractHyperTreeGridMapper_class) {
  emscripten::class_<vtkAbstractHyperTreeGridMapper, emscripten::base<vtkAbstractVolumeMapper>>("vtkAbstractHyperTreeGridMapper")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractHyperTreeGridMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractHyperTreeGridMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractHyperTreeGridMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractHyperTreeGridMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractHyperTreeGridMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractHyperTreeGridMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", &vtkAbstractHyperTreeGridMapper::SetInputData, emscripten::allow_raw_pointers())
    .function("SetInputConnection", emscripten::select_overload<void(vtkAbstractHyperTreeGridMapper&, int, vtkAlgorithmOutput*)>([](vtkAbstractHyperTreeGridMapper& self, int arg_0, vtkAlgorithmOutput* arg_1) -> void { return self.SetInputConnection( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetInputConnection", emscripten::select_overload<void(vtkAbstractHyperTreeGridMapper&, vtkAlgorithmOutput*)>([](vtkAbstractHyperTreeGridMapper& self, vtkAlgorithmOutput* arg_0) -> void { return self.SetInputConnection( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", &vtkAbstractHyperTreeGridMapper::GetInput, emscripten::allow_raw_pointers())
    .function("SetRenderer", &vtkAbstractHyperTreeGridMapper::SetRenderer, emscripten::allow_raw_pointers())
    .function("GetRenderer", &vtkAbstractHyperTreeGridMapper::GetRenderer, emscripten::allow_raw_pointers())
    .function("SetScale", &vtkAbstractHyperTreeGridMapper::SetScale)
    .function("SetColorMap", &vtkAbstractHyperTreeGridMapper::SetColorMap, emscripten::allow_raw_pointers())
    .function("GetColorMap", &vtkAbstractHyperTreeGridMapper::GetColorMap, emscripten::allow_raw_pointers())
    .function("SetScalarRange", emscripten::select_overload<void(vtkAbstractHyperTreeGridMapper&, double, double)>([](vtkAbstractHyperTreeGridMapper& self, double arg_0, double arg_1) -> void { return self.SetScalarRange( arg_0, arg_1); }))
    .function("SetScalarRange", emscripten::select_overload<void(vtkAbstractHyperTreeGridMapper&, std::uintptr_t)>([](vtkAbstractHyperTreeGridMapper& self, std::uintptr_t arg_0) -> void { return self.SetScalarRange(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("GetMTime", &vtkAbstractHyperTreeGridMapper::GetMTime)
    .function("ReleaseGraphicsResources", &vtkAbstractHyperTreeGridMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
