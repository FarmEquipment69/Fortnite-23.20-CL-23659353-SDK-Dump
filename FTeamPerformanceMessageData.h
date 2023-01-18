// ScriptStruct /Script/FortniteGame.TeamPerformanceMessageData
// Size: 0xd0
struct FTeamPerformanceMessageData
{
	struct FName NameIdentifier; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FScalableFloat bEnabledHotfix; // 0x8 (0x28)
	struct TMap<struct TEnumAsByte<EFortTeamAffiliation>, struct FAthenaGameMessageData> TeamAffiliationMessagesMap; // 0x30 (0x50)
	enum ETeamPerformanceMessageTrackingStat TrackingStat; // 0x80 (0x1)
	unsigned char unreflected_81[0x7]; // 0x81 (0x7) 
	struct FScalableFloat StatThreshold; // 0x88 (0x28)
	enum ETeamPerformanceMessageReplicationType ReplicationType; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x3]; // 0xb1 (0x3) 
	int NumberOfTeamsToTriggerFor; // 0xb4 (0x4)
	struct TArray<unsigned char> TeamsThatTriggeredMessage; // 0xb8 (0x10)
	unsigned char bEnabledInternal; // 0xc8 (0x1)
	unsigned char bCanStillBeTriggered; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x3]; // 0xc9 (0x3) 
	int MessageIndex; // 0xcc (0x4)
};

