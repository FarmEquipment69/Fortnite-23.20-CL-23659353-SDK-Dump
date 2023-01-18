// Class /Script/FortniteGame.FortSharedMissionLists
// Size: 0x1b8
class UFortSharedMissionLists : public UObject
{
	struct TArray<struct FFortNonPrimaryMission> CombinedNonPrimaryMissionList; // 0x28 (0x10)
	struct TArray<struct FFortNonPrimaryMission> NonPrimaryMissionList; // 0x38 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortNonPrimaryMissionList>> NonPrimaryMissionLists; // 0x48 (0x10)
	struct TArray<struct FFortMissionDistributionCategory> NonPrimaryMissionDistributionCategories; // 0x58 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortMissionGenerationList>> WorldSetupMissionGenerationLists; // 0x68 (0x10)
	struct FGameplayTagQuery PrimaryMissionTagQuery; // 0x78 (0x48)
	struct FGameplayTagQuery TheaterTagQuery; // 0xc0 (0x48)
	struct FGameplayTagQuery RegionTagQuery; // 0x108 (0x48)
	struct TArray<struct FFortGlobalMission> SharedMissionList; // 0x150 (0x10)
	struct TArray<struct FQuestDrivenMissionSubList> QuestDrivenMissionLists; // 0x160 (0x10)
	struct TArray<struct FFortQuestDrivenMission> AvailableQuestDrivenMissionList; // 0x170 (0x10)
	struct TArray<class AFortPlayerController*> PendingPIEPlayers; // 0x180 (0x10)
	unsigned char unreflected_190[0x18]; // 0x190 (0x18) 
	struct TArray<int> DisableSharedMissionListIndices; // 0x1a8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortSharedMissionLists.UpdatePIEPlayers (Underlying native function: UpdatePIEPlayers 0x26daa0c)
	void UpdatePIEPlayers(); // (Final | Native | Protected | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortSharedMissionLists.SimpleDynamicMulticastDelegate__DelegateSignature (Has no native function)
	void SimpleDynamicMulticastDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)
};

