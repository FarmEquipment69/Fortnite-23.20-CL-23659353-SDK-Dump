// Class /Script/FortniteGame.FortNavigationActor_EventGraphItem
// Size: 0x5b0
class AFortNavigationActor_EventGraphItem : public AFortEventLevelNavigationActor
{
	struct FGameplayTag ParentNavObject; // 0x530 (0x4)
	unsigned char unreflected_534[0x4]; // 0x534 (0x4) 
	struct FGameplayTagContainer LevelDefinedNodeToRollFor; // 0x538 (0x20)
	struct FGameplayTag NodeTag; // 0x558 (0x4)
	unsigned char unreflected_55c[0x4]; // 0x55c (0x4) 
	class UAthenaRewardEventGraph* RewardGraphToReprisent; // 0x560 (0x8)
	bool bInitializedCalled; // 0x568 (0x1)
	bool CanNavigateToWhenClaimed; // 0x569 (0x1)
	unsigned char padding_56a[0x46]; // 0x56a (0x46)

	/* Functions */

	// Function /Script/FortniteGame.FortNavigationActor_EventGraphItem.UpdateDisplayMeshToOpened (Has no native function)
	void UpdateDisplayMeshToOpened(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortNavigationActor_EventGraphItem.GetNodeTag (Underlying native function: GetNodeTag 0x8545620)
	struct FGameplayTag GetNodeTag(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortNavigationActor_EventGraphItem.CosmeticVariantAssets_PostLoad (Underlying native function: CosmeticVariantAssets_PostLoad 0x85450d8)
	void CosmeticVariantAssetsPostLoad(); // (Final | Native | Protected)
};

