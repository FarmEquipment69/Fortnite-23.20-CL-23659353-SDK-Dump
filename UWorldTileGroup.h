// Class /Script/FortniteGame.WorldTileGroup
// Size: 0x128
class UWorldTileGroup : public UDataAsset
{
	struct FString TileID; // 0x30 (0x10)
	unsigned char bOnlyPlaceDiagonalWithAdjacent; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	struct TArray<struct FTileGroupMapInfo> FlatMapInfos; // 0x48 (0x10)
	struct TArray<struct FTileGroupMapInfo> InnerMapInfos; // 0x58 (0x10)
	struct TArray<struct FTileGroupMapInfo> OuterMapInfos; // 0x68 (0x10)
	struct TArray<struct FTileGroupMapInfo> StraightMapInfos; // 0x78 (0x10)
	struct TWeakObjectPtr<class UWorld> SimFlatWorld; // 0x88 (0x28)
	struct TWeakObjectPtr<class UWorld> SimInnerWorld; // 0xb0 (0x28)
	struct TWeakObjectPtr<class UWorld> SimOuterWorld; // 0xd8 (0x28)
	struct TWeakObjectPtr<class UWorld> SimStraightWorld; // 0x100 (0x28)
};

