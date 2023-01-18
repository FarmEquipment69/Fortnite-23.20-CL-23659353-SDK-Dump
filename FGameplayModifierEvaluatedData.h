// ScriptStruct /Script/GameplayAbilities.GameplayModifierEvaluatedData
// Size: 0x50
struct FGameplayModifierEvaluatedData
{
	struct FGameplayAttribute Attribute; // 0x0 (0x38)
	struct TEnumAsByte<EGameplayModOp> ModifierOp; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	float Magnitude; // 0x3c (0x4)
	struct FActiveGameplayEffectHandle* Handle; // 0x40 (0x8)
	bool IsValid; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};

