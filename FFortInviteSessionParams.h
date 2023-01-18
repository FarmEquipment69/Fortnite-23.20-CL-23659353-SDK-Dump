// ScriptStruct /Script/FortniteGame.FortInviteSessionParams
// Size: 0x38
struct FFortInviteSessionParams
{
	struct TEnumAsByte<EMatchmakingState> State; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FText FailureReason; // 0x8 (0x18)
	struct TEnumAsByte<EPartyReservationResult> LastBeaconResponse; // 0x20 (0x1)
	unsigned char padding_21[0x17]; // 0x21 (0x17)
};

