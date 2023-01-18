// ScriptStruct /Script/FortniteGame.FortAIAppearanceOverrideEntry
// Size: 0x58
struct FFortAIAppearanceOverrideEntry
{
	struct FName AppearanceName; // 0x0 (0x4)
	bool bIsFemale; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct TWeakObjectPtr<class USkeletalMesh> SkeletalMesh; // 0x8 (0x28)
	struct TWeakObjectPtr<class UFortFeedbackBank> FeedbackBank; // 0x30 (0x28)
};

