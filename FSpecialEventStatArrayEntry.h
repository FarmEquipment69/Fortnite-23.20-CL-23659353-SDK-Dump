// ScriptStruct /Script/SpecialEventGameplayRuntime.SpecialEventStatArrayEntry
// Size: 0x40
struct FSpecialEventStatArrayEntry : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class USpecialEventStatComponent* StatComponent; // 0x10 (0x8)
	class AActor* Owner; // 0x18 (0x8)
	int StatDefinitionIndex; // 0x20 (0x4)
	struct FSpecialEventStatDefinition StatDefinitionCopy; // 0x24 (0x10)
	float Value; // 0x34 (0x4)
	unsigned char padding_38[0x8]; // 0x38 (0x8)
};

