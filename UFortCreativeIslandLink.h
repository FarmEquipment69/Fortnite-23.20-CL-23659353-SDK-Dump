// Class /Script/FortniteUI.FortCreativeIslandLink
// Size: 0xf0
class UFortCreativeIslandLink : public UObject
{
	struct FOnlineLinkId LinkId; // 0x28 (0x18)
	struct FString CreatorUsername; // 0x40 (0x10)
	struct FString SupportCode; // 0x50 (0x10)
	struct FString Title; // 0x60 (0x10)
	struct FString Tagline; // 0x70 (0x10)
	struct TArray<struct FString> DescriptionTags; // 0x80 (0x10)
	struct FString Introduction; // 0x90 (0x10)
	struct FString ImageUrl; // 0xa0 (0x10)
	enum EFortCreativeIslandLinkCategory category; // 0xb0 (0x1)
	bool bDummyLink; // 0xb1 (0x1)
	unsigned char unreflected_b2[0x2]; // 0xb2 (0x2) 
	int MatchmakingMaximumNumberOfPlayers; // 0xb4 (0x4)
	struct FString MatchmakingMMSType; // 0xb8 (0x10)
	int MatchmakingPlayersPerTeam; // 0xc8 (0x4)
	unsigned char unreflected_cc[0x4]; // 0xcc (0x4) 
	struct FDateTime* SortDate; // 0xd0 (0x8)
	enum EOnlineLinkModerationStatus ModerationStatus; // 0xd8 (0x1)
	unsigned char padding_d9[0x17]; // 0xd9 (0x17)
};

