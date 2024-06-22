// JavaScript wrapper for vtkTransposeMatrix with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkTransposeMatrixEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkTransposeMatrix.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTransposeMatrix.h"

template<> void emscripten::internal::raw_destructor<vtkTransposeMatrix>(vtkTransposeMatrix * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransposeMatrix_class) {
  emscripten::class_<vtkTransposeMatrix, emscripten::base<vtkArrayDataAlgorithm>>("vtkTransposeMatrix")
    .smart_ptr<vtkSmartPointer<vtkTransposeMatrix>>("vtkSmartPointer<vtkTransposeMatrix>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTransposeMatrix>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransposeMatrix::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransposeMatrix& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransposeMatrix::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransposeMatrix::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransposeMatrix::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransposeMatrix& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
