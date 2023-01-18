// Class /Script/SrirachaRanchUI.RadioPlayerWidgetBase
// Size: 0x320
class URadioPlayerWidgetBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x40]; // 0x2d0 (0x40) 
	struct FFortPrioritizedWidgetData PriorityData; // 0x310 (0x2)
	unsigned char unreflected_312[0x6]; // 0x312 (0x6) 
	class UStreamingRadioPlayerComponent* LastValidComp; // 0x318 (0x8)

	/* Functions */

	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.SetControllable (Has no native function)
	void SetControllable(bool& bCanControl); // (Event | Protected | BlueprintEvent)

	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnSourcePlaying (Has no native function)
	void OnSourcePlaying(class UStreamingRadioPlayerComponent*& Radio, struct FAthenaRadioStation& Source); // (Event | Protected | BlueprintEvent)

	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnSourceFinished (Has no native function)
	void OnSourceFinished(class UStreamingRadioPlayerComponent*& Radio, struct FAthenaRadioStation& Source); // (Event | Protected | BlueprintEvent)

	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnShouldShowDueToEntrance (Has no native function)
	void OnShouldShowDueToEntrance(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnRadioStopped (Has no native function)
	void OnRadioStopped(class UStreamingRadioPlayerComponent*& Radio, struct FAthenaRadioStation& LastSource); // (Event | Protected | BlueprintEvent)

	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnLoadingNewSource (Has no native function)
	void OnLoadingNewSource(class UStreamingRadioPlayerComponent*& Radio, struct FAthenaRadioStation& Source); // (Event | Protected | BlueprintEvent)

	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnFailedToOpenSource (Has no native function)
	void OnFailedToOpenSource(class UStreamingRadioPlayerComponent*& Radio, struct FAthenaRadioStation& Source); // (Event | Protected | BlueprintEvent)

	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnDisconnectFromComp (Has no native function)
	void OnDisconnectFromComp(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnControllerGainedNewFortPawn (Underlying native function: OnControllerGainedNewFortPawn 0x75496d8)
	void OnControllerGainedNewFortPawn(class AFortPawn*& FortPawn); // (Final | Native | Protected)

	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeExitedVehicle (Underlying native function: NativeExitedVehicle 0x75496c4)
	void NativeExitedVehicle(); // (Final | Native | Protected)

	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeEnteredVehicle (Underlying native function: NativeEnteredVehicle 0x75496b0)
	void NativeEnteredVehicle(); // (Final | Native | Protected)
};

