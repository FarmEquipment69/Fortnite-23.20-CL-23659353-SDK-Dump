// ScriptStruct /Script/FortniteGame.ReplayKillSummary
// Size: 0x130
struct FReplayKillSummary
{
	struct FUniqueNetIdRepl Victim; // 0x0 (0x30)
	struct FTransform VictimLocation; // 0x30 (0x60)
	struct FUniqueNetIdRepl Instigator; // 0x90 (0x30)
	struct FTransform InstigatorLocation; // 0xc0 (0x60)
	float Timestamp; // 0x120 (0x4)
	bool bIsDownButNotOut; // 0x124 (0x1)
	enum EDeathCause DeathCause; // 0x125 (0x1)
	unsigned char padding_126[0xa]; // 0x126 (0xa)
};

