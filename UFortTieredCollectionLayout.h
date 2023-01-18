// Class /Script/FortniteGame.FortTieredCollectionLayout
// Size: 0x118
class UFortTieredCollectionLayout : public UDataAsset
{
	unsigned char bUseTierAsRandomSeed; // 0x30 (0x1)
	unsigned char bFiniteTiers; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	int MaxNumberOfTiersAllowed; // 0x34 (0x4)
	int InitialTierUnlocked; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FTieredNamedCollectionProgressionData SpawnWaveProgressions; // 0x40 (0x18)
	struct FDifficultyCollectionProgressionData DifficultyProgressions; // 0x58 (0x18)
	struct FTieredNamedCollectionProgressionData ModifierProgressions; // 0x70 (0x18)
	struct FRewardBadgesCollectionProgressionData RewardBadgesProgression; // 0x88 (0x18)
	struct FCollectionLootSetData LootSetProgression; // 0xa0 (0x18)
	struct FText CollectionLayoutDisplayName; // 0xb8 (0x18)
	struct TWeakObjectPtr<class UFortTieredCollectionLayout> PrerequisiteLayout; // 0xd0 (0x28)
	struct FCurveTableRowHandle TierToMissionPointLookupTable; // 0xf8 (0x10)
	struct FGuid LayoutGUID; // 0x108 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortTieredCollectionLayout.ShouldUseTierAsRandomSeed (Underlying native function: ShouldUseTierAsRandomSeed 0x8eacb80)
	bool ShouldUseTierAsRandomSeed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTieredCollectionLayout.GetMissionPointsForTier (Underlying native function: GetMissionPointsForTier 0x8eaa3bc)
	int GetMissionPointsForTier(int& Tier); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTieredCollectionLayout.GetCollectionLayoutDisplayName (Underlying native function: GetCollectionLayoutDisplayName 0x8ea9db4)
	struct FText GetCollectionLayoutDisplayName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

