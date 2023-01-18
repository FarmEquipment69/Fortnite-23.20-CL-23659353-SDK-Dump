// ScriptStruct /Script/FortniteGame.AutoGoalCardData
// Size: 0x90
struct FAutoGoalCardData
{
	struct FBundleGoalCardDisplayData DisplayData; // 0x0 (0x80)
	enum EFortQuestType QuestType; // 0x80 (0x1)
	enum EFortQuestSubtype QuestSubtype; // 0x81 (0x1)
	unsigned char unreflected_82[0x2]; // 0x82 (0x2) 
	struct FGameplayTag RequiredQuestTag; // 0x84 (0x4)
	struct FGameplayTag HeaderTag; // 0x88 (0x4)
	unsigned char padding_8c[0x4]; // 0x8c (0x4)
};

