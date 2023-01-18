// Class /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker
// Size: 0x490
class UFortHeroLoadoutHeroPicker : public UFortItemPickerBase
{
	class UFortTabListWidgetBase_Legacy* ExternalFilterTabList; // 0x3d0 (0x8)
	struct TWeakObjectPtr<class UFortCampaignHeroLoadoutItem> TargetLoadoutItem; // 0x3d8 (0x8)
	struct FName TargetSlotName; // 0x3e0 (0x4)
	unsigned char unreflected_3e4[0x4]; // 0x3e4 (0x4) 
	class UClass* FilterTabButtonType; // 0x3e8 (0x8)
	struct TMap<struct FName, struct FFortTabButtonLabelInfo> TabButtonLabelInfoMap; // 0x3f0 (0x50)
	unsigned char padding_440[0x50]; // 0x440 (0x50)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.UpdateFilterTabList (Underlying native function: UpdateFilterTabList 0x759b8e0)
	void UpdateFilterTabList(struct FName& PreviouslySelectedTab); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.SetTargetLoadoutSlot (Underlying native function: SetTargetLoadoutSlot 0x759aeb0)
	void SetTargetLoadoutSlot(class UFortCampaignHeroLoadoutItem*& LoadoutItem, struct FName& SlotName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleFilterTabSelectedBP (Has no native function)
	void HandleFilterTabSelectedBP(struct FName& TabId); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleFilterTabSelected (Underlying native function: HandleFilterTabSelected 0x7597eb4)
	void HandleFilterTabSelected(struct FName& TabId); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleDifferentTargetLoadoutSetBP (Has no native function)
	void HandleDifferentTargetLoadoutSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.GetCurrentlySelectedTab (Underlying native function: GetCurrentlySelectedTab 0x75965ac)
	struct FName GetCurrentlySelectedTab(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.AssociateFilterTabList (Underlying native function: AssociateFilterTabList 0x7594fcc)
	void AssociateFilterTabList(class UFortTabListWidgetBase_Legacy*& ExternalFilterTabList); // (Final | Native | Public | BlueprintCallable)
};

