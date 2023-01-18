// ScriptStruct /Script/Party.PartyMemberRepData
// Size: 0x268
struct FPartyMemberRepData : FOnlinePartyRepDataBase
{
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FPartyMemberPlatformData PlatformData; // 0x20 (0x98)
	unsigned char unreflected_b8[0x90]; // 0xb8 (0x90) 
	enum ECrossplayPreference CrossplayPreference; // 0x148 (0x1)
	unsigned char unreflected_149[0x37]; // 0x149 (0x37) 
	struct FString JoinMethod; // 0x180 (0x10)
	unsigned char unreflected_190[0x30]; // 0x190 (0x30) 
	struct FPartyMemberJoinInProgressData JoinInProgressData; // 0x1c0 (0x48)
	unsigned char padding_208[0x60]; // 0x208 (0x60)
};

