// Class /Script/CrewUI.CrewUIGameFeatureAction
// Size: 0x160
class UCrewUIGameFeatureAction : public UFortUIGameFeatureAction
{
	struct TWeakObjectPtr<class UClass> BattlePassCrewContainerClass; // 0x28 (0x28)
	struct TWeakObjectPtr<class UClass> CrewContentContainerClass; // 0x50 (0x28)
	struct TWeakObjectPtr<class UClass> CrewStandaloneContentContainerClass; // 0x78 (0x28)
	struct TWeakObjectPtr<class UClass> CrewPurchaseScreenClass; // 0xa0 (0x28)
	struct TWeakObjectPtr<class UClass> ProgressionScreenClass; // 0xc8 (0x28)
	struct TWeakObjectPtr<class UClass> CrewPriceChangeAcknowledgeModalClass; // 0xf0 (0x28)
	struct TWeakObjectPtr<class UClass> MultiSubAlertModalClass; // 0x118 (0x28)
	struct TArray<struct FFortProgressiveSet> ProgressiveCosmeticSets; // 0x140 (0x10)
	unsigned char padding_150[0x10]; // 0x150 (0x10)
};

