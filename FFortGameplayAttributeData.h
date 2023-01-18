// ScriptStruct /Script/FortniteGame.FortGameplayAttributeData
// Size: 0x28
struct FFortGameplayAttributeData : FGameplayAttributeData
{
	float Minimum; // 0x10 (0x4)
	float Maximum; // 0x14 (0x4)
	bool bIsCurrentClamped; // 0x18 (0x1)
	bool bIsBaseClamped; // 0x19 (0x1)
	bool bShouldClampBase; // 0x1a (0x1)
	unsigned char unreflected_1b[0x1]; // 0x1b (0x1) 
	float UnclampedBaseValue; // 0x1c (0x4)
	float UnclampedCurrentValue; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

