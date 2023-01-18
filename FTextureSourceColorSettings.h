// ScriptStruct /Script/Engine.TextureSourceColorSettings
// Size: 0x50
struct FTextureSourceColorSettings
{
	enum ETextureSourceEncoding EncodingOverride; // 0x0 (0x1)
	enum ETextureColorSpace ColorSpace; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct FVector2D RedChromaticityCoordinate; // 0x8 (0x10)
	struct FVector2D GreenChromaticityCoordinate; // 0x18 (0x10)
	struct FVector2D BlueChromaticityCoordinate; // 0x28 (0x10)
	struct FVector2D WhiteChromaticityCoordinate; // 0x38 (0x10)
	enum ETextureChromaticAdaptationMethod ChromaticAdaptationMethod; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};

