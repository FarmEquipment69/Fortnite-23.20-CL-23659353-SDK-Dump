// Class /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort
// Size: 0x4b8
class AFortAthenaMutator_WarEffort : public AFortAthenaMutator_GameModeBase
{
	unsigned char unreflected_450[0x8]; // 0x450 (0x8) 
	struct FWarEffortMutatorMetadata MeshNetworkMetadata; // 0x458 (0x20)
	struct TArray<struct FWarEffortMutatorChoiceData> WeaponChoices; // 0x478 (0x10)
	struct TArray<struct FPrimaryAssetId*> PreloadedItemList; // 0x488 (0x10)
	bool bCanPreloadItems; // 0x498 (0x1)
	unsigned char padding_499[0x1f]; // 0x499 (0x1f)

	/* Functions */

	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetTryBeforeYouBuyItemState (Underlying native function: SetTryBeforeYouBuyItemState 0x72bfb18)
	void SetTryBeforeYouBuyItemState(struct FGameplayTag& ItemFundingTag, bool& bIsActive); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedState (Underlying native function: SetItemFundedState 0x72bfa54)
	void SetItemFundedState(struct FGameplayTag& ItemFundingTag, bool& bIsActive); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedPercent (Underlying native function: SetItemFundedPercent 0x72bf98c)
	void SetItemFundedPercent(struct FGameplayTag& ItemFundingTag, float& FundingPercent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedAmount (Underlying native function: SetItemFundedAmount 0x72bf894)
	void SetItemFundedAmount(struct FGameplayTag& ItemFundingTag, int64_t& CurrentFundingAmount, int64_t& TargetFundingAmount); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetFundingManagerReady (Underlying native function: SetFundingManagerReady 0x72bf814)
	void SetFundingManagerReady(bool& bIsReady); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.OnRep_PreloadedItemList (Underlying native function: OnRep_PreloadedItemList 0x72bf800)
	void OnRepPreloadedItemList(); // (Final | Native | Protected)
};

