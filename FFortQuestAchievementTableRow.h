// ScriptStruct /Script/FortniteGame.FortQuestAchievementTableRow
// Size: 0x18
struct FFortQuestAchievementTableRow : FTableRowBase
{
	enum EFortQuestState QuestState; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	int XboxAchievementID; // 0xc (0x4)
	int PS4TrophyID; // 0x10 (0x4)
	unsigned char padding_14[0x4]; // 0x14 (0x4)
};

