// JavaScript wrapper for vtkPlatonicSolidSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkPlatonicSolidSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkPlatonicSolidSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlatonicSolidSource.h"

EMSCRIPTEN_BINDINGS(vtkFiltersSources_vtkPlatonicSolidSource_0_1_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "VTK_SOLID_TETRAHEDRON", 0 },
      { "VTK_SOLID_CUBE", 1 },
      { "VTK_SOLID_OCTAHEDRON", 2 },
      { "VTK_SOLID_ICOSAHEDRON", 3 },
      { "VTK_SOLID_DODECAHEDRON", 4 },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkPlatonicSolidSource>(vtkPlatonicSolidSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlatonicSolidSource_class) {
  emscripten::class_<vtkPlatonicSolidSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkPlatonicSolidSource")
    .smart_ptr<vtkSmartPointer<vtkPlatonicSolidSource>>("vtkSmartPointer<vtkPlatonicSolidSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPlatonicSolidSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlatonicSolidSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlatonicSolidSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlatonicSolidSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlatonicSolidSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlatonicSolidSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlatonicSolidSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSolidType", &vtkPlatonicSolidSource::SetSolidType)
    .function("GetSolidTypeMinValue", &vtkPlatonicSolidSource::GetSolidTypeMinValue)
    .function("GetSolidTypeMaxValue", &vtkPlatonicSolidSource::GetSolidTypeMaxValue)
    .function("GetSolidType", &vtkPlatonicSolidSource::GetSolidType)
    .function("SetSolidTypeToTetrahedron", &vtkPlatonicSolidSource::SetSolidTypeToTetrahedron)
    .function("SetSolidTypeToCube", &vtkPlatonicSolidSource::SetSolidTypeToCube)
    .function("SetSolidTypeToOctahedron", &vtkPlatonicSolidSource::SetSolidTypeToOctahedron)
    .function("SetSolidTypeToIcosahedron", &vtkPlatonicSolidSource::SetSolidTypeToIcosahedron)
    .function("SetSolidTypeToDodecahedron", &vtkPlatonicSolidSource::SetSolidTypeToDodecahedron)
    .function("SetOutputPointsPrecision", &vtkPlatonicSolidSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkPlatonicSolidSource::GetOutputPointsPrecision);
}
