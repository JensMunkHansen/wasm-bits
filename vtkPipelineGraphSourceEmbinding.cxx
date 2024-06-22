// JavaScript wrapper for vtkPipelineGraphSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkPipelineGraphSourceEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkPipelineGraphSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkObject.h"
#include "vtkAlgorithm.h"
#include "vtkStdString.h"
#include "vtkCollection.h"
#include "vtkPipelineGraphSource.h"

template<> void emscripten::internal::raw_destructor<vtkPipelineGraphSource>(vtkPipelineGraphSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPipelineGraphSource_class) {
  emscripten::class_<vtkPipelineGraphSource, emscripten::base<vtkDirectedGraphAlgorithm>>("vtkPipelineGraphSource")
    .smart_ptr<vtkSmartPointer<vtkPipelineGraphSource>>("vtkSmartPointer<vtkPipelineGraphSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPipelineGraphSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPipelineGraphSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPipelineGraphSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPipelineGraphSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPipelineGraphSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPipelineGraphSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPipelineGraphSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddSink", &vtkPipelineGraphSource::AddSink, emscripten::allow_raw_pointers())
    .function("RemoveSink", &vtkPipelineGraphSource::RemoveSink, emscripten::allow_raw_pointers());
}
