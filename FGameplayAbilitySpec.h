// ScriptStruct /Script/GameplayAbilities.GameplayAbilitySpec
// Size: 0xe8
struct FGameplayAbilitySpec : FFastArraySerializerItem
{
	struct FGameplayAbilitySpecHandle Handle; // 0xc (0x4)
	class UGameplayAbility* Ability; // 0x10 (0x8)
	int Level; // 0x18 (0x4)
	int InputID; // 0x1c (0x4)
	struct TWeakObjectPtr<class UObject> SourceObject; // 0x20 (0x8)
	unsigned char ActiveCount; // 0x28 (0x1)
	unsigned char InputPressed; // 0x29 (0x1)
	unsigned char RemoveAfterActivation; // 0x29 (0x1)
	unsigned char PendingRemove; // 0x29 (0x1)
	unsigned char bActivateOnce; // 0x29 (0x1)
	unsigned char unreflected_2a[0x6]; // 0x2a (0x6) 
	struct FGameplayAbilityActivationInfo ActivationInfo; // 0x30 (0x20)
	struct FGameplayTagContainer DynamicAbilityTags; // 0x50 (0x20)
	struct TArray<class UGameplayAbility*> NonReplicatedInstances; // 0x70 (0x10)
	struct TArray<class UGameplayAbility*> ReplicatedInstances; // 0x80 (0x10)
	struct FActiveGameplayEffectHandle* GameplayEffectHandle; // 0x90 (0x8)
	unsigned char padding_98[0x50]; // 0x98 (0x50)
};

