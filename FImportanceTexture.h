// ScriptStruct /Script/Engine.ImportanceTexture
// Size: 0x50
struct FImportanceTexture
{
	struct FIntPoint* Size; // 0x0 (0x8)
	int NumMips; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TArray<float> MarginalCDF; // 0x10 (0x10)
	struct TArray<float> ConditionalCDF; // 0x20 (0x10)
	struct TArray<struct FColor> TextureData; // 0x30 (0x10)
	struct TWeakObjectPtr<class UTexture2D> Texture; // 0x40 (0x8)
	struct TEnumAsByte<EImportanceWeight> Weighting; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};

