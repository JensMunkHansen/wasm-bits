// JavaScript wrapper for vtkURI with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkURIEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkURI.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkURI.h"


EMSCRIPTEN_BINDINGS(vtkURIComponent_class) {
  emscripten::class_<vtkURIComponent>("vtkURIComponent")
    .smart_ptr<std::shared_ptr<vtkURIComponent>>("std::shared_ptr<vtkURIComponent>")
    .constructor(&std::make_shared<vtkURIComponent>)
    .function("GetValue", &vtkURIComponent::GetValue)
    .function("IsDefined", &vtkURIComponent::IsDefined);
}
template<> void emscripten::internal::raw_destructor<vtkURI>(vtkURI * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkURI_class) {
  emscripten::class_<vtkURI, emscripten::base<vtkObject>>("vtkURI")
    .smart_ptr<vtkSmartPointer<vtkURI>>("vtkSmartPointer<vtkURI>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkURI>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkURI::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkURI& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkURI::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkURI::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkURI::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkURI& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("PercentEncode", emscripten::select_overload<std::string( const std::string&)>([]( const std::string& arg_0) -> std::string { return vtkURI::PercentEncode( arg_0); }))
    .class_function("PercentEncode", emscripten::select_overload<std::string( const std::string &, std::size_t)>([]( const std::string & arg_0, std::size_t arg_1) -> std::string { return vtkURI::PercentEncode( arg_0.c_str(), arg_1); }))
    .class_function("PercentDecode", emscripten::select_overload<std::string( const std::string&)>([]( const std::string& arg_0) -> std::string { return vtkURI::PercentDecode( arg_0); }))
    .class_function("PercentDecode", emscripten::select_overload<std::string( const std::string &, std::size_t)>([]( const std::string & arg_0, std::size_t arg_1) -> std::string { return vtkURI::PercentDecode( arg_0.c_str(), arg_1); }))
    .class_function("Clone", emscripten::select_overload<vtkSmartPointer<vtkURI>( vtkURI*)>([]( vtkURI* arg_0) -> vtkSmartPointer<vtkURI> { return vtkURI::Clone( arg_0); }), emscripten::allow_raw_pointers())
    .function("Clone", emscripten::select_overload<vtkSmartPointer<vtkURI>(vtkURI&)>([](vtkURI& self) -> vtkSmartPointer<vtkURI> { return self.Clone(); }))
    .class_function("Parse", emscripten::select_overload<vtkSmartPointer<vtkURI>( const std::string&)>([]( const std::string& arg_0) -> vtkSmartPointer<vtkURI> { return vtkURI::Parse( arg_0); }))
    .class_function("Parse", emscripten::select_overload<vtkSmartPointer<vtkURI>( const std::string &, std::size_t)>([]( const std::string & arg_0, std::size_t arg_1) -> vtkSmartPointer<vtkURI> { return vtkURI::Parse( arg_0.c_str(), arg_1); }))
    .class_function("Resolve", &vtkURI::Resolve, emscripten::allow_raw_pointers())
    .function("GetScheme", &vtkURI::GetScheme)
    .function("GetAuthority", &vtkURI::GetAuthority)
    .function("GetPath", &vtkURI::GetPath)
    .function("GetQuery", &vtkURI::GetQuery)
    .function("GetFragment", &vtkURI::GetFragment)
    .function("IsReference", &vtkURI::IsReference)
    .function("IsRelative", &vtkURI::IsRelative)
    .function("IsAbsolute", &vtkURI::IsAbsolute)
    .function("IsFull", &vtkURI::IsFull)
    .function("IsSameDocRef", &vtkURI::IsSameDocRef)
    .function("IsEmpty", &vtkURI::IsEmpty)
    .function("ToString", &vtkURI::ToString);
}
