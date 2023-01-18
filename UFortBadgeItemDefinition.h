// Class /Script/FortniteGame.FortBadgeItemDefinition
// Size: 0x980
class UFortBadgeItemDefinition : public UFortWorldItemDefinition
{
	struct FText DisplayText; // 0x8e8 (0x18)
	struct FText FailedDisplayText; // 0x900 (0x18)
	struct FLinearColor BadgeColor; // 0x918 (0x10)
	int UIMissionPointsOffset; // 0x928 (0x4)
	unsigned char unreflected_92c[0x4]; // 0x92c (0x4) 
	struct FDataTableRowHandle BadgeScoringValuesHandle; // 0x930 (0x10)
	struct TWeakObjectPtr<class UFortCardPackItemDefinition> BadgeCardPackReward; // 0x940 (0x28)
	struct TArray<struct FFortItemQuantityPair> ItemRewards; // 0x968 (0x10)
	unsigned char padding_978[0x8]; // 0x978 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortBadgeItemDefinition.GetUIMissionPointsOffset (Underlying native function: GetUIMissionPointsOffset 0x8ed1d94)
	int GetUIMissionPointsOffset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortBadgeItemDefinition.GetScoreAwarded (Underlying native function: GetScoreAwarded 0x8ed0f0c)
	int GetScoreAwarded(class APlayerController*& PlayerController); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortBadgeItemDefinition.GetMissionPoints (Underlying native function: GetMissionPoints 0x8ed056c)
	int GetMissionPoints(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortBadgeItemDefinition.GetBadgeScoreThreshold (Underlying native function: GetBadgeScoreThreshold 0x8ecf380)
	int GetBadgeScoreThreshold(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortBadgeItemDefinition.GetBadgeScoreCategory (Underlying native function: GetBadgeScoreCategory 0x8ecf340)
	enum EStatCategory GetBadgeScoreCategory(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

