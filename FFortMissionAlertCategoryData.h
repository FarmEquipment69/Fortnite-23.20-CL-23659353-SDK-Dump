// ScriptStruct /Script/FortniteGame.FortMissionAlertCategoryData
// Size: 0x68
struct FFortMissionAlertCategoryData : FTableRowBase
{
	struct FName CategoryRowName; // 0x8 (0x4)
	int Priority; // 0xc (0x4)
	bool MissionAlertRepeatable; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct FString Timer; // 0x18 (0x10)
	struct FGameplayTagContainer CategoryTagsContainer; // 0x28 (0x20)
	struct FGameplayTagContainer VisualizationTagsContainer; // 0x48 (0x20)
};

