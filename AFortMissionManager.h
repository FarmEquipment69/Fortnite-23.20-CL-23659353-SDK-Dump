// Class /Script/FortniteGame.FortMissionManager
// Size: 0x528
class AFortMissionManager : public AActor
{
	struct TArray<struct FFortMissionEventName*> MissionEventNames; // 0x288 (0x10)
	struct TWeakObjectPtr<class UClass> PrimaryMissionGE; // 0x298 (0x28)
	unsigned char unreflected_2c0[0x8]; // 0x2c0 (0x8) 
	class AFortBluGloManager* BluGloManager; // 0x2c8 (0x8)
	struct TArray<class AFortMission*> Missions; // 0x2d0 (0x10)
	struct TArray<class UClass*> AllMissionEnemyClasses; // 0x2e0 (0x10)
	struct TArray<struct FFortMissionEventReceiverByGameplayTagQuery> ContainerSearchedMissionReceivers; // 0x2f0 (0x10)
	struct TArray<struct FFortMissionEventReceiverByGameplayTagQuery> HarvestedMissionReceivers; // 0x300 (0x10)
	unsigned char unreflected_310[0x50]; // 0x310 (0x50) 
	struct TArray<struct FFortMissionUIActorHandle> MissionUIActors; // 0x360 (0x10)
	class AFortMission* CurrentUIFocusedMission; // 0x370 (0x8)
	class AFortMission* MissionClosestToPar; // 0x378 (0x8)
	struct FMulticastInlineDelegate OnMissionsUpdated; // 0x380 (0x10)
	unsigned char unreflected_390[0x18]; // 0x390 (0x18) 
	struct FEarnedBadgeEntryArray EarnedBadgesArray; // 0x3a8 (0x118)
	unsigned char unreflected_4c0[0x38]; // 0x4c0 (0x38) 
	struct FMulticastInlineDelegate OnShouldShowSecondaryMissionHeadersChanged; // 0x4f8 (0x10)
	bool bDisplaySecondaryMissionHeaders; // 0x508 (0x1)
	unsigned char padding_509[0x1f]; // 0x509 (0x1f)

	/* Functions */

	// Function /Script/FortniteGame.FortMissionManager.ShouldShowSecondaryMissionHeaders (Underlying native function: ShouldShowSecondaryMissionHeaders 0x8b2fcf4)
	bool ShouldShowSecondaryMissionHeaders(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMissionManager.OnRep_MissionUIActors (Underlying native function: OnRep_MissionUIActors 0x2fd2cec)
	void OnRepMissionUIActors(); // (Native | Protected)

	// Function /Script/FortniteGame.FortMissionManager.OnRep_EarnedBadgesArray (Underlying native function: OnRep_EarnedBadgesArray 0x8b2da60)
	void OnRepEarnedBadgesArray(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMissionManager.OnRep_CurrentUIFocusedMission (Underlying native function: OnRep_CurrentUIFocusedMission 0x6e13634)
	void OnRepCurrentUIFocusedMission(); // (Native | Public)

	// Function /Script/FortniteGame.FortMissionManager.OnRep_AllMissionEnemyClasses (Underlying native function: OnRep_AllMissionEnemyClasses 0x29876d0)
	void OnRepAllMissionEnemyClasses(); // (Native | Protected)

	// Function /Script/FortniteGame.FortMissionManager.MissionsUpdated (Underlying native function: MissionsUpdated 0x8b2d610)
	void MissionsUpdated(); // (Native | Protected)

	// Function /Script/FortniteGame.FortMissionManager.GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery (Underlying native function: GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery 0x8b2bb3c)
	static bool GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery(class UObject*& WorldContextObject, struct FGameplayTagQuery& TagQuery, struct TArray<class AActor*>& SpawnLocationActors); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionManager.GetSpawnLocationActorsMatchingEntryItemQuery (Underlying native function: GetSpawnLocationActorsMatchingEntryItemQuery 0x8b2b988)
	static bool GetSpawnLocationActorsMatchingEntryItemQuery(class UObject*& WorldContextObject, struct FGameplayTagQuery& TagQuery, struct TArray<class AActor*>& SpawnLocationActors); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)
};

