// Class /Script/GameplayAbilities.GameplayCueNotify_Burst
// Size: 0x348
class UGameplayCueNotify_Burst : public UGameplayCueNotify_Static
{
	struct FGameplayCueNotify_SpawnCondition DefaultSpawnCondition; // 0x38 (0x38)
	struct FGameplayCueNotify_PlacementInfo DefaultPlacementInfo; // 0x70 (0x40)
	struct FGameplayCueNotify_BurstEffects BurstEffects; // 0xb0 (0x298)

	/* Functions */

	// Function /Script/GameplayAbilities.GameplayCueNotify_Burst.OnBurst (Has no native function)
	void OnBurst(class AActor*& Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // (Event | Protected | HasOutParms | BlueprintEvent | Const)
};

