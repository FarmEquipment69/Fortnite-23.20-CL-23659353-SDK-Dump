// Class /Script/FortniteUI.ItemCardWidgetBase
// Size: 0x5b0
class UItemCardWidgetBase : public UButton
{
	class UFortGiftInfo* LootInfo; // 0x598 (0x8)
	class UFortMultiSizeItemCard* FortMultiSizeItemCardWidget; // 0x5a0 (0x8)
	unsigned char padding_5a8[0x8]; // 0x5a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.ItemCardWidgetBase.SetLootInfo (Underlying native function: SetLootInfo 0xa7e85fc)
	void SetLootInfo(class UFortGiftInfo*& LootInfo); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.ItemCardWidgetBase.OnLootInfoSet (Has no native function)
	void OnLootInfoSet(); // (Event | Public | BlueprintEvent)
};

