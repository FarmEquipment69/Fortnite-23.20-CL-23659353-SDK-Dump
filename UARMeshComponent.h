// Class /Script/AugmentedReality.ARMeshComponent
// Size: 0x3b0
class UARMeshComponent : public UARComponent
{
	struct FARMeshUpdatePayload ReplicatedPayload; // 0x320 (0x90)

	/* Functions */

	// Function /Script/AugmentedReality.ARMeshComponent.ServerUpdatePayload (Underlying native function: ServerUpdatePayload 0x97be150)
	void ServerUpdatePayload(struct FARMeshUpdatePayload& NewPayload); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveUpdate (Has no native function)
	void ReceiveUpdate(struct FARMeshUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveAdd (Has no native function)
	void ReceiveAdd(struct FARMeshUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)
};

