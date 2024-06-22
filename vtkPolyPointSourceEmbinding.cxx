// JavaScript wrapper for vtkPolyPointSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkPolyPointSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkPolyPointSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkPolyPointSource.h"

template<> void emscripten::internal::raw_destructor<vtkPolyPointSource>(vtkPolyPointSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyPointSource_class) {
  emscripten::class_<vtkPolyPointSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkPolyPointSource")
    .smart_ptr<vtkSmartPointer<vtkPolyPointSource>>("vtkSmartPointer<vtkPolyPointSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolyPointSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyPointSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyPointSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyPointSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyPointSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyPointSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyPointSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfPoints", &vtkPolyPointSource::SetNumberOfPoints)
    .function("GetNumberOfPoints", &vtkPolyPointSource::GetNumberOfPoints)
    .function("Resize", &vtkPolyPointSource::Resize)
    .function("SetPoint", &vtkPolyPointSource::SetPoint)
    .function("SetPoints", &vtkPolyPointSource::SetPoints, emscripten::allow_raw_pointers())
    .function("GetPoints", &vtkPolyPointSource::GetPoints, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkPolyPointSource::GetMTime);
}
