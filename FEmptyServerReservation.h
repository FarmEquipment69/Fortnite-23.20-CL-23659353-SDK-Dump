// ScriptStruct /Script/FortniteGame.EmptyServerReservation
// Size: 0x60
struct FEmptyServerReservation
{
	int PlaylistId; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FString ZoneInstanceId; // 0x8 (0x10)
	struct FString WUID; // 0x18 (0x10)
	struct FUniqueNetIdRepl WorldDataOwner; // 0x28 (0x30)
	bool bMakePrivate; // 0x58 (0x1)
	enum EFortMatchmakingPool MatchmakingPool; // 0x59 (0x1)
	bool bUsesMatchmakingV2; // 0x5a (0x1)
	unsigned char padding_5b[0x5]; // 0x5b (0x5)
};

