// JavaScript wrapper for vtkSMPContourGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSMP.js/vtkFiltersSMP.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSMP.js/vtkSMPContourGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/SMP/vtkSMPContourGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkSMPContourGrid.h"

template<> void emscripten::internal::raw_destructor<vtkSMPContourGrid>(vtkSMPContourGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSMPContourGrid_class) {
  emscripten::class_<vtkSMPContourGrid, emscripten::base<vtkContourGrid>>("vtkSMPContourGrid")
    .smart_ptr<vtkSmartPointer<vtkSMPContourGrid>>("vtkSmartPointer<vtkSMPContourGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSMPContourGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSMPContourGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSMPContourGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSMPContourGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSMPContourGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSMPContourGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSMPContourGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMergePieces", &vtkSMPContourGrid::SetMergePieces)
    .function("GetMergePieces", &vtkSMPContourGrid::GetMergePieces)
    .function("MergePiecesOn", &vtkSMPContourGrid::MergePiecesOn)
    .function("MergePiecesOff", &vtkSMPContourGrid::MergePiecesOff);
}
