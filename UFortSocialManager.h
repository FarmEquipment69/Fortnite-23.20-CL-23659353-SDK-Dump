// Class /Script/FortniteGame.FortSocialManager
// Size: 0x2f0
class UFortSocialManager : public USocialManager
{
	enum ESocialImportPanelPlatform SocialImportPlatform; // 0x1a8 (0x1)
	bool bTutorialCompleted; // 0x1a9 (0x1)
	unsigned char unreflected_1aa[0x1e]; // 0x1aa (0x1e) 
	bool bLeftLastPartyFromGameDisconnect; // 0x1c8 (0x1)
	unsigned char unreflected_1c9[0x7]; // 0x1c9 (0x7) 
	class UFortLocalTeam* LocalTeam; // 0x1d0 (0x8)
	double NoPersistentPartyDetectorTimeout; // 0x1d8 (0x8)
	unsigned char unreflected_1e0[0x8]; // 0x1e0 (0x8) 
	bool bEnablePartyJoinReturnToMainMenu; // 0x1e8 (0x1)
	unsigned char unreflected_1e9[0x7]; // 0x1e9 (0x7) 
	double PendingQueryPartyJoinabilityResultTimeout; // 0x1f0 (0x8)
	unsigned char unreflected_1f8[0xe8]; // 0x1f8 (0xe8) 
	class UFortSocialUser* CurrentJoinAndSpectateTarget; // 0x2e0 (0x8)
	class UFortPartyMember* PartyMemberToSpectate; // 0x2e8 (0x8)
};

