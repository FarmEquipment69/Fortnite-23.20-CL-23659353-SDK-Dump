// ScriptStruct /Script/GameplayAbilities.AbilityTriggerData
// Size: 0x8
struct FAbilityTriggerData
{
	struct FGameplayTag TriggerTag; // 0x0 (0x4)
	struct TEnumAsByte<EGameplayAbilityTriggerSource> TriggerSource; // 0x4 (0x1)
	unsigned char padding_5[0x3]; // 0x5 (0x3)
};

