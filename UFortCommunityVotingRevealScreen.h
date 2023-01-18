// Class /Script/FortniteUI.FortCommunityVotingRevealScreen
// Size: 0x5c0
class UFortCommunityVotingRevealScreen : public UFortActivatablePanel
{
	float MaxRevealPlayRate; // 0x518 (0x4)
	float MinRevealPlayRate; // 0x51c (0x4)
	class UFortCommunityVotingManager* VotingManager; // 0x520 (0x8)
	struct TArray<class UFortCommunityVotingOptionReveal*> GeneratedOption; // 0x528 (0x10)
	struct TArray<class UFortCommunityVotingOptionReveal*> LoserOptions; // 0x538 (0x10)
	class UFortCommunityVotingOptionReveal* WinnerOption; // 0x548 (0x8)
	class UFortStoreFrontOfferInfo* WinnerOfferInfo; // 0x550 (0x8)
	unsigned char unreflected_558[0x38]; // 0x558 (0x38) 
	class UDynamicEntryBox* EntryBoxOptions; // 0x590 (0x8)
	class UCommonButtonLegacy* ButtonClose; // 0x598 (0x8)
	class UCommonButtonLegacy* ButtonDetail; // 0x5a0 (0x8)
	class URichTextBlock* RichTextItemReturns; // 0x5a8 (0x8)
	class UCommonBorder* BorderRarityColored; // 0x5b0 (0x8)
	class UFortCommunityVotingOptionReveal* ComOptionRevealWinner; // 0x5b8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCommunityVotingRevealScreen.StartFinalAnimation (Has no native function)
	void StartFinalAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingRevealScreen.StartFadeOutScreen (Has no native function)
	void StartFadeOutScreen(float& Delay); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingRevealScreen.StartFadeInAnimation (Has no native function)
	void StartFadeInAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingRevealScreen.HandleDetailButtonClicked (Underlying native function: HandleDetailButtonClicked 0xa57d880)
	void HandleDetailButtonClicked(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCommunityVotingRevealScreen.HandleCloseButtonClicked (Underlying native function: HandleCloseButtonClicked 0xa57d4dc)
	void HandleCloseButtonClicked(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCommunityVotingRevealScreen.Dismiss (Underlying native function: Dismiss 0xa57c69c)
	void Dismiss(); // (Final | Native | Public | BlueprintCallable)
};

