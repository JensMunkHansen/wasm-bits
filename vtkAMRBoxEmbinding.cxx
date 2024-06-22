// JavaScript wrapper for vtkAMRBox with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkAMRBoxEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkAMRBox.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkAMRBox.h"


EMSCRIPTEN_BINDINGS(vtkAMRBox_class) {
  emscripten::class_<vtkAMRBox>("vtkAMRBox")
    .smart_ptr<std::shared_ptr<vtkAMRBox>>("std::shared_ptr<vtkAMRBox>")
    .constructor(&std::make_shared<vtkAMRBox>)
    .function("Invalidate", &vtkAMRBox::Invalidate)
    .function("EmptyDimension", &vtkAMRBox::EmptyDimension)
    .function("SetDimensions", emscripten::select_overload<void(vtkAMRBox&, int, int, int, int, int, int, int)>([](vtkAMRBox& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6) -> void { return self.SetDimensions( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }))
    .function("GetNumberOfCells", emscripten::select_overload<int(vtkAMRBox&)>([](vtkAMRBox& self) -> int { return self.GetNumberOfCells(); }))
    .function("GetNumberOfNodes", emscripten::select_overload<int(vtkAMRBox&)>([](vtkAMRBox& self) -> int { return self.GetNumberOfNodes(); }))
    .function("ComputeDimension", &vtkAMRBox::ComputeDimension)
    .function("GetLoCorner", emscripten::optional_override([](vtkAMRBox& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetLoCorner()) / sizeof(int);}))
    .function("GetHiCorner", emscripten::optional_override([](vtkAMRBox& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetHiCorner()) / sizeof(int);}))
    .function("Empty", &vtkAMRBox::Empty)
    .function("IsInvalid", &vtkAMRBox::IsInvalid)
    .function("Serialize", emscripten::select_overload<void(vtkAMRBox&, std::uintptr_t)>([](vtkAMRBox& self, std::uintptr_t arg_0) -> void { return self.Serialize(reinterpret_cast<int*>(arg_0 * sizeof(int))); }))
    .function("Deserialize", emscripten::optional_override([](vtkAMRBox& self, std::uintptr_t arg_0, const int& arg_1) -> void {  return self.Deserialize(reinterpret_cast<unsigned char*>(arg_0 * sizeof(unsigned char)), arg_1);}))
    .function("DoesBoxIntersectAlongDimension", &vtkAMRBox::DoesBoxIntersectAlongDimension)
    .function("DoesIntersect", &vtkAMRBox::DoesIntersect)
    .function("Coarsen", &vtkAMRBox::Coarsen)
    .function("Refine", &vtkAMRBox::Refine)
    .function("Grow", &vtkAMRBox::Grow)
    .function("Shrink", &vtkAMRBox::Shrink)
    .function("Shift", emscripten::select_overload<void(vtkAMRBox&, int, int, int)>([](vtkAMRBox& self, int arg_0, int arg_1, int arg_2) -> void { return self.Shift( arg_0, arg_1, arg_2); }))
    .function("Intersect", &vtkAMRBox::Intersect)
    .function("Contains", emscripten::select_overload<bool(vtkAMRBox&, int, int, int)>([](vtkAMRBox& self, int arg_0, int arg_1, int arg_2) -> bool { return self.Contains( arg_0, arg_1, arg_2); }))
    .function("Contains", emscripten::select_overload<bool(vtkAMRBox&, const vtkAMRBox&)>([](vtkAMRBox& self, const vtkAMRBox& arg_0) -> bool { return self.Contains( arg_0); }))
    .function("RemoveGhosts", &vtkAMRBox::RemoveGhosts)
    .class_function("GetBytesize", &vtkAMRBox::GetBytesize);
}
