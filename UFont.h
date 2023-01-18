// Class /Script/Engine.Font
// Size: 0x1d0
class UFont : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	enum EFontCacheType FontCacheType; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TArray<struct FFontCharacter> Characters; // 0x38 (0x10)
	struct TArray<class UTexture2D*> Textures; // 0x48 (0x10)
	int IsRemapped; // 0x58 (0x4)
	float EmScale; // 0x5c (0x4)
	float Ascent; // 0x60 (0x4)
	float Descent; // 0x64 (0x4)
	float Leading; // 0x68 (0x4)
	int Kerning; // 0x6c (0x4)
	struct FFontImportOptionsData ImportOptions; // 0x70 (0xb0)
	int NumCharacters; // 0x120 (0x4)
	unsigned char unreflected_124[0x4]; // 0x124 (0x4) 
	struct TArray<int> MaxCharHeight; // 0x128 (0x10)
	float ScalingFactor; // 0x138 (0x4)
	int LegacyFontSize; // 0x13c (0x4)
	struct FName LegacyFontName; // 0x140 (0x4)
	unsigned char unreflected_144[0x4]; // 0x144 (0x4) 
	struct FCompositeFont CompositeFont; // 0x148 (0x38)
	unsigned char padding_180[0x50]; // 0x180 (0x50)
};

