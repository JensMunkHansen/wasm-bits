// JavaScript wrapper for vtkURILoader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkURILoaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkURILoader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkURI.h"
#include "vtkSmartPointer.h"
#include "vtkURILoader.h"

template<> void emscripten::internal::raw_destructor<vtkURILoader>(vtkURILoader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkURILoader_class) {
  emscripten::class_<vtkURILoader, emscripten::base<vtkObject>>("vtkURILoader")
    .smart_ptr<vtkSmartPointer<vtkURILoader>>("vtkSmartPointer<vtkURILoader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkURILoader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkURILoader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkURILoader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkURILoader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkURILoader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkURILoader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkURILoader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetBaseURI", emscripten::select_overload<bool(vtkURILoader&, const std::string&)>([](vtkURILoader& self, const std::string& arg_0) -> bool { return self.SetBaseURI( arg_0); }))
    .function("SetBaseURI", emscripten::select_overload<bool(vtkURILoader&, vtkURI*)>([](vtkURILoader& self, vtkURI* arg_0) -> bool { return self.SetBaseURI( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetBaseURI", &vtkURILoader::GetBaseURI, emscripten::allow_raw_pointers())
    .function("HasBaseURI", &vtkURILoader::HasBaseURI)
    .function("SetBaseFileName", &vtkURILoader::SetBaseFileName)
    .function("SetBaseDirectory", &vtkURILoader::SetBaseDirectory)
    .function("Resolve", &vtkURILoader::Resolve, emscripten::allow_raw_pointers())
    .function("Load", emscripten::select_overload<vtkSmartPointer<vtkResourceStream>(vtkURILoader&, const std::string&)>([](vtkURILoader& self, const std::string& arg_0) -> vtkSmartPointer<vtkResourceStream> { return self.Load( arg_0); }))
    .function("Load", emscripten::select_overload<vtkSmartPointer<vtkResourceStream>(vtkURILoader&, vtkURI*)>([](vtkURILoader& self, vtkURI* arg_0) -> vtkSmartPointer<vtkResourceStream> { return self.Load( arg_0); }), emscripten::allow_raw_pointers())
    .function("Load", emscripten::select_overload<vtkSmartPointer<vtkResourceStream>(vtkURILoader&, const std::string &, std::size_t)>([](vtkURILoader& self, const std::string & arg_0, std::size_t arg_1) -> vtkSmartPointer<vtkResourceStream> { return self.Load( arg_0.c_str(), arg_1); }))
    .function("LoadResolved", &vtkURILoader::LoadResolved, emscripten::allow_raw_pointers());
}
