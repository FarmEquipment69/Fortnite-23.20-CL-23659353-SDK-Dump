// ScriptStruct /Script/FortniteGame.ReplayEliminationEventInfo
// Size: 0x150
struct FReplayEliminationEventInfo : FBaseReplayEventInfo
{
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FTransform EventLocation; // 0x20 (0x60)
	struct FTransform InstigatorLocation; // 0x80 (0x60)
	struct FUniqueNetIdRepl Victim; // 0xe0 (0x30)
	struct FUniqueNetIdRepl Instigator; // 0x110 (0x30)
	enum EDeathCause DeathCause; // 0x140 (0x1)
	bool bDBNO; // 0x141 (0x1)
	enum EFortReplayEventType EventType; // 0x142 (0x1)
	unsigned char padding_143[0xd]; // 0x143 (0xd)
};

