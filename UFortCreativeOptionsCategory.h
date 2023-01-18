// Class /Script/FortniteUI.FortCreativeOptionsCategory
// Size: 0x2b0
class UFortCreativeOptionsCategory : public UUserWidget
{
	struct FCreativeOptionCategoryData OptionCategory; // 0x268 (0x20)
	struct TArray<class UFortCreativeOption*> CreativeOptions; // 0x288 (0x10)
	class UFortCreativeGlobalOptions* GlobalOptionsUI; // 0x298 (0x8)
	class UCommonListView* ListViewOptions; // 0x2a0 (0x8)
	class UCommonTextBlock* TextCategoryText; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeOptionsCategory.OnSelectionUpdated (Has no native function)
	void OnSelectionUpdated(class UFortMatchmakingKnobsSpinnerButton*& CurrentSelection); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeOptionsCategory.GetOptionsList (Underlying native function: GetOptionsList 0x27fec44)
	class UCommonListView* GetOptionsList(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

