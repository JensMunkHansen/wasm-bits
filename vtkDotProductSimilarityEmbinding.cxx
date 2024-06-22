// JavaScript wrapper for vtkDotProductSimilarity with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkDotProductSimilarityEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkDotProductSimilarity.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDotProductSimilarity.h"

template<> void emscripten::internal::raw_destructor<vtkDotProductSimilarity>(vtkDotProductSimilarity * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDotProductSimilarity_class) {
  emscripten::class_<vtkDotProductSimilarity, emscripten::base<vtkTableAlgorithm>>("vtkDotProductSimilarity")
    .smart_ptr<vtkSmartPointer<vtkDotProductSimilarity>>("vtkSmartPointer<vtkDotProductSimilarity>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDotProductSimilarity>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDotProductSimilarity::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDotProductSimilarity& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDotProductSimilarity::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDotProductSimilarity::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDotProductSimilarity::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDotProductSimilarity& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetVectorDimension", &vtkDotProductSimilarity::GetVectorDimension)
    .function("SetVectorDimension", &vtkDotProductSimilarity::SetVectorDimension)
    .function("GetUpperDiagonal", &vtkDotProductSimilarity::GetUpperDiagonal)
    .function("SetUpperDiagonal", &vtkDotProductSimilarity::SetUpperDiagonal)
    .function("GetDiagonal", &vtkDotProductSimilarity::GetDiagonal)
    .function("SetDiagonal", &vtkDotProductSimilarity::SetDiagonal)
    .function("GetLowerDiagonal", &vtkDotProductSimilarity::GetLowerDiagonal)
    .function("SetLowerDiagonal", &vtkDotProductSimilarity::SetLowerDiagonal)
    .function("GetFirstSecond", &vtkDotProductSimilarity::GetFirstSecond)
    .function("SetFirstSecond", &vtkDotProductSimilarity::SetFirstSecond)
    .function("GetSecondFirst", &vtkDotProductSimilarity::GetSecondFirst)
    .function("SetSecondFirst", &vtkDotProductSimilarity::SetSecondFirst)
    .function("GetMinimumThreshold", &vtkDotProductSimilarity::GetMinimumThreshold)
    .function("SetMinimumThreshold", &vtkDotProductSimilarity::SetMinimumThreshold)
    .function("GetMinimumCount", &vtkDotProductSimilarity::GetMinimumCount)
    .function("SetMinimumCount", &vtkDotProductSimilarity::SetMinimumCount)
    .function("GetMaximumCount", &vtkDotProductSimilarity::GetMaximumCount)
    .function("SetMaximumCount", &vtkDotProductSimilarity::SetMaximumCount);
}
