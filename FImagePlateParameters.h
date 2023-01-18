// ScriptStruct /Script/ImagePlate.ImagePlateParameters
// Size: 0x40
struct FImagePlateParameters
{
	class UMaterialInterface* Material; // 0x0 (0x8)
	struct FName TextureParameterName; // 0x8 (0x4)
	bool bFillScreen; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FVector2D FillScreenAmount; // 0x10 (0x10)
	struct FVector2D FixedSize; // 0x20 (0x10)
	class UTexture* RenderTexture; // 0x30 (0x8)
	class UMaterialInstanceDynamic* DynamicMaterial; // 0x38 (0x8)
};

