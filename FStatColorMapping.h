// ScriptStruct /Script/Engine.StatColorMapping
// Size: 0x28
struct FStatColorMapping
{
	struct FString StatName; // 0x0 (0x10)
	struct TArray<struct FStatColorMapEntry*> ColorMap; // 0x10 (0x10)
	unsigned char DisableBlend; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

