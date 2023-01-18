// Class /Script/FortniteUI.FortCreativeBossInfo
// Size: 0x360
class UFortCreativeBossInfo : public UMinigameWidgetBase
{
	bool bShowHealthbarIfLocalPlayerIsBoss; // 0x328 (0x1)
	unsigned char unreflected_329[0x7]; // 0x329 (0x7) 
	class UCommonTextBlock* TextPlayerName; // 0x330 (0x8)
	class UImage* ImageHealthBar; // 0x338 (0x8)
	class UImage* ImageShieldBar; // 0x340 (0x8)
	class UImage* ImageDBNOBar; // 0x348 (0x8)
	class AFortPlayerStateAthena* BossPlayerState; // 0x350 (0x8)
	unsigned char padding_358[0x8]; // 0x358 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeBossInfo.OnBossPlayerStateChanged (Underlying native function: OnBossPlayerStateChanged 0xa6660ec)
	void OnBossPlayerStateChanged(class AFortPlayerStateAthena*& PlayerState, class UCreativePlayerHealthInfoComponent*& HealthInfoComponent); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeBossInfo.HandleHitPointsChanged (Underlying native function: HandleHitPointsChanged 0xa6646c0)
	void HandleHitPointsChanged(class AFortPlayerState*& PlayerState, float& Health, float& HealthMax, float& Shield, float& ShieldMax); // (Final | Native | Private)
};

