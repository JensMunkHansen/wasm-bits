// JavaScript wrapper for vtkKdTreePointLocator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkKdTreePointLocatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkKdTreePointLocator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkPolyData.h"
#include "vtkKdTreePointLocator.h"

template<> void emscripten::internal::raw_destructor<vtkKdTreePointLocator>(vtkKdTreePointLocator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkKdTreePointLocator_class) {
  emscripten::class_<vtkKdTreePointLocator, emscripten::base<vtkAbstractPointLocator>>("vtkKdTreePointLocator")
    .smart_ptr<vtkSmartPointer<vtkKdTreePointLocator>>("vtkSmartPointer<vtkKdTreePointLocator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkKdTreePointLocator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKdTreePointLocator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkKdTreePointLocator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkKdTreePointLocator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkKdTreePointLocator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKdTreePointLocator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkKdTreePointLocator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("FreeSearchStructure", &vtkKdTreePointLocator::FreeSearchStructure)
    .function("BuildLocator", &vtkKdTreePointLocator::BuildLocator)
    .function("ForceBuildLocator", &vtkKdTreePointLocator::ForceBuildLocator)
    .function("GenerateRepresentation", &vtkKdTreePointLocator::GenerateRepresentation, emscripten::allow_raw_pointers());
}
