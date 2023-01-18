// Class /Script/GameplayAbilities.GameplayCueNotify_Looping
// Size: 0xe78
class AGameplayCueNotify_Looping : public AGameplayCueNotify_Actor
{
	struct FGameplayCueNotify_SpawnCondition DefaultSpawnCondition; // 0x2e0 (0x38)
	struct FGameplayCueNotify_PlacementInfo DefaultPlacementInfo; // 0x318 (0x40)
	struct FGameplayCueNotify_BurstEffects ApplicationEffects; // 0x358 (0x298)
	struct FGameplayCueNotify_SpawnResult ApplicationSpawnResults; // 0x5f0 (0x58)
	struct FGameplayCueNotify_LoopingEffects LoopingEffects; // 0x648 (0x1f0)
	struct FGameplayCueNotify_SpawnResult LoopingSpawnResults; // 0x838 (0x58)
	struct FGameplayCueNotify_BurstEffects RecurringEffects; // 0x890 (0x298)
	struct FGameplayCueNotify_SpawnResult RecurringSpawnResults; // 0xb28 (0x58)
	struct FGameplayCueNotify_BurstEffects RemovalEffects; // 0xb80 (0x298)
	struct FGameplayCueNotify_SpawnResult RemovalSpawnResults; // 0xe18 (0x58)
	unsigned char padding_e70[0x8]; // 0xe70 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnRecurring (Has no native function)
	void OnRecurring(class AActor*& Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnApplication (Has no native function)
	void OnApplication(class AActor*& Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // (Event | Protected | HasOutParms | BlueprintEvent)
};

