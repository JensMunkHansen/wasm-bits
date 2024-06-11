#include <vtkCallbackCommand.h>
#include <vtkCommand.h>
#include <vtkObjectFactory.h>
#include <vtkSetGet.h>
#include <vtkSmartPointer.h>
#include <vtkNew.h>
#include <iostream>

class vtkCustomObject : public vtkObject {
  vtkTypeMacro(vtkCustomObject, vtkObject);
  void PrintSelf(ostream &os, vtkIndent indent) override {
    Superclass::PrintSelf(os, indent);
  }
  static vtkCustomObject *New();

protected:
  vtkCustomObject() {
  }
  ~vtkCustomObject() = default;
private:
  vtkCustomObject(const vtkCustomObject&) = delete;
  void operator=(const vtkCustomObject&) = delete;
};

vtkStandardNewMacro(vtkCustomObject);

class vtkCaller : public vtkObject {
public:
  static unsigned long NewEvent;
  vtkTypeMacro(vtkCaller, vtkObject);
  void PrintSelf(ostream &os, vtkIndent indent) override {}
  static vtkCaller *New();

  void EmitEvent() {
    this->InvokeEvent(vtkCaller::NewEvent);
  }
protected:
  vtkCaller() {
  }
  ~vtkCaller() = default;
private:
  vtkCaller(const vtkCaller&) = delete;
  void operator=(const vtkCaller&) = delete;
};

unsigned long vtkCaller::NewEvent = vtkCommand::UserEvent + 1;    

vtkStandardNewMacro(vtkCaller);

class vtkCustomCallbackCommand : public vtkCommand {
public:
  vtkTypeMacro(vtkCustomCallbackCommand, vtkCommand);
  void PrintSelf(ostream &os, vtkIndent indent) override {}
  static vtkCustomCallbackCommand *New();

  virtual void Execute(vtkObject* caller, unsigned long event, void* callData) override
  {
    std::cout << __FUNCTION__ << std::endl;
  }
  vtkSmartPointer<vtkCustomObject> SomeData = nullptr;

protected:
  vtkCustomCallbackCommand() = default;
  ~vtkCustomCallbackCommand() = default;

  
private:
  vtkCustomCallbackCommand(const vtkCustomCallbackCommand&) = delete;
  void operator=(const vtkCustomCallbackCommand&) = delete;
};

vtkStandardNewMacro(vtkCustomCallbackCommand);


void Callback(vtkObject* caller, unsigned long event, void* callData, void* clientData) {
  std::cout << __FUNCTION__ << " called\n";
}

int main(int argc, char* argv[]) {

  vtkCaller* caller = vtkCaller::New();

  vtkNew<vtkCallbackCommand> callback;
  callback->SetCallback(Callback);
  // Ugly void* for client data
  callback->SetClientData(nullptr);

  vtkSmartPointer<vtkCustomObject> customObject = vtkSmartPointer<vtkCustomObject>::New();

  // Members are smart-pointers
  vtkNew<vtkCustomCallbackCommand> customCallback;
  customCallback->SomeData = customObject;
  
  caller->AddObserver(vtkCaller::NewEvent, callback);
  caller->AddObserver(vtkCaller::NewEvent, customCallback);

  caller->EmitEvent();
  
  caller->Delete();

  vtkNew<vtkCustomObject> lifeTime;
  vtkSmartPointer<vtkCustomObject> mySmartPointer(lifeTime.GetPointer());
  
  return 0;
}
