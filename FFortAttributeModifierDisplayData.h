// ScriptStruct /Script/FortniteUI.FortAttributeModifierDisplayData
// Size: 0xc0
struct FFortAttributeModifierDisplayData
{
	struct FGameplayAttribute Attribute; // 0x0 (0x38)
	float Value; // 0x38 (0x4)
	struct TEnumAsByte<EGameplayModOp> ModifierType; // 0x3c (0x1)
	unsigned char unreflected_3d[0x3]; // 0x3d (0x3) 
	struct FGameplayTagRequirements SourceTags; // 0x40 (0x40)
	struct FGameplayTagRequirements TargetTags; // 0x80 (0x40)
};

