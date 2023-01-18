// Class /Script/HmxGraphics.TextureSampler
// Size: 0x58
class UTextureSampler : public UObject
{
	class UTexture2D* SourceTexture; // 0x28 (0x8)
	int Width; // 0x30 (0x4)
	int Height; // 0x34 (0x4)
	struct TArray<struct FLinearColor> sampledImageCache; // 0x38 (0x10)
	struct FGuid sourceGuid; // 0x48 (0x10)

	/* Functions */

	// Function /Script/HmxGraphics.TextureSampler.TextureSample (Underlying native function: TextureSample 0x558d2e0)
	struct FLinearColor TextureSample(struct FVector2D& uv); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxGraphics.TextureSampler.TextureReadPixel (Underlying native function: TextureReadPixel 0x558d1d0)
	struct FLinearColor TextureReadPixel(int& U, int& V); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)
};

