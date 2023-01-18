// ScriptStruct /Script/Party.PartyRepData
// Size: 0x80
struct FPartyRepData : FOnlinePartyRepDataBase
{
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FPartyPrivacySettings PrivacySettings; // 0x20 (0x3)
	unsigned char unreflected_23[0x35]; // 0x23 (0x35) 
	struct TArray<struct FPartyPlatformSessionInfo> PlatformSessions; // 0x58 (0x10)
	unsigned char padding_68[0x18]; // 0x68 (0x18)
};

