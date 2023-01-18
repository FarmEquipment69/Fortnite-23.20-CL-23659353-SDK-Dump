// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase
// Size: 0x2c8
class UFortAthenaAISpawnerDataComponent_GameplayBase : public UFortAthenaAISpawnerDataComponent
{
	bool bOverrideGlobalSpeedMultiplier; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FScalableFloat GlobalSpeedMultiplier; // 0x38 (0x28)
	struct FScalableFloat CanBeConverted; // 0x60 (0x28)
	struct FScalableFloat CanBeConvertedFromDBNO; // 0x88 (0x28)
	struct FScalableFloat ForceKillWhenUnconverted; // 0xb0 (0x28)
	struct FScalableFloat ForceKillWhenConverterDies; // 0xd8 (0x28)
	struct FScalableFloat CopyConverterSpecificRelations; // 0x100 (0x28)
	struct FScalableFloat RemoveFromAllFactions; // 0x128 (0x28)
	struct FScalableFloat ReleaseDistance; // 0x150 (0x28)
	struct FScalableFloat CheckReleaseConditionsTimeInterval; // 0x178 (0x28)
	struct FGameplayTagContainer AddToFactions; // 0x1a0 (0x20)
	struct FGameplayTagContainer RemoveFromFactions; // 0x1c0 (0x20)
	struct FScalableFloat PawnCullDistance; // 0x1e0 (0x28)
	struct TArray<class UFortAbilitySet*> AbilitySetsForConverted; // 0x208 (0x10)
	struct FTeleportSettings TeleportSettings; // 0x218 (0x38)
	bool bApplyTaggedNavFilters; // 0x250 (0x1)
	unsigned char unreflected_251[0x7]; // 0x251 (0x7) 
	struct FFortAITaggedNavFilterData NavFilterData; // 0x258 (0x60)
	bool bEnableDBNO; // 0x2b8 (0x1)
	struct TEnumAsByte<TInteractionType> DBNOInteractionType; // 0x2b9 (0x1)
	unsigned char unreflected_2ba[0x2]; // 0x2ba (0x2) 
	float DBNOInteractionDuration; // 0x2bc (0x4)
	bool bOnlyLeaderInteraction; // 0x2c0 (0x1)
	unsigned char padding_2c1[0x7]; // 0x2c1 (0x7)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.ShouldOverrideGlobalSpeedMultiplier (Underlying native function: ShouldOverrideGlobalSpeedMultiplier 0x8a64d0c)
	bool ShouldOverrideGlobalSpeedMultiplier(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.SetCopyConverterSpecificRelations (Underlying native function: SetCopyConverterSpecificRelations 0xa3ad1e4)
	void SetCopyConverterSpecificRelations(bool& bInCopyConverterSpecificRelations); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.SetCanBeConverted (Underlying native function: SetCanBeConverted 0xa3ad03c)
	void SetCanBeConverted(bool& bInCanBeConverted); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.PostOnSpawnedBP (Has no native function)
	void PostOnSpawnedBP(class APawn*& PawnAI); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.GetGlobalSpeedMultiplier (Underlying native function: GetGlobalSpeedMultiplier 0xa3ac204)
	float GetGlobalSpeedMultiplier(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

