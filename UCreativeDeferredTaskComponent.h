// Class /Script/FortniteGame.CreativeDeferredTaskComponent
// Size: 0xb8
class UCreativeDeferredTaskComponent : public UActorComponent
{
	struct TArray<struct FDeferredCreativeTask> DeferredFunctionsToExecute; // 0xa0 (0x10)
	unsigned char padding_b0[0x8]; // 0xb0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.CreativeDeferredTaskComponent.CancelAllTasks (Underlying native function: CancelAllTasks 0x875f4c0)
	void CancelAllTasks(); // (Final | Native | Private)
};

