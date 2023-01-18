// Class /Script/FortniteGame.FortMaterialStyleComponent
// Size: 0x160
class UFortMaterialStyleComponent : public UActorComponent
{
	bool bDefaultStyleEnabled; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	class UFortMaterialStyleSet* DefaultStyleSet; // 0xa8 (0x8)
	struct FName DefaultStyleName; // 0xb0 (0x4)
	float FiniteStyleDuration; // 0xb4 (0x4)
	struct FName DynamicMaterialSlotName; // 0xb8 (0x4)
	unsigned char unreflected_bc[0x4]; // 0xbc (0x4) 
	struct FMulticastInlineDelegate OnPrepareForNewStyleActivation; // 0xc0 (0x10)
	struct TArray<struct FRequestStyleParams> PendingRequestQueue; // 0xd0 (0x10)
	struct FActiveStyleInfo ActiveStyleInfo; // 0xe0 (0x40)
	struct FTimerHandle* ProcessRequestQueueTimerHandle; // 0x120 (0x8)
	struct FRequestStyleParams DefaultStyleRequest; // 0x128 (0x30)
	class UMaterialInstanceDynamic* DynamicMaterialInstance; // 0x158 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortMaterialStyleComponent.RequestStyleChange (Underlying native function: RequestStyleChange 0x8ab4e98)
	void RequestStyleChange(struct FRequestStyleParams& Request, enum EStyleRequestArbitrationPolicy& RequestArbitrationPolicy); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMaterialStyleComponent.GetDynamicMaterialInstance (Underlying native function: GetDynamicMaterialInstance 0x2d85a40)
	class UMaterialInstanceDynamic* GetDynamicMaterialInstance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMaterialStyleComponent.GetActiveStyleInfo (Underlying native function: GetActiveStyleInfo 0x8ab45d8)
	struct FActiveStyleInfo GetActiveStyleInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

