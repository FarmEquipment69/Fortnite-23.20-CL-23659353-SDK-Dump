// Class /Script/FortniteGame.FortGameplayCueNotifyLoop_SandBurrow
// Size: 0xaa0
class AFortGameplayCueNotifyLoop_SandBurrow : public AFortGameplayCueNotify_Loop
{
	class UFortLayeredAudioComponent* LayeredAudioComp; // 0x960 (0x8)
	struct FGameplayCueParameters CachedGCParameters; // 0x968 (0xd0)
	class UFXSystemComponent* FXSpeedLinesComp; // 0xa38 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xa40 (0x8)
	float CurrentSpeed; // 0xa48 (0x4)
	bool bShouldShowTrailFX; // 0xa4c (0x1)
	bool bShouldShowSpeedLines; // 0xa4d (0x1)
	unsigned char unreflected_a4e[0x2]; // 0xa4e (0x2) 
	struct FScalableFloat MinimumSpeedToDamageBuildings; // 0xa50 (0x28)
	struct FScalableFloat MinimumSpeedToShowTrailFX; // 0xa78 (0x28)
};

