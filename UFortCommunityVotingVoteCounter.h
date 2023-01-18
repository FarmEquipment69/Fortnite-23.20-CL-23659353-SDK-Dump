// Class /Script/FortniteUI.FortCommunityVotingVoteCounter
// Size: 0x2c8
class UFortCommunityVotingVoteCounter : public UCommonUserWidget
{
	bool HasOneOrMoreVote; // 0x290 (0x1)
	unsigned char unreflected_291[0x7]; // 0x291 (0x7) 
	class UCommonTextBlock* TextBlockCurrentVoteNumber; // 0x298 (0x8)
	class UCommonTextBlock* TextBlockNextVoteNumber; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x20]; // 0x2a8 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.FortCommunityVotingVoteCounter.PlayIncreaseVote (Has no native function)
	void PlayIncreaseVote(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingVoteCounter.PlayIdle (Has no native function)
	void PlayIdle(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingVoteCounter.PlayFadeOut (Has no native function)
	void PlayFadeOut(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingVoteCounter.PlayFadeIn (Has no native function)
	void PlayFadeIn(); // (Event | Protected | BlueprintEvent)
};

