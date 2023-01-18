// Class /Script/FortniteUI.AthenaChallengeListEntry_Challenge
// Size: 0x2d0
class UAthenaChallengeListEntry_Challenge : public UAthenaChallengeListEntryBase
{
	unsigned char unreflected_2a8[0x10]; // 0x2a8 (0x10) 
	bool bHideProgressBar; // 0x2b8 (0x1)
	unsigned char unreflected_2b9[0x7]; // 0x2b9 (0x7) 
	class UCommonRichTextBlock* RichTextChallengeDesc; // 0x2c0 (0x8)
	class UAthenaChallengeProgressBar* ChallengeProgressObjectivesCompleted; // 0x2c8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaChallengeListEntry_Challenge.OnPartyAssistEnabledChanged (Has no native function)
	void OnPartyAssistEnabledChanged(bool& bIsPartyAssistEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeListEntry_Challenge.OnChallengeInfoSet (Has no native function)
	void OnChallengeInfoSet(bool& bIsComplete, bool& bIsLocked, bool& bIsGroupChallenge, bool& bCompact, bool& HideRewards); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeListEntry_Challenge.GetChallengeWeight (Underlying native function: GetChallengeWeight 0xa4e0c08)
	int GetChallengeWeight(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaChallengeListEntry_Challenge.BP_HandleIsTrackedChallengeChanged (Has no native function)
	void BPHandleIsTrackedChallengeChanged(bool& bIsTrackedChallenge); // (Event | Protected | BlueprintEvent)
};

