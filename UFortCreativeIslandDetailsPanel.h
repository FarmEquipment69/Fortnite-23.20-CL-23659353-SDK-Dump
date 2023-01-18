// Class /Script/FortniteUI.FortCreativeIslandDetailsPanel
// Size: 0x430
class UFortCreativeIslandDetailsPanel : public UCommonUserWidget
{
	class UImage* ImageIsland; // 0x290 (0x8)
	class UImage* ImageLoadingSpinner; // 0x298 (0x8)
	class UScrollBox* ScrollBoxDetails; // 0x2a0 (0x8)
	class UCommonTextBlock* TextIslandDescription; // 0x2a8 (0x8)
	class UCommonTextBlock* TextCreator; // 0x2b0 (0x8)
	class UCommonTextBlock* TextIslandName; // 0x2b8 (0x8)
	class UCommonTextBlock* TextPublishedIslandCode; // 0x2c0 (0x8)
	class UCommonTextBlock* TextMaximumNumberOfPlayers; // 0x2c8 (0x8)
	class UCommonTextBlock* TextMatchmakingDescription; // 0x2d0 (0x8)
	unsigned char unreflected_2d8[0x8]; // 0x2d8 (0x8) 
	struct FSlateBrush DefaultImageIslandBrush; // 0x2e0 (0xc0)
	struct FText MaxNumberOfPlayerTextFormat; // 0x3a0 (0x18)
	struct FText MatchmakingOffText; // 0x3b8 (0x18)
	struct FText MatchmakingKeepFullText; // 0x3d0 (0x18)
	struct FText MatchmakingRespectPartiesTextFormat; // 0x3e8 (0x18)
	struct FDataTableRowHandle ScrollUpInputRowHandle; // 0x400 (0x10)
	struct FDataTableRowHandle ScrollDownInputRowHandle; // 0x410 (0x10)
	unsigned char padding_420[0x10]; // 0x420 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeIslandDetailsPanel.UpdateLinkCodeVisuals (Has no native function)
	void UpdateLinkCodeVisuals(class UFortGameActivity*& Activity); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeIslandDetailsPanel.ClearLinkCodeVisuals (Has no native function)
	void ClearLinkCodeVisuals(); // (Event | Protected | BlueprintEvent)
};

