vtkNew<vtkDataSet> ObjectFactory()
{
  vtkNew<vtkPolyData> pd;
  Configure(pd);
  return pd;
}

void Work()
{
  vtkSmartPointer<vtkObject> object; // empty

  { // Create new scope
    // Implicitly moves the returned objects into dObj1 and dObj2;
    vtkNew<vtkDataObject> dObj1 = ObjectFactory();
    vtkNew<vtkDataObject> dObj2 = ObjectFactory();

    // The dangling returned pointer is immediately destroyed properly:
    ObjectFactory();

    // dObj1 (vtkNew) is moved into object (vtkSmartPointer) 
    // and set to nullptr. dObj2 remains valid.
    object = std::move(someTrueCondition ? dObj1 : dObj2); 
  }  // dObj2 is destroyed
  
  Foo(object); // do some work with dObj1

} // dObj1's original data is freed as object is destroyed

/*
  The new standard guarantees the we’ll elide the copy via NRVO in ObjectFactory(), and since the type-converting move constructors are present the type cast works as expected. The returned object will have a reference count of one and will clean itself up if dangled, or else must be moved into a different vtkNew or vtkSmartPointer, possibly converting type up the inheritance chain.
*/


/*
  The move semantics also mean that vtkNew pointers can now be stored in containers like std::vector, since the containers are now guaranteed by the standard to move elements instead of copy them when noexcept move constructors are available. They’ll work as desired during vector reallocation and free themselves when the vector is destroyed. There are some restrictions – the std::vector of vtkNew becomes move-only as well, but under the ownership semantics implied by vtkNew, this is still useful.

All of the smart pointers got a little C++11 polish with that branch and learned some new tricks. The major difference remaining between New and Smart is vtkNew has both move-assignment and copy-assignment disabled, meaning that once a pointer goes into a vtkNew, it cannot change. It will go to nullptr if moved out, but it cannot be moved into or otherwise replaced once constructed.

IMO they’re both still useful to have because of convention – vtkNew means “I own this pointer, which must remain the same for my lifetime”, vtkSmartPointer means “I use this pointer, which came from somewhere else and might change,” which is useful to know at a glance when maintaining code.*/



/*
Right, it must be used to move-construct a vtkNew in the caller’s frame, or
moved/copied into a vtkSmartPointer. Either way, it’s possible to use VTK now
without needing to manually manage reference counting.

I just noticed a possible issue with this pattern and the implicit casts to T*:
*/



vtkNew<vtkObject> SomeFactoryMethod();

void bad()
{
  vtkObject *obj = SomeFactoryMethod(); // error, obj dangles
  obj->Print(std::cout);
}
void good()
{
  vtkNew<vtkObject> obj = SomeFactoryMethod(); // correct
  obj->Print(std::cout);
}







Use vtkNew<> whenever you create a new object.

If you need to keep a pointer to an existing object then you can use:

vtkSmartPointer<> - it prevents automatic deletion of the referenced object
vtkWeakPointer<> - it does not prevent automatic deletion, but when the referenced object is deleted then the smart pointer is set to nullptr
simple object pointer - it does not prevent automatic deletion and when the referenced object is deleted then it will point to invalid memory area and crashes the application if dereferenced, so it has to be avoided (except special highly performance-critical parts of your code)
