// Class /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget
// Size: 0x318
class UFortCollectionBookRewardCardWidget : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnDisplayedItemChangedEvent; // 0x290 (0x10)
	class UFortMultiSizeItemCard* ItemCardWidget; // 0x2a0 (0x8)
	class UWidget* MultiItemRewardOverlay; // 0x2a8 (0x8)
	class UWidget* ChoiceRewardOverlay; // 0x2b0 (0x8)
	class UWidget* CheckmarkImage; // 0x2b8 (0x8)
	float UpdateCardInterval; // 0x2c0 (0x4)
	enum EFortItemCardSize ItemCardSize; // 0x2c4 (0x1)
	bool bDisplayAsRewardCard; // 0x2c5 (0x1)
	unsigned char unreflected_2c6[0x2]; // 0x2c6 (0x2) 
	struct FFortRewardInfo RepresentedRewards; // 0x2c8 (0x30)
	struct TArray<class UFortItem*> DummyItems; // 0x2f8 (0x10)
	struct FTimerHandle* UpdateCardTimer; // 0x308 (0x8)
	unsigned char padding_310[0x8]; // 0x310 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget.SetRewards (Underlying native function: SetRewards 0x7573cc0)
	void SetRewards(struct FFortRewardInfo& Rewards); // (Native | Public | HasOutParms | BlueprintCallable)

	// DelegateFunction /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget.OnDisplayedItemChangedEvent__DelegateSignature (Has no native function)
	void OnDisplayedItemChangedEventDelegateSignature(class UFortItem*& DisplayedItem); // (MulticastDelegate | Public | Delegate)

	// Function /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget.HasRewards (Underlying native function: HasRewards 0x756fed4)
	bool HasRewards(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget.ClearRewards (Underlying native function: ClearRewards 0x756d618)
	void ClearRewards(); // (Native | Public | BlueprintCallable)
};

