// Class /Script/FortniteGame.CustomDynamicColorSwatch
// Size: 0xa8
class UCustomDynamicColorSwatch : public UCustomColorSwatch
{
	struct TArray<struct FColorSwatchPair> ColorPairs; // 0x38 (0x10)
	struct TArray<struct FCustomPartTextureParameter> TextureParameters; // 0x48 (0x10)
	struct TMap<struct FName, struct TWeakObjectPtr<class UTexture2D>> SpecificIconography; // 0x58 (0x50)
};

