// ScriptStruct /Script/FortniteGame.MashAISpecialEncounterData
// Size: 0x58
struct FMashAISpecialEncounterData
{
	enum EMashAISpecialEncounterType EncounterType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class UFortDifficultyEncounterSettings* DifficultyEncounterSettings; // 0x8 (0x8)
	struct FPrimaryAssetId* AIBotSpawnerDataAssetId; // 0x10 (0x8)
	class UEnvQuery* AIBotSpawnLocationQuery; // 0x18 (0x8)
	struct FScalableFloat AIBotSkillValue; // 0x20 (0x28)
	struct TArray<class UClass*> InitialGameplayEffectByPlayerCount; // 0x48 (0x10)
};

