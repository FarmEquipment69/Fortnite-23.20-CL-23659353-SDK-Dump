// Class /Script/Solaris.SolarisCoroutineLibrary
// Size: 0x28
class USolarisCoroutineLibrary : public UObject
{

	/* Functions */

	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskMake (Underlying native function: TaskMake 0x6a7dcb8)
	static class UObject* TaskMake(class UClass*& Type, class UObject*& Caller, int64_t& CallerResumeState, int64_t& CallerCancelState, class UObject*& OwnerInstance); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskGetState (Underlying native function: TaskGetState 0x6a7dc34)
	static int64_t TaskGetState(class UObject*& Task); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskGetReturnProperty (Underlying native function: TaskGetReturnProperty 0x6a7d9b0)
	static void TaskGetReturnProperty(class UObject*& Task); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskFree (Underlying native function: TaskFree 0x6a7d938)
	static void TaskFree(class UObject*& Task); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskCancel (Underlying native function: TaskCancel 0x6a7d8c8)
	static void TaskCancel(class UObject*& Task); // (Final | Native | Static | Public)
};

