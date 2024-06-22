// JavaScript wrapper for vtkDataSetAttributesFieldList with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkDataSetAttributesFieldListEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkDataSetAttributesFieldList.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataSetAttributes.h"
#include "vtkIdList.h"
#include "vtkDataSetAttributesFieldList.h"


EMSCRIPTEN_BINDINGS(vtkDataSetAttributesFieldList_class) {
  emscripten::class_<vtkDataSetAttributesFieldList>("vtkDataSetAttributesFieldList")
    .function("Reset", &vtkDataSetAttributesFieldList::Reset)
    .function("InitializeFieldList", &vtkDataSetAttributesFieldList::InitializeFieldList, emscripten::allow_raw_pointers())
    .function("IntersectFieldList", &vtkDataSetAttributesFieldList::IntersectFieldList, emscripten::allow_raw_pointers())
    .function("UnionFieldList", &vtkDataSetAttributesFieldList::UnionFieldList, emscripten::allow_raw_pointers())
    .function("CopyAllocate", &vtkDataSetAttributesFieldList::CopyAllocate, emscripten::allow_raw_pointers())
    .function("CopyData", emscripten::select_overload<void(vtkDataSetAttributesFieldList&, int, vtkDataSetAttributes*, int, vtkDataSetAttributes*, int)>([](vtkDataSetAttributesFieldList& self, int arg_0, vtkDataSetAttributes* arg_1, int arg_2, vtkDataSetAttributes* arg_3, int arg_4) -> void { return self.CopyData( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("CopyData", emscripten::select_overload<void(vtkDataSetAttributesFieldList&, int, vtkDataSetAttributes*, int, int, vtkDataSetAttributes*, int)>([](vtkDataSetAttributesFieldList& self, int arg_0, vtkDataSetAttributes* arg_1, int arg_2, int arg_3, vtkDataSetAttributes* arg_4, int arg_5) -> void { return self.CopyData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }), emscripten::allow_raw_pointers())
    .function("InterpolatePoint", emscripten::optional_override([](vtkDataSetAttributesFieldList& self, int arg_0, vtkDataSetAttributes* arg_1, vtkIdList* arg_2, std::uintptr_t arg_3, vtkDataSetAttributes* arg_4, int arg_5) -> void {  return self.InterpolatePoint( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)), arg_4, arg_5);}), emscripten::allow_raw_pointers())
    .function("GetNumberOfArrays", &vtkDataSetAttributesFieldList::GetNumberOfArrays)
    .function("BuildPrototype", &vtkDataSetAttributesFieldList::BuildPrototype, emscripten::allow_raw_pointers());
}
