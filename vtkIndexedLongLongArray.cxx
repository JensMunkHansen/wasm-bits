// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause
// Instantiate superclass first to give the template a DLL interface.
#define VTK_AOS_DATA_ARRAY_TEMPLATE_INSTANTIATING

#include "vtkIndexedLongLongArray.h"

#include "vtkObjectFactory.h"

//------------------------------------------------------------------------------
VTK_ABI_NAMESPACE_BEGIN
vtkStandardNewMacro(vtkIndexedLongLongArray);
vtkStandardExtendedNewMacro(vtkIndexedLongLongArray);

//------------------------------------------------------------------------------
vtkIndexedLongLongArray::vtkIndexedLongLongArray() = default;

//------------------------------------------------------------------------------
vtkIndexedLongLongArray::~vtkIndexedLongLongArray() = default;

//------------------------------------------------------------------------------
void vtkIndexedLongLongArray::ConstructBackend(vtkIdList* indexes, vtkDataArray* array)
{
  this->RealSuperclass::ConstructBackend(indexes, array);
}

//------------------------------------------------------------------------------
void vtkIndexedLongLongArray::ConstructBackend(vtkDataArray* indexes, vtkDataArray* array)
{
  this->RealSuperclass::ConstructBackend(indexes, array);
}

//------------------------------------------------------------------------------
void vtkIndexedLongLongArray::PrintSelf(ostream& os, vtkIndent indent)
{
  this->RealSuperclass::PrintSelf(os, indent);
}
VTK_ABI_NAMESPACE_END