// ScriptStruct /Script/FortniteGame.CreativeActorMetaData
// Size: 0x30
struct FCreativeActorMetaData
{
	int AssetSize; // 0x0 (0x4)
	int InstanceSize; // 0x4 (0x4)
	int SimulationCost; // 0x8 (0x4)
	int DrawCall; // 0xc (0x4)
	int AudioCost; // 0x10 (0x4)
	int NetworkCost; // 0x14 (0x4)
	unsigned char bCostOverridden; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct TArray<struct FCreativeAssetMetaData> AssetDependencies; // 0x20 (0x10)
};

