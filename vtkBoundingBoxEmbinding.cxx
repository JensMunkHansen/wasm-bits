// JavaScript wrapper for vtkBoundingBox with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkBoundingBoxEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkBoundingBox.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkPoints.h"
#include "vtkBoundingBox.h"


EMSCRIPTEN_BINDINGS(vtkBoundingBox_class) {
  emscripten::class_<vtkBoundingBox>("vtkBoundingBox")
    .function("SetBounds", emscripten::select_overload<void(vtkBoundingBox&, double, double, double, double, double, double)>([](vtkBoundingBox& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("ComputeBounds", emscripten::select_overload<void(vtkBoundingBox&, vtkPoints*)>([](vtkBoundingBox& self, vtkPoints* arg_0) -> void { return self.ComputeBounds( arg_0); }), emscripten::allow_raw_pointers())
    .function("ComputeBounds", emscripten::select_overload<void(vtkBoundingBox&, vtkPoints*, std::uintptr_t)>([](vtkBoundingBox& self, vtkPoints* arg_0, std::uintptr_t arg_1) -> void { return self.ComputeBounds( arg_0,reinterpret_cast<unsigned char*>(arg_1 * sizeof(unsigned char))); }), emscripten::allow_raw_pointers())
    .function("SetMinPoint", emscripten::select_overload<void(vtkBoundingBox&, double, double, double)>([](vtkBoundingBox& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetMinPoint( arg_0, arg_1, arg_2); }))
    .function("SetMaxPoint", emscripten::select_overload<void(vtkBoundingBox&, double, double, double)>([](vtkBoundingBox& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetMaxPoint( arg_0, arg_1, arg_2); }))
    .function("IsValid", emscripten::select_overload<int(vtkBoundingBox&)>([](vtkBoundingBox& self) -> int { return self.IsValid(); }))
    .function("AddPoint", emscripten::select_overload<void(vtkBoundingBox&, double, double, double)>([](vtkBoundingBox& self, double arg_0, double arg_1, double arg_2) -> void { return self.AddPoint( arg_0, arg_1, arg_2); }))
    .function("AddBox", &vtkBoundingBox::AddBox)
    .function("IsSubsetOf", &vtkBoundingBox::IsSubsetOf)
    .function("IntersectBox", &vtkBoundingBox::IntersectBox)
    .function("Intersects", &vtkBoundingBox::Intersects)
    .function("ComputeInnerDimension", &vtkBoundingBox::ComputeInnerDimension)
    .function("Contains", &vtkBoundingBox::Contains)
    .function("GetBound", &vtkBoundingBox::GetBound)
    .function("ContainsPoint", emscripten::select_overload<int(vtkBoundingBox&, double, double, double)>([](vtkBoundingBox& self, double arg_0, double arg_1, double arg_2) -> int { return self.ContainsPoint( arg_0, arg_1, arg_2); }))
    .function("GetLength", &vtkBoundingBox::GetLength)
    .function("GetMaxLength", &vtkBoundingBox::GetMaxLength)
    .function("GetDiagonalLength2", &vtkBoundingBox::GetDiagonalLength2)
    .function("GetDiagonalLength", &vtkBoundingBox::GetDiagonalLength)
    .function("Inflate", emscripten::select_overload<void(vtkBoundingBox&, double)>([](vtkBoundingBox& self, double arg_0) -> void { return self.Inflate( arg_0); }))
    .function("Inflate", emscripten::select_overload<void(vtkBoundingBox&, double, double, double)>([](vtkBoundingBox& self, double arg_0, double arg_1, double arg_2) -> void { return self.Inflate( arg_0, arg_1, arg_2); }))
    .function("Inflate", emscripten::select_overload<void(vtkBoundingBox&)>([](vtkBoundingBox& self) -> void { return self.Inflate(); }))
    .function("InflateSlice", &vtkBoundingBox::InflateSlice)
    .function("Scale", emscripten::select_overload<void(vtkBoundingBox&, double, double, double)>([](vtkBoundingBox& self, double arg_0, double arg_1, double arg_2) -> void { return self.Scale( arg_0, arg_1, arg_2); }))
    .function("ScaleAboutCenter", emscripten::select_overload<void(vtkBoundingBox&, double)>([](vtkBoundingBox& self, double arg_0) -> void { return self.ScaleAboutCenter( arg_0); }))
    .function("ScaleAboutCenter", emscripten::select_overload<void(vtkBoundingBox&, double, double, double)>([](vtkBoundingBox& self, double arg_0, double arg_1, double arg_2) -> void { return self.ScaleAboutCenter( arg_0, arg_1, arg_2); }))
    .function("Reset", &vtkBoundingBox::Reset);
}
