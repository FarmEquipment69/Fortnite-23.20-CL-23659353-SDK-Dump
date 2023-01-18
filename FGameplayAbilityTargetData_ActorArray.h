// ScriptStruct /Script/GameplayAbilities.GameplayAbilityTargetData_ActorArray
// Size: 0xc0
struct FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10 (0xa0)
	struct TArray<struct TWeakObjectPtr<class AActor>> TargetActorArray; // 0xb0 (0x10)
};

