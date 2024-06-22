// JavaScript wrapper for vtkTransformToGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkTransformToGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkTransformToGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractTransform.h"
#include "vtkImageData.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkTransformToGrid.h"

template<> void emscripten::internal::raw_destructor<vtkTransformToGrid>(vtkTransformToGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransformToGrid_class) {
  emscripten::class_<vtkTransformToGrid, emscripten::base<vtkAlgorithm>>("vtkTransformToGrid")
    .smart_ptr<vtkSmartPointer<vtkTransformToGrid>>("vtkSmartPointer<vtkTransformToGrid>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTransformToGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransformToGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransformToGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransformToGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransformToGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransformToGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransformToGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInput", &vtkTransformToGrid::SetInput, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkTransformToGrid::GetInput, emscripten::allow_raw_pointers())
    .function("SetGridExtent", emscripten::select_overload<void(vtkTransformToGrid&, int, int, int, int, int, int)>([](vtkTransformToGrid& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetGridExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetGridOrigin", emscripten::select_overload<void(vtkTransformToGrid&, double, double, double)>([](vtkTransformToGrid& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetGridOrigin( arg_0, arg_1, arg_2); }))
    .function("SetGridSpacing", emscripten::select_overload<void(vtkTransformToGrid&, double, double, double)>([](vtkTransformToGrid& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetGridSpacing( arg_0, arg_1, arg_2); }))
    .function("SetGridScalarType", &vtkTransformToGrid::SetGridScalarType)
    .function("GetGridScalarType", &vtkTransformToGrid::GetGridScalarType)
    .function("SetGridScalarTypeToDouble", &vtkTransformToGrid::SetGridScalarTypeToDouble)
    .function("SetGridScalarTypeToFloat", &vtkTransformToGrid::SetGridScalarTypeToFloat)
    .function("SetGridScalarTypeToShort", &vtkTransformToGrid::SetGridScalarTypeToShort)
    .function("SetGridScalarTypeToUnsignedShort", &vtkTransformToGrid::SetGridScalarTypeToUnsignedShort)
    .function("SetGridScalarTypeToUnsignedChar", &vtkTransformToGrid::SetGridScalarTypeToUnsignedChar)
    .function("SetGridScalarTypeToChar", &vtkTransformToGrid::SetGridScalarTypeToChar)
    .function("GetDisplacementScale", &vtkTransformToGrid::GetDisplacementScale)
    .function("GetDisplacementShift", &vtkTransformToGrid::GetDisplacementShift)
    .function("GetOutput", &vtkTransformToGrid::GetOutput, emscripten::allow_raw_pointers());
}
