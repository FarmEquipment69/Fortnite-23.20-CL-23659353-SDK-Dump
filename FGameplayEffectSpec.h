// ScriptStruct /Script/GameplayAbilities.GameplayEffectSpec
// Size: 0x298
struct FGameplayEffectSpec
{
	class UGameplayEffect* Def; // 0x0 (0x8)
	struct TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x8 (0x10)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes; // 0x18 (0x28)
	unsigned char unreflected_40[0x10]; // 0x40 (0x10) 
	float Duration; // 0x50 (0x4)
	float Period; // 0x54 (0x4)
	float ChanceToApplyToTarget; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FTagContainerAggregator CapturedSourceTags; // 0x60 (0x88)
	struct FTagContainerAggregator CapturedTargetTags; // 0xe8 (0x88)
	struct FGameplayTagContainer DynamicGrantedTags; // 0x170 (0x20)
	struct FGameplayTagContainer DynamicAssetTags; // 0x190 (0x20)
	struct TArray<struct FModifierSpec> Modifiers; // 0x1b0 (0x10)
	int StackCount; // 0x1c0 (0x4)
	unsigned char bCompletedSourceAttributeCapture; // 0x1c4 (0x1)
	unsigned char bCompletedTargetAttributeCapture; // 0x1c4 (0x1)
	unsigned char bDurationLocked; // 0x1c4 (0x1)
	unsigned char unreflected_1c5[0x3]; // 0x1c5 (0x3) 
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilitySpecs; // 0x1c8 (0x10)
	unsigned char unreflected_1d8[0xa0]; // 0x1d8 (0xa0) 
	struct FGameplayEffectContextHandle EffectContext; // 0x278 (0x18)
	float Level; // 0x290 (0x4)
	unsigned char padding_294[0x4]; // 0x294 (0x4)
};

