// ScriptStruct /Script/FortniteGame.FortOverlapData
// Size: 0x48
struct FFortOverlapData
{
	struct FGameplayTagContainer RequiredPlayerTags; // 0x0 (0x20)
	struct FGameplayTagContainer ProhibitedPlayerTags; // 0x20 (0x20)
	bool bReHideIfConditionsChange; // 0x40 (0x1)
	bool bCompleteFromDiscovery; // 0x41 (0x1)
	bool bTestVisualsNoQuestRequired; // 0x42 (0x1)
	bool bOnVisualTestingCooldown; // 0x43 (0x1)
	unsigned char padding_44[0x4]; // 0x44 (0x4)
};

