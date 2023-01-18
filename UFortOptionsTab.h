// Class /Script/FortniteUI.FortOptionsTab
// Size: 0x3e0
class UFortOptionsTab : public UCommonActivatableWidget
{
	struct FMulticastInlineDelegate OnTabSettingChanged; // 0x3a8 (0x10)
	struct FMulticastInlineDelegate OnTabActivated; // 0x3b8 (0x10)
	struct FMulticastInlineDelegate OnTabDeactivated; // 0x3c8 (0x10)
	enum ESettingTab TabType; // 0x3d8 (0x1)
	unsigned char padding_3d9[0x7]; // 0x3d9 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.FortOptionsTab.UpdateOptionsTab (Has no native function)
	void UpdateOptionsTab(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortOptionsTab.TempNew_UpdateOptionsTab (Underlying native function: TempNew_UpdateOptionsTab 0x6a4bfa4)
	void TempNewUpdateOptionsTab(); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsTab.ResetOptionsToDefault (Underlying native function: ResetOptionsToDefault 0x6a4bfbc)
	void ResetOptionsToDefault(); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsTab.IsControllerDefaultInputType (Underlying native function: IsControllerDefaultInputType 0xa799d74)
	bool IsControllerDefaultInputType(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortOptionsTab.IsAthena (Underlying native function: IsAthena 0xa799d14)
	bool IsAthena(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsTab.DeactivateTab (Underlying native function: DeactivateTab 0x27a6fc8)
	void DeactivateTab(); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsTab.CenterOnTab (Has no native function)
	void CenterOnTab(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortOptionsTab.AreParentalControlsEnabled (Underlying native function: AreParentalControlsEnabled 0xa7983d4)
	bool AreParentalControlsEnabled(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsTab.ActivateTab (Underlying native function: ActivateTab 0x1d01d9c)
	void ActivateTab(); // (Native | Protected | BlueprintCallable)
};

