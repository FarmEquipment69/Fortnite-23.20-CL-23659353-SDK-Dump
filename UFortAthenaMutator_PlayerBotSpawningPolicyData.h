// Class /Script/FortniteGame.FortAthenaMutator_PlayerBotSpawningPolicyData
// Size: 0x1b8
class UFortAthenaMutator_PlayerBotSpawningPolicyData : public UFortAthenaMutator_SpawningPolicyData
{
	bool bUseCustomizationInEditor; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x7]; // 0xb1 (0x7) 
	class UClass* PlayerBotPawn; // 0xb8 (0x8)
	struct FScalableFloat Skill; // 0xc0 (0x28)
	struct TArray<class UClass*> SkillSetOverrideClasses; // 0xe8 (0x10)
	class UFortAthenaAIBotInventoryItems* StartupInventory; // 0xf8 (0x8)
	class AFortGameModeAthena* CachedGameMode; // 0x100 (0x8)
	float MaxTraceHeight; // 0x108 (0x4)
	float MinTraceHeight; // 0x10c (0x4)
	float InitialSpawnDelay; // 0x110 (0x4)
	float SpawnDelay; // 0x114 (0x4)
	struct TWeakObjectPtr<class UFortAthenaAIBotCosmeticData> CosmeticCustomizationData; // 0x118 (0x28)
	struct FScalableFloat DefaultCosmeticLibraryWeight; // 0x140 (0x28)
	struct TWeakObjectPtr<class UDataTable> CosmeticLibraryWeightRegionOverride; // 0x168 (0x28)
	struct TWeakObjectPtr<class UClass> AISpawnerData; // 0x190 (0x28)
};

