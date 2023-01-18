// Class /Script/FortniteUI.AthenaAccountContext
// Size: 0x30
class UAthenaAccountContext : public UBlueprintContextBase
{

	/* Functions */

	// Function /Script/FortniteUI.AthenaAccountContext.SimulateBattleBookPurchase (Underlying native function: SimulateBattleBookPurchase 0xa623c48)
	void SimulateBattleBookPurchase(int& NumLevelsToPurchase, int& BonusLevelsGranted, bool& bOverLimit); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaAccountContext.ShouldReplaceBattleStarsWithAlternateReward (Underlying native function: ShouldReplaceBattleStarsWithAlternateReward 0xa62376c)
	bool ShouldReplaceBattleStarsWithAlternateReward(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaAccountContext.IsAtMaxBattlePassTier (Underlying native function: IsAtMaxBattlePassTier 0xa620a44)
	bool IsAtMaxBattlePassTier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaAccountContext.GetCurrentSeasonNumberAsText (Underlying native function: GetCurrentSeasonNumberAsText 0xa61d714)
	struct FText GetCurrentSeasonNumberAsText(bool& bFullText); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaAccountContext.GetCurrentSeasonNumber (Underlying native function: GetCurrentSeasonNumber 0xa61d6c4)
	int GetCurrentSeasonNumber(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaAccountContext.GetCurrentSeasonDefinition (Underlying native function: GetCurrentSeasonDefinition 0xa61d680)
	class UAthenaSeasonItemDefinition* GetCurrentSeasonDefinition(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaAccountContext.GetCurrentChapterNumberAsText (Underlying native function: GetCurrentChapterNumberAsText 0xa61d514)
	struct FText GetCurrentChapterNumberAsText(bool& bFullText); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaAccountContext.GetCurrentChapterAndSeasonText (Underlying native function: GetCurrentChapterAndSeasonText 0xa61d458)
	struct FText GetCurrentChapterAndSeasonText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaAccountContext.GetBattleBookPurchaseLimit (Underlying native function: GetBattleBookPurchaseLimit 0xa61d1f4)
	void GetBattleBookPurchaseLimit(int& MaxNumLevelsPossibleToPurchase, int& BonusLevelsGranted); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

