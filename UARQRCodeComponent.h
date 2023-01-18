// Class /Script/AugmentedReality.ARQRCodeComponent
// Size: 0x3d0
class UARQRCodeComponent : public UARComponent
{
	struct FARQRCodeUpdatePayload ReplicatedPayload; // 0x320 (0xb0)

	/* Functions */

	// Function /Script/AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode (Underlying native function: SetQRCodeComponentDebugMode 0x97bf6e8)
	static void SetQRCodeComponentDebugMode(enum EQRCodeComponentDebugMode& NewDebugMode); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARQRCodeComponent.ServerUpdatePayload (Underlying native function: ServerUpdatePayload 0x97be508)
	void ServerUpdatePayload(struct FARQRCodeUpdatePayload& NewPayload); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveUpdate (Has no native function)
	void ReceiveUpdate(struct FARQRCodeUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveAdd (Has no native function)
	void ReceiveAdd(struct FARQRCodeUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)
};

