// Class /Script/SaveTheWorldUI.FortCollectionBookSlotWidget
// Size: 0x3b8
class UFortCollectionBookSlotWidget : public UCommonUserWidget
{
	unsigned char unreflected_290[0x10]; // 0x290 (0x10) 
	enum EFortItemCardSize ItemCardSize; // 0x2a0 (0x1)
	bool bIsRewardCard; // 0x2a1 (0x1)
	unsigned char unreflected_2a2[0x6]; // 0x2a2 (0x6) 
	class UFortMultiSizeItemCard* ItemCardWidget; // 0x2a8 (0x8)
	class UWidget* UnslottedOverlayWidget; // 0x2b0 (0x8)
	class UWidget* ReadyToSlotOverlayWidget; // 0x2b8 (0x8)
	class UWidget* UnslottedButReadyOverlayWidget; // 0x2c0 (0x8)
	struct FName SlotRowName; // 0x2c8 (0x4)
	unsigned char unreflected_2cc[0x4]; // 0x2cc (0x4) 
	struct FText ItemAvailableToSlotText; // 0x2d0 (0x18)
	struct FText NoItemsAvailableToSlotText; // 0x2e8 (0x18)
	struct FText HigherQualityItemsAvailableToSlotAndUpgradeAvailableText; // 0x300 (0x18)
	struct FText HigherQualityItemsAvailableToSlotAndEvolveAvailableText; // 0x318 (0x18)
	struct FText HigherQualityItemsAvailableToSlotText; // 0x330 (0x18)
	struct FText ItemInSlotFullyUpgradedText; // 0x348 (0x18)
	struct FText ItemInSlotCanBeUpgradedText; // 0x360 (0x18)
	struct FText ItemInSlotCanBeEvolvedText; // 0x378 (0x18)
	class UFortItem* SlottedItemRepresentation; // 0x390 (0x8)
	unsigned char padding_398[0x20]; // 0x398 (0x20)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.OnItemDestroyed (Underlying native function: OnItemDestroyed 0x7570c70)
	void OnItemDestroyed(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.OnItemCardUpdated (Has no native function)
	void OnItemCardUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.IsItemSlotted (Underlying native function: IsItemSlotted 0x75700c8)
	bool IsItemSlotted(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.HasItemsToSlot (Underlying native function: HasItemsToSlot 0x756fdcc)
	bool HasItemsToSlot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.HandleUnslotItemComplete (Underlying native function: HandleUnslotItemComplete 0x756fb68)
	void HandleUnslotItemComplete(class UFortAccountItem*& UnslottedItem, class UFortAccountItem*& OldItem, struct FName& SlotId); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.HandleSlottedItemOperationComplete (Underlying native function: HandleSlottedItemOperationComplete 0x756faa4)
	void HandleSlottedItemOperationComplete(class UFortAccountItem*& NewItem, struct FName& TemplateId); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.HandleResearchItemComplete (Underlying native function: HandleResearchItemComplete 0x756f738)
	void HandleResearchItemComplete(class UFortAccountItem*& ResearchedItem, struct FString& SlotId); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.GetSlottedItemRepresentation (Underlying native function: GetSlottedItemRepresentation 0x756e1f8)
	class UFortItem* GetSlottedItemRepresentation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.GetSlotRowName (Underlying native function: GetSlotRowName 0x276de64)
	struct FName GetSlotRowName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.GetNumItemsToSlot (Underlying native function: GetNumItemsToSlot 0x756dfac)
	int GetNumItemsToSlot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature (Has no native function)
	void FortCollectionBookSlottedItemUpdatedDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)
};

