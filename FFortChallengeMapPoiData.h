// ScriptStruct /Script/FortniteGame.FortChallengeMapPoiData
// Size: 0x88
struct FFortChallengeMapPoiData
{
	struct FText Text; // 0x0 (0x18)
	struct FVector WorldLocation; // 0x18 (0x18)
	struct FGameplayTag LocationTag; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct TArray<struct FString> CalendarEventsRequired; // 0x38 (0x10)
	struct TWeakObjectPtr<class UFortQuestItemDefinition> DiscoveryQuest; // 0x48 (0x28)
	struct FName DiscoverObjectiveBackendName; // 0x70 (0x4)
	unsigned char unreflected_74[0x4]; // 0x74 (0x4) 
	struct TArray<int> ActiveDiscoverableBlodIds; // 0x78 (0x10)
};

