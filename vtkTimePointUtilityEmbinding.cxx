// JavaScript wrapper for vtkTimePointUtility with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkTimePointUtilityEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkTimePointUtility.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTimePointUtility.h"

template<> void emscripten::internal::raw_destructor<vtkTimePointUtility>(vtkTimePointUtility * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTimePointUtility_class) {
  emscripten::class_<vtkTimePointUtility, emscripten::base<vtkObject>>("vtkTimePointUtility")
    .smart_ptr<vtkSmartPointer<vtkTimePointUtility>>("vtkSmartPointer<vtkTimePointUtility>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTimePointUtility>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTimePointUtility::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTimePointUtility& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTimePointUtility::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTimePointUtility::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTimePointUtility::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTimePointUtility& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("DateToTimePoint", &vtkTimePointUtility::DateToTimePoint)
    .class_function("TimeToTimePoint", &vtkTimePointUtility::TimeToTimePoint)
    .class_function("DateTimeToTimePoint", &vtkTimePointUtility::DateTimeToTimePoint)
    .class_function("GetYear", &vtkTimePointUtility::GetYear)
    .class_function("GetMonth", &vtkTimePointUtility::GetMonth)
    .class_function("GetDay", &vtkTimePointUtility::GetDay)
    .class_function("GetHour", &vtkTimePointUtility::GetHour)
    .class_function("GetMinute", &vtkTimePointUtility::GetMinute)
    .class_function("GetSecond", &vtkTimePointUtility::GetSecond)
    .class_function("GetMillisecond", &vtkTimePointUtility::GetMillisecond)
    .class_function("ISO8601ToTimePoint", emscripten::optional_override([]( const std::string & arg_0, std::uintptr_t arg_1) -> unsigned long long {  return vtkTimePointUtility::ISO8601ToTimePoint( arg_0.c_str(),reinterpret_cast<bool*>(arg_1 * sizeof(bool)));}))
    .class_function("TimePointToISO8601", emscripten::optional_override([]( unsigned long long arg_0, int arg_1) -> std::string {  return vtkTimePointUtility::TimePointToISO8601( arg_0, arg_1);}));
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkTimePointUtility_0_2_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "vtkTimePointUtility_ISO8601_DATETIME_MILLIS", vtkTimePointUtility::ISO8601_DATETIME_MILLIS },
      { "vtkTimePointUtility_ISO8601_DATETIME", vtkTimePointUtility::ISO8601_DATETIME },
      { "vtkTimePointUtility_ISO8601_DATE", vtkTimePointUtility::ISO8601_DATE },
      { "vtkTimePointUtility_ISO8601_TIME_MILLIS", vtkTimePointUtility::ISO8601_TIME_MILLIS },
      { "vtkTimePointUtility_ISO8601_TIME", vtkTimePointUtility::ISO8601_TIME },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
