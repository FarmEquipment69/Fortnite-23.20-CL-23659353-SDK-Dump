// ScriptStruct /Script/FortniteGame.RewardNode
// Size: 0xd8
struct FRewardNode
{
	struct TWeakObjectPtr<class UFortTokenType> RequiredKey; // 0x0 (0x28)
	int KeyCount; // 0x28 (0x4)
	int MinKeyCountToUnlock; // 0x2c (0x4)
	int DaysFromEventStartToUnlock; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FGameplayTagContainer ChildNodes; // 0x38 (0x20)
	struct FGameplayTagContainer ParentNodes; // 0x58 (0x20)
	struct FGameplayTag NodeTag; // 0x78 (0x4)
	bool bGrantedAtGraphDestruction; // 0x7c (0x1)
	bool bRequiredOwnership; // 0x7d (0x1)
	unsigned char unreflected_7e[0x2]; // 0x7e (0x2) 
	struct TArray<struct FAthenaRewardItemReference> Rewards; // 0x80 (0x10)
	struct FString RewardOperation; // 0x90 (0x10)
	struct TWeakObjectPtr<class UFortItemDefinition> RewardContextItem; // 0xa0 (0x28)
	struct TArray<struct FCosmeticVariantInfo*> HardDefinedVisuals; // 0xc8 (0x10)
};

