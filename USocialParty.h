// Class /Script/Party.SocialParty
// Size: 0x380
class USocialParty : public UObject
{
	unsigned char unreflected_28[0x38]; // 0x28 (0x38) 
	class UClass* ReservationBeaconClientClass; // 0x60 (0x8)
	class UClass* SpectatorBeaconClientClass; // 0x68 (0x8)
	unsigned char unreflected_70[0x10]; // 0x70 (0x10) 
	struct FUniqueNetIdRepl OwningLocalUserId; // 0x80 (0x30)
	struct FUniqueNetIdRepl CurrentLeaderId; // 0xb0 (0x30)
	struct TMap<struct FUniqueNetIdRepl, class UPartyMember*> PartyMembersById; // 0xe0 (0x50)
	bool bEnableAutomaticPartyRejoin; // 0x130 (0x1)
	unsigned char unreflected_131[0x57]; // 0x131 (0x57) 
	double PlatformUserInviteCooldown; // 0x188 (0x8)
	double PrimaryUserInviteCooldown; // 0x190 (0x8)
	unsigned char unreflected_198[0x70]; // 0x198 (0x70) 
	struct TWeakObjectPtr<class APartyBeaconClient> ReservationBeaconClient; // 0x208 (0x8)
	unsigned char unreflected_210[0x4]; // 0x210 (0x4) 
	struct TWeakObjectPtr<class ASpectatorBeaconClient> SpectatorBeaconClient; // 0x214 (0x8)
	unsigned char unreflected_21c[0x2c]; // 0x21c (0x2c) 
	float JoinInProgressTimerRate; // 0x248 (0x4)
	int JoinInProgressRequestTimeout; // 0x24c (0x4)
	int JoinInProgressResponseTimeout; // 0x250 (0x4)
	unsigned char padding_254[0x12c]; // 0x254 (0x12c)
};

