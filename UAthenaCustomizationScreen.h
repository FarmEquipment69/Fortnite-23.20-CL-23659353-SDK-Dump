// Class /Script/FortniteUI.AthenaCustomizationScreen
// Size: 0xb68
class UAthenaCustomizationScreen : public UFortItemPreviewScreen
{
	bool bCustomizationSelectionBeingProcessed; // 0x668 (0x1)
	unsigned char unreflected_669[0x7]; // 0x669 (0x7) 
	struct FAthenaCustomizationParams CustomizationParams; // 0x670 (0x48)
	enum EAthenaCustomizationCategory InitialCustomizationCategory; // 0x6b8 (0x1)
	unsigned char unreflected_6b9[0x7]; // 0x6b9 (0x7) 
	struct FText CategoryDisplayNames[0x17]; // 0x6c0 (0x18) (ARRAY) 
	struct FText ItemTypeDisplayNames[0x17]; // 0x8e8 (0x18) (ARRAY) 
	unsigned char unreflected_b10[0x18]; // 0xb10 (0x18) 
	class UClass* ItemSelectorScreenClass; // 0xb28 (0x8)
	class UAthenaItemSelectorScreenBase* ItemSelectorScreen; // 0xb30 (0x8)
	unsigned char unreflected_b38[0x8]; // 0xb38 (0x8) 
	struct FDataTableRowHandle OpenNameLoadoutInputAction; // 0xb40 (0x10)
	class UWidgetAnimation* BoundAnimIntro; // 0xb50 (0x8)
	class UWidgetAnimation* BoundAnimOutro; // 0xb58 (0x8)
	class UFortCosmeticLoadoutSelector* LoadoutSelector; // 0xb60 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCustomizationScreen.ShowLockerSlot (Underlying native function: ShowLockerSlot 0xa48e13c)
	void ShowLockerSlot(enum EAthenaCustomizationCategory& CustomizationCategory, int& SlotIndex, bool& bCanShowEmpty); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationScreen.ShiftItemsVariantOption (Underlying native function: ShiftItemsVariantOption 0x81210cc)
	void ShiftItemsVariantOption(class UAthenaCosmeticAccountItem*& Item, int& VariantChannelIndex); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationScreen.SetCustomizationSelectionBeingProcessed (Underlying native function: SetCustomizationSelectionBeingProcessed 0xa48de1c)
	void SetCustomizationSelectionBeingProcessed(bool& bIsBeingProcessed); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationScreen.OnLoadoutChanged (Has no native function)
	void OnLoadoutChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationScreen.GetItemTypeDisplayNames (Underlying native function: GetItemTypeDisplayNames 0xa48bc78)
	struct FText GetItemTypeDisplayNames(enum EAthenaCustomizationCategory& InCategory); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationScreen.GetFavoriteItemForCategory (Underlying native function: GetFavoriteItemForCategory 0xa48b9f4)
	class UFortItem* GetFavoriteItemForCategory(enum EAthenaCustomizationCategory& CustomizationType, int& SubslotIndex); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationScreen.GetCategoryDisplayName (Underlying native function: GetCategoryDisplayName 0xa48b824)
	struct FText GetCategoryDisplayName(enum EAthenaCustomizationCategory& InCategory); // (Final | Native | Protected | BlueprintCallable)
};

