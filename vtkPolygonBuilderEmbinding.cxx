// JavaScript wrapper for vtkPolygonBuilder with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMisc.js/vtkCommonMisc.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMisc.js/vtkPolygonBuilderEmbinding.cxx \
 /home/jmh/github/vtk/Common/Misc/vtkPolygonBuilder.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIdListCollection.h"
#include "vtkPolygonBuilder.h"


EMSCRIPTEN_BINDINGS(vtkPolygonBuilder_class) {
  emscripten::class_<vtkPolygonBuilder>("vtkPolygonBuilder")
    .function("InsertTriangle", emscripten::optional_override([](vtkPolygonBuilder& self, std::uintptr_t arg_0) -> void {  return self.InsertTriangle(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .function("GetPolygons", &vtkPolygonBuilder::GetPolygons, emscripten::allow_raw_pointers())
    .function("Reset", &vtkPolygonBuilder::Reset);
}
