// ScriptStruct /Script/GameplayAbilities.AttributeMetaData
// Size: 0x30
struct FAttributeMetaData : FTableRowBase
{
	float BaseValue; // 0x8 (0x4)
	float MinValue; // 0xc (0x4)
	float MaxValue; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FString DerivedAttributeInfo; // 0x18 (0x10)
	bool bCanStack; // 0x28 (0x1)
	unsigned char padding_29[0x7]; // 0x29 (0x7)
};

