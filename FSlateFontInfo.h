// ScriptStruct /Script/SlateCore.SlateFontInfo
// Size: 0x58
struct FSlateFontInfo
{
	class UObject* FontObject; // 0x0 (0x8)
	class UObject* FontMaterial; // 0x8 (0x8)
	struct FFontOutlineSettings OutlineSettings; // 0x10 (0x20)
	unsigned char unreflected_30[0x10]; // 0x30 (0x10) 
	struct FName TypefaceFontName; // 0x40 (0x4)
	int Size; // 0x44 (0x4)
	int LetterSpacing; // 0x48 (0x4)
	float SkewAmount; // 0x4c (0x4)
	unsigned char padding_50[0x8]; // 0x50 (0x8)
};

