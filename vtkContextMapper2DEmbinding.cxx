// JavaScript wrapper for vtkContextMapper2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkContextMapper2DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkContextMapper2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTable.h"
#include "vtkDataArray.h"
#include "vtkDataObject.h"
#include "vtkAbstractArray.h"
#include "vtkContextMapper2D.h"

template<> void emscripten::internal::raw_destructor<vtkContextMapper2D>(vtkContextMapper2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContextMapper2D_class) {
  emscripten::class_<vtkContextMapper2D, emscripten::base<vtkAlgorithm>>("vtkContextMapper2D")
    .smart_ptr<vtkSmartPointer<vtkContextMapper2D>>("vtkSmartPointer<vtkContextMapper2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkContextMapper2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextMapper2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContextMapper2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContextMapper2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContextMapper2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextMapper2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContextMapper2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", &vtkContextMapper2D::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkContextMapper2D::GetInput, emscripten::allow_raw_pointers())
    .function("GetInputArrayToProcess", &vtkContextMapper2D::GetInputArrayToProcess, emscripten::allow_raw_pointers())
    .function("GetInputAbstractArrayToProcess", &vtkContextMapper2D::GetInputAbstractArrayToProcess, emscripten::allow_raw_pointers());
}
