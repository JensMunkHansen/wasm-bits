#include <vtkObject.h>
#include <vtkNew.h>

class vtkRenderWindow;
class vtkRenderWindowInteractor;
class vtkRenderer;

// Example custom object derived vtkObject
class vtkViewer : public vtkObject {
public:
  vtkTypeMacro(vtkViewer, vtkObject);
  void PrintSelf(ostream &os, vtkIndent indent) override;
  static vtkViewer *New();
  void Initialize(const std::string& canvasId);

  void AddData();

  void ResetView();
  void SetSize(int width, int height);
  int Run();
  void Render();
  
protected:
  vtkViewer();
  ~vtkViewer();
  vtkNew<vtkRenderWindow> Window;
  vtkNew<vtkRenderWindowInteractor> Interactor;
  vtkNew<vtkRenderer> Renderer;
  bool Initialized;
private:
  vtkViewer(const vtkViewer &) = delete;
  void operator=(const vtkViewer &) = delete;
};
