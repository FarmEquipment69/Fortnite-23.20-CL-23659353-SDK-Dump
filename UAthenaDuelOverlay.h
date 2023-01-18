// Class /Script/FortniteUI.AthenaDuelOverlay
// Size: 0x370
class UAthenaDuelOverlay : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x40]; // 0x2d0 (0x40) 
	class UCommonRichTextBlock* RichTextTitle; // 0x310 (0x8)
	class UCommonRichTextBlock* RichTextSubTitle; // 0x318 (0x8)
	class UImage* ImageChallengedNPCPortrait; // 0x320 (0x8)
	class UImage* ImageElimPortrait; // 0x328 (0x8)
	class UImage* ImageReward; // 0x330 (0x8)
	struct TWeakObjectPtr<class USoundBase> DuelStartedSound; // 0x338 (0x28)
	unsigned char unreflected_360[0x8]; // 0x360 (0x8) 
	struct FFortPrioritizedWidgetData PrioritizedWidgetData; // 0x368 (0x2)
	unsigned char padding_36a[0x6]; // 0x36a (0x6)

	/* Functions */

	// Function /Script/FortniteUI.AthenaDuelOverlay.OnShowOverlay (Has no native function)
	void OnShowOverlay(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaDuelOverlay.OnSetupForActivation (Has no native function)
	void OnSetupForActivation(enum EDuelState& DuelState, struct FFortColorPalette& RarityColorPalette); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaDuelOverlay.OnOutroOverlay (Has no native function)
	void OnOutroOverlay(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaDuelOverlay.HandleDuelUpdate (Underlying native function: HandleDuelUpdate 0xa50957c)
	void HandleDuelUpdate(enum EDuelState& DuelState, struct FDuelOverlayData& DuelOverlayData); // (Final | Native | Private | HasOutParms)
};

