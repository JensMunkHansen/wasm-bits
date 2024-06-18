#include "vtkCallbackCommand.h"
#include "vtkEmbindSmartPointerTraits.h"
#include "vtkLogger.h"
#include "vtkNew.h"
#include "vtkObject.h"
#include "vtkObjectFactory.h"
#include "vtkSmartPointer.h"

#include "emscripten/bind.h"


class vtkCallerObject : public vtkObject
{
  public:
    static int objectCount;
    vtkTypeMacro(vtkCallerObject, vtkObject);
    void PrintSelf(ostream &os, vtkIndent indent) override {}
    static vtkCallerObject *New();

    static int GetObjectCount() { return objectCount; }

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
  void TestInvokeEvent() {
    this->InvokeEvent(vtkCommand::InteractionEvent);
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

EMSCRIPTEN_BINDINGS(vtkObject_class) {
  emscripten::class_<vtkObjectBase>("vtkObjectBase");
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
    .function("GetObjectDescription", &vtkObject::GetObjectDescription);
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
      .class_function("ObjectCount", &vtkCallerObject::GetObjectCount);
}
