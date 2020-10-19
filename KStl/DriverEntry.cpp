#include "DriverEntry.h"
#include <vector>


VOID OnUnload(IN PDRIVER_OBJECT DriverObject)
{
	UNREFERENCED_PARAMETER(DriverObject);
}
EXTERN_C NTSTATUS DriverEntry(IN PDRIVER_OBJECT DriverObject, IN PUNICODE_STRING RegistryPath)
{
	std::vector<int> a;
	a.push_back(1);
	DriverObject->DriverUnload = OnUnload;
	UNREFERENCED_PARAMETER(RegistryPath);
	return STATUS_SUCCESS;
}