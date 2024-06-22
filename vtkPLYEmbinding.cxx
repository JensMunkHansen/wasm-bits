// JavaScript wrapper for vtkPLY with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOPLY.js/vtkIOPLY.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOPLY.js/vtkPLYEmbinding.cxx \
 /home/jmh/github/vtk/IO/PLY/vtkPLY.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkResourceStream.h"
#include "vtkPLY.h"


EMSCRIPTEN_BINDINGS(vtkPLY_class) {
  emscripten::class_<vtkPLY>("vtkPLY")
    .class_function("equal_strings", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> bool {  return vtkPLY::equal_strings( arg_0.c_str(), arg_1.c_str());}))
    .class_function("store_item", emscripten::optional_override([]( std::uintptr_t arg_0, int arg_1, int arg_2, unsigned int arg_3, double arg_4) -> void {  return vtkPLY::store_item(reinterpret_cast<char*>(arg_0 * sizeof(char)), arg_1, arg_2, arg_3, arg_4);}))
    .class_function("get_stored_item", emscripten::optional_override([]( std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4) -> void {  return vtkPLY::get_stored_item(reinterpret_cast<void*>(arg_0), arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int)),reinterpret_cast<unsigned int*>(arg_3 * sizeof(unsigned int)),reinterpret_cast<double*>(arg_4 * sizeof(double)));}))
    .class_function("get_item_value", emscripten::optional_override([]( const std::string & arg_0, int arg_1) -> double {  return vtkPLY::get_item_value( arg_0.c_str(), arg_1);}))
    .class_function("get_ascii_item", emscripten::optional_override([]( vtkResourceParser* arg_0, int arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4) -> void {  return vtkPLY::get_ascii_item( arg_0, arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int)),reinterpret_cast<unsigned int*>(arg_3 * sizeof(unsigned int)),reinterpret_cast<double*>(arg_4 * sizeof(double)));}), emscripten::allow_raw_pointers())
    .class_function("my_alloc", emscripten::optional_override([]( size_t arg_0, int arg_1, const std::string & arg_2) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkPLY::my_alloc( arg_0, arg_1, arg_2.c_str()));}))
    .class_function("get_prop_type", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPLY::get_prop_type( arg_0.c_str());}));
}
