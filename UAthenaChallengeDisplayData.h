// Class /Script/FortniteUI.AthenaChallengeDisplayData
// Size: 0x1c8
class UAthenaChallengeDisplayData : public UDataAsset
{
	int SoonDisplayMinuteThreshold; // 0x30 (0x4)
	struct FLinearColor PartyAssistFontColor; // 0x34 (0x10)
	struct FLinearColor DifficultChallengeFontColor; // 0x44 (0x10)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	class UTexture2D* PartyAssistIcon; // 0x58 (0x8)
	class UTexture2D* ExternalPartyAssistIcon; // 0x60 (0x8)
	struct FFortChallengeSetStyle DefaultChallengeStyle; // 0x68 (0xa0)
	struct FFortChallengeSetStyle DailyChallengeStyle; // 0x108 (0xa0)
	struct TArray<struct FGameplayTagContainer> PunchCardSortOrder; // 0x1a8 (0x10)
	struct TArray<struct FFortChallengePunchCardStyles> ChallengePunchCardStyles; // 0x1b8 (0x10)
};

