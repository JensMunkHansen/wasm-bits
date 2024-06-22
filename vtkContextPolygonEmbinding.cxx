// JavaScript wrapper for vtkContextPolygon with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkContextPolygonEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkContextPolygon.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkVector.h"
#include "vtkTransform2D.h"
#include "vtkContextPolygon.h"


EMSCRIPTEN_BINDINGS(vtkContextPolygon_class) {
  emscripten::class_<vtkContextPolygon>("vtkContextPolygon")
    .smart_ptr<std::shared_ptr<vtkContextPolygon>>("std::shared_ptr<vtkContextPolygon>")
    .constructor(&std::make_shared<vtkContextPolygon>)
    .function("AddPoint", emscripten::select_overload<void(vtkContextPolygon&, const vtkVector2f&)>([](vtkContextPolygon& self, const vtkVector2f& arg_0) -> void { return self.AddPoint( arg_0); }))
    .function("AddPoint", emscripten::select_overload<void(vtkContextPolygon&, float, float)>([](vtkContextPolygon& self, float arg_0, float arg_1) -> void { return self.AddPoint( arg_0, arg_1); }))
    .function("GetPoint", &vtkContextPolygon::GetPoint)
    .function("GetNumberOfPoints", &vtkContextPolygon::GetNumberOfPoints)
    .function("Clear", &vtkContextPolygon::Clear)
    .function("Contains", &vtkContextPolygon::Contains)
    .function("Transformed", &vtkContextPolygon::Transformed, emscripten::allow_raw_pointers());
}
