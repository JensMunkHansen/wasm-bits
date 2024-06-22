// JavaScript wrapper for vtkCompositePolyDataMapperDelegator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkCompositePolyDataMapperDelegatorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkCompositePolyDataMapperDelegator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCompositePolyDataMapper.h"
#include "vtkSmartPointer.h"
#include "vtkPolyData.h"
#include "vtkCompositePolyDataMapperDelegator.h"

template<> void emscripten::internal::raw_destructor<vtkCompositePolyDataMapperDelegator>(vtkCompositePolyDataMapperDelegator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositePolyDataMapperDelegator_class) {
  emscripten::class_<vtkCompositePolyDataMapperDelegator, emscripten::base<vtkObject>>("vtkCompositePolyDataMapperDelegator")
    .smart_ptr<vtkSmartPointer<vtkCompositePolyDataMapperDelegator>>("vtkSmartPointer<vtkCompositePolyDataMapperDelegator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCompositePolyDataMapperDelegator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositePolyDataMapperDelegator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositePolyDataMapperDelegator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositePolyDataMapperDelegator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositePolyDataMapperDelegator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositePolyDataMapperDelegator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositePolyDataMapperDelegator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ShallowCopy", &vtkCompositePolyDataMapperDelegator::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetDelegate", &vtkCompositePolyDataMapperDelegator::GetDelegate)
    .function("GetMarked", &vtkCompositePolyDataMapperDelegator::GetMarked)
    .function("Mark", &vtkCompositePolyDataMapperDelegator::Mark)
    .function("Unmark", &vtkCompositePolyDataMapperDelegator::Unmark);
}
