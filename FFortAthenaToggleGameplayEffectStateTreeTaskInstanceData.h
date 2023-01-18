// ScriptStruct /Script/FortniteAI.FortAthenaToggleGameplayEffectStateTreeTaskInstanceData
// Size: 0xc8
struct FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData
{
	class AActor* Actor; // 0x0 (0x8)
	class AActor* TargetActor; // 0x8 (0x8)
	struct TArray<class UClass*> GameplayEffectClassesToAdd; // 0x10 (0x10)
	bool bAutomaticallyRemoveAddedEffectsOnExit; // 0x20 (0x1)
	unsigned char unreflected_21[0x7]; // 0x21 (0x7) 
	struct TArray<class UClass*> GameplayEffectClassesToRemove; // 0x28 (0x10)
	struct FGameplayTagContainer GameplayEffectsByTagsToRemove; // 0x38 (0x20)
	struct FGameplayTagContainer GameplayEffectsBySourceTagsToRemove; // 0x58 (0x20)
	struct FGameplayTagContainer GameplayEffectsByAppliedTagsToRemove; // 0x78 (0x20)
	struct FGameplayTagContainer GameplayEffectsByGrantedTagsToRemove; // 0x98 (0x20)
	unsigned char padding_b8[0x10]; // 0xb8 (0x10)
};

