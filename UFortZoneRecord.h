// Class /Script/FortniteGame.FortZoneRecord
// Size: 0x2b0
class UFortZoneRecord : public UFortGenericRecord
{
	int WorldSaveCount; // 0xe0 (0x4)
	int ZoneIndex; // 0xe4 (0x4)
	struct FName PersistentLevelName; // 0xe8 (0x4)
	unsigned char unreflected_ec[0x4]; // 0xec (0x4) 
	struct TArray<struct FFortLevelRecord> SavedLevels; // 0xf0 (0x10)
	int NumSavedLevels; // 0x100 (0x4)
	int ZoneTileSeed; // 0x104 (0x4)
	unsigned char unreflected_108[0x190]; // 0x108 (0x190) 
	struct TArray<struct FStatManagerPeriodRecord> PlayerMapStatManagerPeriods; // 0x298 (0x10)
	int CloudSaveItemDefContentVersion; // 0x2a8 (0x4)
	bool bNeedsFullActorSave; // 0x2ac (0x1)
	unsigned char padding_2ad[0x3]; // 0x2ad (0x3)
};

