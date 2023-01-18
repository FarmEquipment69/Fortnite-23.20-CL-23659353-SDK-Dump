// ScriptStruct /Script/FortniteGame.UserOptionDefinitionFloatMetaData
// Size: 0x58
struct FUserOptionDefinitionFloatMetaData : FUserOptionDefinitionMetaData
{
	float DefaultValue; // 0x8 (0x4)
	float MinValue; // 0xc (0x4)
	float MaxValue; // 0x10 (0x4)
	float MinSliderValue; // 0x14 (0x4)
	float MaxSliderValue; // 0x18 (0x4)
	float DeltaValue; // 0x1c (0x4)
	unsigned char MinFractionalDigits; // 0x20 (0x1)
	unsigned char MaxFractionalDigits; // 0x21 (0x1)
	unsigned char unreflected_22[0x6]; // 0x22 (0x6) 
	struct FText DisplayPattern; // 0x28 (0x18)
	bool bRestrictSliderValues; // 0x40 (0x1)
	bool bUseNumericInput; // 0x41 (0x1)
	unsigned char unreflected_42[0x6]; // 0x42 (0x6) 
	struct TArray<struct FUserOptionDefinitionFloatValueEntry> ValueEntries; // 0x48 (0x10)
};

