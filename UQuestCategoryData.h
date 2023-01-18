// Class /Script/FortniteGame.QuestCategoryData
// Size: 0x348
class UQuestCategoryData : public UPrimaryDataAsset
{
	bool bCategoryEnabled; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TWeakObjectPtr<class UObject> DisplayAsset; // 0x38 (0x28)
	struct FText DisplayName; // 0x60 (0x18)
	struct FText DisplaySubText; // 0x78 (0x18)
	struct FText DefaultHeaderName; // 0x90 (0x18)
	int DefaultHeaderSortOrder; // 0xa8 (0x4)
	unsigned char unreflected_ac[0x4]; // 0xac (0x4) 
	struct FGameplayTagContainer DefaultIncludedGameModeTags; // 0xb0 (0x20)
	struct FGameplayTagContainer DefaultDisabledGameModeTags; // 0xd0 (0x20)
	struct TArray<struct FQuestCategoryHeaderData> AdditionalHeaders; // 0xf0 (0x10)
	bool bIncludeAllQuests; // 0x100 (0x1)
	unsigned char unreflected_101[0x7]; // 0x101 (0x7) 
	struct FGameplayTagContainer IncludeTags; // 0x108 (0x20)
	struct FGameplayTagContainer ExcludeTags; // 0x128 (0x20)
	struct FGameplayTagContainer IncludedGameModeTags; // 0x148 (0x20)
	struct FGameplayTagContainer DisabledGameModeTags; // 0x168 (0x20)
	struct TWeakObjectPtr<class UFortPlaylist> DiscoveryPlaylist; // 0x188 (0x28)
	bool bDisplayMap; // 0x1b0 (0x1)
	unsigned char unreflected_1b1[0x7]; // 0x1b1 (0x7) 
	struct TWeakObjectPtr<class UObject> CustomMapBackground; // 0x1b8 (0x28)
	struct TWeakObjectPtr<class UClass> CustomMapWidget; // 0x1e0 (0x28)
	bool bAlwaysDisplay; // 0x208 (0x1)
	unsigned char unreflected_209[0x7]; // 0x209 (0x7) 
	struct FString RequiredProfileItemTemplateId; // 0x210 (0x10)
	struct FText CustomTimeRemaining; // 0x220 (0x18)
	int SortOrder; // 0x238 (0x4)
	unsigned char unreflected_23c[0x4]; // 0x23c (0x4) 
	struct FQuestCategoryButtonOverrides ButtonOverrides; // 0x240 (0x78)
	struct TArray<struct FAutoGoalCardData> AutoGoalCards; // 0x2b8 (0x10)
	bool bCanShowAllQuestsCompleted; // 0x2c8 (0x1)
	unsigned char unreflected_2c9[0x3]; // 0x2c9 (0x3) 
	struct FGameplayTag AllQuestsCompleteHeaderTag; // 0x2cc (0x4)
	bool bCanShowPartyUpWidget; // 0x2d0 (0x1)
	unsigned char unreflected_2d1[0x3]; // 0x2d1 (0x3) 
	struct FGameplayTag PartyUpHeaderTag; // 0x2d4 (0x4)
	bool bShowLockedQuestWidgets; // 0x2d8 (0x1)
	unsigned char unreflected_2d9[0x7]; // 0x2d9 (0x7) 
	struct FLockedQuestData LockedQuestData; // 0x2e0 (0x48)
	struct TArray<struct FCustomMessageQuestData> CustomMessageData; // 0x328 (0x10)
	unsigned char padding_338[0x10]; // 0x338 (0x10)
};

