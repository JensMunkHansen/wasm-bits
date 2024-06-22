// JavaScript wrapper for vtkPixelExtent with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPixelExtentEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPixelExtent.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkPixelExtent.h"


EMSCRIPTEN_BINDINGS(vtkPixelExtent_class) {
  emscripten::class_<vtkPixelExtent>("vtkPixelExtent")
    .function("SetData", emscripten::select_overload<void(vtkPixelExtent&, const vtkPixelExtent&)>([](vtkPixelExtent& self, const vtkPixelExtent& arg_0) -> void { return self.SetData( arg_0); }))
    .function("Clear", &vtkPixelExtent::Clear)
    .function("GetData", emscripten::select_overload<std::uintptr_t(vtkPixelExtent&)>([](vtkPixelExtent& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetData()); }))
    .function("GetData", emscripten::select_overload<std::uintptr_t(vtkPixelExtent&)>([](vtkPixelExtent& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetData()); }))
    .function("GetDataU", emscripten::select_overload<std::uintptr_t(vtkPixelExtent&)>([](vtkPixelExtent& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetDataU()); }))
    .function("GetDataU", emscripten::select_overload<std::uintptr_t(vtkPixelExtent&)>([](vtkPixelExtent& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetDataU()); }))
    .function("Empty", &vtkPixelExtent::Empty)
    .function("Contains", emscripten::select_overload<int(vtkPixelExtent&, const vtkPixelExtent&)>([](vtkPixelExtent& self, const vtkPixelExtent& arg_0) -> int { return self.Contains( arg_0); }))
    .function("Contains", emscripten::select_overload<int(vtkPixelExtent&, int, int)>([](vtkPixelExtent& self, int arg_0, int arg_1) -> int { return self.Contains( arg_0, arg_1); }))
    .function("Disjoint", &vtkPixelExtent::Disjoint)
    .function("Size", emscripten::select_overload<size_t(vtkPixelExtent&)>([](vtkPixelExtent& self) -> size_t { return self.Size(); }))
    .class_function("Size", emscripten::select_overload<size_t( const vtkPixelExtent&)>([]( const vtkPixelExtent& arg_0) -> size_t { return vtkPixelExtent::Size( arg_0); }))
    .function("Grow", emscripten::select_overload<void(vtkPixelExtent&, int)>([](vtkPixelExtent& self, int arg_0) -> void { return self.Grow( arg_0); }))
    .function("Grow", emscripten::select_overload<void(vtkPixelExtent&, int, int)>([](vtkPixelExtent& self, int arg_0, int arg_1) -> void { return self.Grow( arg_0, arg_1); }))
    .class_function("Grow", emscripten::select_overload<vtkPixelExtent( const vtkPixelExtent&, int)>([]( const vtkPixelExtent& arg_0, int arg_1) -> vtkPixelExtent { return vtkPixelExtent::Grow( arg_0, arg_1); }))
    .class_function("Grow", emscripten::select_overload<vtkPixelExtent( const vtkPixelExtent&, const vtkPixelExtent&, int)>([]( const vtkPixelExtent& arg_0, const vtkPixelExtent& arg_1, int arg_2) -> vtkPixelExtent { return vtkPixelExtent::Grow( arg_0, arg_1, arg_2); }))
    .function("GrowLow", emscripten::select_overload<void(vtkPixelExtent&, int, int)>([](vtkPixelExtent& self, int arg_0, int arg_1) -> void { return self.GrowLow( arg_0, arg_1); }))
    .class_function("GrowLow", emscripten::select_overload<vtkPixelExtent( const vtkPixelExtent&, int, int)>([]( const vtkPixelExtent& arg_0, int arg_1, int arg_2) -> vtkPixelExtent { return vtkPixelExtent::GrowLow( arg_0, arg_1, arg_2); }))
    .function("GrowHigh", emscripten::select_overload<void(vtkPixelExtent&, int, int)>([](vtkPixelExtent& self, int arg_0, int arg_1) -> void { return self.GrowHigh( arg_0, arg_1); }))
    .class_function("GrowHigh", emscripten::select_overload<vtkPixelExtent( const vtkPixelExtent&, int, int)>([]( const vtkPixelExtent& arg_0, int arg_1, int arg_2) -> vtkPixelExtent { return vtkPixelExtent::GrowHigh( arg_0, arg_1, arg_2); }))
    .function("Shrink", emscripten::select_overload<void(vtkPixelExtent&, int)>([](vtkPixelExtent& self, int arg_0) -> void { return self.Shrink( arg_0); }))
    .function("Shrink", emscripten::select_overload<void(vtkPixelExtent&, int, int)>([](vtkPixelExtent& self, int arg_0, int arg_1) -> void { return self.Shrink( arg_0, arg_1); }))
    .class_function("Shrink", emscripten::select_overload<vtkPixelExtent( const vtkPixelExtent&, int)>([]( const vtkPixelExtent& arg_0, int arg_1) -> vtkPixelExtent { return vtkPixelExtent::Shrink( arg_0, arg_1); }))
    .class_function("Shrink", emscripten::select_overload<vtkPixelExtent( const vtkPixelExtent&, const vtkPixelExtent&, int)>([]( const vtkPixelExtent& arg_0, const vtkPixelExtent& arg_1, int arg_2) -> vtkPixelExtent { return vtkPixelExtent::Shrink( arg_0, arg_1, arg_2); }))
    .function("Shift", emscripten::select_overload<void(vtkPixelExtent&)>([](vtkPixelExtent& self) -> void { return self.Shift(); }))
    .function("Shift", emscripten::select_overload<void(vtkPixelExtent&, const vtkPixelExtent&)>([](vtkPixelExtent& self, const vtkPixelExtent& arg_0) -> void { return self.Shift( arg_0); }))
    .function("Shift", emscripten::select_overload<void(vtkPixelExtent&, std::uintptr_t)>([](vtkPixelExtent& self, std::uintptr_t arg_0) -> void { return self.Shift(reinterpret_cast<int*>(arg_0 * sizeof(int))); }))
    .function("Shift", emscripten::select_overload<void(vtkPixelExtent&, int, int)>([](vtkPixelExtent& self, int arg_0, int arg_1) -> void { return self.Shift( arg_0, arg_1); }))
    .class_function("Shift", emscripten::select_overload<void( std::uintptr_t, int)>([]( std::uintptr_t arg_0, int arg_1) -> void { return vtkPixelExtent::Shift(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1); }))
    .class_function("Shift", emscripten::select_overload<void( std::uintptr_t, std::uintptr_t)>([]( std::uintptr_t arg_0, std::uintptr_t arg_1) -> void { return vtkPixelExtent::Shift(reinterpret_cast<int*>(arg_0 * sizeof(int)),reinterpret_cast<int*>(arg_1 * sizeof(int))); }))
    .function("Split", emscripten::select_overload<vtkPixelExtent(vtkPixelExtent&, int)>([](vtkPixelExtent& self, int arg_0) -> vtkPixelExtent { return self.Split( arg_0); }))
    .function("CellToNode", emscripten::select_overload<void(vtkPixelExtent&)>([](vtkPixelExtent& self) -> void { return self.CellToNode(); }))
    .class_function("CellToNode", emscripten::select_overload<vtkPixelExtent( const vtkPixelExtent&)>([]( const vtkPixelExtent& arg_0) -> vtkPixelExtent { return vtkPixelExtent::CellToNode( arg_0); }))
    .function("NodeToCell", emscripten::select_overload<void(vtkPixelExtent&)>([](vtkPixelExtent& self) -> void { return self.NodeToCell(); }))
    .class_function("NodeToCell", emscripten::select_overload<vtkPixelExtent( const vtkPixelExtent&)>([]( const vtkPixelExtent& arg_0) -> vtkPixelExtent { return vtkPixelExtent::NodeToCell( arg_0); }));
}
