// Class /Script/FortniteGame.FortAthenaMutator_GG
// Size: 0x518
class AFortAthenaMutator_GG : public AFortAthenaMutator
{
	struct FScalableFloat UseInfiniteAmmo; // 0x330 (0x28)
	struct FScalableFloat GameIsReverse; // 0x358 (0x28)
	struct FScalableFloat bShareSquadKills; // 0x380 (0x28)
	struct FScalableFloat FinalTierSize; // 0x3a8 (0x28)
	struct FScalableFloat ElimsWithFinalTierToWin; // 0x3d0 (0x28)
	struct TArray<struct FGunGameGunEntry> WeaponEntries; // 0x3f8 (0x10)
	int ScoreToWin; // 0x408 (0x4)
	unsigned char unreflected_40c[0x4]; // 0x40c (0x4) 
	struct TArray<struct FAthenaGameMessageData> IntroMessages; // 0x410 (0x10)
	class AActor* CachedContext; // 0x420 (0x8)
	struct TMap<int, struct FGunGameGunEntries> AwardEntriesAtElimMap; // 0x428 (0x50)
	unsigned char unreflected_478[0x10]; // 0x478 (0x10) 
	struct TMap<class AFortPlayerStateAthena*, struct FGunGamePlayerData> PlayerData; // 0x488 (0x50)
	struct FMulticastInlineDelegate OnLocalPlayerAwardedWeapon; // 0x4d8 (0x10)
	struct FMulticastInlineDelegate OnOtherPlayerAwardedWeapon; // 0x4e8 (0x10)
	unsigned char padding_4f8[0x20]; // 0x4f8 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_GG.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x84cf970)
	void OnGamePhaseChanged(enum EAthenaGamePhase& Phase); // (Final | 0x00000002 | Native | Private)
};

