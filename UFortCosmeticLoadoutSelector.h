// Class /Script/FortniteUI.FortCosmeticLoadoutSelector
// Size: 0x2b8
class UFortCosmeticLoadoutSelector : public UCommonUserWidget
{
	class UClass* NameLoadoutPopupClass; // 0x290 (0x8)
	class UHorizontalBox* HBoxInternalVisibilitySetter; // 0x298 (0x8)
	class UCommonButtonBase* ButtonPrev; // 0x2a0 (0x8)
	class UCommonButtonBase* ButtonNext; // 0x2a8 (0x8)
	class UCommonTextBlock* TextLoadoutName; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCosmeticLoadoutSelector.OnNumLoadoutsFound (Has no native function)
	void OnNumLoadoutsFound(int& NumLoadouts); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCosmeticLoadoutSelector.OnLoadoutSet (Has no native function)
	void OnLoadoutSet(int& Selection); // (Event | Protected | BlueprintEvent)
};

