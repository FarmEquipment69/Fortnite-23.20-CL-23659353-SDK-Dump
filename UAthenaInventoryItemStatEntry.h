// Class /Script/FortniteUI.AthenaInventoryItemStatEntry
// Size: 0x2c8
class UAthenaInventoryItemStatEntry : public UCommonUserWidget
{
	bool bValueIsInfinite; // 0x290 (0x1)
	unsigned char unreflected_291[0x7]; // 0x291 (0x7) 
	class UCommonTextBlock* TextStatName; // 0x298 (0x8)
	class UCommonTextBlock* TextStatValue; // 0x2a0 (0x8)
	class UCommonTextBlock* TextStatDeltaValue; // 0x2a8 (0x8)
	struct FText StatDeltaTextFormat; // 0x2b0 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.AthenaInventoryItemStatEntry.OnStatInitialized (Has no native function)
	void OnStatInitialized(float& Value, float& ComparisonValue, float& MinValue, float& MaxValue); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaInventoryItemStatEntry.OnItemRaritySet (Has no native function)
	void OnItemRaritySet(enum EFortRarity& ItemRarity, struct FFortRarityItemData& RarityItemData); // (Event | Protected | BlueprintEvent)
};

