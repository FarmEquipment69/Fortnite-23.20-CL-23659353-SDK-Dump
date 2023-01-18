// ScriptStruct /Script/FortniteGame.TieredWaveSetData
// Size: 0x1c8
struct FTieredWaveSetData
{
	int EDOIdx; // 0x0 (0x4)
	float BreatherBetweenWaves; // 0x4 (0x4)
	enum EWaveRules WaveRules; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	struct FGameplayTag EnemyTypeToKillMod; // 0xc (0x4)
	struct TArray<struct TWeakObjectPtr<class UFortMissionInfo>> WaveMissions; // 0x10 (0x10)
	float WaveLengthMod; // 0x20 (0x4)
	float NumKillsMod; // 0x24 (0x4)
	float KillPointsMod; // 0x28 (0x4)
	float DifficultyAddMod; // 0x2c (0x4)
	bool bDeferTemporaryModifiers; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TWeakObjectPtr<class UClass> OverrideSpawnPointsMultiplier; // 0x38 (0x28)
	struct TWeakObjectPtr<class UClass> OverrideSpawnPointsCurve; // 0x60 (0x28)
	struct TWeakObjectPtr<class UClass> OverrideSpawnProgression; // 0x88 (0x28)
	struct TWeakObjectPtr<class UClass> OverrideUtilitiesAdjustment; // 0xb0 (0x28)
	struct TWeakObjectPtr<class UClass> OverrideUtilitiesFree; // 0xd8 (0x28)
	struct TWeakObjectPtr<class UClass> OverrideUtilitiesLocked; // 0x100 (0x28)
	struct TWeakObjectPtr<class UClass> OverrideDistance; // 0x128 (0x28)
	struct TWeakObjectPtr<class UClass> OverrideDirectionNumber; // 0x150 (0x28)
	struct TWeakObjectPtr<class UClass> OverrideModifierTags; // 0x178 (0x28)
	struct TWeakObjectPtr<class UClass> OverrideTimedModifierTags; // 0x1a0 (0x28)
};

