// Class /Script/FortniteGame.FortZoneTheme
// Size: 0x318
class UFortZoneTheme : public UPrimaryDataAsset
{
	struct TWeakObjectPtr<class UClass> TheaterMapTileClass; // 0x30 (0x28)
	struct TWeakObjectPtr<class UWorld> ZoneToUse; // 0x58 (0x28)
	struct FText ZoneName; // 0x80 (0x18)
	struct FText ZoneDescription; // 0x98 (0x18)
	struct FText AbundantResources; // 0xb0 (0x18)
	enum EFortZoneType ZoneType; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x7]; // 0xc9 (0x7) 
	struct TWeakObjectPtr<class UClass> ZoneGameMode; // 0xd0 (0x28)
	struct FGameplayTagContainer ZoneTags; // 0xf8 (0x20)
	struct TWeakObjectPtr<class UClass> LobbyBeaconHostClass; // 0x118 (0x28)
	struct TWeakObjectPtr<class UFortCloudSaveItemDefinition> CloudSaveItemDefinition; // 0x140 (0x28)
	int ZoneIndex; // 0x168 (0x4)
	int PlaylistId; // 0x16c (0x4)
	int TeamSize; // 0x170 (0x4)
	int TeamCount; // 0x174 (0x4)
	int MaxPartySize; // 0x178 (0x4)
	int MaxPlayers; // 0x17c (0x4)
	float CriticalMissionEligibilityLength; // 0x180 (0x4)
	float CriticalMissionEligibilityGracePeriodLength; // 0x184 (0x4)
	struct FDeployableBaseSupportSettings DeployableBaseSettings; // 0x188 (0x98)
	unsigned char IgnoreGeneratedRewards; // 0x220 (0x1)
	unsigned char unreflected_221[0x7]; // 0x221 (0x7) 
	struct TWeakObjectPtr<class UClass> PlayerSpawnPadClass; // 0x228 (0x28)
	struct FGameplayTagContainer InitialPlayerSpawnTags; // 0x250 (0x20)
	struct FGameplayTagContainer BackupPlayerSpawnTags; // 0x270 (0x20)
	bool bOverrideConningText; // 0x290 (0x1)
	unsigned char unreflected_291[0x7]; // 0x291 (0x7) 
	struct FText ConningOverrideText; // 0x298 (0x18)
	struct TWeakObjectPtr<class UClass> MusicManagerClass; // 0x2b0 (0x28)
	class UFortMusicManagerBank* MusicManagerBank; // 0x2d8 (0x8)
	struct TWeakObjectPtr<class UTexture2D> BackgroundImage; // 0x2e0 (0x28)
	struct TArray<struct FZoneThemeDifficultyProperties> DifficultyProperties; // 0x308 (0x10)
};
