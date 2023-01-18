// ScriptStruct /Script/GameplayAbilities.GameplayEventData
// Size: 0xb0
struct FGameplayEventData
{
	struct FGameplayTag EventTag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class AActor* Instigator; // 0x8 (0x8)
	class AActor* Target; // 0x10 (0x8)
	class UObject* OptionalObject; // 0x18 (0x8)
	class UObject* OptionalObject2; // 0x20 (0x8)
	struct FGameplayEffectContextHandle ContextHandle; // 0x28 (0x18)
	struct FGameplayTagContainer InstigatorTags; // 0x40 (0x20)
	struct FGameplayTagContainer TargetTags; // 0x60 (0x20)
	float EventMagnitude; // 0x80 (0x4)
	unsigned char unreflected_84[0x4]; // 0x84 (0x4) 
	struct FGameplayAbilityTargetDataHandle TargetData; // 0x88 (0x28)
};

