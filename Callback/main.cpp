#include <vtkCallbackCommand.h>
#include <vtkCommand.h>
#include <vtkObjectFactory.h>
#include <vtkNew.h>
#include <iostream>

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

  vtkNew<vtkCustomCallbackCommand> customCallback;
  
  
  caller->AddObserver(vtkCaller::NewEvent, callback);
  caller->AddObserver(vtkCaller::NewEvent, customCallback);

  caller->EmitEvent();
  
  caller->Delete();

  
  return 0;
}
