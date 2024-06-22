// JavaScript wrapper for vtkAtom with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkAtomEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkAtom.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMolecule.h"
#include "vtkVector.h"
#include "vtkAtom.h"


EMSCRIPTEN_BINDINGS(vtkAtom_class) {
  emscripten::class_<vtkAtom>("vtkAtom")
    .function("GetId", &vtkAtom::GetId)
    .function("GetMolecule", &vtkAtom::GetMolecule, emscripten::allow_raw_pointers())
    .function("GetAtomicNumber", &vtkAtom::GetAtomicNumber)
    .function("SetAtomicNumber", &vtkAtom::SetAtomicNumber)
    .function("SetPosition", emscripten::select_overload<void(vtkAtom&, float, float, float)>([](vtkAtom& self, float arg_0, float arg_1, float arg_2) -> void { return self.SetPosition( arg_0, arg_1, arg_2); }))
    .function("SetPosition", emscripten::select_overload<void(vtkAtom&, const vtkVector3f&)>([](vtkAtom& self, const vtkVector3f& arg_0) -> void { return self.SetPosition( arg_0); }))
    .function("GetPosition", emscripten::select_overload<vtkVector3f(vtkAtom&)>([](vtkAtom& self) -> vtkVector3f { return self.GetPosition(); }));
}
