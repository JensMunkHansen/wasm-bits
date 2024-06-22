// JavaScript wrapper for vtkAMRDataInternals with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkAMRDataInternalsEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkAMRDataInternals.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUniformGrid.h"
#include "vtkObject.h"
#include "vtkAMRDataInternals.h"

template<> void emscripten::internal::raw_destructor<vtkAMRDataInternals>(vtkAMRDataInternals * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMRDataInternals_class) {
  emscripten::class_<vtkAMRDataInternals, emscripten::base<vtkObject>>("vtkAMRDataInternals")
    .smart_ptr<vtkSmartPointer<vtkAMRDataInternals>>("vtkSmartPointer<vtkAMRDataInternals>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAMRDataInternals>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRDataInternals::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMRDataInternals& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMRDataInternals::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMRDataInternals::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRDataInternals::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMRDataInternals& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkAMRDataInternals::Initialize)
    .function("Insert", &vtkAMRDataInternals::Insert, emscripten::allow_raw_pointers())
    .function("GetDataSet", &vtkAMRDataInternals::GetDataSet, emscripten::allow_raw_pointers())
    .function("CompositeShallowCopy", &vtkAMRDataInternals::CompositeShallowCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkAMRDataInternals::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkAMRDataInternals::DeepCopy, emscripten::allow_raw_pointers())
    .function("Empty", &vtkAMRDataInternals::Empty)
    .function("GetNumberOfBlocks", &vtkAMRDataInternals::GetNumberOfBlocks);
}
