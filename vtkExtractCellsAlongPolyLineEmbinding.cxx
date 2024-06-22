// JavaScript wrapper for vtkExtractCellsAlongPolyLine with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkExtractCellsAlongPolyLineEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkExtractCellsAlongPolyLine.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkExtractCellsAlongPolyLine.h"

template<> void emscripten::internal::raw_destructor<vtkExtractCellsAlongPolyLine>(vtkExtractCellsAlongPolyLine * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractCellsAlongPolyLine_class) {
  emscripten::class_<vtkExtractCellsAlongPolyLine, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkExtractCellsAlongPolyLine")
    .smart_ptr<vtkSmartPointer<vtkExtractCellsAlongPolyLine>>("vtkSmartPointer<vtkExtractCellsAlongPolyLine>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractCellsAlongPolyLine>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractCellsAlongPolyLine::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractCellsAlongPolyLine& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractCellsAlongPolyLine::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractCellsAlongPolyLine::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractCellsAlongPolyLine::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractCellsAlongPolyLine& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceConnection", &vtkExtractCellsAlongPolyLine::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("SetOutputPointsPrecision", &vtkExtractCellsAlongPolyLine::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkExtractCellsAlongPolyLine::GetOutputPointsPrecision);
}
