// ScriptStruct /Script/SaveTheWorldUI.FortQuestMapEventQuestSideBarData
// Size: 0x28
struct FFortQuestMapEventQuestSideBarData : FTableRowBase
{
	class UFortQuestItemDefinition* QuestItemDefinition; // 0x8 (0x8)
	struct TArray<struct FString> EventFlags; // 0x10 (0x10)
	bool bShowAlways; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	float CycleTime; // 0x24 (0x4)
};

