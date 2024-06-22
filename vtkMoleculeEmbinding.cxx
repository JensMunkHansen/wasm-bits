// JavaScript wrapper for vtkMolecule with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkMoleculeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkMolecule.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAtom.h"
#include "vtkVector.h"
#include "vtkBond.h"
#include "vtkPoints.h"
#include "vtkUnsignedShortArray.h"
#include "vtkAbstractElectronicData.h"
#include "vtkGraph.h"
#include "vtkDataObject.h"
#include "vtkPlane.h"
#include "vtkMatrix3x3.h"
#include "vtkUnsignedCharArray.h"
#include "vtkDataArray.h"
#include "vtkDataSetAttributes.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkMolecule.h"

template<> void emscripten::internal::raw_destructor<vtkMolecule>(vtkMolecule * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMolecule_class) {
  emscripten::class_<vtkMolecule, emscripten::base<vtkUndirectedGraph>>("vtkMolecule")
    .smart_ptr<vtkSmartPointer<vtkMolecule>>("vtkSmartPointer<vtkMolecule>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMolecule>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMolecule::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMolecule& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMolecule::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMolecule::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMolecule::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMolecule& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", emscripten::select_overload<void(vtkMolecule&)>([](vtkMolecule& self) -> void { return self.Initialize(); }))
    .function("Initialize", emscripten::select_overload<int(vtkMolecule&, vtkPoints*, vtkDataArray*, vtkDataSetAttributes*)>([](vtkMolecule& self, vtkPoints* arg_0, vtkDataArray* arg_1, vtkDataSetAttributes* arg_2) -> int { return self.Initialize( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<int(vtkMolecule&, vtkPoints*, vtkDataSetAttributes*)>([](vtkMolecule& self, vtkPoints* arg_0, vtkDataSetAttributes* arg_1) -> int { return self.Initialize( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Initialize", emscripten::select_overload<int(vtkMolecule&, vtkMolecule*)>([](vtkMolecule& self, vtkMolecule* arg_0) -> int { return self.Initialize( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetDataObjectType", &vtkMolecule::GetDataObjectType)
    .function("AppendAtom", emscripten::select_overload<vtkAtom(vtkMolecule&)>([](vtkMolecule& self) -> vtkAtom { return self.AppendAtom(); }))
    .function("AppendAtom", emscripten::select_overload<vtkAtom(vtkMolecule&, unsigned short, double, double, double)>([](vtkMolecule& self, unsigned short arg_0, double arg_1, double arg_2, double arg_3) -> vtkAtom { return self.AppendAtom( arg_0, arg_1, arg_2, arg_3); }))
    .function("AppendAtom", emscripten::select_overload<vtkAtom(vtkMolecule&, unsigned short, const vtkVector3f&)>([](vtkMolecule& self, unsigned short arg_0, const vtkVector3f& arg_1) -> vtkAtom { return self.AppendAtom( arg_0, arg_1); }))
    .function("GetAtom", &vtkMolecule::GetAtom)
    .function("GetNumberOfAtoms", &vtkMolecule::GetNumberOfAtoms)
    .function("AppendBond", emscripten::select_overload<vtkBond(vtkMolecule&, int, int, unsigned short)>([](vtkMolecule& self, int arg_0, int arg_1, unsigned short arg_2) -> vtkBond { return self.AppendBond( arg_0, arg_1, arg_2); }))
    .function("AppendBond", emscripten::select_overload<vtkBond(vtkMolecule&, const vtkAtom&, const vtkAtom&, unsigned short)>([](vtkMolecule& self, const vtkAtom& arg_0, const vtkAtom& arg_1, unsigned short arg_2) -> vtkBond { return self.AppendBond( arg_0, arg_1, arg_2); }))
    .function("GetBond", &vtkMolecule::GetBond)
    .function("GetNumberOfBonds", &vtkMolecule::GetNumberOfBonds)
    .function("GetAtomAtomicNumber", &vtkMolecule::GetAtomAtomicNumber)
    .function("SetAtomAtomicNumber", &vtkMolecule::SetAtomAtomicNumber)
    .function("SetAtomPosition", emscripten::select_overload<void(vtkMolecule&, int, const vtkVector3f&)>([](vtkMolecule& self, int arg_0, const vtkVector3f& arg_1) -> void { return self.SetAtomPosition( arg_0, arg_1); }))
    .function("SetAtomPosition", emscripten::select_overload<void(vtkMolecule&, int, double, double, double)>([](vtkMolecule& self, int arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetAtomPosition( arg_0, arg_1, arg_2, arg_3); }))
    .function("GetAtomPosition", emscripten::select_overload<vtkVector3f(vtkMolecule&, int)>([](vtkMolecule& self, int arg_0) -> vtkVector3f { return self.GetAtomPosition( arg_0); }))
    .function("SetBondOrder", &vtkMolecule::SetBondOrder)
    .function("GetBondOrder", &vtkMolecule::GetBondOrder)
    .function("GetBondLength", &vtkMolecule::GetBondLength)
    .function("GetAtomicPositionArray", &vtkMolecule::GetAtomicPositionArray, emscripten::allow_raw_pointers())
    .function("GetAtomicNumberArray", &vtkMolecule::GetAtomicNumberArray, emscripten::allow_raw_pointers())
    .function("GetBondOrdersArray", &vtkMolecule::GetBondOrdersArray, emscripten::allow_raw_pointers())
    .function("GetElectronicData", &vtkMolecule::GetElectronicData, emscripten::allow_raw_pointers())
    .function("SetElectronicData", &vtkMolecule::SetElectronicData, emscripten::allow_raw_pointers())
    .function("CheckedShallowCopy", &vtkMolecule::CheckedShallowCopy, emscripten::allow_raw_pointers())
    .function("CheckedDeepCopy", &vtkMolecule::CheckedDeepCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkMolecule::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkMolecule::DeepCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopyStructure", &vtkMolecule::ShallowCopyStructure, emscripten::allow_raw_pointers())
    .function("DeepCopyStructure", &vtkMolecule::DeepCopyStructure, emscripten::allow_raw_pointers())
    .function("ShallowCopyAttributes", &vtkMolecule::ShallowCopyAttributes, emscripten::allow_raw_pointers())
    .function("DeepCopyAttributes", &vtkMolecule::DeepCopyAttributes, emscripten::allow_raw_pointers())
    .class_function("GetPlaneFromBond", emscripten::select_overload<bool( const vtkBond&, const vtkVector3f&, vtkPlane*)>([]( const vtkBond& arg_0, const vtkVector3f& arg_1, vtkPlane* arg_2) -> bool { return vtkMolecule::GetPlaneFromBond( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("GetPlaneFromBond", emscripten::select_overload<bool( const vtkAtom&, const vtkAtom&, const vtkVector3f&, vtkPlane*)>([]( const vtkAtom& arg_0, const vtkAtom& arg_1, const vtkVector3f& arg_2, vtkPlane* arg_3) -> bool { return vtkMolecule::GetPlaneFromBond( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("HasLattice", &vtkMolecule::HasLattice)
    .function("ClearLattice", &vtkMolecule::ClearLattice)
    .function("SetLattice", emscripten::select_overload<void(vtkMolecule&, vtkMatrix3x3*)>([](vtkMolecule& self, vtkMatrix3x3* arg_0) -> void { return self.SetLattice( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetLattice", emscripten::select_overload<void(vtkMolecule&, const vtkVector3d&, const vtkVector3d&, const vtkVector3d&)>([](vtkMolecule& self, const vtkVector3d& arg_0, const vtkVector3d& arg_1, const vtkVector3d& arg_2) -> void { return self.SetLattice( arg_0, arg_1, arg_2); }))
    .function("GetLattice", emscripten::select_overload<vtkMatrix3x3*(vtkMolecule&)>([](vtkMolecule& self) -> vtkMatrix3x3* { return self.GetLattice(); }), emscripten::allow_raw_pointers())
    .function("GetLatticeOrigin", &vtkMolecule::GetLatticeOrigin)
    .function("SetLatticeOrigin", &vtkMolecule::SetLatticeOrigin)
    .function("GetAtomGhostArray", &vtkMolecule::GetAtomGhostArray, emscripten::allow_raw_pointers())
    .function("AllocateAtomGhostArray", &vtkMolecule::AllocateAtomGhostArray)
    .function("GetBondGhostArray", &vtkMolecule::GetBondGhostArray, emscripten::allow_raw_pointers())
    .function("AllocateBondGhostArray", &vtkMolecule::AllocateBondGhostArray)
    .class_function("GetData", emscripten::select_overload<vtkMolecule*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkMolecule* { return vtkMolecule::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkMolecule*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkMolecule* { return vtkMolecule::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetAtomData", &vtkMolecule::GetAtomData, emscripten::allow_raw_pointers())
    .function("GetBondData", &vtkMolecule::GetBondData, emscripten::allow_raw_pointers())
    .function("GetBondId", &vtkMolecule::GetBondId)
    .function("SetAtomicNumberArrayName", emscripten::optional_override([](vtkMolecule& self, const std::string & arg_0) -> void {  return self.SetAtomicNumberArrayName( arg_0.c_str());}))
    .function("GetAtomicNumberArrayName", emscripten::optional_override([](vtkMolecule& self) -> std::string {  return self.GetAtomicNumberArrayName();}))
    .function("SetBondOrdersArrayName", emscripten::optional_override([](vtkMolecule& self, const std::string & arg_0) -> void {  return self.SetBondOrdersArrayName( arg_0.c_str());}))
    .function("GetBondOrdersArrayName", emscripten::optional_override([](vtkMolecule& self) -> std::string {  return self.GetBondOrdersArrayName();}))
    .function("GetActualMemorySize", &vtkMolecule::GetActualMemorySize);
}
