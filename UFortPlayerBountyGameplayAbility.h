// Class /Script/FortniteGame.FortPlayerBountyGameplayAbility
// Size: 0xc98
class UFortPlayerBountyGameplayAbility : public UFortTransientQuestGameplayAbility
{
	struct TWeakObjectPtr<class UFortQuestItemDefinition_Athena> PoachedBountyQuestPtr; // 0xb28 (0x28)
	struct FBountyQuestSettings BountyQuestSettings; // 0xb50 (0x100)
	struct FGameplayTagQuery TargetFilter; // 0xc50 (0x48)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.StartPlayerDuel (Underlying native function: StartPlayerDuel 0x8142dfc)
	void StartPlayerDuel(); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.SpectatorShowUrgentQuestMessage (Underlying native function: SpectatorShowUrgentQuestMessage 0x8142d2c)
	void SpectatorShowUrgentQuestMessage(struct FUrgentQuestData& UrgentQuestData); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.SpectatorFailUrgentQuest (Underlying native function: SpectatorFailUrgentQuest 0x8142c4c)
	void SpectatorFailUrgentQuest(struct FUrgentQuestData& UrgentQuestData, struct FGameplayTag& FailedEventTag); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.SpectatorCompleteUrgentQuest (Underlying native function: SpectatorCompleteUrgentQuest 0x8142b38)
	void SpectatorCompleteUrgentQuest(struct FUrgentQuestData& UrgentQuestData, struct FGameplayTag& CompletedEventTag); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.GetTrackedProtectorBountyTarget (Underlying native function: GetTrackedProtectorBountyTarget 0x8141084)
	class AFortPlayerStateAthena* GetTrackedProtectorBountyTarget(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.GetTrackedPrimaryHunter (Underlying native function: GetTrackedPrimaryHunter 0x8141004)
	class AFortPlayerStateAthena* GetTrackedPrimaryHunter(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.GetTrackedHunterBountyTarget (Underlying native function: GetTrackedHunterBountyTarget 0x8140f84)
	class AFortPlayerStateAthena* GetTrackedHunterBountyTarget(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.GetTrackedBountyHunters (Underlying native function: GetTrackedBountyHunters 0x8140ebc)
	struct TArray<class AFortPlayerStateAthena*> GetTrackedBountyHunters(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.GetIsPrimaryHunter (Underlying native function: GetIsPrimaryHunter 0x8140998)
	bool GetIsPrimaryHunter(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.CleanupBountyTarget (Underlying native function: CleanupBountyTarget 0x813f658)
	void CleanupBountyTarget(); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.CleanupBountyProtector (Underlying native function: CleanupBountyProtector 0x813f5dc)
	void CleanupBountyProtector(); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.CleanupBountyHunter (Underlying native function: CleanupBountyHunter 0x813f5a4)
	void CleanupBountyHunter(); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPlayerBountyGameplayAbility.BountyPoached (Underlying native function: BountyPoached 0x813eeb8)
	void BountyPoached(); // (Final | Native | Protected | BlueprintCallable)
};

