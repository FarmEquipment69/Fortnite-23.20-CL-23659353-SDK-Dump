// ScriptStruct /Script/FortniteGame.LatentRepPlayerData
// Size: 0xa8
struct FLatentRepPlayerData : FFastArraySerializerItem
{
	struct TWeakObjectPtr<class AFortPlayerStateAthena> PlayerState; // 0xc (0x8)
	float LastPawnNotRelevantTime; // 0x14 (0x4)
	bool bPawnIsRelevant; // 0x18 (0x1)
	bool bWasPawnRelevantLastUpdate; // 0x19 (0x1)
	unsigned char unreflected_1a[0x6]; // 0x1a (0x6) 
	struct FVector CurrentLocation; // 0x20 (0x18)
	float CurrentYaw; // 0x38 (0x4)
	float LastLocationReplicationTime; // 0x3c (0x4)
	float PrevLocationReplicatedTime; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FVector_NetQuantize100 LastRepLocation; // 0x48 (0x18)
	struct FVector_NetQuantize100 PrevRepLocation; // 0x60 (0x18)
	struct FVector LerpStartLocation; // 0x78 (0x18)
	float LastYawReplicationTime; // 0x90 (0x4)
	float PrevYawReplicatedTime; // 0x94 (0x4)
	float LastRepYaw; // 0x98 (0x4)
	float PrevRepYaw; // 0x9c (0x4)
	float LerpStartYaw; // 0xa0 (0x4)
	enum EFortPawnState PawnStateMask; // 0xa4 (0x1)
	enum EFortPawnState CurrPawnStateMask; // 0xa5 (0x1)
	uint16_t CurieStateBitfield; // 0xa6 (0x2)
};

