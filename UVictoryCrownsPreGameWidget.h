// Class /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget
// Size: 0x3e0
class UVictoryCrownsPreGameWidget : public UCommonActivatableWidget
{
	class UDynamicEntryBox* EntryBoxBearerList; // 0x3a8 (0x8)
	class UCommonActionWidget* TipActionWidget; // 0x3b0 (0x8)
	struct FDataTableRowHandle CloseObjectInputAction; // 0x3b8 (0x10)
	unsigned char padding_3c8[0x18]; // 0x3c8 (0x18)

	/* Functions */

	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.UnregisterCloseButtonInput (Underlying native function: UnregisterCloseButtonInput 0x77c6004)
	void UnregisterCloseButtonInput(); // (Final | Native | Private)

	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.StartFadeOut (Has no native function)
	void StartFadeOut(); // (Event | Protected | BlueprintEvent)

	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.RegisterCloseButtonInput (Underlying native function: RegisterCloseButtonInput 0x77c5f70)
	void RegisterCloseButtonInput(); // (Final | Native | Private)

	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.RebuildBearerList (Underlying native function: RebuildBearerList 0x77c5ed4)
	void RebuildBearerList(struct TArray<class AFortPlayerStateAthena*>& CrownBearerList); // (Final | Native | Private | HasOutParms)

	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.OnInputMethodChanged (Has no native function)
	void OnInputMethodChanged(enum ECommonInputType& CurrentInput); // (Event | Protected | BlueprintEvent)

	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.OnCloseActionsComplete (Underlying native function: OnCloseActionsComplete 0x77c5e08)
	void OnCloseActionsComplete(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.OnButtonCloseProgress (Has no native function)
	void OnButtonCloseProgress(float& Progress); // (Event | Protected | BlueprintEvent)

	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.OnButtonClose (Has no native function)
	void OnButtonClose(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.HandleGamePhaseStepChanged (Underlying native function: HandleGamePhaseStepChanged 0x77c5d28)
	void HandleGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Private | HasOutParms)

	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.FadeOutTimerFinished (Underlying native function: FadeOutTimerFinished 0x77c5b00)
	void FadeOutTimerFinished(); // (Final | Native | Private)
};

