// Class /Script/CorruptionGameplayCodeRuntime.WarEffortMeshActor
// Size: 0x310
class AWarEffortMeshActor : public AInfo
{
	class UMeshNetworkComponent* MeshNetworkComponent; // 0x288 (0x8)
	struct TArray<struct FGameplayTag> ActiveFundedItems; // 0x290 (0x10)
	struct TArray<struct FGameplayTag> ActiveTryBeforeYouBuyItems; // 0x2a0 (0x10)
	struct TArray<struct FWarEffortFundingData*> CurrentFundingData; // 0x2b0 (0x10)
	unsigned char padding_2c0[0x50]; // 0x2c0 (0x50)

	/* Functions */

	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_CurrentFundingData (Underlying native function: OnRep_CurrentFundingData 0x72bf7ec)
	void OnRepCurrentFundingData(); // (Final | Native | Protected)

	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_ActiveTryBeforeYouBuyItems (Underlying native function: OnRep_ActiveTryBeforeYouBuyItems 0x72bf7d8)
	void OnRepActiveTryBeforeYouBuyItems(); // (Final | Native | Protected)

	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_ActiveFundedItems (Underlying native function: OnRep_ActiveFundedItems 0x72bf7c4)
	void OnRepActiveFundedItems(); // (Final | Native | Protected)
};

