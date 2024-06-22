// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause
// Instantiate superclass first to give the template a DLL interface.
#define VTK_AOS_DATA_ARRAY_TEMPLATE_INSTANTIATING

#include "vtkConstantShortArray.h"

#include "vtkObjectFactory.h"

//------------------------------------------------------------------------------
VTK_ABI_NAMESPACE_BEGIN
vtkStandardNewMacro(vtkConstantShortArray);
vtkStandardExtendedNewMacro(vtkConstantShortArray);

//------------------------------------------------------------------------------
vtkConstantShortArray::vtkConstantShortArray() = default;

//------------------------------------------------------------------------------
vtkConstantShortArray::~vtkConstantShortArray() = default;

//------------------------------------------------------------------------------
void vtkConstantShortArray::ConstructBackend(short value)
{
  this->RealSuperclass::ConstructBackend(value);
}

//------------------------------------------------------------------------------
void vtkConstantShortArray::PrintSelf(ostream& os, vtkIndent indent)
{
  this->RealSuperclass::PrintSelf(os, indent);
}
VTK_ABI_NAMESPACE_END
