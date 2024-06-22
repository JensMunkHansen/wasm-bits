// JavaScript wrapper for vtkVideoSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOVideo.js/vtkIOVideo.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOVideo.js/vtkVideoSourceEmbinding.cxx \
 /home/jmh/github/vtk/IO/Video/vtkVideoSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVideoSource.h"

template<> void emscripten::internal::raw_destructor<vtkVideoSource>(vtkVideoSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVideoSource_class) {
  emscripten::class_<vtkVideoSource, emscripten::base<vtkImageAlgorithm>>("vtkVideoSource")
    .smart_ptr<vtkSmartPointer<vtkVideoSource>>("vtkSmartPointer<vtkVideoSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVideoSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVideoSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVideoSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVideoSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVideoSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVideoSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVideoSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Record", &vtkVideoSource::Record)
    .function("Play", &vtkVideoSource::Play)
    .function("Stop", &vtkVideoSource::Stop)
    .function("Rewind", &vtkVideoSource::Rewind)
    .function("FastForward", &vtkVideoSource::FastForward)
    .function("Seek", &vtkVideoSource::Seek)
    .function("Grab", &vtkVideoSource::Grab)
    .function("GetRecording", &vtkVideoSource::GetRecording)
    .function("GetPlaying", &vtkVideoSource::GetPlaying)
    .function("SetFrameSize", emscripten::select_overload<void(vtkVideoSource&, int, int, int)>([](vtkVideoSource& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetFrameSize( arg_0, arg_1, arg_2); }))
    .function("SetFrameRate", &vtkVideoSource::SetFrameRate)
    .function("GetFrameRate", &vtkVideoSource::GetFrameRate)
    .function("SetOutputFormat", &vtkVideoSource::SetOutputFormat)
    .function("SetOutputFormatToLuminance", &vtkVideoSource::SetOutputFormatToLuminance)
    .function("SetOutputFormatToRGB", &vtkVideoSource::SetOutputFormatToRGB)
    .function("SetOutputFormatToRGBA", &vtkVideoSource::SetOutputFormatToRGBA)
    .function("GetOutputFormat", &vtkVideoSource::GetOutputFormat)
    .function("SetFrameBufferSize", &vtkVideoSource::SetFrameBufferSize)
    .function("GetFrameBufferSize", &vtkVideoSource::GetFrameBufferSize)
    .function("SetNumberOfOutputFrames", &vtkVideoSource::SetNumberOfOutputFrames)
    .function("GetNumberOfOutputFrames", &vtkVideoSource::GetNumberOfOutputFrames)
    .function("AutoAdvanceOn", &vtkVideoSource::AutoAdvanceOn)
    .function("AutoAdvanceOff", &vtkVideoSource::AutoAdvanceOff)
    .function("SetAutoAdvance", &vtkVideoSource::SetAutoAdvance)
    .function("GetAutoAdvance", &vtkVideoSource::GetAutoAdvance)
    .function("SetClipRegion", emscripten::select_overload<void(vtkVideoSource&, int, int, int, int, int, int)>([](vtkVideoSource& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetClipRegion( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetOutputWholeExtent", emscripten::select_overload<void(vtkVideoSource&, int, int, int, int, int, int)>([](vtkVideoSource& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetOutputWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetDataSpacing", emscripten::select_overload<void(vtkVideoSource&, double, double, double)>([](vtkVideoSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDataSpacing( arg_0, arg_1, arg_2); }))
    .function("SetDataOrigin", emscripten::select_overload<void(vtkVideoSource&, double, double, double)>([](vtkVideoSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDataOrigin( arg_0, arg_1, arg_2); }))
    .function("SetOpacity", &vtkVideoSource::SetOpacity)
    .function("GetOpacity", &vtkVideoSource::GetOpacity)
    .function("GetFrameCount", &vtkVideoSource::GetFrameCount)
    .function("SetFrameCount", &vtkVideoSource::SetFrameCount)
    .function("GetFrameIndex", &vtkVideoSource::GetFrameIndex)
    .function("GetFrameTimeStamp", emscripten::select_overload<double(vtkVideoSource&, int)>([](vtkVideoSource& self, int arg_0) -> double { return self.GetFrameTimeStamp( arg_0); }))
    .function("GetFrameTimeStamp", emscripten::select_overload<double(vtkVideoSource&)>([](vtkVideoSource& self) -> double { return self.GetFrameTimeStamp(); }))
    .function("Initialize", &vtkVideoSource::Initialize)
    .function("GetInitialized", &vtkVideoSource::GetInitialized)
    .function("ReleaseSystemResources", &vtkVideoSource::ReleaseSystemResources)
    .function("InternalGrab", &vtkVideoSource::InternalGrab)
    .function("SetStartTimeStamp", &vtkVideoSource::SetStartTimeStamp)
    .function("GetStartTimeStamp", &vtkVideoSource::GetStartTimeStamp);
}
