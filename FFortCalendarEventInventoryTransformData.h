// ScriptStruct /Script/FortniteGame.FortCalendarEventInventoryTransformData
// Size: 0x188
struct FFortCalendarEventInventoryTransformData : FTableRowBase
{
	struct FName CalendarChannelName; // 0x8 (0x4)
	struct FName CalendarEventName; // 0xc (0x4)
	struct TArray<struct FName> AllowedProfileTypes; // 0x10 (0x10)
	struct FGameplayTagContainer PrerequisiteHomebaseProperties; // 0x20 (0x20)
	struct TWeakObjectPtr<class UFortQuestItemDefinition> PrerequisiteQuest; // 0x40 (0x28)
	struct FDataTableRowHandle PrerequisiteObjective; // 0x68 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortQuestItemDefinition>> PrerequisiteIncompleteOrUngrantedQuests; // 0x78 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortItemDefinition>> PrerequisiteUnownedItems; // 0x88 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortQuestItemDefinition>> QuestsOnlyActiveDuringEvent; // 0x98 (0x10)
	struct TArray<struct FFortItemQuantityPair> ItemsToGrant; // 0xa8 (0x10)
	struct TArray<struct FFortHiddenRewardQuantityPair*> ItemsToGrantByTemplate; // 0xb8 (0x10)
	struct TArray<struct FRecipeDataTableRowHandleQuantityData> ConversionRecipesToRunOnEventStart; // 0xc8 (0x10)
	struct TArray<struct FRecipeDataTableRowHandleQuantityData> ConversionRecipesToRunAfterEvent; // 0xd8 (0x10)
	struct TArray<struct FFortItemQuantityPair> ItemsToRemoveAfterEvent; // 0xe8 (0x10)
	struct TArray<struct FFortHiddenRewardQuantityPair*> ItemsToRemoveAfterEventByTemplate; // 0xf8 (0x10)
	struct TWeakObjectPtr<class UFortPersistentResourceItemDefinition> EventCurrency; // 0x108 (0x28)
	float EventCurrencyConversionFactor; // 0x130 (0x4)
	unsigned char unreflected_134[0x4]; // 0x134 (0x4) 
	struct TMap<struct FString, struct FString> MetaData; // 0x138 (0x50)
};

