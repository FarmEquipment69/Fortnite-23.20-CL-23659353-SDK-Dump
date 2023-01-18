// ScriptStruct /Script/FortniteGame.PartyMemberSquadAssignmentRequest
// Size: 0x40
struct FPartyMemberSquadAssignmentRequest
{
	int StartingAbsoluteIdx; // 0x0 (0x4)
	int TargetAbsoluteIdx; // 0x4 (0x4)
	struct FUniqueNetIdRepl SwapTargetMemberId; // 0x8 (0x30)
	unsigned char Version; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)
};

