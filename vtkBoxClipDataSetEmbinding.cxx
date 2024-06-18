// JavaScript wrapper for vtkBoxClipDataSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkBoxClipDataSetEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkBoxClipDataSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGrid.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkDataSetAttributes.h"
#include "vtkCellArray.h"
#include "vtkPoints.h"
#include "vtkGenericCell.h"
#include "vtkPointData.h"
#include "vtkCellData.h"
#include "vtkBoxClipDataSet.h"

template<> void emscripten::internal::raw_destructor<vtkBoxClipDataSet>(vtkBoxClipDataSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBoxClipDataSet_class) {
  emscripten::class_<vtkBoxClipDataSet, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkBoxClipDataSet")
    .smart_ptr<vtkSmartPointer<vtkBoxClipDataSet>>("vtkSmartPointer<vtkBoxClipDataSet>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBoxClipDataSet>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBoxClipDataSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBoxClipDataSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBoxClipDataSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBoxClipDataSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBoxClipDataSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBoxClipDataSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetBoxClip", emscripten::select_overload<void(vtkBoxClipDataSet&, double, double, double, double, double, double)>([](vtkBoxClipDataSet& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBoxClip( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetBoxClip", emscripten::select_overload<void(vtkBoxClipDataSet&, std::uintptr_t, std::uintptr_t, std::uintptr_t, std::uintptr_t, std::uintptr_t, std::uintptr_t, std::uintptr_t, std::uintptr_t, std::uintptr_t, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([](vtkBoxClipDataSet& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5, std::uintptr_t arg_6, std::uintptr_t arg_7, std::uintptr_t arg_8, std::uintptr_t arg_9, std::uintptr_t arg_10, std::uintptr_t arg_11) -> void { return self.SetBoxClip(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<double*>(arg_3 * sizeof(double)),reinterpret_cast<double*>(arg_4 * sizeof(double)),reinterpret_cast<double*>(arg_5 * sizeof(double)),reinterpret_cast<double*>(arg_6 * sizeof(double)),reinterpret_cast<double*>(arg_7 * sizeof(double)),reinterpret_cast<double*>(arg_8 * sizeof(double)),reinterpret_cast<double*>(arg_9 * sizeof(double)),reinterpret_cast<double*>(arg_10 * sizeof(double)),reinterpret_cast<double*>(arg_11 * sizeof(double))); }))
    .function("SetGenerateClipScalars", &vtkBoxClipDataSet::SetGenerateClipScalars)
    .function("GetGenerateClipScalars", &vtkBoxClipDataSet::GetGenerateClipScalars)
    .function("GenerateClipScalarsOn", &vtkBoxClipDataSet::GenerateClipScalarsOn)
    .function("GenerateClipScalarsOff", &vtkBoxClipDataSet::GenerateClipScalarsOff)
    .function("SetGenerateClippedOutput", &vtkBoxClipDataSet::SetGenerateClippedOutput)
    .function("GetGenerateClippedOutput", &vtkBoxClipDataSet::GetGenerateClippedOutput)
    .function("GenerateClippedOutputOn", &vtkBoxClipDataSet::GenerateClippedOutputOn)
    .function("GenerateClippedOutputOff", &vtkBoxClipDataSet::GenerateClippedOutputOff)
    .function("GetClippedOutput", &vtkBoxClipDataSet::GetClippedOutput, emscripten::allow_raw_pointers())
    .function("GetNumberOfOutputs", &vtkBoxClipDataSet::GetNumberOfOutputs)
    .function("SetLocator", &vtkBoxClipDataSet::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkBoxClipDataSet::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkBoxClipDataSet::CreateDefaultLocator)
    .function("GetMTime", &vtkBoxClipDataSet::GetMTime)
    .function("GetOrientation", &vtkBoxClipDataSet::GetOrientation)
    .function("SetOrientation", &vtkBoxClipDataSet::SetOrientation)
    .class_function("InterpolateEdge", &vtkBoxClipDataSet::InterpolateEdge, emscripten::allow_raw_pointers())
    .function("MinEdgeF", emscripten::optional_override([](vtkBoxClipDataSet& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> void {  return self.MinEdgeF(reinterpret_cast<unsigned int*>(arg_0 * sizeof(unsigned int)),reinterpret_cast<int*>(arg_1 * sizeof(int)),reinterpret_cast<unsigned int*>(arg_2 * sizeof(unsigned int)));}))
    .function("PyramidToTetra", emscripten::optional_override([](vtkBoxClipDataSet& self, std::uintptr_t arg_0, std::uintptr_t arg_1, vtkCellArray* arg_2) -> void {  return self.PyramidToTetra(reinterpret_cast<int*>(arg_0 * sizeof(int)),reinterpret_cast<int*>(arg_1 * sizeof(int)), arg_2);}), emscripten::allow_raw_pointers())
    .function("WedgeToTetra", emscripten::optional_override([](vtkBoxClipDataSet& self, std::uintptr_t arg_0, std::uintptr_t arg_1, vtkCellArray* arg_2) -> void {  return self.WedgeToTetra(reinterpret_cast<int*>(arg_0 * sizeof(int)),reinterpret_cast<int*>(arg_1 * sizeof(int)), arg_2);}), emscripten::allow_raw_pointers())
    .function("CellGrid", emscripten::optional_override([](vtkBoxClipDataSet& self, int arg_0, int arg_1, std::uintptr_t arg_2, vtkCellArray* arg_3) -> void {  return self.CellGrid( arg_0, arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int)), arg_3);}), emscripten::allow_raw_pointers())
    .function("CreateTetra", emscripten::optional_override([](vtkBoxClipDataSet& self, int arg_0, std::uintptr_t arg_1, vtkCellArray* arg_2) -> void {  return self.CreateTetra( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)), arg_2);}), emscripten::allow_raw_pointers())
    .function("ClipBox", &vtkBoxClipDataSet::ClipBox, emscripten::allow_raw_pointers())
    .function("ClipHexahedron", &vtkBoxClipDataSet::ClipHexahedron, emscripten::allow_raw_pointers())
    .function("ClipBox2D", &vtkBoxClipDataSet::ClipBox2D, emscripten::allow_raw_pointers())
    .function("ClipHexahedron2D", &vtkBoxClipDataSet::ClipHexahedron2D, emscripten::allow_raw_pointers())
    .function("ClipBox1D", &vtkBoxClipDataSet::ClipBox1D, emscripten::allow_raw_pointers())
    .function("ClipHexahedron1D", &vtkBoxClipDataSet::ClipHexahedron1D, emscripten::allow_raw_pointers())
    .function("ClipBox0D", &vtkBoxClipDataSet::ClipBox0D, emscripten::allow_raw_pointers())
    .function("ClipHexahedron0D", &vtkBoxClipDataSet::ClipHexahedron0D, emscripten::allow_raw_pointers());
}
