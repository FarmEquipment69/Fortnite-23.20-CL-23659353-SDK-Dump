// Class /Script/AugmentedReality.ARImageComponent
// Size: 0x3c0
class UARImageComponent : public UARComponent
{
	struct FARImageUpdatePayload ReplicatedPayload; // 0x320 (0xa0)

	/* Functions */

	// Function /Script/AugmentedReality.ARImageComponent.SetImageComponentDebugMode (Underlying native function: SetImageComponentDebugMode 0x97bf294)
	static void SetImageComponentDebugMode(enum EImageComponentDebugMode& NewDebugMode); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARImageComponent.ServerUpdatePayload (Underlying native function: ServerUpdatePayload 0x97be080)
	void ServerUpdatePayload(struct FARImageUpdatePayload& NewPayload); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/AugmentedReality.ARImageComponent.ReceiveUpdate (Has no native function)
	void ReceiveUpdate(struct FARImageUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/AugmentedReality.ARImageComponent.ReceiveAdd (Has no native function)
	void ReceiveAdd(struct FARImageUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)
};

