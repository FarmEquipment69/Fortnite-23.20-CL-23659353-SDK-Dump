// Class /Script/SpecialEventGameplayUI.FortGameplayCinematicWidget
// Size: 0x3c8
class UFortGameplayCinematicWidget : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	bool bSkipCinematics; // 0x3b0 (0x1)
	unsigned char padding_3b1[0x17]; // 0x3b1 (0x17)

	/* Functions */

	// Function /Script/SpecialEventGameplayUI.FortGameplayCinematicWidget.OnStartCinematic (Has no native function)
	void OnStartCinematic(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayUI.FortGameplayCinematicWidget.OnCinematicFinished (Underlying native function: OnCinematicFinished 0x76cbf1c)
	void OnCinematicFinished(); // (Final | Native | Protected | BlueprintCallable)
};

