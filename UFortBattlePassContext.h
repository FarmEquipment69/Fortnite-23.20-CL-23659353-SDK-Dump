// Class /Script/BattlePassBase.FortBattlePassContext
// Size: 0xa8
class UFortBattlePassContext : public UBlueprintContextBase
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct TArray<class UFortPersistentResourceItemDefinition*> CustomizationPageSeasonalResources; // 0x38 (0x10)
	struct TArray<class UFortPersistentResourceItemDefinition*> AllSeasonalResources; // 0x48 (0x10)
	struct TMap<enum ERewardPageType, struct FSeasonalResourceList> RewardPageSeasonalResources; // 0x58 (0x50)

	/* Functions */

	// Function /Script/BattlePassBase.FortBattlePassContext.GetSeasonalCurrencies (Underlying native function: GetSeasonalCurrencies 0x72706b8)
	struct TArray<struct FSeasonCurrencyMcpData> GetSeasonalCurrencies(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/BattlePassBase.FortBattlePassContext.GetLevelPurchaseDisclaimerText (Underlying native function: GetLevelPurchaseDisclaimerText 0x727064c)
	struct FText GetLevelPurchaseDisclaimerText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/BattlePassBase.FortBattlePassContext.GetDefaultDisclaimerText (Underlying native function: GetDefaultDisclaimerText 0x2455170)
	struct FText GetDefaultDisclaimerText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/BattlePassBase.FortBattlePassContext.GetCurrentSeasonNumberAsText (Underlying native function: GetCurrentSeasonNumberAsText 0x1c2b3e0)
	struct FText GetCurrentSeasonNumberAsText(bool& bFullText); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/BattlePassBase.FortBattlePassContext.GetCurrentChapterAsText (Underlying native function: GetCurrentChapterAsText 0x727053c)
	struct FText GetCurrentChapterAsText(bool& bFullText); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/BattlePassBase.FortBattlePassContext.CanPurchaseBattlePassLevel (Underlying native function: CanPurchaseBattlePassLevel 0x7270460)
	bool CanPurchaseBattlePassLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

