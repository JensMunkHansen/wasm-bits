// JavaScript wrapper for vtkOutlineSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkOutlineSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkOutlineSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOutlineSource.h"

EMSCRIPTEN_BINDINGS(vtkFiltersSources_vtkOutlineSource_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_BOX_TYPE_AXIS_ALIGNED", 0 },
      { "VTK_BOX_TYPE_ORIENTED", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkOutlineSource>(vtkOutlineSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOutlineSource_class) {
  emscripten::class_<vtkOutlineSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkOutlineSource")
    .smart_ptr<vtkSmartPointer<vtkOutlineSource>>("vtkSmartPointer<vtkOutlineSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOutlineSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOutlineSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOutlineSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOutlineSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOutlineSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOutlineSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOutlineSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetBoxType", &vtkOutlineSource::SetBoxType)
    .function("GetBoxType", &vtkOutlineSource::GetBoxType)
    .function("SetBoxTypeToAxisAligned", &vtkOutlineSource::SetBoxTypeToAxisAligned)
    .function("SetBoxTypeToOriented", &vtkOutlineSource::SetBoxTypeToOriented)
    .function("SetBounds", emscripten::select_overload<void(vtkOutlineSource&, double, double, double, double, double, double)>([](vtkOutlineSource& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetCorners", emscripten::optional_override([](vtkOutlineSource& self, std::uintptr_t arg_0) -> void {  return self.SetCorners(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SetGenerateFaces", &vtkOutlineSource::SetGenerateFaces)
    .function("GenerateFacesOn", &vtkOutlineSource::GenerateFacesOn)
    .function("GenerateFacesOff", &vtkOutlineSource::GenerateFacesOff)
    .function("GetGenerateFaces", &vtkOutlineSource::GetGenerateFaces)
    .function("SetOutputPointsPrecision", &vtkOutlineSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkOutlineSource::GetOutputPointsPrecision);
}
