// ScriptStruct /Script/FortniteGame.FortMcpQuestObjectiveInfo
// Size: 0x180
struct FFortMcpQuestObjectiveInfo
{
	struct FName BackendName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FInstancedStruct> ObjectiveFilters; // 0x8 (0x10)
	struct TArray<struct FFortQuestObjectiveStat> InlineObjectiveStats; // 0x18 (0x10)
	struct FGameplayTagContainer ProximityQuestTags; // 0x28 (0x20)
	struct FDataTableRowHandle ObjectiveStatHandle; // 0x48 (0x10)
	struct TArray<struct FDataTableRowHandle> AlternativeStatHandles; // 0x58 (0x10)
	enum EFortQuestObjectiveItemEvent ItemEvent; // 0x68 (0x1)
	unsigned char bHidden; // 0x69 (0x1)
	unsigned char bRequirePrimaryMissionCompletion; // 0x69 (0x1)
	unsigned char bCanProgressInZone; // 0x69 (0x1)
	unsigned char bDisplayDynamicAnnouncementUpdate; // 0x69 (0x1)
	enum EObjectiveStatusUpdateType DynamicStatusUpdateType; // 0x6a (0x1)
	enum EFortInventoryFilter LinkVaultTab; // 0x6b (0x1)
	enum EFortFrontendInventoryFilter LinkToItemManagement; // 0x6c (0x1)
	unsigned char unreflected_6d[0x3]; // 0x6d (0x3) 
	struct TWeakObjectPtr<class UFortItemDefinition> ItemReference; // 0x70 (0x28)
	struct FString ItemTemplateIdOverride; // 0x98 (0x10)
	struct FName LinkSquadID; // 0xa8 (0x4)
	int LinkSquadIndex; // 0xac (0x4)
	struct FText Description; // 0xb0 (0x18)
	struct FText HudShortDescription; // 0xc8 (0x18)
	struct TWeakObjectPtr<class UTexture2D> HudIcon; // 0xe0 (0x28)
	struct TArray<struct FFortObjectiveConversationTriggerInfo> ObjectiveConversations; // 0x108 (0x10)
	struct FFortMcpQuestObjectiveDisplayInfo* ObjectiveDisplayInfo; // 0x118 (0x8)
	int Count; // 0x120 (0x4)
	int Stage; // 0x124 (0x4)
	int DynamicStatusUpdatePercentInterval; // 0x128 (0x4)
	float DynamicUpdateCompletionDelay; // 0x12c (0x4)
	struct TWeakObjectPtr<class UClass> ScriptedAction; // 0x130 (0x28)
	struct TWeakObjectPtr<class UClass> FrontendScriptedAction; // 0x158 (0x28)
};

