// ScriptStruct /Script/OnlineSubsystemUtils.PartyReservation
// Size: 0x58
struct FPartyReservation
{
	int TeamNum; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FUniqueNetIdRepl PartyLeader; // 0x8 (0x30)
	struct TArray<struct FPlayerReservation> PartyMembers; // 0x38 (0x10)
	struct TArray<struct FPlayerReservation> RemovedPartyMembers; // 0x48 (0x10)
};

