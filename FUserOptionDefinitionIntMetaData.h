// ScriptStruct /Script/FortniteGame.UserOptionDefinitionIntMetaData
// Size: 0x50
struct FUserOptionDefinitionIntMetaData : FUserOptionDefinitionMetaData
{
	int DefaultValue; // 0x8 (0x4)
	int MinValue; // 0xc (0x4)
	int MaxValue; // 0x10 (0x4)
	int MinSliderValue; // 0x14 (0x4)
	int MaxSliderValue; // 0x18 (0x4)
	int DeltaValue; // 0x1c (0x4)
	struct FText DisplayPattern; // 0x20 (0x18)
	bool bRestrictSliderValues; // 0x38 (0x1)
	bool bUseNumericInput; // 0x39 (0x1)
	unsigned char unreflected_3a[0x6]; // 0x3a (0x6) 
	struct TArray<struct FUserOptionDefinitionIntValueEntry> ValueEntries; // 0x40 (0x10)
};

