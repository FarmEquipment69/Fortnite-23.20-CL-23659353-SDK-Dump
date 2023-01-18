// Class /Script/FortniteUI.AthenaAerialVOMute
// Size: 0x2e0
class UAthenaAerialVOMute : public UFortHUDElementWidget
{
	class UFortKeybindWidget* KeyBind; // 0x2d0 (0x8)
	class UCommonTextBlock* TextFeedback; // 0x2d8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaAerialVOMute.OnVOMuteStateChanged (Has no native function)
	void OnVOMuteStateChanged(bool& bIsMuted); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaAerialVOMute.OnVOMuteHoldStarted (Has no native function)
	void OnVOMuteHoldStarted(float& Duration); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaAerialVOMute.OnVOMuteHoldEnded (Has no native function)
	void OnVOMuteHoldEnded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaAerialVOMute.HandleQuestVOPlayStateChanged (Underlying native function: HandleQuestVOPlayStateChanged 0xa50a1b8)
	void HandleQuestVOPlayStateChanged(bool& bIsPlaying); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaAerialVOMute.HandleQuestVOMuteStateChanged (Underlying native function: HandleQuestVOMuteStateChanged 0xa50a1b8)
	void HandleQuestVOMuteStateChanged(bool& bIsMuted); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaAerialVOMute.HandleQuestVOMuteHoldStarted (Underlying native function: HandleQuestVOMuteHoldStarted 0xa50a134)
	void HandleQuestVOMuteHoldStarted(float& Duration); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaAerialVOMute.HandleQuestVOMuteHoldEnded (Underlying native function: HandleQuestVOMuteHoldEnded 0xa50a0ec)
	void HandleQuestVOMuteHoldEnded(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaAerialVOMute.HandleKeybindsChanged (Underlying native function: HandleKeybindsChanged 0xa509a14)
	void HandleKeybindsChanged(); // (Final | Native | Private)
};

