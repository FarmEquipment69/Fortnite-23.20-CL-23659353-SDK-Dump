// Class /Script/Engine.HLODLayer
// Size: 0x80
class UHLODLayer : public UObject
{
	enum EHLODLayerType LayerType; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	class UClass* HLODBuilderClass; // 0x30 (0x8)
	class UHLODBuilderSettings* HLODBuilderSettings; // 0x38 (0x8)
	unsigned char bIsSpatiallyLoaded; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	int CellSize; // 0x44 (0x4)
	double LoadingRange; // 0x48 (0x8)
	struct TWeakObjectPtr<class UHLODLayer> ParentLayer; // 0x50 (0x28)
	class UClass* HLODModifierClass; // 0x78 (0x8)
};

