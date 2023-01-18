// ScriptStruct /Script/FortniteGame.FortCloudSaveInfo
// Size: 0x18
struct FFortCloudSaveInfo
{
	int SaveCount; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FFortCloudSaveRecordInfo> SavedRecords; // 0x8 (0x10)
};

