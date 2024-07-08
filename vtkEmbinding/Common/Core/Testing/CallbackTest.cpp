#include "vtkCallbackCommand.h"
#include "vtkCommand.h"
#include "vtkEmbindSmartPointerTraits.h"
#include "vtkEmbindUtils.h"
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
    vtkTypeMacro(vtkCallerObject, vtkObject);
    void PrintSelf(ostream &os, vtkIndent indent) override {}
    static vtkCallerObject *New();

  void TestInvokeEvent() {
    this->InvokeEvent(vtkCommand::InteractionEvent);
  }
  int  HelpMe() {return 42;}
  
  protected:
  vtkCallerObject() = default;
  ~vtkCallerObject() = default;

  private:
    vtkCallerObject(const vtkCallerObject &) = delete;
    void operator=(const vtkCallerObject &) = delete;
};


vtkStandardNewMacro(vtkCallerObject);


vtkAddDestructor(vtkCallerObject);


EMSCRIPTEN_BINDINGS(vtkCaller_class)
{
    emscripten::class_<vtkCallerObject, emscripten::base<vtkObject>>("vtkCallerObject")
      .smart_ptr<vtkSmartPointer<vtkCallerObject>>("vtkSmartPointer<vtkCallerObject>")
      .constructor(&vtk::MakeVTKSmartPtr<vtkCallerObject>)
      .function("TestInvokeEvent", &vtkCallerObject::TestInvokeEvent)
      .function("HelpMe", &vtkCallerObject::HelpMe);

}
