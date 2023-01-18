// ScriptStruct /Script/FortniteGame.QuestDrivenMissionSubList
// Size: 0x18
struct FQuestDrivenMissionSubList
{
	struct FName MissionSubListName; // 0x0 (0x4)
	bool bEnabled; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct TArray<struct FFortQuestDrivenMission> QuestDrivenMissionList; // 0x8 (0x10)
};

