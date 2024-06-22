// JavaScript wrapper for vtkTreeDFSIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkTreeDFSIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkTreeDFSIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTreeDFSIterator.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkTreeDFSIterator_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkTreeDFSIterator>(vtkTreeDFSIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTreeDFSIterator_class) {
  using ModeType=vtkTreeDFSIterator::ModeType;
  emscripten::class_<vtkTreeDFSIterator, emscripten::base<vtkTreeIterator>>("vtkTreeDFSIterator")
    .smart_ptr<vtkSmartPointer<vtkTreeDFSIterator>>("vtkSmartPointer<vtkTreeDFSIterator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTreeDFSIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeDFSIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTreeDFSIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTreeDFSIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTreeDFSIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeDFSIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTreeDFSIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMode", &vtkTreeDFSIterator::SetMode)
    .function("GetMode", &vtkTreeDFSIterator::GetMode);
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkTreeDFSIterator_0_2_constants) {
    typedef vtkTreeDFSIterator::ModeType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkTreeDFSIterator_ModeType_DISCOVER", vtkTreeDFSIterator::DISCOVER },
      { "vtkTreeDFSIterator_ModeType_FINISH", vtkTreeDFSIterator::FINISH },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
