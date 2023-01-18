// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget
// Size: 0x2e8
class UFortPlayerAugmentInfoEntryWidget : public UCommonUserWidget
{
	struct FText RarityTextFormat; // 0x290 (0x18)
	class UCommonTextBlock* TextAugmentName; // 0x2a8 (0x8)
	class UCommonTextBlock* TextAugmentRarity; // 0x2b0 (0x8)
	class UCommonTextBlock* TextAugmentCategory; // 0x2b8 (0x8)
	class UFortItemCategoryIndicator* ItemCategoryIndicator; // 0x2c0 (0x8)
	class UCommonTextBlock* TextAugmentDescription; // 0x2c8 (0x8)
	class UFortSocialAvatarIcon* IconLenderAvatarIcon; // 0x2d0 (0x8)
	class UFortLazyImage* ImageLenderSquadColor; // 0x2d8 (0x8)
	class UCommonTextBlock* TextBorrowingText; // 0x2e0 (0x8)

	/* Functions */

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.UpdateAugment (Underlying native function: UpdateAugment 0x5b2f660)
	void UpdateAugment(class UFortPlayerAugmentItemDefinition*& AugmentItemDefinition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemRaritySet (Has no native function)
	void OnItemRaritySet(enum EFortRarity& Rarity, struct FFortRarityItemData& RarityItemData); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemPinColorSet (Has no native function)
	void OnItemPinColorSet(struct FLinearColor& PinColor); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemNewOrBorrowedSet (Has no native function)
	void OnItemNewOrBorrowedSet(bool& bIsNew, bool& bIsBorrowed); // (Event | Protected | BlueprintEvent)
};

