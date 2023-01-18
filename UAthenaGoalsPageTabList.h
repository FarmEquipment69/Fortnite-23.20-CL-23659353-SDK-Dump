// Class /Script/FortniteUI.AthenaGoalsPageTabList
// Size: 0x2d8
class UAthenaGoalsPageTabList : public UCommonUserWidget
{
	class UFortTabListWidgetBase_Legacy* TabListGoalCategories; // 0x290 (0x8)
	class UClass* TabButtonClass; // 0x298 (0x8)
	struct TArray<struct FGoalsPageCategoryTabData> GoalTabsData; // 0x2a0 (0x10)
	class UObject* DefaultTabDisplayAsset; // 0x2b0 (0x8)
	unsigned char padding_2b8[0x20]; // 0x2b8 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.AthenaGoalsPageTabList.SetTabName (Has no native function)
	void SetTabName(struct FText& DisplayName); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaGoalsPageTabList.HandleTabSelected (Underlying native function: HandleTabSelected 0xa5a36d0)
	void HandleTabSelected(struct FName& TabNameID); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGoalsPageTabList.HandleTabButtonCreated (Underlying native function: HandleTabButtonCreated 0xa5a3528)
	void HandleTabButtonCreated(struct FName& TabId, class UCommonButtonBase*& TabButton); // (Final | Native | Private)
};

