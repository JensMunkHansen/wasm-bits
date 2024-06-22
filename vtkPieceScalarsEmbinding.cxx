// JavaScript wrapper for vtkPieceScalars with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPieceScalarsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPieceScalars.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPieceScalars.h"

template<> void emscripten::internal::raw_destructor<vtkPieceScalars>(vtkPieceScalars * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPieceScalars_class) {
  emscripten::class_<vtkPieceScalars, emscripten::base<vtkDataSetAlgorithm>>("vtkPieceScalars")
    .smart_ptr<vtkSmartPointer<vtkPieceScalars>>("vtkSmartPointer<vtkPieceScalars>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPieceScalars>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPieceScalars::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPieceScalars& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPieceScalars::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPieceScalars::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPieceScalars::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPieceScalars& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetScalarModeToCellData", &vtkPieceScalars::SetScalarModeToCellData)
    .function("SetScalarModeToPointData", &vtkPieceScalars::SetScalarModeToPointData)
    .function("GetScalarMode", &vtkPieceScalars::GetScalarMode)
    .function("SetRandomMode", &vtkPieceScalars::SetRandomMode)
    .function("GetRandomMode", &vtkPieceScalars::GetRandomMode)
    .function("RandomModeOn", &vtkPieceScalars::RandomModeOn)
    .function("RandomModeOff", &vtkPieceScalars::RandomModeOff);
}
