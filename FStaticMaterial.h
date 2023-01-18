// ScriptStruct /Script/Engine.StaticMaterial
// Size: 0x28
struct FStaticMaterial
{
	class UMaterialInterface* MaterialInterface; // 0x0 (0x8)
	struct FName MaterialSlotName; // 0x8 (0x4)
	struct FName ImportedMaterialSlotName; // 0xc (0x4)
	struct FMeshUVChannelInfo UVChannelData; // 0x10 (0x14)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

