// ScriptStruct /Script/GameplayAbilities.GameplayCueParameters
// Size: 0xd0
struct FGameplayCueParameters
{
	float NormalizedMagnitude; // 0x0 (0x4)
	float RawMagnitude; // 0x4 (0x4)
	struct FGameplayEffectContextHandle EffectContext; // 0x8 (0x18)
	struct FGameplayTag MatchedTagName; // 0x20 (0x4)
	struct FGameplayTag OriginalTag; // 0x24 (0x4)
	struct FGameplayTagContainer AggregatedSourceTags; // 0x28 (0x20)
	struct FGameplayTagContainer AggregatedTargetTags; // 0x48 (0x20)
	struct FVector_NetQuantize10 Location; // 0x68 (0x18)
	struct FVector_NetQuantizeNormal Normal; // 0x80 (0x18)
	struct TWeakObjectPtr<class AActor> Instigator; // 0x98 (0x8)
	struct TWeakObjectPtr<class AActor> EffectCauser; // 0xa0 (0x8)
	struct TWeakObjectPtr<class UObject> SourceObject; // 0xa8 (0x8)
	struct TWeakObjectPtr<class UPhysicalMaterial> PhysicalMaterial; // 0xb0 (0x8)
	int GameplayEffectLevel; // 0xb8 (0x4)
	int AbilityLevel; // 0xbc (0x4)
	struct TWeakObjectPtr<class USceneComponent> TargetAttachComponent; // 0xc0 (0x8)
	bool bReplicateLocationWhenUsingMinimalRepProxy; // 0xc8 (0x1)
	unsigned char padding_c9[0x7]; // 0xc9 (0x7)
};

