// Class /Script/Engine.GameSession
// Size: 0x2a0
class AGameSession : public AInfo
{
	int MaxSpectators; // 0x288 (0x4)
	int MaxPlayers; // 0x28c (0x4)
	int MaxPartySize; // 0x290 (0x4)
	unsigned char MaxSplitscreensPerConnection; // 0x294 (0x1)
	bool bRequiresPushToTalk; // 0x295 (0x1)
	unsigned char unreflected_296[0x2]; // 0x296 (0x2) 
	struct FName SessionName; // 0x298 (0x4)
	unsigned char padding_29c[0x4]; // 0x29c (0x4)
};

