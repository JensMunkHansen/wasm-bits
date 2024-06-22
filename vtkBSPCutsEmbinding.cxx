// JavaScript wrapper for vtkBSPCuts with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkBSPCutsEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkBSPCuts.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkKdNode.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkDataObject.h"
#include "vtkBSPCuts.h"

template<> void emscripten::internal::raw_destructor<vtkBSPCuts>(vtkBSPCuts * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBSPCuts_class) {
  emscripten::class_<vtkBSPCuts, emscripten::base<vtkDataObject>>("vtkBSPCuts")
    .smart_ptr<vtkSmartPointer<vtkBSPCuts>>("vtkSmartPointer<vtkBSPCuts>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBSPCuts>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBSPCuts::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBSPCuts& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBSPCuts::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBSPCuts::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBSPCuts::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBSPCuts& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkBSPCuts::GetDataObjectType)
    .function("CreateCuts", emscripten::select_overload<void(vtkBSPCuts&, std::uintptr_t, int, std::uintptr_t, std::uintptr_t, std::uintptr_t, std::uintptr_t, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([](vtkBSPCuts& self, std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5, std::uintptr_t arg_6, std::uintptr_t arg_7, std::uintptr_t arg_8) -> void { return self.CreateCuts(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int)),reinterpret_cast<double*>(arg_3 * sizeof(double)),reinterpret_cast<int*>(arg_4 * sizeof(int)),reinterpret_cast<int*>(arg_5 * sizeof(int)),reinterpret_cast<double*>(arg_6 * sizeof(double)),reinterpret_cast<double*>(arg_7 * sizeof(double)),reinterpret_cast<int*>(arg_8 * sizeof(int))); }))
    .function("CreateCuts", emscripten::select_overload<void(vtkBSPCuts&, vtkKdNode*)>([](vtkBSPCuts& self, vtkKdNode* arg_0) -> void { return self.CreateCuts( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetKdNodeTree", &vtkBSPCuts::GetKdNodeTree, emscripten::allow_raw_pointers())
    .function("GetNumberOfCuts", &vtkBSPCuts::GetNumberOfCuts)
    .function("GetArrays", emscripten::optional_override([](vtkBSPCuts& self, int arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5, std::uintptr_t arg_6, std::uintptr_t arg_7) -> int {  return self.GetArrays( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)),reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<int*>(arg_3 * sizeof(int)),reinterpret_cast<int*>(arg_4 * sizeof(int)),reinterpret_cast<double*>(arg_5 * sizeof(double)),reinterpret_cast<double*>(arg_6 * sizeof(double)),reinterpret_cast<int*>(arg_7 * sizeof(int)));}))
    .function("Equals", &vtkBSPCuts::Equals, emscripten::allow_raw_pointers())
    .function("PrintTree", &vtkBSPCuts::PrintTree)
    .function("PrintArrays", &vtkBSPCuts::PrintArrays)
    .class_function("GetData", emscripten::select_overload<vtkBSPCuts*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkBSPCuts* { return vtkBSPCuts::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkBSPCuts*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkBSPCuts* { return vtkBSPCuts::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Initialize", &vtkBSPCuts::Initialize)
    .function("ShallowCopy", &vtkBSPCuts::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkBSPCuts::DeepCopy, emscripten::allow_raw_pointers());
}
