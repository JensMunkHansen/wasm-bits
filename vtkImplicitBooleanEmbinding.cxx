// JavaScript wrapper for vtkImplicitBoolean with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkImplicitBooleanEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkImplicitBoolean.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkImplicitFunctionCollection.h"
#include "vtkDataArray.h"
#include "vtkImplicitBoolean.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkImplicitBoolean_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkImplicitBoolean>(vtkImplicitBoolean * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitBoolean_class) {
  emscripten::class_<vtkImplicitBoolean, emscripten::base<vtkImplicitFunction>>("vtkImplicitBoolean")
    .smart_ptr<vtkSmartPointer<vtkImplicitBoolean>>("vtkSmartPointer<vtkImplicitBoolean>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImplicitBoolean>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitBoolean::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitBoolean& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitBoolean::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitBoolean::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitBoolean::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitBoolean& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkImplicitBoolean::GetMTime)
    .function("AddFunction", &vtkImplicitBoolean::AddFunction, emscripten::allow_raw_pointers())
    .function("RemoveFunction", &vtkImplicitBoolean::RemoveFunction, emscripten::allow_raw_pointers())
    .function("GetFunction", &vtkImplicitBoolean::GetFunction, emscripten::allow_raw_pointers())
    .function("SetOperationType", &vtkImplicitBoolean::SetOperationType)
    .function("GetOperationTypeMinValue", &vtkImplicitBoolean::GetOperationTypeMinValue)
    .function("GetOperationTypeMaxValue", &vtkImplicitBoolean::GetOperationTypeMaxValue)
    .function("GetOperationType", &vtkImplicitBoolean::GetOperationType)
    .function("SetOperationTypeToUnion", &vtkImplicitBoolean::SetOperationTypeToUnion)
    .function("SetOperationTypeToIntersection", &vtkImplicitBoolean::SetOperationTypeToIntersection)
    .function("SetOperationTypeToDifference", &vtkImplicitBoolean::SetOperationTypeToDifference)
    .function("SetOperationTypeToUnionOfMagnitudes", &vtkImplicitBoolean::SetOperationTypeToUnionOfMagnitudes)
    .function("GetOperationTypeAsString", emscripten::optional_override([](vtkImplicitBoolean& self) -> std::string {  return self.GetOperationTypeAsString();}))
    .function("EvaluateFunction", emscripten::select_overload<void(vtkImplicitBoolean&, vtkDataArray*, vtkDataArray*)>([](vtkImplicitBoolean& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkImplicitBoolean&, double, double, double)>([](vtkImplicitBoolean& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkImplicitBoolean_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkImplicitBoolean_VTK_UNION", vtkImplicitBoolean::VTK_UNION },
      { "vtkImplicitBoolean_VTK_INTERSECTION", vtkImplicitBoolean::VTK_INTERSECTION },
      { "vtkImplicitBoolean_VTK_DIFFERENCE", vtkImplicitBoolean::VTK_DIFFERENCE },
      { "vtkImplicitBoolean_VTK_UNION_OF_MAGNITUDES", vtkImplicitBoolean::VTK_UNION_OF_MAGNITUDES },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
