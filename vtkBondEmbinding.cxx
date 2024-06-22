// JavaScript wrapper for vtkBond with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkBondEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkBond.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMolecule.h"
#include "vtkAtom.h"
#include "vtkBond.h"


EMSCRIPTEN_BINDINGS(vtkBond_class) {
  emscripten::class_<vtkBond>("vtkBond")
    .function("GetId", &vtkBond::GetId)
    .function("GetMolecule", &vtkBond::GetMolecule, emscripten::allow_raw_pointers())
    .function("GetBeginAtomId", &vtkBond::GetBeginAtomId)
    .function("GetEndAtomId", &vtkBond::GetEndAtomId)
    .function("GetBeginAtom", emscripten::select_overload<vtkAtom(vtkBond&)>([](vtkBond& self) -> vtkAtom { return self.GetBeginAtom(); }))
    .function("GetBeginAtom", emscripten::select_overload<vtkAtom(vtkBond&)>([](vtkBond& self) -> vtkAtom { return self.GetBeginAtom(); }))
    .function("GetEndAtom", emscripten::select_overload<vtkAtom(vtkBond&)>([](vtkBond& self) -> vtkAtom { return self.GetEndAtom(); }))
    .function("GetEndAtom", emscripten::select_overload<vtkAtom(vtkBond&)>([](vtkBond& self) -> vtkAtom { return self.GetEndAtom(); }))
    .function("GetOrder", &vtkBond::GetOrder)
    .function("GetLength", &vtkBond::GetLength);
}
