// JavaScript wrapper for vtkKMeansDistanceFunctor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkKMeansDistanceFunctorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkKMeansDistanceFunctor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVariantArray.h"
#include "vtkTable.h"
#include "vtkAbstractArray.h"
#include "vtkKMeansDistanceFunctor.h"

template<> void emscripten::internal::raw_destructor<vtkKMeansDistanceFunctor>(vtkKMeansDistanceFunctor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkKMeansDistanceFunctor_class) {
  emscripten::class_<vtkKMeansDistanceFunctor, emscripten::base<vtkObject>>("vtkKMeansDistanceFunctor")
    .smart_ptr<vtkSmartPointer<vtkKMeansDistanceFunctor>>("vtkSmartPointer<vtkKMeansDistanceFunctor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkKMeansDistanceFunctor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKMeansDistanceFunctor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkKMeansDistanceFunctor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkKMeansDistanceFunctor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkKMeansDistanceFunctor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKMeansDistanceFunctor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkKMeansDistanceFunctor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetEmptyTuple", &vtkKMeansDistanceFunctor::GetEmptyTuple, emscripten::allow_raw_pointers())
    .function("PairwiseUpdate", &vtkKMeansDistanceFunctor::PairwiseUpdate, emscripten::allow_raw_pointers())
    .function("PerturbElement", &vtkKMeansDistanceFunctor::PerturbElement, emscripten::allow_raw_pointers())
    .function("AllocateElementArray", emscripten::optional_override([](vtkKMeansDistanceFunctor& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.AllocateElementArray( arg_0));}))
    .function("DeallocateElementArray", emscripten::optional_override([](vtkKMeansDistanceFunctor& self, std::uintptr_t arg_0) -> void {  return self.DeallocateElementArray(reinterpret_cast<void*>(arg_0));}))
    .function("CreateCoordinateArray", &vtkKMeansDistanceFunctor::CreateCoordinateArray, emscripten::allow_raw_pointers())
    .function("PackElements", emscripten::optional_override([](vtkKMeansDistanceFunctor& self, vtkTable* arg_0, std::uintptr_t arg_1) -> void {  return self.PackElements( arg_0,reinterpret_cast<void*>(arg_1));}), emscripten::allow_raw_pointers())
    .function("UnPackElements", emscripten::select_overload<void(vtkKMeansDistanceFunctor&, vtkTable*, vtkTable*, std::uintptr_t, std::uintptr_t, int)>([](vtkKMeansDistanceFunctor& self, vtkTable* arg_0, vtkTable* arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3, int arg_4) -> void { return self.UnPackElements( arg_0, arg_1,reinterpret_cast<void*>(arg_2),reinterpret_cast<void*>(arg_3), arg_4); }), emscripten::allow_raw_pointers())
    .function("UnPackElements", emscripten::select_overload<void(vtkKMeansDistanceFunctor&, vtkTable*, std::uintptr_t, int, int)>([](vtkKMeansDistanceFunctor& self, vtkTable* arg_0, std::uintptr_t arg_1, int arg_2, int arg_3) -> void { return self.UnPackElements( arg_0,reinterpret_cast<void*>(arg_1), arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkKMeansDistanceFunctor::GetDataType);
}
