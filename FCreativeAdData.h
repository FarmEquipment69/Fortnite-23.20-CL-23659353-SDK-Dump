// ScriptStruct /Script/FortniteUI.CreativeAdData
// Size: 0x68
struct FCreativeAdData
{
	struct FString Header; // 0x0 (0x10)
	struct FString SubHeader; // 0x10 (0x10)
	struct FString Description; // 0x20 (0x10)
	struct FString CreatorName; // 0x30 (0x10)
	struct FString IslandCode; // 0x40 (0x10)
	enum EFortCreativeAdType AdType; // 0x50 (0x1)
	enum EFortCreativeAdColorPreset AdColorPreset; // 0x51 (0x1)
	unsigned char unreflected_52[0x6]; // 0x52 (0x6) 
	struct FString Image; // 0x58 (0x10)
};

