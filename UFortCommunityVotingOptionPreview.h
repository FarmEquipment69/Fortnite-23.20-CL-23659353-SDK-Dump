// Class /Script/FortniteUI.FortCommunityVotingOptionPreview
// Size: 0x2c8
class UFortCommunityVotingOptionPreview : public UCommonUserWidget
{
	class UFortCommunityVotingManager* VotingManager; // 0x290 (0x8)
	class UImage* ImageMain; // 0x298 (0x8)
	class UCommonTextBlock* TextName; // 0x2a0 (0x8)
	class UCommonTextBlock* TextShortDescription; // 0x2a8 (0x8)
	class UCommonBorder* CommonBorderOwned; // 0x2b0 (0x8)
	class UVerticalBox* VerticalBoxOwned; // 0x2b8 (0x8)
	class UCommonLoadGuard* LoadGuard; // 0x2c0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCommunityVotingOptionPreview.PlayVotingAnimation (Has no native function)
	void PlayVotingAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingOptionPreview.PlayUnhoveredAnimation (Has no native function)
	void PlayUnhoveredAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCommunityVotingOptionPreview.PlayHoveredAnimation (Has no native function)
	void PlayHoveredAnimation(); // (Event | Public | BlueprintEvent)
};

