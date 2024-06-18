// JavaScript wrapper for vtkPeriodicTable with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkDomainsChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkPeriodicTableEmbinding.cxx \
 /home/jmh/github/vtk/Domains/Chemistry/vtkPeriodicTable.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBlueObeliskData.h"
#include "vtkStdString.h"
#include "vtkLookupTable.h"
#include "vtkColor.h"
#include "vtkPeriodicTable.h"

template<> void emscripten::internal::raw_destructor<vtkPeriodicTable>(vtkPeriodicTable * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPeriodicTable_class) {
  emscripten::class_<vtkPeriodicTable, emscripten::base<vtkObject>>("vtkPeriodicTable")
    .smart_ptr<vtkSmartPointer<vtkPeriodicTable>>("vtkSmartPointer<vtkPeriodicTable>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPeriodicTable>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPeriodicTable::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPeriodicTable& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPeriodicTable::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPeriodicTable::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPeriodicTable::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPeriodicTable& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetBlueObeliskData", &vtkPeriodicTable::GetBlueObeliskData, emscripten::allow_raw_pointers())
    .function("GetNumberOfElements", &vtkPeriodicTable::GetNumberOfElements)
    .function("GetSymbol", emscripten::optional_override([](vtkPeriodicTable& self, unsigned short arg_0) -> std::string {  return self.GetSymbol( arg_0);}))
    .function("GetElementName", emscripten::optional_override([](vtkPeriodicTable& self, unsigned short arg_0) -> std::string {  return self.GetElementName( arg_0);}))
    .function("GetAtomicNumber", emscripten::select_overload<unsigned short(vtkPeriodicTable&, const vtkStdString&)>([](vtkPeriodicTable& self, const vtkStdString& arg_0) -> unsigned short { return self.GetAtomicNumber( arg_0); }))
    .function("GetAtomicNumber", emscripten::select_overload<unsigned short(vtkPeriodicTable&, const std::string &)>([](vtkPeriodicTable& self, const std::string & arg_0) -> unsigned short { return self.GetAtomicNumber( arg_0.c_str()); }))
    .function("GetCovalentRadius", &vtkPeriodicTable::GetCovalentRadius)
    .function("GetVDWRadius", &vtkPeriodicTable::GetVDWRadius)
    .function("GetMaxVDWRadius", &vtkPeriodicTable::GetMaxVDWRadius)
    .function("GetDefaultLUT", &vtkPeriodicTable::GetDefaultLUT, emscripten::allow_raw_pointers())
    .function("GetDefaultRGBTuple", emscripten::select_overload<vtkColor3f(vtkPeriodicTable&, unsigned short)>([](vtkPeriodicTable& self, unsigned short arg_0) -> vtkColor3f { return self.GetDefaultRGBTuple( arg_0); }));
}
