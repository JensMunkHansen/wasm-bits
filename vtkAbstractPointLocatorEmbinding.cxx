// JavaScript wrapper for vtkAbstractPointLocator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkAbstractPointLocatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkAbstractPointLocator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkAbstractPointLocator.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractPointLocator>(vtkAbstractPointLocator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractPointLocator_class) {
  emscripten::class_<vtkAbstractPointLocator, emscripten::base<vtkLocator>>("vtkAbstractPointLocator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractPointLocator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractPointLocator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractPointLocator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractPointLocator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractPointLocator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractPointLocator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("FindClosestPoint", emscripten::select_overload<int(vtkAbstractPointLocator&, double, double, double)>([](vtkAbstractPointLocator& self, double arg_0, double arg_1, double arg_2) -> int { return self.FindClosestPoint( arg_0, arg_1, arg_2); }))
    .function("FindClosestNPoints", emscripten::select_overload<void(vtkAbstractPointLocator&, int, double, double, double, vtkIdList*)>([](vtkAbstractPointLocator& self, int arg_0, double arg_1, double arg_2, double arg_3, vtkIdList* arg_4) -> void { return self.FindClosestNPoints( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("FindPointsWithinRadius", emscripten::select_overload<void(vtkAbstractPointLocator&, double, double, double, double, vtkIdList*)>([](vtkAbstractPointLocator& self, double arg_0, double arg_1, double arg_2, double arg_3, vtkIdList* arg_4) -> void { return self.FindPointsWithinRadius( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("GetBounds", emscripten::select_overload<std::uintptr_t(vtkAbstractPointLocator&)>([](vtkAbstractPointLocator& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetBounds()); }))
    .function("GetBounds", emscripten::select_overload<void(vtkAbstractPointLocator&, std::uintptr_t)>([](vtkAbstractPointLocator& self, std::uintptr_t arg_0) -> void { return self.GetBounds(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("GetNumberOfBuckets", &vtkAbstractPointLocator::GetNumberOfBuckets);
}
