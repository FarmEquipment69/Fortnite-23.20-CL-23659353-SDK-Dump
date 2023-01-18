// ScriptStruct /Script/Engine.CustomOutput
// Size: 0x8
struct FCustomOutput
{
	struct FName OutputName; // 0x0 (0x4)
	struct TEnumAsByte<ECustomMaterialOutputType> OutputType; // 0x4 (0x1)
	unsigned char padding_5[0x3]; // 0x5 (0x3)
};

