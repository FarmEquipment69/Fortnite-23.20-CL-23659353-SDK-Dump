// ScriptStruct /Script/FortniteGame.CrucibleParticipantData
// Size: 0x88
struct FCrucibleParticipantData
{
	struct TWeakObjectPtr<class AFortPlayerControllerAthena> AthenaPC; // 0x0 (0x8)
	unsigned char unreflected_8[0x10]; // 0x8 (0x10) 
	struct TMap<struct FString, int64_t> LatestRetrievedRawStats; // 0x18 (0x50)
	unsigned char padding_68[0x20]; // 0x68 (0x20)
};

