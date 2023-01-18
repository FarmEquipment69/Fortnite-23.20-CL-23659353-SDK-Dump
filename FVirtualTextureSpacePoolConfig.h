// ScriptStruct /Script/Engine.VirtualTextureSpacePoolConfig
// Size: 0x30
struct FVirtualTextureSpacePoolConfig
{
	int MinTileSize; // 0x0 (0x4)
	int MaxTileSize; // 0x4 (0x4)
	struct TArray<struct TEnumAsByte<EPixelFormat>> Formats; // 0x8 (0x10)
	int SizeInMegabyte; // 0x18 (0x4)
	bool bEnableResidencyMipMapBias; // 0x1c (0x1)
	bool bAllowSizeScale; // 0x1d (0x1)
	unsigned char unreflected_1e[0x2]; // 0x1e (0x2) 
	uint32_t ScalabilityGroup; // 0x20 (0x4)
	int MinScaledSizeInMegabyte; // 0x24 (0x4)
	int MaxScaledSizeInMegabyte; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

