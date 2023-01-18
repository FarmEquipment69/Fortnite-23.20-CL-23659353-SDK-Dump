// Class /Script/FortniteUI.AthenaChallengeRewardTrackEntry
// Size: 0x2f8
class UAthenaChallengeRewardTrackEntry : public UCommonUserWidget
{
	struct FName MissionRewardParamName; // 0x290 (0x4)
	unsigned char unreflected_294[0x4]; // 0x294 (0x4) 
	struct TWeakObjectPtr<class UFortItemDefinition> RewardToRepresent; // 0x298 (0x28)
	int BundleRewardIndex; // 0x2c0 (0x4)
	unsigned char unreflected_2c4[0x4]; // 0x2c4 (0x4) 
	class UImage* ImageConnectorLeft; // 0x2c8 (0x8)
	class UImage* ImageConnectorRight; // 0x2d0 (0x8)
	class UAthenaChallengeRewardDisplayEntry* MissionReward; // 0x2d8 (0x8)
	unsigned char padding_2e0[0x18]; // 0x2e0 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.AthenaChallengeRewardTrackEntry.StyleChange (Has no native function)
	void StyleChange(bool& bViewingPrestige); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeRewardTrackEntry.SetToDefaultState (Has no native function)
	void SetToDefaultState(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeRewardTrackEntry.SetLastNodeInTrack (Has no native function)
	void SetLastNodeInTrack(bool& bIsLast); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeRewardTrackEntry.SetAsCurrentPreviewItem (Has no native function)
	void SetAsCurrentPreviewItem(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeRewardTrackEntry.NextRewardToEarn (Has no native function)
	void NextRewardToEarn(bool& bNext); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeRewardTrackEntry.CompletedNextNode (Has no native function)
	void CompletedNextNode(bool& bAnimate); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeRewardTrackEntry.CompletedCurrentNode (Has no native function)
	void CompletedCurrentNode(bool& bAnimate, bool& LastReward); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeRewardTrackEntry.ClearPreviewSelection (Has no native function)
	void ClearPreviewSelection(); // (Event | Public | BlueprintEvent)
};

