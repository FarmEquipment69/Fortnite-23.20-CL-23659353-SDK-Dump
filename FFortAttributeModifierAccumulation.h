// ScriptStruct /Script/SaveTheWorldUI.FortAttributeModifierAccumulation
// Size: 0x48
struct FFortAttributeModifierAccumulation
{
	struct FGameplayTag GameplayTag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FGameplayAttribute Attribute; // 0x8 (0x38)
	struct TEnumAsByte<EGameplayModOp> ModifierOp; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	float Magnitude; // 0x44 (0x4)
};

