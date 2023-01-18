// Class /Script/FortniteUI.AthenaChallengeCountdownDisplay
// Size: 0x388
class UAthenaChallengeCountdownDisplay : public UUserWidget
{
	unsigned char unreflected_268[0x10]; // 0x268 (0x10) 
	struct FDateTime* UnlockTime; // 0x278 (0x8)
	enum ECountdownDisplay DisplayType; // 0x280 (0x1)
	unsigned char unreflected_281[0x7]; // 0x281 (0x7) 
	struct FTimerDisplayData DisplayData[0x4]; // 0x288 (0x38) (ARRAY) 
	unsigned char unreflected_368[0x18]; // 0x368 (0x18) 
	class UCommonTextBlock* TextTimeRemaining; // 0x380 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaChallengeCountdownDisplay.OnChallengeSet (Has no native function)
	void OnChallengeSet(struct FTimerDisplayData& DisplayStyle); // (Event | Public | HasOutParms | BlueprintEvent)
};

