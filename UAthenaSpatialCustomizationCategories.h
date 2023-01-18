// Class /Script/FortniteUI.AthenaSpatialCustomizationCategories
// Size: 0x460
class UAthenaSpatialCustomizationCategories : public UAthenaSpatialCustomizationSubscreenBase
{
	class UWidgetAnimation* IntroCategories; // 0x3c8 (0x8)
	struct TMap<struct FName, struct FAthenaSpatialCustomizationCategoryGroup> CategoryGroups; // 0x3d0 (0x50)
	class UAthenaSpatialCustomizationCategoryEntry* LastSelectedCategory; // 0x420 (0x8)
	unsigned char padding_428[0x38]; // 0x428 (0x38)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpatialCustomizationCategories.OnSetCaptureMode (Has no native function)
	void OnSetCaptureMode(bool& bCaptureMode); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpatialCustomizationCategories.BP_OnCategoryGroupProgress (Has no native function)
	void BPOnCategoryGroupProgress(struct FName& CategoryGroup, int& NumCategoriesFinalized); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpatialCustomizationCategories.BP_OnCategoriesSetup (Has no native function)
	void BPOnCategoriesSetup(int& TotalNumCategoriesFinalized); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpatialCustomizationCategories.AddCategoryGroup (Underlying native function: AddCategoryGroup 0xa797f40)
	void AddCategoryGroup(struct FName& CategoryGroup, struct TArray<class UAthenaSpatialCustomizationCategoryEntry*>& CategoryEntries); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

