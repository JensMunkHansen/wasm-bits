// JavaScript wrapper for vtkMoleculeAppend with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkMoleculeAppendEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkMoleculeAppend.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkMoleculeAppend.h"

template<> void emscripten::internal::raw_destructor<vtkMoleculeAppend>(vtkMoleculeAppend * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMoleculeAppend_class) {
  emscripten::class_<vtkMoleculeAppend, emscripten::base<vtkMoleculeAlgorithm>>("vtkMoleculeAppend")
    .smart_ptr<vtkSmartPointer<vtkMoleculeAppend>>("vtkSmartPointer<vtkMoleculeAppend>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMoleculeAppend>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMoleculeAppend::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMoleculeAppend& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMoleculeAppend::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMoleculeAppend::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMoleculeAppend::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMoleculeAppend& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkMoleculeAppend&, int)>([](vtkMoleculeAppend& self, int arg_0) -> vtkDataObject* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkMoleculeAppend&)>([](vtkMoleculeAppend& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetMergeCoincidentAtoms", &vtkMoleculeAppend::GetMergeCoincidentAtoms)
    .function("SetMergeCoincidentAtoms", &vtkMoleculeAppend::SetMergeCoincidentAtoms)
    .function("MergeCoincidentAtomsOn", &vtkMoleculeAppend::MergeCoincidentAtomsOn)
    .function("MergeCoincidentAtomsOff", &vtkMoleculeAppend::MergeCoincidentAtomsOff);
}
