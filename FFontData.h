// ScriptStruct /Script/SlateCore.FontData
// Size: 0x28
struct FFontData
{
	struct FString FontFilename; // 0x0 (0x10)
	unsigned char unreflected_10[0x4]; // 0x10 (0x4) 
	enum EFontHinting Hinting; // 0x14 (0x1)
	enum EFontLoadingPolicy LoadingPolicy; // 0x15 (0x1)
	unsigned char unreflected_16[0x2]; // 0x16 (0x2) 
	int SubFaceIndex; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	class UObject* FontFaceAsset; // 0x20 (0x8)
};

