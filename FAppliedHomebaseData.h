// ScriptStruct /Script/FortniteGame.AppliedHomebaseData
// Size: 0x30
struct FAppliedHomebaseData
{
	struct TWeakObjectPtr<class UAbilitySystemComponent> Source; // 0x0 (0x8)
	struct TWeakObjectPtr<class UAbilitySystemComponent> Target; // 0x8 (0x8)
	struct TArray<struct FActiveGameplayEffectHandle*> AppliedEffects; // 0x10 (0x10)
	struct TArray<struct FFortAbilitySetHandle> AppliedAbilitySets; // 0x20 (0x10)
};

