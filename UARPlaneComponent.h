// Class /Script/AugmentedReality.ARPlaneComponent
// Size: 0x3f0
class UARPlaneComponent : public UARComponent
{
	struct FARPlaneUpdatePayload ReplicatedPayload; // 0x320 (0xd0)

	/* Functions */

	// Function /Script/AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode (Underlying native function: SetPlaneComponentDebugMode 0x97bf504)
	static void SetPlaneComponentDebugMode(enum EPlaneComponentDebugMode& NewDebugMode); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors (Underlying native function: SetObjectClassificationDebugColors 0x97bf394)
	static void SetObjectClassificationDebugColors(struct TMap<enum EARObjectClassification, struct FLinearColor>& InColors); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AugmentedReality.ARPlaneComponent.ServerUpdatePayload (Underlying native function: ServerUpdatePayload 0x97be26c)
	void ServerUpdatePayload(struct FARPlaneUpdatePayload& NewPayload); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveUpdate (Has no native function)
	void ReceiveUpdate(struct FARPlaneUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveAdd (Has no native function)
	void ReceiveAdd(struct FARPlaneUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors (Underlying native function: GetObjectClassificationDebugColors 0x97bc530)
	static struct TMap<enum EARObjectClassification, struct FLinearColor> GetObjectClassificationDebugColors(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

