// Class /Script/FortniteUI.FortItemQuantityListEntryBase
// Size: 0x2b8
class UFortItemQuantityListEntryBase : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	int Quantity; // 0x298 (0x4)
	unsigned char padding_29c[0x1c]; // 0x29c (0x1c)

	/* Functions */

	// Function /Script/FortniteUI.FortItemQuantityListEntryBase.SetPreviewData (Underlying native function: SetPreviewData 0xa84b9f4)
	void SetPreviewData(struct FFortItemEntryPreviewData*& PreviewData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemQuantityListEntryBase.SetItemInstanceAndQuantity (Underlying native function: SetItemInstanceAndQuantity 0xa849f24)
	void SetItemInstanceAndQuantity(struct FFortItemInstanceQuantityPair& ItemQuantityPair, bool& ShouldTreatAsReset); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemQuantityListEntryBase.SetItemDefinitionAndQuantity (Underlying native function: SetItemDefinitionAndQuantity 0xa849b80)
	void SetItemDefinitionAndQuantity(struct FFortItemQuantityPair& ItemQuantityPair, bool& ShouldTreatAsReset); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemQuantityListEntryBase.RefreshListEntry (Has no native function)
	void RefreshListEntry(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemQuantityListEntryBase.PreviewStarted (Has no native function)
	void PreviewStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemQuantityListEntryBase.PreviewEnded (Has no native function)
	void PreviewEnded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemQuantityListEntryBase.IsBeingPreviewed (Underlying native function: IsBeingPreviewed 0xa848414)
	bool IsBeingPreviewed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemQuantityListEntryBase.HandleDifferentItemOrQuantitySetBP (Has no native function)
	void HandleDifferentItemOrQuantitySetBP(bool& IsBeingReset); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemQuantityListEntryBase.GetPreviewData (Underlying native function: GetPreviewData 0xa84793c)
	void GetPreviewData(struct FFortItemEntryPreviewData*& OutPreviewData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemQuantityListEntryBase.GetItemInstance (Underlying native function: GetItemInstance 0xa84763c)
	class UFortItem* GetItemInstance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemQuantityListEntryBase.GetItemDefinition (Underlying native function: GetItemDefinition 0xa847580)
	class UFortItemDefinition* GetItemDefinition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemQuantityListEntryBase.ClearPreviewData (Underlying native function: ClearPreviewData 0xa8463f8)
	void ClearPreviewData(); // (Final | Native | Public | BlueprintCallable)
};

