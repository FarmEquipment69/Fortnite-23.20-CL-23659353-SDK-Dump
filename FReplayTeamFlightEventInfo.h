// ScriptStruct /Script/FortniteGame.ReplayTeamFlightEventInfo
// Size: 0x68
struct FReplayTeamFlightEventInfo : FBaseReplayEventInfo
{
	struct FVector StartLocation; // 0x18 (0x18)
	struct FRotator StartRotation; // 0x30 (0x18)
	struct FVector EndLocation; // 0x48 (0x18)
	unsigned char IndexNum; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)
};

