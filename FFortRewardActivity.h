// ScriptStruct /Script/FortniteGame.FortRewardActivity
// Size: 0x78
struct FFortRewardActivity
{
	struct TEnumAsByte<EFortRewardActivityType> ActivityType; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FGuid ActivityGuid; // 0x4 (0x10)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FText TitleText; // 0x18 (0x18)
	struct FText DescriptionText; // 0x30 (0x18)
	float RewardDisplayTime; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct TArray<struct FFortItemEntry> RewardItems; // 0x50 (0x10)
	struct TArray<struct FFortItemEntry> MissedRewardItems; // 0x60 (0x10)
	enum EFortCompletionResult ActivityCompletionResult; // 0x70 (0x1)
	unsigned char unreflected_71[0x3]; // 0x71 (0x3) 
	int AdditionalCompletionMissionPoints; // 0x74 (0x4)
};

