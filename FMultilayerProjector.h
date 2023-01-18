// ScriptStruct /Script/CustomizableObject.MultilayerProjector
// Size: 0xf8
struct FMultilayerProjector
{
	struct FName ParamName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TMap<struct FName, int> VirtualLayersMapping; // 0x8 (0x50)
	struct TMap<struct FName, int> VirtualLayersOrder; // 0x58 (0x50)
	struct TMap<struct FName, struct FMultilayerProjectorLayer> DisableVirtualLayers; // 0xa8 (0x50)
};

