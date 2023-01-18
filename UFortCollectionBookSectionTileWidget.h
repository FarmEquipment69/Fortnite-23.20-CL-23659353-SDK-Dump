// Class /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget
// Size: 0x14b0
class UFortCollectionBookSectionTileWidget : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	struct TWeakObjectPtr<class UClass> SlotWidgetClass; // 0x1438 (0x28)
	struct FMargin SlotWidgetPadding; // 0x1460 (0x10)
	struct TEnumAsByte<EHorizontalAlignment> SlotWidgetHorizontalAlignment; // 0x1470 (0x1)
	struct TEnumAsByte<EVerticalAlignment> SlotWidgetVerticalAlignment; // 0x1471 (0x1)
	unsigned char unreflected_1472[0x2]; // 0x1472 (0x2) 
	int MaxNumSlotsSupported; // 0x1474 (0x4)
	class UHorizontalBox* SlotBoxWidget; // 0x1478 (0x8)
	class UCommonTextBlock* SectionNameWidget; // 0x1480 (0x8)
	class UFortCollectionBookGenericRewardWidget* SectionRewardWidget; // 0x1488 (0x8)
	class UFortCollectionBookSection* AssociatedSection; // 0x1490 (0x8)
	struct TArray<class UFortCollectionBookSlotWidget*> SlotWidgets; // 0x1498 (0x10)
	unsigned char padding_14a8[0x8]; // 0x14a8 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnSectionSlotUpdate (Underlying native function: OnSectionSlotUpdate 0x757146c)
	void OnSectionSlotUpdate(int& NumFilledSlots, int& NumSlots, enum EFortCollectionBookState& SectionState); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnItemUnslotted (Underlying native function: OnItemUnslotted 0x7570d4c)
	void OnItemUnslotted(class UFortAccountItem*& ItemUnslotted, class UFortAccountItem*& OldSlottedItem, struct FName& SlotId); // (Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnItemSlotted (Underlying native function: OnItemSlotted 0x7570c84)
	void OnItemSlotted(class UFortAccountItem*& ItemSlotted, struct FName& SlotId); // (Native | Protected)
};

