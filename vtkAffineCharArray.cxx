// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause
// Instantiate superclass first to give the template a DLL interface.
#define VTK_AOS_DATA_ARRAY_TEMPLATE_INSTANTIATING

#include "vtkAffineCharArray.h"

#include "vtkObjectFactory.h"

//------------------------------------------------------------------------------
VTK_ABI_NAMESPACE_BEGIN
vtkStandardNewMacro(vtkAffineCharArray);
vtkStandardExtendedNewMacro(vtkAffineCharArray);

//------------------------------------------------------------------------------
vtkAffineCharArray::vtkAffineCharArray() = default;

//------------------------------------------------------------------------------
vtkAffineCharArray::~vtkAffineCharArray() = default;

//------------------------------------------------------------------------------
void vtkAffineCharArray::ConstructBackend(char slope, char intercept)
{
  this->RealSuperclass::ConstructBackend(slope, intercept);
}

//------------------------------------------------------------------------------
void vtkAffineCharArray::PrintSelf(ostream& os, vtkIndent indent)
{
  this->RealSuperclass::PrintSelf(os, indent);
}
VTK_ABI_NAMESPACE_END