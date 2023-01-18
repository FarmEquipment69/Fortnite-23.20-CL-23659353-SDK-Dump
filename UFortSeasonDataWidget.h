// Class /Script/FortniteUI.FortSeasonDataWidget
// Size: 0x290
class UFortSeasonDataWidget : public UUserWidget
{
	float CurrentProgress; // 0x268 (0x4)
	int CurrentXP; // 0x26c (0x4)
	int XpToNextLevel; // 0x270 (0x4)
	int CurrentLevel; // 0x274 (0x4)
	class UAthenaChallengeRewards* LevelRewards; // 0x278 (0x8)
	class UFortSocialAvatarIcon* SocialAvatarIcon; // 0x280 (0x8)
	unsigned char padding_288[0x8]; // 0x288 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSeasonDataWidget.OnUpdatedRestedState (Has no native function)
	void OnUpdatedRestedState(bool& bIsRested); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSeasonDataWidget.OnSuperCharged (Has no native function)
	void OnSuperCharged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSeasonDataWidget.OnProgressUpdated (Has no native function)
	void OnProgressUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSeasonDataWidget.OnLevelChanged (Has no native function)
	void OnLevelChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSeasonDataWidget.OnBattlePassOwned (Has no native function)
	void OnBattlePassOwned(); // (Event | Protected | BlueprintEvent)
};

