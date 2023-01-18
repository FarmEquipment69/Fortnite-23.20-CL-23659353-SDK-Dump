// ScriptStruct /Script/FortniteGame.BuildingNeighboringActorInfo
// Size: 0x30
struct FBuildingNeighboringActorInfo
{
	struct TArray<struct FNeighboringWallInfo> NeighboringWallInfos; // 0x0 (0x10)
	struct TArray<struct FNeighboringFloorInfo> NeighboringFloorInfos; // 0x10 (0x10)
	struct TArray<struct FNeighboringCenterCellInfo> NeighboringCenterCellInfos; // 0x20 (0x10)
};

