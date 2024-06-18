// JavaScript wrapper for vtkSynchronizedTemplatesCutter3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkSynchronizedTemplatesCutter3DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkSynchronizedTemplatesCutter3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkInformation.h"
#include "vtkImplicitFunction.h"
#include "vtkSynchronizedTemplatesCutter3D.h"

template<> void emscripten::internal::raw_destructor<vtkSynchronizedTemplatesCutter3D>(vtkSynchronizedTemplatesCutter3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSynchronizedTemplatesCutter3D_class) {
  emscripten::class_<vtkSynchronizedTemplatesCutter3D, emscripten::base<vtkSynchronizedTemplates3D>>("vtkSynchronizedTemplatesCutter3D")
    .smart_ptr<vtkSmartPointer<vtkSynchronizedTemplatesCutter3D>>("vtkSmartPointer<vtkSynchronizedTemplatesCutter3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSynchronizedTemplatesCutter3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSynchronizedTemplatesCutter3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSynchronizedTemplatesCutter3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSynchronizedTemplatesCutter3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSynchronizedTemplatesCutter3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSynchronizedTemplatesCutter3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSynchronizedTemplatesCutter3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ThreadedExecute", &vtkSynchronizedTemplatesCutter3D::ThreadedExecute, emscripten::allow_raw_pointers())
    .function("SetCutFunction", &vtkSynchronizedTemplatesCutter3D::SetCutFunction, emscripten::allow_raw_pointers())
    .function("GetCutFunction", &vtkSynchronizedTemplatesCutter3D::GetCutFunction, emscripten::allow_raw_pointers())
    .function("SetOutputPointsPrecision", &vtkSynchronizedTemplatesCutter3D::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecisionMinValue", &vtkSynchronizedTemplatesCutter3D::GetOutputPointsPrecisionMinValue)
    .function("GetOutputPointsPrecisionMaxValue", &vtkSynchronizedTemplatesCutter3D::GetOutputPointsPrecisionMaxValue)
    .function("GetOutputPointsPrecision", &vtkSynchronizedTemplatesCutter3D::GetOutputPointsPrecision);
}
