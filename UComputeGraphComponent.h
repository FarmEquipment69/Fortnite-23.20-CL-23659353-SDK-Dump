// Class /Script/ComputeFramework.ComputeGraphComponent
// Size: 0xc0
class UComputeGraphComponent : public UActorComponent
{
	class UComputeGraph* ComputeGraph; // 0xa0 (0x8)
	struct FComputeGraphInstance ComputeGraphInstance; // 0xa8 (0x10)
	unsigned char padding_b8[0x8]; // 0xb8 (0x8)

	/* Functions */

	// Function /Script/ComputeFramework.ComputeGraphComponent.QueueExecute (Underlying native function: QueueExecute 0x56a4c80)
	void QueueExecute(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ComputeFramework.ComputeGraphComponent.DestroyDataProviders (Underlying native function: DestroyDataProviders 0x56a4c30)
	void DestroyDataProviders(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ComputeFramework.ComputeGraphComponent.CreateDataProviders (Underlying native function: CreateDataProviders 0x56a4b30)
	void CreateDataProviders(int& InBindingIndex, class UObject*& InBindingObject); // (Final | Native | Public | BlueprintCallable)
};

