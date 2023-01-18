// Class /Script/FortniteUI.FortCommunityVotingScreen
// Size: 0x5c0
class UFortCommunityVotingScreen : public UFortActivatablePanel
{
	struct FText RevealWinnerPopupTitle; // 0x518 (0x18)
	struct FText RevealWinnerPopupBanner; // 0x530 (0x18)
	class UClass* CommunityVotingModalPopupClass; // 0x548 (0x8)
	class UClass* CommunityVotingModalTutorialPopupClass; // 0x550 (0x8)
	struct FDataTableRowHandle BackInput; // 0x558 (0x10)
	class UFortCommunityVotingManager* VotingManager; // 0x568 (0x8)
	class UFortCommunityVotingOption* HighlightedOption; // 0x570 (0x8)
	unsigned char unreflected_578[0x8]; // 0x578 (0x8) 
	class UFortCommunityVotingCountdown* CountdownRemainingTime; // 0x580 (0x8)
	class UDynamicEntryBox* EntryBoxOptions; // 0x588 (0x8)
	class UCommonButtonLegacy* ComBackButton; // 0x590 (0x8)
	class UFortCommunityVotingAvailableVotesWidget* AvailableSparksWidget; // 0x598 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherVotingTip; // 0x5a0 (0x8)
	class UFortCommunityVotingThanksPopup* ComThanksForVotingMessage; // 0x5a8 (0x8)
	unsigned char padding_5b0[0x10]; // 0x5b0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortCommunityVotingScreen.HandleBackButton (Underlying native function: HandleBackButton 0xa57d3e4)
	void HandleBackButton(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortCommunityVotingScreen.FadeOutScreen (Has no native function)
	void FadeOutScreen(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingScreen.Dismiss (Underlying native function: Dismiss 0xa57c708)
	void Dismiss(); // (Final | Native | Private | BlueprintCallable)
};

