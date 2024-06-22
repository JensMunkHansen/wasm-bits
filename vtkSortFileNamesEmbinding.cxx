// JavaScript wrapper for vtkSortFileNames with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkSortFileNamesEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkSortFileNames.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStringArray.h"
#include "vtkSortFileNames.h"

template<> void emscripten::internal::raw_destructor<vtkSortFileNames>(vtkSortFileNames * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSortFileNames_class) {
  emscripten::class_<vtkSortFileNames, emscripten::base<vtkObject>>("vtkSortFileNames")
    .smart_ptr<vtkSmartPointer<vtkSortFileNames>>("vtkSmartPointer<vtkSortFileNames>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSortFileNames>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSortFileNames::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSortFileNames& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSortFileNames::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSortFileNames::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSortFileNames::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSortFileNames& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGrouping", &vtkSortFileNames::SetGrouping)
    .function("GetGrouping", &vtkSortFileNames::GetGrouping)
    .function("GroupingOn", &vtkSortFileNames::GroupingOn)
    .function("GroupingOff", &vtkSortFileNames::GroupingOff)
    .function("SetNumericSort", &vtkSortFileNames::SetNumericSort)
    .function("GetNumericSort", &vtkSortFileNames::GetNumericSort)
    .function("NumericSortOn", &vtkSortFileNames::NumericSortOn)
    .function("NumericSortOff", &vtkSortFileNames::NumericSortOff)
    .function("SetIgnoreCase", &vtkSortFileNames::SetIgnoreCase)
    .function("GetIgnoreCase", &vtkSortFileNames::GetIgnoreCase)
    .function("IgnoreCaseOn", &vtkSortFileNames::IgnoreCaseOn)
    .function("IgnoreCaseOff", &vtkSortFileNames::IgnoreCaseOff)
    .function("SetSkipDirectories", &vtkSortFileNames::SetSkipDirectories)
    .function("GetSkipDirectories", &vtkSortFileNames::GetSkipDirectories)
    .function("SkipDirectoriesOn", &vtkSortFileNames::SkipDirectoriesOn)
    .function("SkipDirectoriesOff", &vtkSortFileNames::SkipDirectoriesOff)
    .function("SetInputFileNames", &vtkSortFileNames::SetInputFileNames, emscripten::allow_raw_pointers())
    .function("GetInputFileNames", &vtkSortFileNames::GetInputFileNames, emscripten::allow_raw_pointers())
    .function("GetFileNames", &vtkSortFileNames::GetFileNames, emscripten::allow_raw_pointers())
    .function("GetNumberOfGroups", &vtkSortFileNames::GetNumberOfGroups)
    .function("GetNthGroup", &vtkSortFileNames::GetNthGroup, emscripten::allow_raw_pointers())
    .function("Update", &vtkSortFileNames::Update);
}
