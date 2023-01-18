// Class /Script/FortniteGame.FortCosmeticsSubsystem
// Size: 0x168
class UFortCosmeticsSubsystem : public UFortMemoryManagingGameInstanceSubsystem
{
	class UCosmeticStepDependencyBuilder* Cache; // 0x60 (0x8)
	struct TArray<struct TWeakObjectPtr<class UClass>> ExtensionClasses; // 0x68 (0x10)
	struct TMap<struct FCosmeticFlowGraphKey*, struct FCosmeticFlowgraphState> CosmeticCategories; // 0x78 (0x50)
	struct TMap<struct FCosmeticsPassLookupKey, class UFortCosmeticPassContext*> ActorToVarianceFlow; // 0xc8 (0x50)
	struct TMap<struct FCosmeticFlowOptionSetKey, class UFortCosmeticFlowOptionSet*> CosmeticFlowOptionSets; // 0x118 (0x50)
};

