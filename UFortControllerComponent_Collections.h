// Class /Script/FortniteGame.FortControllerComponent_Collections
// Size: 0xb0
class UFortControllerComponent_Collections : public UFortControllerComponent
{
	unsigned char unreflected_b0[0xb0]; 

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_Collections.OnFishCollected (Underlying native function: OnFishCollected 0x86d0514)
	void OnFishCollected(struct FFortItemEntry& ItemEntry, struct FFortMcpCollectedFishProperties*& FishProperties, struct FGameplayTag& OutFishCollectionTag, struct FGameplayTag& OutAnalyticsTag, enum EFortCollectedState& OutNewSeenState); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_Collections.GetCollectionsComponent (Underlying native function: GetCollectionsComponent 0x86cff60)
	static class UFortControllerComponent_Collections* GetCollectionsComponent(class APawn*& Pawn, enum ECollectionsComponentValidityResult& OutIsValid); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

