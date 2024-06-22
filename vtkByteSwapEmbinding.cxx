// JavaScript wrapper for vtkByteSwap with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkByteSwapEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkByteSwap.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkByteSwap.h"

template<> void emscripten::internal::raw_destructor<vtkByteSwap>(vtkByteSwap * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkByteSwap_class) {
  emscripten::class_<vtkByteSwap, emscripten::base<vtkObject>>("vtkByteSwap")
    .smart_ptr<vtkSmartPointer<vtkByteSwap>>("vtkSmartPointer<vtkByteSwap>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkByteSwap>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkByteSwap::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkByteSwap& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkByteSwap::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkByteSwap::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkByteSwap::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkByteSwap& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("SwapLE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapLE(reinterpret_cast<float*>(arg_0 * sizeof(float))); }))
    .class_function("SwapLE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapLE(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .class_function("SwapLE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapLE(reinterpret_cast<char*>(arg_0 * sizeof(char))); }))
    .class_function("SwapLE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapLE(reinterpret_cast<short*>(arg_0 * sizeof(short))); }))
    .class_function("SwapLE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapLE(reinterpret_cast<int*>(arg_0 * sizeof(int))); }))
    .class_function("SwapLE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapLE(reinterpret_cast<long*>(arg_0 * sizeof(long))); }))
    .class_function("SwapLE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapLE(reinterpret_cast<long long*>(arg_0 * sizeof(long long))); }))
    .class_function("SwapLE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapLE(reinterpret_cast<signed char*>(arg_0 * sizeof(signed char))); }))
    .class_function("SwapLE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapLE(reinterpret_cast<unsigned char*>(arg_0 * sizeof(unsigned char))); }))
    .class_function("SwapLE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapLE(reinterpret_cast<unsigned short*>(arg_0 * sizeof(unsigned short))); }))
    .class_function("SwapLE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapLE(reinterpret_cast<unsigned int*>(arg_0 * sizeof(unsigned int))); }))
    .class_function("SwapLE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapLE(reinterpret_cast<unsigned long*>(arg_0 * sizeof(unsigned long))); }))
    .class_function("SwapLE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapLE(reinterpret_cast<unsigned long long*>(arg_0 * sizeof(unsigned long long))); }))
    .class_function("SwapBE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapBE(reinterpret_cast<float*>(arg_0 * sizeof(float))); }))
    .class_function("SwapBE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapBE(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .class_function("SwapBE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapBE(reinterpret_cast<char*>(arg_0 * sizeof(char))); }))
    .class_function("SwapBE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapBE(reinterpret_cast<short*>(arg_0 * sizeof(short))); }))
    .class_function("SwapBE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapBE(reinterpret_cast<int*>(arg_0 * sizeof(int))); }))
    .class_function("SwapBE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapBE(reinterpret_cast<long*>(arg_0 * sizeof(long))); }))
    .class_function("SwapBE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapBE(reinterpret_cast<long long*>(arg_0 * sizeof(long long))); }))
    .class_function("SwapBE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapBE(reinterpret_cast<signed char*>(arg_0 * sizeof(signed char))); }))
    .class_function("SwapBE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapBE(reinterpret_cast<unsigned char*>(arg_0 * sizeof(unsigned char))); }))
    .class_function("SwapBE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapBE(reinterpret_cast<unsigned short*>(arg_0 * sizeof(unsigned short))); }))
    .class_function("SwapBE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapBE(reinterpret_cast<unsigned int*>(arg_0 * sizeof(unsigned int))); }))
    .class_function("SwapBE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapBE(reinterpret_cast<unsigned long*>(arg_0 * sizeof(unsigned long))); }))
    .class_function("SwapBE", emscripten::select_overload<void( std::uintptr_t)>([]( std::uintptr_t arg_0) -> void { return vtkByteSwap::SwapBE(reinterpret_cast<unsigned long long*>(arg_0 * sizeof(unsigned long long))); }))
    .class_function("SwapLERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapLERange(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1); }))
    .class_function("SwapLERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapLERange(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1); }))
    .class_function("SwapLERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapLERange(reinterpret_cast<char*>(arg_0 * sizeof(char)), arg_1); }))
    .class_function("SwapLERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapLERange(reinterpret_cast<short*>(arg_0 * sizeof(short)), arg_1); }))
    .class_function("SwapLERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapLERange(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1); }))
    .class_function("SwapLERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapLERange(reinterpret_cast<long*>(arg_0 * sizeof(long)), arg_1); }))
    .class_function("SwapLERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapLERange(reinterpret_cast<long long*>(arg_0 * sizeof(long long)), arg_1); }))
    .class_function("SwapLERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapLERange(reinterpret_cast<signed char*>(arg_0 * sizeof(signed char)), arg_1); }))
    .class_function("SwapLERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapLERange(reinterpret_cast<unsigned char*>(arg_0 * sizeof(unsigned char)), arg_1); }))
    .class_function("SwapLERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapLERange(reinterpret_cast<unsigned short*>(arg_0 * sizeof(unsigned short)), arg_1); }))
    .class_function("SwapLERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapLERange(reinterpret_cast<unsigned int*>(arg_0 * sizeof(unsigned int)), arg_1); }))
    .class_function("SwapLERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapLERange(reinterpret_cast<unsigned long*>(arg_0 * sizeof(unsigned long)), arg_1); }))
    .class_function("SwapLERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapLERange(reinterpret_cast<unsigned long long*>(arg_0 * sizeof(unsigned long long)), arg_1); }))
    .class_function("SwapBERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapBERange(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1); }))
    .class_function("SwapBERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapBERange(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1); }))
    .class_function("SwapBERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapBERange(reinterpret_cast<char*>(arg_0 * sizeof(char)), arg_1); }))
    .class_function("SwapBERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapBERange(reinterpret_cast<short*>(arg_0 * sizeof(short)), arg_1); }))
    .class_function("SwapBERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapBERange(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1); }))
    .class_function("SwapBERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapBERange(reinterpret_cast<long*>(arg_0 * sizeof(long)), arg_1); }))
    .class_function("SwapBERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapBERange(reinterpret_cast<long long*>(arg_0 * sizeof(long long)), arg_1); }))
    .class_function("SwapBERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapBERange(reinterpret_cast<signed char*>(arg_0 * sizeof(signed char)), arg_1); }))
    .class_function("SwapBERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapBERange(reinterpret_cast<unsigned char*>(arg_0 * sizeof(unsigned char)), arg_1); }))
    .class_function("SwapBERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapBERange(reinterpret_cast<unsigned short*>(arg_0 * sizeof(unsigned short)), arg_1); }))
    .class_function("SwapBERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapBERange(reinterpret_cast<unsigned int*>(arg_0 * sizeof(unsigned int)), arg_1); }))
    .class_function("SwapBERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapBERange(reinterpret_cast<unsigned long*>(arg_0 * sizeof(unsigned long)), arg_1); }))
    .class_function("SwapBERange", emscripten::select_overload<void( std::uintptr_t, size_t)>([]( std::uintptr_t arg_0, size_t arg_1) -> void { return vtkByteSwap::SwapBERange(reinterpret_cast<unsigned long long*>(arg_0 * sizeof(unsigned long long)), arg_1); }))
    .class_function("Swap2LE", emscripten::optional_override([]( std::uintptr_t arg_0) -> void {  return vtkByteSwap::Swap2LE(reinterpret_cast<void*>(arg_0));}))
    .class_function("Swap4LE", emscripten::optional_override([]( std::uintptr_t arg_0) -> void {  return vtkByteSwap::Swap4LE(reinterpret_cast<void*>(arg_0));}))
    .class_function("Swap8LE", emscripten::optional_override([]( std::uintptr_t arg_0) -> void {  return vtkByteSwap::Swap8LE(reinterpret_cast<void*>(arg_0));}))
    .class_function("Swap2LERange", emscripten::optional_override([]( std::uintptr_t arg_0, size_t arg_1) -> void {  return vtkByteSwap::Swap2LERange(reinterpret_cast<void*>(arg_0), arg_1);}))
    .class_function("Swap4LERange", emscripten::optional_override([]( std::uintptr_t arg_0, size_t arg_1) -> void {  return vtkByteSwap::Swap4LERange(reinterpret_cast<void*>(arg_0), arg_1);}))
    .class_function("Swap8LERange", emscripten::optional_override([]( std::uintptr_t arg_0, size_t arg_1) -> void {  return vtkByteSwap::Swap8LERange(reinterpret_cast<void*>(arg_0), arg_1);}))
    .class_function("Swap2BE", emscripten::optional_override([]( std::uintptr_t arg_0) -> void {  return vtkByteSwap::Swap2BE(reinterpret_cast<void*>(arg_0));}))
    .class_function("Swap4BE", emscripten::optional_override([]( std::uintptr_t arg_0) -> void {  return vtkByteSwap::Swap4BE(reinterpret_cast<void*>(arg_0));}))
    .class_function("Swap8BE", emscripten::optional_override([]( std::uintptr_t arg_0) -> void {  return vtkByteSwap::Swap8BE(reinterpret_cast<void*>(arg_0));}))
    .class_function("Swap2BERange", emscripten::optional_override([]( std::uintptr_t arg_0, size_t arg_1) -> void {  return vtkByteSwap::Swap2BERange(reinterpret_cast<void*>(arg_0), arg_1);}))
    .class_function("Swap4BERange", emscripten::optional_override([]( std::uintptr_t arg_0, size_t arg_1) -> void {  return vtkByteSwap::Swap4BERange(reinterpret_cast<void*>(arg_0), arg_1);}))
    .class_function("Swap8BERange", emscripten::optional_override([]( std::uintptr_t arg_0, size_t arg_1) -> void {  return vtkByteSwap::Swap8BERange(reinterpret_cast<void*>(arg_0), arg_1);}))
    .class_function("SwapVoidRange", emscripten::optional_override([]( std::uintptr_t arg_0, size_t arg_1, size_t arg_2) -> void {  return vtkByteSwap::SwapVoidRange(reinterpret_cast<void*>(arg_0), arg_1, arg_2);}));
}
