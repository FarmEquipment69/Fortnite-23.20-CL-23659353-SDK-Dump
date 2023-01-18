// ScriptStruct /Script/FortniteGame.BuildingFoundationStreamingData
// Size: 0xc8
struct FBuildingFoundationStreamingData
{
	struct FName FoundationName; // 0x0 (0x4)
	struct FGuid FoundationGUID; // 0x4 (0x10)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FVector FoundationLocation; // 0x18 (0x18)
	struct FBox BoundingBox; // 0x30 (0x38)
	struct FGameplayTagContainer GameplayTags; // 0x68 (0x20)
	struct FIntPoint* GridCoordinates; // 0x88 (0x8)
	struct TArray<struct TWeakObjectPtr<class AFortHLODSMActor>> ProxyInfoV2; // 0x90 (0x10)
	struct TArray<struct TWeakObjectPtr<class AFortHLODSMActor>> OverlayHLODs; // 0xa0 (0x10)
	struct TArray<int> ChildStreamingDataIndices; // 0xb0 (0x10)
	unsigned char PersistentHLODLevelIndex; // 0xc0 (0x1)
	unsigned char padding_c1[0x7]; // 0xc1 (0x7)
};

