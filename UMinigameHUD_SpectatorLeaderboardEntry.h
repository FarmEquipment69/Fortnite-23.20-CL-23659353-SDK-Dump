// Class /Script/FortniteUI.MinigameHUD_SpectatorLeaderboardEntry
// Size: 0x2f0
class UMinigameHUD_SpectatorLeaderboardEntry : public UCommonUserWidget
{
	class UCommonTextBlock* TextStanding; // 0x290 (0x8)
	class UImage* ImageAvatar; // 0x298 (0x8)
	class UImage* ImageBackgroundBase; // 0x2a0 (0x8)
	class UImage* ImageBackgroundShape; // 0x2a8 (0x8)
	class UImage* ImageBackgroundShapeBottom; // 0x2b0 (0x8)
	class UCommonTextBlock* TextScore; // 0x2b8 (0x8)
	class UCommonTextBlock* TextEndScore; // 0x2c0 (0x8)
	class UCommonTextBlock* TextScoreOnly; // 0x2c8 (0x8)
	class UCommonTextBlock* TextScoreTime; // 0x2d0 (0x8)
	class UCommonTextBlock* TextSmallScoreTime; // 0x2d8 (0x8)
	class UClass* CachedMinigameTeamIdClass; // 0x2e0 (0x8)
	unsigned char unreflected_2e8[0x4]; // 0x2e8 (0x4) 
	enum ESpectatorLeaderboardEntryType CachedEntryType; // 0x2ec (0x1)
	unsigned char padding_2ed[0x3]; // 0x2ed (0x3)

	/* Functions */

	// Function /Script/FortniteUI.MinigameHUD_SpectatorLeaderboardEntry.SetCoinVisibility (Has no native function)
	void SetCoinVisibility(bool& bVisible); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.MinigameHUD_SpectatorLeaderboardEntry.OnStandingChanged (Has no native function)
	void OnStandingChanged(int& Standing, int& Score); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.MinigameHUD_SpectatorLeaderboardEntry.OnDisplayTypeChanged (Has no native function)
	void OnDisplayTypeChanged(enum ESpectatorLeaderboardEntryType& EntryType); // (Event | Protected | BlueprintEvent)
};

