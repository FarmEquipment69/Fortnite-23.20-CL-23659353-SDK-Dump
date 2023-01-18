// Class /Script/FortniteGame.WorldTileType
// Size: 0x68
class UWorldTileType : public UDataAsset
{
	struct FString TileID; // 0x30 (0x10)
	struct TArray<struct FString> TileGroups; // 0x40 (0x10)
	int TileWeight; // 0x50 (0x4)
	struct TEnumAsByte<EFortTileEdgeType> North; // 0x54 (0x1)
	struct TEnumAsByte<EFortTileEdgeType> East; // 0x55 (0x1)
	struct TEnumAsByte<EFortTileEdgeType> South; // 0x56 (0x1)
	struct TEnumAsByte<EFortTileEdgeType> West; // 0x57 (0x1)
	struct TArray<struct FString> MapNames; // 0x58 (0x10)
};

