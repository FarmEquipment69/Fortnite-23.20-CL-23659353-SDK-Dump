// Class /Script/FortniteUI.FortSpectatorLensSettingsTab
// Size: 0x510
class UFortSpectatorLensSettingsTab : public UFortReplayViewSettingsTabBase
{
	unsigned char unreflected_4e0[0x28]; // 0x4e0 (0x28) 
	class UCommonUserWidget* RotatorAutoExposure; // 0x508 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSpectatorLensSettingsTab.SetManualFocusDistance (Underlying native function: SetManualFocusDistance 0xa5d2b14)
	void SetManualFocusDistance(float& ManualFocusDistance); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortSpectatorLensSettingsTab.SetManualExposureBias (Underlying native function: SetManualExposureBias 0xa5d2a90)
	void SetManualExposureBias(float& ManualExposureBias); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortSpectatorLensSettingsTab.SetFocalLengthFromIdx (Underlying native function: SetFocalLengthFromIdx 0xa5d2670)
	void SetFocalLengthFromIdx(int& FocalLengthIdx); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortSpectatorLensSettingsTab.SetAutoFocusEnabled (Underlying native function: SetAutoFocusEnabled 0xa5d207c)
	void SetAutoFocusEnabled(bool& bAutoFocusEnabled); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortSpectatorLensSettingsTab.SetAutoExposureEnabled (Underlying native function: SetAutoExposureEnabled 0xa5d1fc8)
	void SetAutoExposureEnabled(bool& bAutoExposureEnabled); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortSpectatorLensSettingsTab.SetApertureFromIdx (Underlying native function: SetApertureFromIdx 0xa5d1cc4)
	void SetApertureFromIdx(int& ApertureIdx); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortSpectatorLensSettingsTab.OnManualFocusDistanceChanged (Has no native function)
	void OnManualFocusDistanceChanged(float& ManualFocusDistance); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSpectatorLensSettingsTab.OnManualExposureBiasChanged (Has no native function)
	void OnManualExposureBiasChanged(float& ManualExposureBias); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSpectatorLensSettingsTab.OnFocalLengthChanged (Has no native function)
	void OnFocalLengthChanged(struct TArray<struct FText>& FocalLengthTexts, int& PresetFocalLengthIdx); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortSpectatorLensSettingsTab.OnAutoFocusEnabledChanged (Has no native function)
	void OnAutoFocusEnabledChanged(bool& bAutoFocusEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSpectatorLensSettingsTab.OnAutoExposureEnabledChanged (Has no native function)
	void OnAutoExposureEnabledChanged(bool& bAutoExposureEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSpectatorLensSettingsTab.OnApertureChanged (Has no native function)
	void OnApertureChanged(int& PresetApertureIdx); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSpectatorLensSettingsTab.GetPresetApertureTexts (Underlying native function: GetPresetApertureTexts 0x139d000)
	void GetPresetApertureTexts(struct TArray<struct FText>& PresetApertureTexts); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSpectatorLensSettingsTab.GetMinMaxFocusDistance (Underlying native function: GetMinMaxFocusDistance 0x2a76050)
	void GetMinMaxFocusDistance(float& MinFocusDistance, float& MaxFocusDistance); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSpectatorLensSettingsTab.GetMinMaxExposure (Underlying native function: GetMinMaxExposure 0x29ca96c)
	void GetMinMaxExposure(float& MinExposure, float& MaxExposure); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

