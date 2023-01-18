// ScriptStruct /Script/FortniteGame.UnicornDancePartyInfo
// Size: 0x68
struct FUnicornDancePartyInfo
{
	float StartTimestamp; // 0x0 (0x4)
	float EndTimestamp; // 0x4 (0x4)
	int PeakMembers; // 0x8 (0x4)
	float PeakStartTimestamp; // 0xc (0x4)
	float PeakEndTimestamp; // 0x10 (0x4)
	bool bEndsBecauseOfUs; // 0x14 (0x1)
	bool bIsMovingEmote; // 0x15 (0x1)
	unsigned char unreflected_16[0x2]; // 0x16 (0x2) 
	struct TSet<struct FUniqueNetIdRepl> LatestMembers; // 0x18 (0x50)
};

