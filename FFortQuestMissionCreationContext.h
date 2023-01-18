// ScriptStruct /Script/FortniteGame.FortQuestMissionCreationContext
// Size: 0x40
struct FFortQuestMissionCreationContext
{
	struct TWeakObjectPtr<class UFortMissionInfo> MissionInfo; // 0x0 (0x28)
	struct TArray<struct FGameplayTagContainer> MissionCreationContextTags; // 0x28 (0x10)
	bool bSetQuestOwnerAsMissionOwner; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	int MaxNumberToSpawnInWorld; // 0x3c (0x4)
};

