// Class /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown
// Size: 0x3d8
class UFortMatchmakingPortalCountdown : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class UInputComponent* MatchmakingPortalInputComponent; // 0x3b0 (0x8)
	class UFortActivityScalingTextBlock* TextIslandName; // 0x3b8 (0x8)
	float CountdownTime; // 0x3c0 (0x4)
	unsigned char unreflected_3c4[0x4]; // 0x3c4 (0x4) 
	struct FMulticastInlineDelegate OnFinishedCountdown; // 0x3c8 (0x10)

	/* Functions */

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown.StartCountdown (Has no native function)
	void StartCountdown(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown.HandleCancelClicked (Underlying native function: HandleCancelClicked 0x7490f60)
	void HandleCancelClicked(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown.FinishTimer (Has no native function)
	void FinishTimer(); // (Event | Public | BlueprintCallable | BlueprintEvent)
};

