// Class /Script/FortniteUI.SettingsScreen
// Size: 0x588
class USettingsScreen : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x60]; // 0x518 (0x60) 
	class UFortSettingsPanel* SettingsPanel; // 0x578 (0x8)
	class UFortSettingRegistry* Registry; // 0x580 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.SettingsScreen.ShowSavingProgress (Has no native function)
	void ShowSavingProgress(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.SettingsScreen.SaveSettings (Underlying native function: SaveSettings 0xa8c3efc)
	void SaveSettings(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.SettingsScreen.ResetSettings (Underlying native function: ResetSettings 0xa8c3ee8)
	void ResetSettings(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.SettingsScreen.OnSettingsDirtyStateChanged (Has no native function)
	void OnSettingsDirtyStateChanged(bool& bSettingsDirty); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.SettingsScreen.NavigateToSettings (Underlying native function: NavigateToSettings 0xa8c3dc4)
	void NavigateToSettings(struct TArray<struct FName>& SettingsCollectionNames); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.SettingsScreen.HideSavingProgress (Has no native function)
	void HideSavingProgress(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.SettingsScreen.HaveSettingsBeenChanged (Underlying native function: HaveSettingsBeenChanged 0xa8c3dac)
	bool HaveSettingsBeenChanged(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.SettingsScreen.CloseSettings (Underlying native function: CloseSettings 0xa8c3b1c)
	void CloseSettings(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.SettingsScreen.AttemptToPopNavigation (Underlying native function: AttemptToPopNavigation 0xa8c3ae0)
	bool AttemptToPopNavigation(); // (Final | Native | Protected | BlueprintCallable)
};

