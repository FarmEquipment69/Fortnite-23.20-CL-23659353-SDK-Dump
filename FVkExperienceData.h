// ScriptStruct /Script/FortniteGame.VkExperienceData
// Size: 0x60
struct FVkExperienceData
{
	struct TWeakObjectPtr<class UWorld> DefaultMap; // 0x0 (0x28)
	struct TWeakObjectPtr<class UWorld> BaseMap; // 0x28 (0x28)
	struct TArray<struct FVkMapExperienceData> MapData; // 0x50 (0x10)
};

