// JavaScript wrapper for vtkDiagonalMatrixSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkDiagonalMatrixSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkDiagonalMatrixSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDiagonalMatrixSource.h"

EMSCRIPTEN_BINDINGS(vtkFiltersSources_vtkDiagonalMatrixSource_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkDiagonalMatrixSource>(vtkDiagonalMatrixSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDiagonalMatrixSource_class) {
  using StorageType=vtkDiagonalMatrixSource::StorageType;
  emscripten::class_<vtkDiagonalMatrixSource, emscripten::base<vtkArrayDataAlgorithm>>("vtkDiagonalMatrixSource")
    .smart_ptr<vtkSmartPointer<vtkDiagonalMatrixSource>>("vtkSmartPointer<vtkDiagonalMatrixSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDiagonalMatrixSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDiagonalMatrixSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDiagonalMatrixSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDiagonalMatrixSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDiagonalMatrixSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDiagonalMatrixSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDiagonalMatrixSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetArrayType", &vtkDiagonalMatrixSource::GetArrayType)
    .function("SetArrayType", &vtkDiagonalMatrixSource::SetArrayType)
    .function("GetExtents", &vtkDiagonalMatrixSource::GetExtents)
    .function("SetExtents", &vtkDiagonalMatrixSource::SetExtents)
    .function("GetDiagonal", &vtkDiagonalMatrixSource::GetDiagonal)
    .function("SetDiagonal", &vtkDiagonalMatrixSource::SetDiagonal)
    .function("GetSuperDiagonal", &vtkDiagonalMatrixSource::GetSuperDiagonal)
    .function("SetSuperDiagonal", &vtkDiagonalMatrixSource::SetSuperDiagonal)
    .function("GetSubDiagonal", &vtkDiagonalMatrixSource::GetSubDiagonal)
    .function("SetSubDiagonal", &vtkDiagonalMatrixSource::SetSubDiagonal)
    .function("GetRowLabel", emscripten::optional_override([](vtkDiagonalMatrixSource& self) -> std::string {  return self.GetRowLabel();}))
    .function("SetRowLabel", emscripten::optional_override([](vtkDiagonalMatrixSource& self, const std::string & arg_0) -> void {  return self.SetRowLabel( arg_0.c_str());}))
    .function("GetColumnLabel", emscripten::optional_override([](vtkDiagonalMatrixSource& self) -> std::string {  return self.GetColumnLabel();}))
    .function("SetColumnLabel", emscripten::optional_override([](vtkDiagonalMatrixSource& self, const std::string & arg_0) -> void {  return self.SetColumnLabel( arg_0.c_str());}));
}
EMSCRIPTEN_BINDINGS(vtkFiltersSources_vtkDiagonalMatrixSource_0_2_constants) {
    typedef vtkDiagonalMatrixSource::StorageType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkDiagonalMatrixSource_StorageType_DENSE", vtkDiagonalMatrixSource::DENSE },
      { "vtkDiagonalMatrixSource_StorageType_SPARSE", vtkDiagonalMatrixSource::SPARSE },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
