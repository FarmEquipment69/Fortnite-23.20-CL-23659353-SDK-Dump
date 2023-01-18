// ScriptStruct /Script/Engine.StreamingRenderAssetPrimitiveInfo
// Size: 0x50
struct FStreamingRenderAssetPrimitiveInfo
{
	class UStreamableRenderAsset* RenderAsset; // 0x0 (0x8)
	struct FBoxSphereBounds Bounds; // 0x8 (0x38)
	float TexelFactor; // 0x40 (0x4)
	uint32_t PackedRelativeBox; // 0x44 (0x4)
	unsigned char bAllowInvalidTexelFactorWhenUnregistered; // 0x48 (0x1)
	unsigned char bAffectedByComponentScale; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};

