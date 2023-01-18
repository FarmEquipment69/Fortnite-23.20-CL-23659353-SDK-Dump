// Class /Script/FortniteUI.FortCommunityVotingModalPopup
// Size: 0x590
class UFortCommunityVotingModalPopup : public UFortActivatablePanel
{
	struct FDataTableRowHandle ButtonInputAction; // 0x518 (0x10)
	class UClass* VotingScreenClass; // 0x528 (0x8)
	class UClass* CandidateClass; // 0x530 (0x8)
	unsigned char unreflected_538[0x28]; // 0x538 (0x28) 
	class UCommonButtonLegacy* ButtonVoteNow; // 0x560 (0x8)
	class UCommonButtonLegacy* ButtonClose; // 0x568 (0x8)
	class UCommonBorder* BorderTapToCloseZone; // 0x570 (0x8)
	class UDynamicEntryBox* EntryBoxOptions; // 0x578 (0x8)
	class UCommonTextBlock* TextBlockTitle; // 0x580 (0x8)
	class UCommonTextBlock* TextBlockBanner; // 0x588 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCommunityVotingModalPopup.HandleVoteButtonClicked (Underlying native function: HandleVoteButtonClicked 0xa57e3fc)
	void HandleVoteButtonClicked(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCommunityVotingModalPopup.HandleButtonArgless (Underlying native function: HandleButtonArgless 0xa57c688)
	void HandleButtonArgless(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortCommunityVotingModalPopup.HandleButton (Underlying native function: HandleButton 0xa57d460)
	void HandleButton(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortCommunityVotingModalPopup.Dismiss (Underlying native function: Dismiss 0xa57c688)
	void Dismiss(); // (Final | Native | Private)
};

