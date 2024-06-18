#include "vtkCallbackCommand.h"
#include "vtkCommand.h"
#include "vtkEmbindSmartPointerTraits.h"
#include "vtkLogger.h"
#include "vtkNew.h"
#include "vtkObject.h"
#include "vtkObjectBase.h"
#include "vtkObjectFactory.h"
#include "vtkSmartPointer.h"

#include "emscripten/bind.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"

class vtkCallerObject : public vtkObject
{
  public:
    static int objectCount;
    vtkTypeMacro(vtkCallerObject, vtkObject);
    void PrintSelf(ostream &os, vtkIndent indent) override {}
    static vtkCallerObject *New();

    static int GetObjectCount() { return objectCount; }

  void TestInvokeEvent() {
    this->InvokeEvent(vtkCommand::InteractionEvent);
  }
  int  HelpMe() {return 42;}
  
  protected:
    vtkCallerObject()
    {
        vtkLog(INFO, << "Constructed " << vtkLogIdentifier(this));
        objectCount++;
    };
    ~vtkCallerObject()
    {
        vtkLog(INFO, << "Destroyed " << vtkLogIdentifier(this));
        objectCount--;
    }

  private:
    vtkCallerObject(const vtkCallerObject &) = delete;
    void operator=(const vtkCallerObject &) = delete;
};

int vtkCallerObject::objectCount = 0;

vtkStandardNewMacro(vtkCallerObject);


class vtkCalleeObject : public vtkObject
{
  public:
    static int objectCount;
    vtkTypeMacro(vtkCalleeObject, vtkObject);
    void PrintSelf(ostream &os, vtkIndent indent) override {}
    static vtkCalleeObject *New();

    static int GetObjectCount() { return objectCount; }

  protected:
    vtkCalleeObject()
    {
        vtkLog(INFO, << "Constructed " << vtkLogIdentifier(this));
        objectCount++;
    };
    ~vtkCalleeObject()
    {
        vtkLog(INFO, << "Destroyed " << vtkLogIdentifier(this));
        objectCount--;
    }

  private:
    vtkCalleeObject(const vtkCalleeObject &) = delete;
    void operator=(const vtkCalleeObject &) = delete;
};

int vtkCalleeObject::objectCount = 0;

vtkStandardNewMacro(vtkCalleeObject);


#define vtkAddDestructor(cname) \
    template<> void emscripten::internal::raw_destructor<cname>(cname * ptr) { ptr->Delete(); }

