#include "vtkLogger.h"
#include "vtkNew.h"
#include "vtkObject.h"
#include "vtkObjectFactory.h"
#include "vtkSmartPointer.h"

#include "emscripten/bind.h"
#include "vtkEmbindSmartPointerTraits.h"
#include "vtkEmbindUtils.h"

// Example custom object derived vtkObject
class vtkCustomObject : public vtkObject {
public:
  static int objectCount;
  vtkTypeMacro(vtkCustomObject, vtkObject);
  void PrintSelf(ostream &os, vtkIndent indent) override {}
  static vtkCustomObject *New();

  static int GetObjectCount() {
    return objectCount;
  }
protected:
  vtkCustomObject(){
    vtkLog(INFO, << "Constructed " << vtkLogIdentifier(this));
    objectCount++;
  };
  ~vtkCustomObject() {
    vtkLog(INFO, << "Destroyed " << vtkLogIdentifier(this));
    objectCount--;
  }

private:
  vtkCustomObject(const vtkCustomObject &) = delete;
  void operator=(const vtkCustomObject &) = delete;
};

int vtkCustomObject::objectCount = 0;

vtkStandardNewMacro(vtkCustomObject);

vtkAddDestructor(vtkCustomObject);


class vtkDerivedObject : public vtkCustomObject {
public:
  static int objectCount;
  vtkTypeMacro(vtkDerivedObject, vtkCustomObject);
  void PrintSelf(ostream &os, vtkIndent indent) override {}
  static vtkDerivedObject *New();

  static int GetObjectCount() {
    return objectCount;
  }
protected:
  vtkDerivedObject(){
    vtkLog(INFO, << "Constructed " << vtkLogIdentifier(this));
    objectCount++;
  };
  ~vtkDerivedObject() {
    vtkLog(INFO, << "Destroyed " << vtkLogIdentifier(this));
    objectCount--;
  }

private:
  vtkDerivedObject(const vtkDerivedObject &) = delete;
  void operator=(const vtkDerivedObject &) = delete;
};

int vtkDerivedObject::objectCount = 0;

vtkStandardNewMacro(vtkDerivedObject);

vtkAddDestructor(vtkDerivedObject);




// Binding code
EMSCRIPTEN_BINDINGS(vtksmartptr_prototype) {
  emscripten::class_<vtkCustomObject, emscripten::base<vtkObject>>(
      "vtkCustomObject")
      .smart_ptr<vtkSmartPointer<vtkCustomObject>>("vtkSmartPointer<vtkCustomObject>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCustomObject>)
      .class_function("ObjectCount", &vtkCustomObject::GetObjectCount);
  emscripten::class_<vtkDerivedObject, emscripten::base<vtkCustomObject>>(
      "vtkDerivedObject")
      .smart_ptr<vtkSmartPointer<vtkDerivedObject>>("vtkSmartPointer<vtkDerivedObject>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDerivedObject>)
      .class_function("ObjectCount", &vtkDerivedObject::GetObjectCount);
}

