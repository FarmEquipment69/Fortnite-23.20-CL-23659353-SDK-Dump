// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget
// Size: 0x408
class UFortPlayerAugmentInventoryInfoWidget : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	struct FText RarityTextFormat; // 0x3b0 (0x18)
	class UCommonTextBlock* TextItemName; // 0x3c8 (0x8)
	class UCommonTextBlock* TextItemRarity; // 0x3d0 (0x8)
	class UCommonTextBlock* TextItemCategory; // 0x3d8 (0x8)
	class UFortItemCategoryIndicator* ItemCategoryIndicator; // 0x3e0 (0x8)
	class UCommonTextBlock* TextItemDescription; // 0x3e8 (0x8)
	class UFortSocialAvatarIcon* IconLenderAvatarIcon; // 0x3f0 (0x8)
	class UFortLazyImage* ImageLenderSquadColor; // 0x3f8 (0x8)
	class UCommonTextBlock* TextBorrowingText; // 0x400 (0x8)

	/* Functions */

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget.OnItemRaritySet (Has no native function)
	void OnItemRaritySet(enum EFortRarity& Rarity, struct FFortRarityItemData& RarityItemData); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget.OnItemNewOrBorrowedSet (Has no native function)
	void OnItemNewOrBorrowedSet(bool& bIsNew, bool& bIsBorrowed); // (Event | Protected | BlueprintEvent)
};

