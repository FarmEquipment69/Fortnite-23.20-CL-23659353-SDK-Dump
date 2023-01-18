// ScriptStruct /Script/FortniteGame.LevelSaveRecordCollectionItem
// Size: 0x90
struct FLevelSaveRecordCollectionItem
{
	struct TWeakObjectPtr<class ULevelSaveRecord> LevelSaveRecord; // 0x0 (0x28)
	struct FName RecordUniqueName; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FTransform Transform; // 0x30 (0x60)
};

