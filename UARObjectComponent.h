// Class /Script/AugmentedReality.ARObjectComponent
// Size: 0x380
class UARObjectComponent : public UARComponent
{
	struct FARObjectUpdatePayload ReplicatedPayload; // 0x320 (0x60)

	/* Functions */

	// Function /Script/AugmentedReality.ARObjectComponent.ServerUpdatePayload (Underlying native function: ServerUpdatePayload 0x97bddc8)
	void ServerUpdatePayload(struct FARObjectUpdatePayload& NewPayload); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveUpdate (Has no native function)
	void ReceiveUpdate(struct FARObjectUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveAdd (Has no native function)
	void ReceiveAdd(struct FARObjectUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)
};

