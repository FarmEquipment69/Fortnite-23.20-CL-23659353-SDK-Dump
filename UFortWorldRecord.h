// Class /Script/FortniteGame.FortWorldRecord
// Size: 0x248
class UFortWorldRecord : public UFortGenericRecord
{
	struct FFortCloudSaveInfo CloudInfo; // 0xe0 (0x18)
	int CurrentZoneIndex; // 0xf8 (0x4)
	unsigned char unreflected_fc[0x4]; // 0xfc (0x4) 
	struct TArray<struct FFortPlayerRecord> SavedPlayers; // 0x100 (0x10)
	struct FFortZoneInstanceDetails ZoneInstanceInfo; // 0x110 (0x128)
	struct FString WUID; // 0x238 (0x10)
};

