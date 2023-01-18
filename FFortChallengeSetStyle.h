// ScriptStruct /Script/FortniteGame.FortChallengeSetStyle
// Size: 0xa0
struct FFortChallengeSetStyle
{
	struct FLinearColor PrimaryColor; // 0x0 (0x10)
	struct FLinearColor SecondaryColor; // 0x10 (0x10)
	struct FLinearColor AccentColor; // 0x20 (0x10)
	struct FLinearColor ContextLimitedTimeColor; // 0x30 (0x10)
	struct FLinearColor ContextBaseColor; // 0x40 (0x10)
	struct TWeakObjectPtr<class UObject> DisplayImage; // 0x50 (0x28)
	struct TWeakObjectPtr<class UObject> CustomBackground; // 0x78 (0x28)
};

