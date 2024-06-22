// JavaScript wrapper for vtkDataSetMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkDataSetMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkDataSetMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkPolyDataMapper.h"
#include "vtkWindow.h"
#include "vtkDataSet.h"
#include "vtkDataSetMapper.h"

template<> void emscripten::internal::raw_destructor<vtkDataSetMapper>(vtkDataSetMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataSetMapper_class) {
  emscripten::class_<vtkDataSetMapper, emscripten::base<vtkMapper>>("vtkDataSetMapper")
    .smart_ptr<vtkSmartPointer<vtkDataSetMapper>>("vtkSmartPointer<vtkDataSetMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDataSetMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataSetMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataSetMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataSetMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataSetMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkDataSetMapper::Render, emscripten::allow_raw_pointers())
    .function("GetPolyDataMapper", &vtkDataSetMapper::GetPolyDataMapper, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkDataSetMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkDataSetMapper::GetMTime)
    .function("SetInputData", &vtkDataSetMapper::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkDataSetMapper::GetInput, emscripten::allow_raw_pointers());
}
