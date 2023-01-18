// Class /Script/FortniteUI.FortSpectatorAmbientSettingsTab
// Size: 0x4f0
class UFortSpectatorAmbientSettingsTab : public UFortReplayViewSettingsTabBase
{
	unsigned char unreflected_4e0[0x8]; // 0x4e0 (0x8) 
	class UWidget* TimeOfDaySlider; // 0x4e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSpectatorAmbientSettingsTab.SetTimeOfDayPaused (Underlying native function: SetTimeOfDayPaused 0xa5d355c)
	void SetTimeOfDayPaused(bool& bPaused); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortSpectatorAmbientSettingsTab.SetTimeOfDay (Underlying native function: SetTimeOfDay 0xa5d34d8)
	void SetTimeOfDay(float& TimeOfDay); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortSpectatorAmbientSettingsTab.OnTimeOfDayPauseChanged (Has no native function)
	void OnTimeOfDayPauseChanged(bool& bPaused); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSpectatorAmbientSettingsTab.IsGeneralTimeOfDayManagerActive (Underlying native function: IsGeneralTimeOfDayManagerActive 0x240dcfc)
	bool IsGeneralTimeOfDayManagerActive(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSpectatorAmbientSettingsTab.GetCurrentTimeOfDay (Underlying native function: GetCurrentTimeOfDay 0x1310a80)
	float GetCurrentTimeOfDay(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)
};