vtkAddDestructor(vtkObjectBase);
vtkAddDestructor(vtkObject);
vtkAddDestructor(vtkCallerObject);
vtkAddDestructor(vtkCalleeObject);
vtkAddDestructor(vtkCallbackCommand);

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkCommand_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCommand>(vtkCommand * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCommand_class) {
  using EventIds=vtkCommand::EventIds;
  emscripten::class_<vtkCommand, emscripten::base<vtkObjectBase>>("vtkCommand")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCommand::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCommand& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCommand::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCommand::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCommand::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCommand& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("GetStringFromEventId", emscripten::optional_override([]( unsigned long arg_0) -> std::string {  return vtkCommand::GetStringFromEventId( arg_0);}))
    .class_function("GetEventIdFromString", emscripten::optional_override([]( const std::string & arg_0) -> unsigned long {  return vtkCommand::GetEventIdFromString( arg_0.c_str());}))
    .class_function("EventHasData", &vtkCommand::EventHasData)
    .function("SetAbortFlag", &vtkCommand::SetAbortFlag)
    .function("GetAbortFlag", &vtkCommand::GetAbortFlag)
    .function("AbortFlagOn", &vtkCommand::AbortFlagOn)
    .function("AbortFlagOff", &vtkCommand::AbortFlagOff)
    .function("SetPassiveObserver", &vtkCommand::SetPassiveObserver)
    .function("GetPassiveObserver", &vtkCommand::GetPassiveObserver)
    .function("PassiveObserverOn", &vtkCommand::PassiveObserverOn)
    .function("PassiveObserverOff", &vtkCommand::PassiveObserverOff);
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkCommand_0_2_constants) {
    typedef vtkCommand::EventIds cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[138] = {
      { "vtkCommand_EventIds_NoEvent", vtkCommand::NoEvent },
      { "vtkCommand_EventIds_AnyEvent", vtkCommand::AnyEvent },
      { "vtkCommand_EventIds_DeleteEvent", vtkCommand::DeleteEvent },
      { "vtkCommand_EventIds_StartEvent", vtkCommand::StartEvent },
      { "vtkCommand_EventIds_EndEvent", vtkCommand::EndEvent },
      { "vtkCommand_EventIds_RenderEvent", vtkCommand::RenderEvent },
      { "vtkCommand_EventIds_ProgressEvent", vtkCommand::ProgressEvent },
      { "vtkCommand_EventIds_PickEvent", vtkCommand::PickEvent },
      { "vtkCommand_EventIds_StartPickEvent", vtkCommand::StartPickEvent },
      { "vtkCommand_EventIds_EndPickEvent", vtkCommand::EndPickEvent },
      { "vtkCommand_EventIds_AbortCheckEvent", vtkCommand::AbortCheckEvent },
      { "vtkCommand_EventIds_ExitEvent", vtkCommand::ExitEvent },
      { "vtkCommand_EventIds_LeftButtonPressEvent", vtkCommand::LeftButtonPressEvent },
      { "vtkCommand_EventIds_LeftButtonReleaseEvent", vtkCommand::LeftButtonReleaseEvent },
      { "vtkCommand_EventIds_MiddleButtonPressEvent", vtkCommand::MiddleButtonPressEvent },
      { "vtkCommand_EventIds_MiddleButtonReleaseEvent", vtkCommand::MiddleButtonReleaseEvent },
      { "vtkCommand_EventIds_RightButtonPressEvent", vtkCommand::RightButtonPressEvent },
      { "vtkCommand_EventIds_RightButtonReleaseEvent", vtkCommand::RightButtonReleaseEvent },
      { "vtkCommand_EventIds_EnterEvent", vtkCommand::EnterEvent },
      { "vtkCommand_EventIds_LeaveEvent", vtkCommand::LeaveEvent },
      { "vtkCommand_EventIds_KeyPressEvent", vtkCommand::KeyPressEvent },
      { "vtkCommand_EventIds_KeyReleaseEvent", vtkCommand::KeyReleaseEvent },
      { "vtkCommand_EventIds_CharEvent", vtkCommand::CharEvent },
      { "vtkCommand_EventIds_ExposeEvent", vtkCommand::ExposeEvent },
      { "vtkCommand_EventIds_ConfigureEvent", vtkCommand::ConfigureEvent },
      { "vtkCommand_EventIds_TimerEvent", vtkCommand::TimerEvent },
      { "vtkCommand_EventIds_MouseMoveEvent", vtkCommand::MouseMoveEvent },
      { "vtkCommand_EventIds_MouseWheelForwardEvent", vtkCommand::MouseWheelForwardEvent },
      { "vtkCommand_EventIds_MouseWheelBackwardEvent", vtkCommand::MouseWheelBackwardEvent },
      { "vtkCommand_EventIds_ActiveCameraEvent", vtkCommand::ActiveCameraEvent },
      { "vtkCommand_EventIds_CreateCameraEvent", vtkCommand::CreateCameraEvent },
      { "vtkCommand_EventIds_ResetCameraEvent", vtkCommand::ResetCameraEvent },
      { "vtkCommand_EventIds_ResetCameraClippingRangeEvent", vtkCommand::ResetCameraClippingRangeEvent },
      { "vtkCommand_EventIds_ModifiedEvent", vtkCommand::ModifiedEvent },
      { "vtkCommand_EventIds_WindowLevelEvent", vtkCommand::WindowLevelEvent },
      { "vtkCommand_EventIds_StartWindowLevelEvent", vtkCommand::StartWindowLevelEvent },
      { "vtkCommand_EventIds_EndWindowLevelEvent", vtkCommand::EndWindowLevelEvent },
      { "vtkCommand_EventIds_ResetWindowLevelEvent", vtkCommand::ResetWindowLevelEvent },
      { "vtkCommand_EventIds_SetOutputEvent", vtkCommand::SetOutputEvent },
      { "vtkCommand_EventIds_ErrorEvent", vtkCommand::ErrorEvent },
      { "vtkCommand_EventIds_WarningEvent", vtkCommand::WarningEvent },
      { "vtkCommand_EventIds_StartInteractionEvent", vtkCommand::StartInteractionEvent },
      { "vtkCommand_EventIds_DropFilesEvent", vtkCommand::DropFilesEvent },
      { "vtkCommand_EventIds_UpdateDropLocationEvent", vtkCommand::UpdateDropLocationEvent },
      { "vtkCommand_EventIds_InteractionEvent", vtkCommand::InteractionEvent },
      { "vtkCommand_EventIds_EndInteractionEvent", vtkCommand::EndInteractionEvent },
      { "vtkCommand_EventIds_EnableEvent", vtkCommand::EnableEvent },
      { "vtkCommand_EventIds_DisableEvent", vtkCommand::DisableEvent },
      { "vtkCommand_EventIds_CreateTimerEvent", vtkCommand::CreateTimerEvent },
      { "vtkCommand_EventIds_DestroyTimerEvent", vtkCommand::DestroyTimerEvent },
      { "vtkCommand_EventIds_PlacePointEvent", vtkCommand::PlacePointEvent },
      { "vtkCommand_EventIds_DeletePointEvent", vtkCommand::DeletePointEvent },
      { "vtkCommand_EventIds_PlaceWidgetEvent", vtkCommand::PlaceWidgetEvent },
      { "vtkCommand_EventIds_CursorChangedEvent", vtkCommand::CursorChangedEvent },
      { "vtkCommand_EventIds_ExecuteInformationEvent", vtkCommand::ExecuteInformationEvent },
      { "vtkCommand_EventIds_RenderWindowMessageEvent", vtkCommand::RenderWindowMessageEvent },
      { "vtkCommand_EventIds_WrongTagEvent", vtkCommand::WrongTagEvent },
      { "vtkCommand_EventIds_StartAnimationCueEvent", vtkCommand::StartAnimationCueEvent },
      { "vtkCommand_EventIds_ResliceAxesChangedEvent", vtkCommand::ResliceAxesChangedEvent },
      { "vtkCommand_EventIds_AnimationCueTickEvent", vtkCommand::AnimationCueTickEvent },
      { "vtkCommand_EventIds_EndAnimationCueEvent", vtkCommand::EndAnimationCueEvent },
      { "vtkCommand_EventIds_VolumeMapperRenderEndEvent", vtkCommand::VolumeMapperRenderEndEvent },
      { "vtkCommand_EventIds_VolumeMapperRenderProgressEvent", vtkCommand::VolumeMapperRenderProgressEvent },
      { "vtkCommand_EventIds_VolumeMapperRenderStartEvent", vtkCommand::VolumeMapperRenderStartEvent },
      { "vtkCommand_EventIds_VolumeMapperComputeGradientsEndEvent", vtkCommand::VolumeMapperComputeGradientsEndEvent },
      { "vtkCommand_EventIds_VolumeMapperComputeGradientsProgressEvent", vtkCommand::VolumeMapperComputeGradientsProgressEvent },
      { "vtkCommand_EventIds_VolumeMapperComputeGradientsStartEvent", vtkCommand::VolumeMapperComputeGradientsStartEvent },
      { "vtkCommand_EventIds_WidgetModifiedEvent", vtkCommand::WidgetModifiedEvent },
      { "vtkCommand_EventIds_WidgetValueChangedEvent", vtkCommand::WidgetValueChangedEvent },
      { "vtkCommand_EventIds_WidgetActivateEvent", vtkCommand::WidgetActivateEvent },
      { "vtkCommand_EventIds_ConnectionCreatedEvent", vtkCommand::ConnectionCreatedEvent },
      { "vtkCommand_EventIds_ConnectionClosedEvent", vtkCommand::ConnectionClosedEvent },
      { "vtkCommand_EventIds_DomainModifiedEvent", vtkCommand::DomainModifiedEvent },
      { "vtkCommand_EventIds_PropertyModifiedEvent", vtkCommand::PropertyModifiedEvent },
      { "vtkCommand_EventIds_UpdateEvent", vtkCommand::UpdateEvent },
      { "vtkCommand_EventIds_RegisterEvent", vtkCommand::RegisterEvent },
      { "vtkCommand_EventIds_UnRegisterEvent", vtkCommand::UnRegisterEvent },
      { "vtkCommand_EventIds_UpdateInformationEvent", vtkCommand::UpdateInformationEvent },
      { "vtkCommand_EventIds_AnnotationChangedEvent", vtkCommand::AnnotationChangedEvent },
      { "vtkCommand_EventIds_SelectionChangedEvent", vtkCommand::SelectionChangedEvent },
      { "vtkCommand_EventIds_UpdatePropertyEvent", vtkCommand::UpdatePropertyEvent },
      { "vtkCommand_EventIds_ViewProgressEvent", vtkCommand::ViewProgressEvent },
      { "vtkCommand_EventIds_UpdateDataEvent", vtkCommand::UpdateDataEvent },
      { "vtkCommand_EventIds_CurrentChangedEvent", vtkCommand::CurrentChangedEvent },
      { "vtkCommand_EventIds_ComputeVisiblePropBoundsEvent", vtkCommand::ComputeVisiblePropBoundsEvent },
      { "vtkCommand_EventIds_TDxMotionEvent", vtkCommand::TDxMotionEvent },
      { "vtkCommand_EventIds_TDxButtonPressEvent", vtkCommand::TDxButtonPressEvent },
      { "vtkCommand_EventIds_TDxButtonReleaseEvent", vtkCommand::TDxButtonReleaseEvent },
      { "vtkCommand_EventIds_HoverEvent", vtkCommand::HoverEvent },
      { "vtkCommand_EventIds_LoadStateEvent", vtkCommand::LoadStateEvent },
      { "vtkCommand_EventIds_SaveStateEvent", vtkCommand::SaveStateEvent },
      { "vtkCommand_EventIds_StateChangedEvent", vtkCommand::StateChangedEvent },
      { "vtkCommand_EventIds_WindowMakeCurrentEvent", vtkCommand::WindowMakeCurrentEvent },
      { "vtkCommand_EventIds_WindowIsCurrentEvent", vtkCommand::WindowIsCurrentEvent },
      { "vtkCommand_EventIds_WindowFrameEvent", vtkCommand::WindowFrameEvent },
      { "vtkCommand_EventIds_HighlightEvent", vtkCommand::HighlightEvent },
      { "vtkCommand_EventIds_WindowSupportsOpenGLEvent", vtkCommand::WindowSupportsOpenGLEvent },
      { "vtkCommand_EventIds_WindowIsDirectEvent", vtkCommand::WindowIsDirectEvent },
      { "vtkCommand_EventIds_WindowStereoTypeChangedEvent", vtkCommand::WindowStereoTypeChangedEvent },
      { "vtkCommand_EventIds_WindowResizeEvent", vtkCommand::WindowResizeEvent },
      { "vtkCommand_EventIds_UncheckedPropertyModifiedEvent", vtkCommand::UncheckedPropertyModifiedEvent },
      { "vtkCommand_EventIds_UpdateShaderEvent", vtkCommand::UpdateShaderEvent },
      { "vtkCommand_EventIds_MessageEvent", vtkCommand::MessageEvent },
      { "vtkCommand_EventIds_StartSwipeEvent", vtkCommand::StartSwipeEvent },
      { "vtkCommand_EventIds_SwipeEvent", vtkCommand::SwipeEvent },
      { "vtkCommand_EventIds_EndSwipeEvent", vtkCommand::EndSwipeEvent },
      { "vtkCommand_EventIds_StartPinchEvent", vtkCommand::StartPinchEvent },
      { "vtkCommand_EventIds_PinchEvent", vtkCommand::PinchEvent },
      { "vtkCommand_EventIds_EndPinchEvent", vtkCommand::EndPinchEvent },
      { "vtkCommand_EventIds_StartRotateEvent", vtkCommand::StartRotateEvent },
      { "vtkCommand_EventIds_RotateEvent", vtkCommand::RotateEvent },
      { "vtkCommand_EventIds_EndRotateEvent", vtkCommand::EndRotateEvent },
      { "vtkCommand_EventIds_StartPanEvent", vtkCommand::StartPanEvent },
      { "vtkCommand_EventIds_PanEvent", vtkCommand::PanEvent },
      { "vtkCommand_EventIds_EndPanEvent", vtkCommand::EndPanEvent },
      { "vtkCommand_EventIds_TapEvent", vtkCommand::TapEvent },
      { "vtkCommand_EventIds_LongTapEvent", vtkCommand::LongTapEvent },
      { "vtkCommand_EventIds_FourthButtonPressEvent", vtkCommand::FourthButtonPressEvent },
      { "vtkCommand_EventIds_FourthButtonReleaseEvent", vtkCommand::FourthButtonReleaseEvent },
      { "vtkCommand_EventIds_FifthButtonPressEvent", vtkCommand::FifthButtonPressEvent },
      { "vtkCommand_EventIds_FifthButtonReleaseEvent", vtkCommand::FifthButtonReleaseEvent },
      { "vtkCommand_EventIds_Move3DEvent", vtkCommand::Move3DEvent },
      { "vtkCommand_EventIds_Button3DEvent", vtkCommand::Button3DEvent },
      { "vtkCommand_EventIds_TextEvent", vtkCommand::TextEvent },
      { "vtkCommand_EventIds_LeftButtonDoubleClickEvent", vtkCommand::LeftButtonDoubleClickEvent },
      { "vtkCommand_EventIds_MiddleButtonDoubleClickEvent", vtkCommand::MiddleButtonDoubleClickEvent },
      { "vtkCommand_EventIds_RightButtonDoubleClickEvent", vtkCommand::RightButtonDoubleClickEvent },
      { "vtkCommand_EventIds_MouseWheelLeftEvent", vtkCommand::MouseWheelLeftEvent },
      { "vtkCommand_EventIds_MouseWheelRightEvent", vtkCommand::MouseWheelRightEvent },
      { "vtkCommand_EventIds_ViewerMovement3DEvent", vtkCommand::ViewerMovement3DEvent },
      { "vtkCommand_EventIds_Menu3DEvent", vtkCommand::Menu3DEvent },
      { "vtkCommand_EventIds_NextPose3DEvent", vtkCommand::NextPose3DEvent },
      { "vtkCommand_EventIds_Clip3DEvent", vtkCommand::Clip3DEvent },
      { "vtkCommand_EventIds_PositionProp3DEvent", vtkCommand::PositionProp3DEvent },
      { "vtkCommand_EventIds_Pick3DEvent", vtkCommand::Pick3DEvent },
      { "vtkCommand_EventIds_Select3DEvent", vtkCommand::Select3DEvent },
      { "vtkCommand_EventIds_Elevation3DEvent", vtkCommand::Elevation3DEvent },
      { "vtkCommand_EventIds_UserEvent", vtkCommand::UserEvent },
  };
  for (int c = 0; c < 138; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

EMSCRIPTEN_BINDINGS(vtkObjectBase_class) {
  emscripten::class_<vtkObjectBase>("vtkObjectBase")
    .smart_ptr<vtkSmartPointer<vtkObjectBase>>("vtkSmartPointer<vtkObjectBase>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkObjectBase>)
    .function("GetClassName", emscripten::optional_override([](vtkObjectBase& self) -> std::string {  return self.GetClassName();}))
    .function("GetObjectDescription", &vtkObjectBase::GetObjectDescription)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkObjectBase::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkObjectBase& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkObjectBase::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkObjectBase& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("InitializeObjectBase", &vtkObjectBase::InitializeObjectBase)
    .function("UsesGarbageCollector", &vtkObjectBase::UsesGarbageCollector)
    .function("GetReferenceCount", &vtkObjectBase::GetReferenceCount)
    .function("SetReferenceCount", &vtkObjectBase::SetReferenceCount);
}

EMSCRIPTEN_BINDINGS(vtkObject_class) {
  emscripten::class_<vtkObject, emscripten::base<vtkObjectBase>>("vtkObject")
    .smart_ptr<vtkSmartPointer<vtkObject>>("vtkSmartPointer<vtkObject>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkObject>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkObject::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkObject& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkObject::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkObject::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkObject::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkObject& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DebugOn", &vtkObject::DebugOn)
    .function("DebugOff", &vtkObject::DebugOff)
    .function("GetDebug", &vtkObject::GetDebug)
    .function("GetReferenceCount", &vtkObject::GetReferenceCount)
    .function("SetDebug", &vtkObject::SetDebug)
    .class_function("BreakOnError", &vtkObject::BreakOnError)
    .function("Modified", &vtkObject::Modified)
    .function("GetMTime", &vtkObject::GetMTime)
    .class_function("SetGlobalWarningDisplay", &vtkObject::SetGlobalWarningDisplay)
    .class_function("GlobalWarningDisplayOn", &vtkObject::GlobalWarningDisplayOn)
    .class_function("GlobalWarningDisplayOff", &vtkObject::GlobalWarningDisplayOff)
    .class_function("GetGlobalWarningDisplay", &vtkObject::GetGlobalWarningDisplay)
    .function("AddObserver", emscripten::select_overload<unsigned long(vtkObject&, unsigned long, vtkCommand*, float)>([](vtkObject& self, unsigned long arg_0, vtkCommand* arg_1, float arg_2) -> unsigned long { return self.AddObserver( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("AddObserver", emscripten::select_overload<unsigned long(vtkObject&, const std::string &, vtkCommand*, float)>([](vtkObject& self, const std::string & arg_0, vtkCommand* arg_1, float arg_2) -> unsigned long { return self.AddObserver( arg_0.c_str(), arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetCommand", &vtkObject::GetCommand, emscripten::allow_raw_pointers())
    .function("RemoveObserver", emscripten::select_overload<void(vtkObject&, vtkCommand*)>([](vtkObject& self, vtkCommand* arg_0) -> void { return self.RemoveObserver( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveObserver", emscripten::select_overload<void(vtkObject&, unsigned long)>([](vtkObject& self, unsigned long arg_0) -> void { return self.RemoveObserver( arg_0); }))
    .function("RemoveObservers", emscripten::select_overload<void(vtkObject&, unsigned long, vtkCommand*)>([](vtkObject& self, unsigned long arg_0, vtkCommand* arg_1) -> void { return self.RemoveObservers( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("RemoveObservers", emscripten::select_overload<void(vtkObject&, const std::string &, vtkCommand*)>([](vtkObject& self, const std::string & arg_0, vtkCommand* arg_1) -> void { return self.RemoveObservers( arg_0.c_str(), arg_1); }), emscripten::allow_raw_pointers())
    .function("RemoveObservers", emscripten::select_overload<void(vtkObject&, unsigned long)>([](vtkObject& self, unsigned long arg_0) -> void { return self.RemoveObservers( arg_0); }))
    .function("RemoveObservers", emscripten::select_overload<void(vtkObject&, const std::string &)>([](vtkObject& self, const std::string & arg_0) -> void { return self.RemoveObservers( arg_0.c_str()); }))
    .function("HasObserver", emscripten::select_overload<int(vtkObject&, unsigned long, vtkCommand*)>([](vtkObject& self, unsigned long arg_0, vtkCommand* arg_1) -> int { return self.HasObserver( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("HasObserver", emscripten::select_overload<int(vtkObject&, const std::string &, vtkCommand*)>([](vtkObject& self, const std::string & arg_0, vtkCommand* arg_1) -> int { return self.HasObserver( arg_0.c_str(), arg_1); }), emscripten::allow_raw_pointers())
    .function("HasObserver", emscripten::select_overload<int(vtkObject&, unsigned long)>([](vtkObject& self, unsigned long arg_0) -> int { return self.HasObserver( arg_0); }))
    .function("HasObserver", emscripten::select_overload<int(vtkObject&, const std::string &)>([](vtkObject& self, const std::string & arg_0) -> int { return self.HasObserver( arg_0.c_str()); }))
    .function("RemoveAllObservers", &vtkObject::RemoveAllObservers)
    .function("InvokeEvent", emscripten::select_overload<int(vtkObject&, unsigned long, std::uintptr_t)>([](vtkObject& self, unsigned long arg_0, std::uintptr_t arg_1) -> int { return self.InvokeEvent( arg_0,reinterpret_cast<void*>(arg_1)); }))
    .function("InvokeEvent", emscripten::select_overload<int(vtkObject&, const std::string &, std::uintptr_t)>([](vtkObject& self, const std::string & arg_0, std::uintptr_t arg_1) -> int { return self.InvokeEvent( arg_0.c_str(),reinterpret_cast<void*>(arg_1)); }))
    .function("InvokeEvent", emscripten::select_overload<int(vtkObject&, unsigned long)>([](vtkObject& self, unsigned long arg_0) -> int { return self.InvokeEvent( arg_0); }))
    .function("InvokeEvent", emscripten::select_overload<int(vtkObject&, const std::string &)>([](vtkObject& self, const std::string & arg_0) -> int { return self.InvokeEvent( arg_0.c_str()); }))
    .function("SetObjectName", &vtkObject::SetObjectName)
    .function("GetObjectName", &vtkObject::GetObjectName)
    .function("GetObjectDescription", &vtkObject::GetObjectDescription)
    .class_function("IntToPointer",
		    emscripten::optional_override([]( unsigned long arg_0) -> vtkObject* { return reinterpret_cast<vtkObject*>(arg_0);}), emscripten::allow_raw_pointers());
}

EMSCRIPTEN_BINDINGS(vtkCallbackCommand_class)
{
    emscripten::class_<vtkCallbackCommand, emscripten::base<vtkCommand>>("vtkCallbackCommand")
      .smart_ptr<vtkSmartPointer<vtkCallbackCommand>>("vtkSmartPointer<vtkCallbackCommand>")
      .constructor(&vtk::MakeVTKSmartPtr<vtkCallbackCommand>)
      .class_function("IsTypeOf", emscripten::optional_override([](const std::string &arg_0) -> int {
          return vtkCallbackCommand::IsTypeOf(arg_0.c_str());
      }))
      .function("IsA", emscripten::optional_override([](vtkCallbackCommand &self, const std::string &arg_0) -> int {
          return self.IsA(arg_0.c_str());
      }))
      .class_function("SafeDownCast", &vtkCallbackCommand::SafeDownCast, emscripten::allow_raw_pointers())
      .function("NewInstance", &vtkCallbackCommand::NewInstance, emscripten::allow_raw_pointers())
      .class_function(
        "GetNumberOfGenerationsFromBaseType", emscripten::optional_override([](const std::string &arg_0) -> int {
            return vtkCallbackCommand::GetNumberOfGenerationsFromBaseType(arg_0.c_str());
        }))
      .function("GetNumberOfGenerationsFromBase",
        emscripten::optional_override([](vtkCallbackCommand &self, const std::string &arg_0) -> int {
            return self.GetNumberOfGenerationsFromBase(arg_0.c_str());
        }))
      .function("Execute",
        emscripten::optional_override(
          [](vtkCallbackCommand &self, vtkObject *arg_0, unsigned long arg_1, std::uintptr_t arg_2) -> void {
              return self.Execute(arg_0, arg_1, reinterpret_cast<void *>(arg_2));
          }),
        emscripten::allow_raw_pointers())
      .function(
        "SetClientData", emscripten::optional_override([](vtkCallbackCommand &self, std::uintptr_t arg_0) -> void {
            return self.SetClientData(reinterpret_cast<void *>(arg_0));
        }))
      .function("GetClientData", emscripten::optional_override([](vtkCallbackCommand &self) -> std::uintptr_t {
          return reinterpret_cast<std::uintptr_t>(self.GetClientData());
      }))
      .function(
        "SetCallback", emscripten::optional_override([](vtkCallbackCommand &self, emscripten::val arg_0) -> void {
            return self.SetCallback(reinterpret_cast<void (*)(vtkObject *, unsigned long, void *, void *)>(
              emscripten::val::module_property("addFunction")(arg_0, std::string("viiii")).as<int>()));
        }))
      .function("SetClientDataDeleteCallback",
        emscripten::optional_override([](vtkCallbackCommand &self, emscripten::val arg_0) -> void {
            return self.SetClientDataDeleteCallback(reinterpret_cast<void (*)(void *)>(
              emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()));
        }))
      .function("SetAbortFlagOnExecute", &vtkCallbackCommand::SetAbortFlagOnExecute)
      .function("GetAbortFlagOnExecute", &vtkCallbackCommand::GetAbortFlagOnExecute)
      .function("AbortFlagOnExecuteOn", &vtkCallbackCommand::AbortFlagOnExecuteOn)
      .function("AbortFlagOnExecuteOff", &vtkCallbackCommand::AbortFlagOnExecuteOff);
}


EMSCRIPTEN_BINDINGS(vtkCallee_class)
{
    emscripten::class_<vtkCalleeObject, emscripten::base<vtkObject>>("vtkCalleeObject")
      .smart_ptr<vtkSmartPointer<vtkCalleeObject>>("vtkSmartPointer<vtkCalleeObject>")
      .constructor(&vtk::MakeVTKSmartPtr<vtkCalleeObject>)
      .class_function("ObjectCount", &vtkCalleeObject::GetObjectCount);
}

EMSCRIPTEN_BINDINGS(vtkCaller_class)
{
    emscripten::class_<vtkCallerObject, emscripten::base<vtkObject>>("vtkCallerObject")
      .smart_ptr<vtkSmartPointer<vtkCallerObject>>("vtkSmartPointer<vtkCallerObject>")
      .constructor(&vtk::MakeVTKSmartPtr<vtkCallerObject>)
      .function("TestInvokeEvent", &vtkCallerObject::TestInvokeEvent)
      .function("HelpMe", &vtkCallerObject::HelpMe)
      .class_function("ObjectCount", &vtkCallerObject::GetObjectCount);
}
