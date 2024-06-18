// JavaScript wrapper for vtkNonMergingPointLocator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkNonMergingPointLocatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkNonMergingPointLocator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkNonMergingPointLocator.h"

template<> void emscripten::internal::raw_destructor<vtkNonMergingPointLocator>(vtkNonMergingPointLocator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNonMergingPointLocator_class) {
  emscripten::class_<vtkNonMergingPointLocator, emscripten::base<vtkPointLocator>>("vtkNonMergingPointLocator")
    .smart_ptr<vtkSmartPointer<vtkNonMergingPointLocator>>("vtkSmartPointer<vtkNonMergingPointLocator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkNonMergingPointLocator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNonMergingPointLocator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNonMergingPointLocator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNonMergingPointLocator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNonMergingPointLocator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNonMergingPointLocator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNonMergingPointLocator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsInsertedPoint", emscripten::select_overload<int(vtkNonMergingPointLocator&, double, double, double)>([](vtkNonMergingPointLocator& self, double arg_0, double arg_1, double arg_2) -> int { return self.IsInsertedPoint( arg_0, arg_1, arg_2); }));
}
