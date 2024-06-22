// JavaScript wrapper for vtkDeflectNormals with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkDeflectNormalsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkDeflectNormals.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDeflectNormals.h"

template<> void emscripten::internal::raw_destructor<vtkDeflectNormals>(vtkDeflectNormals * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDeflectNormals_class) {
  emscripten::class_<vtkDeflectNormals, emscripten::base<vtkDataSetAlgorithm>>("vtkDeflectNormals")
    .smart_ptr<vtkSmartPointer<vtkDeflectNormals>>("vtkSmartPointer<vtkDeflectNormals>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDeflectNormals>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDeflectNormals::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDeflectNormals& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDeflectNormals::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDeflectNormals::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDeflectNormals::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDeflectNormals& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetScaleFactor", &vtkDeflectNormals::SetScaleFactor)
    .function("GetScaleFactor", &vtkDeflectNormals::GetScaleFactor)
    .function("SetUserNormal", emscripten::select_overload<void(vtkDeflectNormals&, double, double, double)>([](vtkDeflectNormals& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetUserNormal( arg_0, arg_1, arg_2); }))
    .function("SetUseUserNormal", &vtkDeflectNormals::SetUseUserNormal)
    .function("GetUseUserNormal", &vtkDeflectNormals::GetUseUserNormal)
    .function("UseUserNormalOn", &vtkDeflectNormals::UseUserNormalOn)
    .function("UseUserNormalOff", &vtkDeflectNormals::UseUserNormalOff);
}
