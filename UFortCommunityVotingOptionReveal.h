// Class /Script/FortniteUI.FortCommunityVotingOptionReveal
// Size: 0x2d0
class UFortCommunityVotingOptionReveal : public UCommonUserWidget
{
	unsigned char unreflected_290[0x28]; // 0x290 (0x28) 
	class UFortCommunityVotingManager* VotingManager; // 0x2b8 (0x8)
	class UImage* ImageMain; // 0x2c0 (0x8)
	class UImage* ImageDuplicate; // 0x2c8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCommunityVotingOptionReveal.StartRevealAnimation (Has no native function)
	void StartRevealAnimation(float& PlayRate); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingOptionReveal.RevealWinnerAnimation (Has no native function)
	void RevealWinnerAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingOptionReveal.OnWinnerRevealAnimationFinished (Underlying native function: OnWinnerRevealAnimationFinished 0xa580028)
	void OnWinnerRevealAnimationFinished(); // (Final | Native | Public | BlueprintCallable)
};

