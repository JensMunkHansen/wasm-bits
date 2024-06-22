// JavaScript wrapper for vtkCellTypeSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkCellTypeSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkCellTypeSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellTypeSource.h"

template<> void emscripten::internal::raw_destructor<vtkCellTypeSource>(vtkCellTypeSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellTypeSource_class) {
  emscripten::class_<vtkCellTypeSource, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkCellTypeSource")
    .smart_ptr<vtkSmartPointer<vtkCellTypeSource>>("vtkSmartPointer<vtkCellTypeSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellTypeSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellTypeSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellTypeSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellTypeSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellTypeSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellTypeSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellTypeSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCellType", &vtkCellTypeSource::SetCellType)
    .function("GetCellType", &vtkCellTypeSource::GetCellType)
    .function("SetCellOrder", &vtkCellTypeSource::SetCellOrder)
    .function("GetCellOrder", &vtkCellTypeSource::GetCellOrder)
    .function("SetCompleteQuadraticSimplicialElements", &vtkCellTypeSource::SetCompleteQuadraticSimplicialElements)
    .function("GetCompleteQuadraticSimplicialElements", &vtkCellTypeSource::GetCompleteQuadraticSimplicialElements)
    .function("CompleteQuadraticSimplicialElementsOn", &vtkCellTypeSource::CompleteQuadraticSimplicialElementsOn)
    .function("CompleteQuadraticSimplicialElementsOff", &vtkCellTypeSource::CompleteQuadraticSimplicialElementsOff)
    .function("SetPolynomialFieldOrder", &vtkCellTypeSource::SetPolynomialFieldOrder)
    .function("GetPolynomialFieldOrderMinValue", &vtkCellTypeSource::GetPolynomialFieldOrderMinValue)
    .function("GetPolynomialFieldOrderMaxValue", &vtkCellTypeSource::GetPolynomialFieldOrderMaxValue)
    .function("GetPolynomialFieldOrder", &vtkCellTypeSource::GetPolynomialFieldOrder)
    .function("GetCellDimension", &vtkCellTypeSource::GetCellDimension)
    .function("SetOutputPrecision", &vtkCellTypeSource::SetOutputPrecision)
    .function("GetOutputPrecisionMinValue", &vtkCellTypeSource::GetOutputPrecisionMinValue)
    .function("GetOutputPrecisionMaxValue", &vtkCellTypeSource::GetOutputPrecisionMaxValue)
    .function("GetOutputPrecision", &vtkCellTypeSource::GetOutputPrecision)
    .function("SetBlocksDimensions", emscripten::select_overload<void(vtkCellTypeSource&, std::uintptr_t)>([](vtkCellTypeSource& self, std::uintptr_t arg_0) -> void { return self.SetBlocksDimensions(reinterpret_cast<int*>(arg_0 * sizeof(int))); }))
    .function("SetBlocksDimensions", emscripten::select_overload<void(vtkCellTypeSource&, int, int, int)>([](vtkCellTypeSource& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetBlocksDimensions( arg_0, arg_1, arg_2); }));
}
