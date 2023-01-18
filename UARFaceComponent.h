// Class /Script/AugmentedReality.ARFaceComponent
// Size: 0x3b0
class UARFaceComponent : public UARComponent
{
	enum EARFaceTransformMixing TransformSetting; // 0x320 (0x1)
	bool bUpdateVertexNormal; // 0x321 (0x1)
	bool bFaceOutOfScreen; // 0x322 (0x1)
	unsigned char unreflected_323[0x5]; // 0x323 (0x5) 
	struct FARFaceUpdatePayload ReplicatedPayload; // 0x328 (0x60)
	unsigned char padding_388[0x28]; // 0x388 (0x28)

	/* Functions */

	// Function /Script/AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode (Underlying native function: SetFaceComponentDebugMode 0x97bef0c)
	static void SetFaceComponentDebugMode(enum EFaceComponentDebugMode& NewDebugMode); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARFaceComponent.ServerUpdatePayload (Underlying native function: ServerUpdatePayload 0x97bded4)
	void ServerUpdatePayload(struct FARFaceUpdatePayload& NewPayload); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveUpdate (Has no native function)
	void ReceiveUpdate(struct FARFaceUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveAdd (Has no native function)
	void ReceiveAdd(struct FARFaceUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)
};

