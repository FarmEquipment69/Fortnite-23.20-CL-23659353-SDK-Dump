// Class /Script/FortniteGame.FortSocialParty
// Size: 0xc00
class UFortSocialParty : public USocialParty
{
	struct FGameDifficultyInfo CachedZoneDifficultyInfo; // 0x378 (0x98)
	struct FFortPartyRepData PartyRepData; // 0x410 (0x708)
	struct TArray<struct FFortPartySquad> PartySquads; // 0xb18 (0x10)
	bool bSendSocialFriendsActiveAnalytics; // 0xb28 (0x1)
	bool bPromoteMemberWhenBackgrounding; // 0xb29 (0x1)
	unsigned char unreflected_b2a[0x6e]; // 0xb2a (0x6e) 
	bool bEnableBootToGroup; // 0xb98 (0x1)
	unsigned char padding_b99[0x67]; // 0xb99 (0x67)
};

