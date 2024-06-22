// JavaScript wrapper for vtkBlockDistribution with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkBlockDistributionEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkBlockDistribution.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkBlockDistribution.h"


EMSCRIPTEN_BINDINGS(vtkBlockDistribution_class) {
  emscripten::class_<vtkBlockDistribution>("vtkBlockDistribution")
    .function("GetNumElements", &vtkBlockDistribution::GetNumElements)
    .function("GetNumProcessors", &vtkBlockDistribution::GetNumProcessors)
    .function("GetBlockSize", &vtkBlockDistribution::GetBlockSize)
    .function("GetProcessorOfElement", &vtkBlockDistribution::GetProcessorOfElement)
    .function("GetLocalIndexOfElement", &vtkBlockDistribution::GetLocalIndexOfElement)
    .function("GetFirstGlobalIndexOnProcessor", &vtkBlockDistribution::GetFirstGlobalIndexOnProcessor)
    .function("GetGlobalIndex", &vtkBlockDistribution::GetGlobalIndex);
}
