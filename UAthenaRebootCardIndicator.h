// Class /Script/FortniteUI.AthenaRebootCardIndicator
// Size: 0x5d8
class UAthenaRebootCardIndicator : public UAthenaMarkedActorIndicator
{
	class UCommonTextBlock* TextPlayerName; // 0x5c8 (0x8)
	class UImage* ImagePlayerMarker; // 0x5d0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaRebootCardIndicator.SetupCountdown (Has no native function)
	void SetupCountdown(float& StartTimeLocalWorld, float& EndTimeLocalWorld); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaRebootCardIndicator.HandleDisplayForSelf (Has no native function)
	void HandleDisplayForSelf(bool& bSelf); // (Event | Protected | BlueprintEvent)
};

