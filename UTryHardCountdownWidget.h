// Class /Script/FortniteUI.TryHardCountdownWidget
// Size: 0x2e8
class UTryHardCountdownWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x8]; // 0x2d0 (0x8) 
	int NumToStartShowingAt; // 0x2d8 (0x4)
	unsigned char padding_2dc[0xc]; // 0x2dc (0xc)

	/* Functions */

	// Function /Script/FortniteUI.TryHardCountdownWidget.UpdateNumber (Has no native function)
	void UpdateNumber(int& NumRemaining); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.TryHardCountdownWidget.ShowWidget (Underlying native function: ShowWidget 0x87b3f74)
	void ShowWidget(int& NumRemaining); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.TryHardCountdownWidget.OnHandleSpectatingChanged (Underlying native function: OnHandleSpectatingChanged 0xa5a3d14)
	void OnHandleSpectatingChanged(class AFortPlayerStateZone*& SpectatingTarget); // (Final | Native | Protected)

	// Function /Script/FortniteUI.TryHardCountdownWidget.OnGamePhaseStepChanged (Underlying native function: OnGamePhaseStepChanged 0xa5a3ba0)
	void OnGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.TryHardCountdownWidget.IsShowing (Underlying native function: IsShowing 0x756feac)
	bool IsShowing(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteUI.TryHardCountdownWidget.HideWidget (Underlying native function: HideWidget 0xa4b02e8)
	void HideWidget(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)
};

