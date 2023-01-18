// Class /Script/AugmentedReality.AREnvironmentProbeComponent
// Size: 0x380
class UAREnvironmentProbeComponent : public UARComponent
{
	struct FAREnvironmentProbeUpdatePayload ReplicatedPayload; // 0x320 (0x60)

	/* Functions */

	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload (Underlying native function: ServerUpdatePayload 0x97bddc8)
	void ServerUpdatePayload(struct FAREnvironmentProbeUpdatePayload& NewPayload); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate (Has no native function)
	void ReceiveUpdate(struct FAREnvironmentProbeUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd (Has no native function)
	void ReceiveAdd(struct FAREnvironmentProbeUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)
};

