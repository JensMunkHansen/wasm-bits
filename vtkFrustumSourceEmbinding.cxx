// JavaScript wrapper for vtkFrustumSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFrustumSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkFrustumSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlanes.h"
#include "vtkFrustumSource.h"

template<> void emscripten::internal::raw_destructor<vtkFrustumSource>(vtkFrustumSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFrustumSource_class) {
  emscripten::class_<vtkFrustumSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkFrustumSource")
    .smart_ptr<vtkSmartPointer<vtkFrustumSource>>("vtkSmartPointer<vtkFrustumSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFrustumSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFrustumSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFrustumSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFrustumSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFrustumSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFrustumSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFrustumSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPlanes", &vtkFrustumSource::GetPlanes, emscripten::allow_raw_pointers())
    .function("SetPlanes", &vtkFrustumSource::SetPlanes, emscripten::allow_raw_pointers())
    .function("GetShowLines", &vtkFrustumSource::GetShowLines)
    .function("SetShowLines", &vtkFrustumSource::SetShowLines)
    .function("ShowLinesOn", &vtkFrustumSource::ShowLinesOn)
    .function("ShowLinesOff", &vtkFrustumSource::ShowLinesOff)
    .function("GetLinesLength", &vtkFrustumSource::GetLinesLength)
    .function("SetLinesLength", &vtkFrustumSource::SetLinesLength)
    .function("GetMTime", &vtkFrustumSource::GetMTime)
    .function("SetOutputPointsPrecision", &vtkFrustumSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkFrustumSource::GetOutputPointsPrecision);
}
