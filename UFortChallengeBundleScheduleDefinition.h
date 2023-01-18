// Class /Script/FortniteGame.FortChallengeBundleScheduleDefinition
// Size: 0x4e0
class UFortChallengeBundleScheduleDefinition : public UFortAccountItemDefinition
{
	struct TArray<struct FFortChallengeBundleScheduleEntry> ScheduleEntries; // 0x420 (0x10)
	struct FString CalendarEventTag; // 0x430 (0x10)
	struct FString CalendarEventName; // 0x440 (0x10)
	struct FGameplayTag RequiredMcpContextTags; // 0x450 (0x4)
	unsigned char unreflected_454[0x4]; // 0x454 (0x4) 
	struct FChallengeGiftBoxData GrantedBundleGiftBox; // 0x458 (0x38)
	bool CleanUpOnBundleCompletion; // 0x490 (0x1)
	unsigned char unreflected_491[0x3]; // 0x491 (0x3) 
	struct FGameplayTag CategoryTag; // 0x494 (0x4)
	struct FGameplayTag ChallengeDetailsTag; // 0x498 (0x4)
	bool bHideInLegacyAllChallengesEscapeMenu; // 0x49c (0x1)
	unsigned char unreflected_49d[0x3]; // 0x49d (0x3) 
	struct FGameplayTag SourceTag; // 0x4a0 (0x4)
	bool bSeperateEachBundleForDisplay; // 0x4a4 (0x1)
	unsigned char unreflected_4a5[0x3]; // 0x4a5 (0x3) 
	int SortPriority; // 0x4a8 (0x4)
	unsigned char unreflected_4ac[0x4]; // 0x4ac (0x4) 
	struct FText UnlockTextOverride; // 0x4b0 (0x18)
	struct TArray<struct TWeakObjectPtr<class UClass>> CustomChallengeHeaderExtensions; // 0x4c8 (0x10)
	bool bHideCountdownFromMapChallenges; // 0x4d8 (0x1)
	unsigned char padding_4d9[0x7]; // 0x4d9 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortChallengeBundleScheduleDefinition.GetSortPriority (Underlying native function: GetSortPriority 0x868c634)
	int GetSortPriority(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleScheduleDefinition.GetNumBundles (Underlying native function: GetNumBundles 0x2d0133c)
	int GetNumBundles(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleScheduleDefinition.GetEventName (Underlying native function: GetEventName 0x868bcc8)
	struct FString GetEventName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleScheduleDefinition.GetCalendarEventName (Underlying native function: GetCalendarEventName 0x868b96c)
	struct FString GetCalendarEventName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleScheduleDefinition.GetBundleDefinitions (Underlying native function: GetBundleDefinitions 0x868b7fc)
	struct TArray<class UFortChallengeBundleItemDefinition*> GetBundleDefinitions(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleScheduleDefinition.DoesChallengeBundleScheduleExpire (Underlying native function: DoesChallengeBundleScheduleExpire 0x868b5a0)
	bool DoesChallengeBundleScheduleExpire(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

