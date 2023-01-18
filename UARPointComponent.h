// Class /Script/AugmentedReality.ARPointComponent
// Size: 0x330
class UARPointComponent : public UARComponent
{
	struct FARPointUpdatePayload ReplicatedPayload; // 0x320 (0x1)
	unsigned char padding_321[0xf]; // 0x321 (0xf)

	/* Functions */

	// Function /Script/AugmentedReality.ARPointComponent.ServerUpdatePayload (Underlying native function: ServerUpdatePayload 0x97be344)
	void ServerUpdatePayload(struct FARPointUpdatePayload& NewPayload); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/AugmentedReality.ARPointComponent.ReceiveUpdate (Has no native function)
	void ReceiveUpdate(struct FARPointUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/AugmentedReality.ARPointComponent.ReceiveAdd (Has no native function)
	void ReceiveAdd(struct FARPointUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)
};

