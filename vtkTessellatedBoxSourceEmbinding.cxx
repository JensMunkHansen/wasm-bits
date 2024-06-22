// JavaScript wrapper for vtkTessellatedBoxSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkTessellatedBoxSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkTessellatedBoxSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTessellatedBoxSource.h"

template<> void emscripten::internal::raw_destructor<vtkTessellatedBoxSource>(vtkTessellatedBoxSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTessellatedBoxSource_class) {
  emscripten::class_<vtkTessellatedBoxSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkTessellatedBoxSource")
    .smart_ptr<vtkSmartPointer<vtkTessellatedBoxSource>>("vtkSmartPointer<vtkTessellatedBoxSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTessellatedBoxSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTessellatedBoxSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTessellatedBoxSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTessellatedBoxSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTessellatedBoxSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTessellatedBoxSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTessellatedBoxSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetBounds", emscripten::select_overload<void(vtkTessellatedBoxSource&, double, double, double, double, double, double)>([](vtkTessellatedBoxSource& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetLevel", &vtkTessellatedBoxSource::SetLevel)
    .function("GetLevel", &vtkTessellatedBoxSource::GetLevel)
    .function("SetDuplicateSharedPoints", &vtkTessellatedBoxSource::SetDuplicateSharedPoints)
    .function("GetDuplicateSharedPoints", &vtkTessellatedBoxSource::GetDuplicateSharedPoints)
    .function("DuplicateSharedPointsOn", &vtkTessellatedBoxSource::DuplicateSharedPointsOn)
    .function("DuplicateSharedPointsOff", &vtkTessellatedBoxSource::DuplicateSharedPointsOff)
    .function("SetQuads", &vtkTessellatedBoxSource::SetQuads)
    .function("GetQuads", &vtkTessellatedBoxSource::GetQuads)
    .function("QuadsOn", &vtkTessellatedBoxSource::QuadsOn)
    .function("QuadsOff", &vtkTessellatedBoxSource::QuadsOff)
    .function("SetOutputPointsPrecision", &vtkTessellatedBoxSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkTessellatedBoxSource::GetOutputPointsPrecision);
}