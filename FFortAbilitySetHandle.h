// ScriptStruct /Script/FortniteGame.FortAbilitySetHandle
// Size: 0x38
struct FFortAbilitySetHandle
{
	struct TWeakObjectPtr<class UAbilitySystemComponent> TargetAbilitySystemComponent; // 0x0 (0x8)
	struct TArray<struct FGameplayAbilitySpecHandle> GrantedAbilityHandles; // 0x8 (0x10)
	struct TArray<struct FActiveGameplayEffectHandle*> AppliedEffectHandles; // 0x18 (0x10)
	struct TArray<struct FGuid> ItemGuidsForAdditionalItems; // 0x28 (0x10)
};

