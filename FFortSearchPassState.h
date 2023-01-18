// ScriptStruct /Script/FortniteGame.FortSearchPassState
// Size: 0x18
struct FFortSearchPassState
{
	int BestSessionIdx; // 0x0 (0x4)
	bool bWasCanceled; // 0x4 (0x1)
	enum EFortSessionHelperJoinResult FailureType; // 0x5 (0x1)
	struct TEnumAsByte<EMatchmakingState> MatchmakingState; // 0x6 (0x1)
	struct TEnumAsByte<EPartyReservationResult> LastBeaconResponse; // 0x7 (0x1)
	unsigned char padding_8[0x10]; // 0x8 (0x10)
};

