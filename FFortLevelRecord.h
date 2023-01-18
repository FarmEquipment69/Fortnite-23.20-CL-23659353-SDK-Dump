// ScriptStruct /Script/FortniteGame.FortLevelRecord
// Size: 0x38
struct FFortLevelRecord
{
	int ParentLevelIndex; // 0x0 (0x4)
	struct FGuid BoundActorGuid; // 0x4 (0x10)
	struct FName PackageName; // 0x14 (0x4)
	struct TArray<struct FFortActorRecord> SavedActors; // 0x18 (0x10)
	int XLoc; // 0x28 (0x4)
	int YLoc; // 0x2c (0x4)
	unsigned char Rotation; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)
};

