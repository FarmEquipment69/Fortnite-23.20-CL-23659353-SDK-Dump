// Class /Script/FortniteUI.FortCommunityVotingAvailableVotesWidget
// Size: 0x2d0
class UFortCommunityVotingAvailableVotesWidget : public UCommonUserWidget
{
	class UCommonTextBlock* TextBlockCurrentVoteNumber; // 0x290 (0x8)
	class UCommonTextBlock* TextBlockNextVoteNumber; // 0x298 (0x8)
	class UFortEventDateTimeTextBlock* DateTimeTextBlockVoteCountdown; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x28]; // 0x2a8 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.FortCommunityVotingAvailableVotesWidget.PlayIncreaseVote (Has no native function)
	void PlayIncreaseVote(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingAvailableVotesWidget.PlayIdle (Has no native function)
	void PlayIdle(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingAvailableVotesWidget.PlayEventOver (Has no native function)
	void PlayEventOver(float& StartValue); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingAvailableVotesWidget.PlayDecreaseVote (Has no native function)
	void PlayDecreaseVote(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingAvailableVotesWidget.PlayCountdown (Has no native function)
	void PlayCountdown(float& StartValue); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingAvailableVotesWidget.PlayAvailableVotes (Has no native function)
	void PlayAvailableVotes(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingAvailableVotesWidget.ApplyCurrentVoteNumber (Underlying native function: ApplyCurrentVoteNumber 0xa554c38)
	void ApplyCurrentVoteNumber(); // (Final | Native | Protected | BlueprintCallable)
};

