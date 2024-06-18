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


template<> void emscripten::internal::raw_destructor<vtkCallbackCommand>(vtkCallbackCommand *ptr) { ptr->Delete(); }
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

#define vtkAddDestructor(cname) \
    template<> void emscripten::internal::raw_destructor<cname>(cname * ptr) { ptr->Delete(); }

vtkAddDestructor(vtkObjectBase);
vtkAddDestructor(vtkObject);
vtkAddDestructor(vtkCallerObject);
vtkAddDestructor(vtkCalleeObject);

EMSCRIPTEN_BINDINGS(vtkCallee_class)
{
    emscripten::class_<vtkObjectBase>("vtkObjectBase");
    emscripten::class_<vtkObject, emscripten::base<vtkObjectBase>>("vtkObject")
      .smart_ptr<vtkSmartPointer<vtkObject>>("vtkSmartPointer<vtkObject>")
      .constructor(&vtk::MakeVTKSmartPtr<vtkObject>)
      .function("GetReferenceCount", &vtkObject::GetReferenceCount);
    emscripten::class_<vtkCalleeObject, emscripten::base<vtkObject>>("vtkCalleeObject")
      .smart_ptr<vtkSmartPointer<vtkCalleeObject>>("vtkSmartPointer<vtkCalleeObject>")
      .constructor(&vtk::MakeVTKSmartPtr<vtkCalleeObject>)
      .class_function("ObjectCount", &vtkCalleeObject::GetObjectCount);
}

EMSCRIPTEN_BINDINGS(vtkCaller_class)
{
    emscripten::class_<vtkObjectBase>("vtkObjectBase");
    emscripten::class_<vtkObject, emscripten::base<vtkObjectBase>>("vtkObject")
      .smart_ptr<vtkSmartPointer<vtkObject>>("vtkSmartPointer<vtkObject>")
      .constructor(&vtk::MakeVTKSmartPtr<vtkObject>)
      .function("GetReferenceCount", &vtkObject::GetReferenceCount);
    emscripten::class_<vtkCallerObject, emscripten::base<vtkObject>>("vtkCallerObject")
      .smart_ptr<vtkSmartPointer<vtkCallerObject>>("vtkSmartPointer<vtkCallerObject>")
      .constructor(&vtk::MakeVTKSmartPtr<vtkCallerObject>)
      .class_function("ObjectCount", &vtkCallerObject::GetObjectCount);
}
