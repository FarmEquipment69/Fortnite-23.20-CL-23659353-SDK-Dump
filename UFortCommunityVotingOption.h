// Class /Script/FortniteUI.FortCommunityVotingOption
// Size: 0x14c0
class UFortCommunityVotingOption : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	class UFortCommunityVotingManager* VotingManager; // 0x1438 (0x8)
	class UClass* PreviewDetailWidgetClass; // 0x1440 (0x8)
	unsigned char unreflected_1448[0x10]; // 0x1448 (0x10) 
	class UCommonButtonLegacy* ComOptionVote; // 0x1458 (0x8)
	class UCommonButtonLegacy* ComOptionDetails; // 0x1460 (0x8)
	class UFortCommunityVotingVoteCounter* FlameCounter; // 0x1468 (0x8)
	class UClass* VoteFeedbackClass; // 0x1470 (0x8)
	unsigned char unreflected_1478[0x30]; // 0x1478 (0x30) 
	class UFortCommunityVotingOptionPreview* ComOptionPreview; // 0x14a8 (0x8)
	class UOverlay* ComVoteFeedbackContainer; // 0x14b0 (0x8)
	unsigned char padding_14b8[0x8]; // 0x14b8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCommunityVotingOption.HaveVotesRemaining (Underlying native function: HaveVotesRemaining 0xa57e42c)
	bool HaveVotesRemaining(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCommunityVotingOption.EnableButtons (Has no native function)
	void EnableButtons(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingOption.DisableButtons (Has no native function)
	void DisableButtons(); // (Event | Protected | BlueprintEvent)
};

