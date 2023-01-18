// Class /Script/FortniteUI.FortCampaignNewsWidget
// Size: 0x2f0
class UFortCampaignNewsWidget : public UCommonUserWidget
{
	class UClass* NewsTileClass; // 0x290 (0x8)
	class UClass* SpotlightNewsTileClass; // 0x298 (0x8)
	class UClass* SpecialEventNewsTileClass; // 0x2a0 (0x8)
	class UClass* SpotlightSpecialEventNewsTileClass; // 0x2a8 (0x8)
	class UClass* SpecialEvent2NewsTileClass; // 0x2b0 (0x8)
	class UClass* SpotlightSpecialEvent2NewsTileClass; // 0x2b8 (0x8)
	struct TArray<class UFortCampaignNewsTile*> NewsTiles; // 0x2c0 (0x10)
	class UCommonTextBlock* CommonTextNewsHeader; // 0x2d0 (0x8)
	class UScrollBox* ScrollBoxNewsContainer; // 0x2d8 (0x8)
	class UHorizontalBox* HorizontalBoxNewsContainer; // 0x2e0 (0x8)
	class UVerticalBox* VerticalBoxSpotlightNewsContainer; // 0x2e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCampaignNewsWidget.SingleItemConfiguration (Has no native function)
	void SingleItemConfiguration(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCampaignNewsWidget.ResetViewConfiguration (Has no native function)
	void ResetViewConfiguration(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCampaignNewsWidget.PlayNewsTilesIntro (Underlying native function: PlayNewsTilesIntro 0xa919554)
	void PlayNewsTilesIntro(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCampaignNewsWidget.LogMotDLobbyNavAction (Underlying native function: LogMotDLobbyNavAction 0xa919124)
	void LogMotDLobbyNavAction(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCampaignNewsWidget.LogMotDCloseAction (Underlying native function: LogMotDCloseAction 0xa919110)
	void LogMotDCloseAction(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCampaignNewsWidget.HandleNewsStyle (Has no native function)
	void HandleNewsStyle(enum EAthenaNewsStyle& NewsStyle); // (Event | Public | BlueprintEvent)
};

