// ScriptStruct /Script/SlateCore.SlateBrush
// Size: 0xc0
struct FSlateBrush
{
	unsigned char bIsDynamicallyLoaded; // 0x10 (0x1)
	unsigned char bHasUObject; // 0x10 (0x1)
	struct TEnumAsByte<ESlateBrushDrawType> DrawAs; // 0x11 (0x1)
	struct TEnumAsByte<ESlateBrushTileType> Tiling; // 0x12 (0x1)
	struct TEnumAsByte<ESlateBrushMirrorType> Mirroring; // 0x13 (0x1)
	struct TEnumAsByte<ESlateBrushImageType> ImageType; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	struct FVector2D ImageSize; // 0x18 (0x10)
	struct FMargin Margin; // 0x28 (0x10)
	struct FSlateColor TintColor; // 0x38 (0x14)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct FSlateBrushOutlineSettings OutlineSettings; // 0x50 (0x40)
	class UObject* ResourceObject; // 0x90 (0x8)
	struct FName ResourceName; // 0x98 (0x4)
	struct FBox2f UVRegion; // 0x9c (0x14)
	unsigned char padding_b0[0x10]; // 0xb0 (0x10)
};

