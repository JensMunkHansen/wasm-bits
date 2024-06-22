// JavaScript wrapper for vtkLabeledContourMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkLabeledContourMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkLabeledContourMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkPolyData.h"
#include "vtkTextProperty.h"
#include "vtkTextPropertyCollection.h"
#include "vtkDoubleArray.h"
#include "vtkPolyDataMapper.h"
#include "vtkWindow.h"
#include "vtkLabeledContourMapper.h"

template<> void emscripten::internal::raw_destructor<vtkLabeledContourMapper>(vtkLabeledContourMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLabeledContourMapper_class) {
  emscripten::class_<vtkLabeledContourMapper, emscripten::base<vtkMapper>>("vtkLabeledContourMapper")
    .smart_ptr<vtkSmartPointer<vtkLabeledContourMapper>>("vtkSmartPointer<vtkLabeledContourMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLabeledContourMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabeledContourMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLabeledContourMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLabeledContourMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLabeledContourMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabeledContourMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLabeledContourMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkLabeledContourMapper::Render, emscripten::allow_raw_pointers())
    .function("SetInputData", &vtkLabeledContourMapper::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkLabeledContourMapper::GetInput, emscripten::allow_raw_pointers())
    .function("SetTextProperty", &vtkLabeledContourMapper::SetTextProperty, emscripten::allow_raw_pointers())
    .function("SetTextProperties", &vtkLabeledContourMapper::SetTextProperties, emscripten::allow_raw_pointers())
    .function("GetTextProperties", &vtkLabeledContourMapper::GetTextProperties, emscripten::allow_raw_pointers())
    .function("GetTextPropertyMapping", &vtkLabeledContourMapper::GetTextPropertyMapping, emscripten::allow_raw_pointers())
    .function("SetTextPropertyMapping", &vtkLabeledContourMapper::SetTextPropertyMapping, emscripten::allow_raw_pointers())
    .function("SetLabelVisibility", &vtkLabeledContourMapper::SetLabelVisibility)
    .function("GetLabelVisibility", &vtkLabeledContourMapper::GetLabelVisibility)
    .function("LabelVisibilityOn", &vtkLabeledContourMapper::LabelVisibilityOn)
    .function("LabelVisibilityOff", &vtkLabeledContourMapper::LabelVisibilityOff)
    .function("SetSkipDistance", &vtkLabeledContourMapper::SetSkipDistance)
    .function("GetSkipDistance", &vtkLabeledContourMapper::GetSkipDistance)
    .function("GetPolyDataMapper", &vtkLabeledContourMapper::GetPolyDataMapper, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkLabeledContourMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
