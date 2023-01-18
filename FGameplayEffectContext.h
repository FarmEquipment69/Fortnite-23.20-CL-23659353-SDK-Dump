// ScriptStruct /Script/GameplayAbilities.GameplayEffectContext
// Size: 0x80
struct FGameplayEffectContext
{
	struct TWeakObjectPtr<class AActor> Instigator; // 0x8 (0x8)
	struct TWeakObjectPtr<class AActor> EffectCauser; // 0x10 (0x8)
	struct TWeakObjectPtr<class UGameplayAbility> AbilityCDO; // 0x18 (0x8)
	struct TWeakObjectPtr<class UGameplayAbility> AbilityInstanceNotReplicated; // 0x20 (0x8)
	int AbilityLevel; // 0x28 (0x4)
	struct TWeakObjectPtr<class UObject> SourceObject; // 0x2c (0x8)
	struct TWeakObjectPtr<class UAbilitySystemComponent> InstigatorAbilitySystemComponent; // 0x34 (0x8)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TArray<struct TWeakObjectPtr<class AActor>> Actors; // 0x40 (0x10)
	unsigned char unreflected_50[0x10]; // 0x50 (0x10) 
	struct FVector WorldOrigin; // 0x60 (0x18)
	unsigned char bHasWorldOrigin; // 0x78 (0x1)
	unsigned char bReplicateSourceObject; // 0x78 (0x1)
	unsigned char bReplicateInstigator; // 0x78 (0x1)
	unsigned char bReplicateEffectCauser; // 0x78 (0x1)
	unsigned char padding_79[0x7]; // 0x79 (0x7)
};

