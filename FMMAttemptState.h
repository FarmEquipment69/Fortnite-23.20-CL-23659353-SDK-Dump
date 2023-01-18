// ScriptStruct /Script/FortniteGame.MMAttemptState
// Size: 0xc
struct FMMAttemptState
{
	int BestSessionIdx; // 0x0 (0x4)
	int NumSearchResults; // 0x4 (0x4)
	struct TEnumAsByte<EMatchmakingState> State; // 0x8 (0x1)
	struct TEnumAsByte<EPartyReservationResult> LastBeaconResponse; // 0x9 (0x1)
	unsigned char padding_a[0x2]; // 0xa (0x2)
};

