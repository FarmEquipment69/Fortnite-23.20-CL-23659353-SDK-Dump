// Class /Script/FortniteUI.HUDLayoutToolFireModePanel
// Size: 0x538
class UHUDLayoutToolFireModePanel : public UFortActivatablePanel
{
	bool bSkipFireModeOptionTutorial; // 0x518 (0x1)
	unsigned char unreflected_519[0x7]; // 0x519 (0x7) 
	struct TArray<class UHUDLayoutToolFireModeButton*> FireModeButtons; // 0x520 (0x10)
	struct FFireModeData CachedFireModeData; // 0x530 (0x5)
	unsigned char padding_535[0x3]; // 0x535 (0x3)

	/* Functions */

	// Function /Script/FortniteUI.HUDLayoutToolFireModePanel.SetOpenStateForSettings (Underlying native function: SetOpenStateForSettings 0xa5bd34c)
	void SetOpenStateForSettings(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.HUDLayoutToolFireModePanel.SetOpenState (Underlying native function: SetOpenState 0xa5bd2c8)
	void SetOpenState(bool& bNewOpenState); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.HUDLayoutToolFireModePanel.SetFireModePreset (Underlying native function: SetFireModePreset 0xa5bd148)
	void SetFireModePreset(enum EFireModeType& NewFireMode); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.HUDLayoutToolFireModePanel.SetCustomFireMode (Underlying native function: SetCustomFireMode 0xa5bd02c)
	void SetCustomFireMode(bool& bAutofireEnabled, bool& bTapToShootEnabled, bool& bAlwaysShowDedicatedButton); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.HUDLayoutToolFireModePanel.SaveFireMode (Underlying native function: SaveFireMode 0xa5bcebc)
	void SaveFireMode(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.HUDLayoutToolFireModePanel.OnFireModeSelected (Underlying native function: OnFireModeSelected 0xa5bb790)
	void OnFireModeSelected(bool& bWasFireModeTutorialSkipped); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.HUDLayoutToolFireModePanel.IsFireModeAvailable (Underlying native function: IsFireModeAvailable 0xa5bb0b4)
	bool IsFireModeAvailable(enum EFireModeType& FireMode); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.HUDLayoutToolFireModePanel.GetFireMode (Underlying native function: GetFireMode 0xa5b8cbc)
	void GetFireMode(enum EFireModeType& FireMode, bool& bAutofireEnabled, bool& bTapToShootEnabled, bool& bAlwaysShowDedicatedButton); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

