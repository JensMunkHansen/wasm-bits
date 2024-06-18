// JavaScript wrapper for vtkGenericDataArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkGenericDataArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkGenericDataArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAbstractArray.h"
#include "vtkIdList.h"
#include "vtkArrayIterator.h"
#include "vtkSOADataArrayTemplate.h"
#include "vtkAOSDataArrayTemplate.h"
#ifdef VTK_USE_SCALED_SOA_ARRAYS
#include "vtkScaledSOADataArrayTemplate.h"
#endif
#include "vtkGenericDataArray.h"

