// ScriptStruct /Script/FortniteGame.NeighboringWallInfo
// Size: 0x18
struct FNeighboringWallInfo
{
	struct TWeakObjectPtr<class ABuildingSMActor> NeighboringActor; // 0x0 (0x8)
	struct FBuildingSupportCellIndex NeighboringCellIdx; // 0x8 (0xc)
	enum EStructuralWallPosition WallPosition; // 0x14 (0x1)
	unsigned char padding_15[0x3]; // 0x15 (0x3)
};

