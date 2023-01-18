// ScriptStruct /Script/FortniteUI.FortTournamentDisplayInfo
// Size: 0x1d0
struct FFortTournamentDisplayInfo : FTableRowBase
{
	struct FText TitleLine1; // 0x8 (0x18)
	struct FText TitleLine2; // 0x20 (0x18)
	struct FText ScheduleInfo; // 0x38 (0x18)
	struct FText FlavorDescription; // 0x50 (0x18)
	struct FText DetailsDescription; // 0x68 (0x18)
	struct FText ShortFormatTitle; // 0x80 (0x18)
	struct FText LongFormatTitle; // 0x98 (0x18)
	struct FText BackgroundTitle; // 0xb0 (0x18)
	int PinScoreRequirement; // 0xc8 (0x4)
	unsigned char unreflected_cc[0x4]; // 0xcc (0x4) 
	struct FText PinEarnedText; // 0xd0 (0x18)
	struct FLinearColor BaseColor; // 0xe8 (0x10)
	struct FLinearColor PrimaryColor; // 0xf8 (0x10)
	struct FLinearColor SecondaryColor; // 0x108 (0x10)
	struct FLinearColor HighlightColor; // 0x118 (0x10)
	struct FLinearColor TitleColor; // 0x128 (0x10)
	struct FLinearColor ShadowColor; // 0x138 (0x10)
	struct FLinearColor BackgroundLeftColor; // 0x148 (0x10)
	struct FLinearColor BackgroundRightColor; // 0x158 (0x10)
	struct FLinearColor BackgroundTextColor; // 0x168 (0x10)
	struct FLinearColor PosterFadeColor; // 0x178 (0x10)
	struct FText AlertText; // 0x188 (0x18)
	struct FText SeriesPointLeaderboardName; // 0x1a0 (0x18)
	enum EFortTournamentAlertType AlertType; // 0x1b8 (0x1)
	unsigned char unreflected_1b9[0x7]; // 0x1b9 (0x7) 
	struct TArray<struct FText> RoundDisplayNames; // 0x1c0 (0x10)
};

