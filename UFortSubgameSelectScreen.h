// Class /Script/FortniteUI.FortSubgameSelectScreen
// Size: 0x430
class UFortSubgameSelectScreen : public UCommonActivatableWidget
{
	bool bDebugVariable1; // 0x3a8 (0x1)
	unsigned char unreflected_3a9[0x7]; // 0x3a9 (0x7) 
	class UFortSubgameTile* SelectedTile; // 0x3b0 (0x8)
	class USoundBase* SoundOnActivated; // 0x3b8 (0x8)
	class USoundBase* SoundOnSelectedSubGame; // 0x3c0 (0x8)
	class UWidgetAnimation* BoundAnimIntro; // 0x3c8 (0x8)
	class UWidgetAnimation* BoundAnimOutro; // 0x3d0 (0x8)
	class UWidgetAnimation* SelectModeIdle; // 0x3d8 (0x8)
	class UImage* ImageSpinnerImage; // 0x3e0 (0x8)
	class UFortConsoleProfileWidget* XboxOneProfileWidgetProfileDisplay; // 0x3e8 (0x8)
	class UFortSubgameTile* SubgameTileBattleRoyale; // 0x3f0 (0x8)
	class UFortSubgameTile* SubgameTileCreative; // 0x3f8 (0x8)
	class UFortSubgameTile* SubgameTileCampaign; // 0x400 (0x8)
	class UCommonRichTextBlock* RichTextPerfModeWarning; // 0x408 (0x8)
	class UCommonButtonLegacy* ButtonAccountPicker; // 0x410 (0x8)
	class UClass* CampaignPurchaseScreenClass; // 0x418 (0x8)
	class UClass* LoadingContentModal; // 0x420 (0x8)
	unsigned char padding_428[0x8]; // 0x428 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSubgameSelectScreen.HandleOnPartyLeft (Underlying native function: HandleOnPartyLeft 0xa91883c)
	void HandleOnPartyLeft(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortSubgameSelectScreen.HandleOnMatchmakingComplete (Underlying native function: HandleOnMatchmakingComplete 0xa9187c0)
	void HandleOnMatchmakingComplete(enum EMatchmakingCompleteResult& Result); // (Final | Native | Private)
};

