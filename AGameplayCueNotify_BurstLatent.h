// Class /Script/GameplayAbilities.GameplayCueNotify_BurstLatent
// Size: 0x648
class AGameplayCueNotify_BurstLatent : public AGameplayCueNotify_Actor
{
	struct FGameplayCueNotify_SpawnCondition DefaultSpawnCondition; // 0x2e0 (0x38)
	struct FGameplayCueNotify_PlacementInfo DefaultPlacementInfo; // 0x318 (0x40)
	struct FGameplayCueNotify_BurstEffects BurstEffects; // 0x358 (0x298)
	struct FGameplayCueNotify_SpawnResult BurstSpawnResults; // 0x5f0 (0x58)

	/* Functions */

	// Function /Script/GameplayAbilities.GameplayCueNotify_BurstLatent.OnBurst (Has no native function)
	void OnBurst(class AActor*& Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // (Event | Protected | HasOutParms | BlueprintEvent)
};

