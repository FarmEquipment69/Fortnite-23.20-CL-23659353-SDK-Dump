// Class /Script/SaveTheWorldUI.FortExpeditionUtilities
// Size: 0x28
class UFortExpeditionUtilities : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.TotalUnseenExpeditionsForTab (Underlying native function: TotalUnseenExpeditionsForTab 0x7574194)
	static int TotalUnseenExpeditionsForTab(class UWidget*& Widget, struct FName& TabNameID); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.IsSquadOnExpedition (Underlying native function: IsSquadOnExpedition 0x7570318)
	static bool IsSquadOnExpedition(class UWidget*& Widget, struct FName& SquadId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetVehicleTagRequiredForExpedition (Underlying native function: GetVehicleTagRequiredForExpedition 0x756e900)
	static struct FGameplayTag GetVehicleTagRequiredForExpedition(class UFortExpeditionItem*& Expedition); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetVehicleTagFromSquadId (Underlying native function: GetVehicleTagFromSquadId 0x756e828)
	static bool GetVehicleTagFromSquadId(struct FName& SquadId, struct FGameplayTag& OutFoundVehicleTag); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetTotalExpeditionVehiclesAvailable (Underlying native function: GetTotalExpeditionVehiclesAvailable 0x756e484)
	static void GetTotalExpeditionVehiclesAvailable(class UWidget*& Widget, class AFortPlayerController*& FortPC, int& OutLandVehicles, int& OutLandVehiclesAvailable, int& OutSeaVehicles, int& OutSeaVehiclesAvailable, int& OutAirVehicles, int& OutAirVehiclesAvailable); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetMatchedCriteriaTags (Underlying native function: GetMatchedCriteriaTags 0x756ddf4)
	static void GetMatchedCriteriaTags(class UFortExpeditionItem*& Expedition, struct TArray<class UFortItem*>& SlottedItems, struct TArray<struct FGameplayTag>& OutMatchedCriteria); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetExpeditionSquadsThatMatchRequirements (Underlying native function: GetExpeditionSquadsThatMatchRequirements 0x756db30)
	static bool GetExpeditionSquadsThatMatchRequirements(struct FGameplayTagContainer& RequirementTags, class AFortPlayerController*& FortPC, struct TArray<struct FName>& OutExpeditionSquadIds); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetExpeditionSquadPower (Underlying native function: GetExpeditionSquadPower 0x756da60)
	static float GetExpeditionSquadPower(class AFortPlayerController*& FortPC, struct FName& SquadId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.GetAllExpeditionSquadIds (Underlying native function: GetAllExpeditionSquadIds 0x756d83c)
	static void GetAllExpeditionSquadIds(struct TArray<struct FName>& OutExpeditionSquadIds); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.CalculateTotalPower (Underlying native function: CalculateTotalPower 0x756d408)
	static float CalculateTotalPower(class AFortPlayerController*& FortPC, class UFortExpeditionItem*& Expedition, struct FName& SquadId, struct TArray<class UFortItem*>& SlottedItems); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.CalculateGlobalAndItemRatingModValuesBP (Underlying native function: CalculateGlobalAndItemRatingModValuesBP 0x756d274)
	static void CalculateGlobalAndItemRatingModValuesBP(class UFortExpeditionItem*& Expedition, struct TArray<class UFortItem*>& SlottedItems, float& GlobalPowerMod, struct TArray<float>& SlottedItemMods); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.CalculateExpeditionPercentageChanceForSuccess (Underlying native function: CalculateExpeditionPercentageChanceForSuccess 0x756d158)
	static float CalculateExpeditionPercentageChanceForSuccess(class UFortExpeditionItem*& Expedition, float& TotalPower); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.AreExpeditionsUnlocked (Underlying native function: AreExpeditionsUnlocked 0x756cfd0)
	static bool AreExpeditionsUnlocked(class UObject*& WorldContextObject, struct FUniqueNetIdRepl& UniqueId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionUtilities.AreAnyExpeditionsComplete (Underlying native function: AreAnyExpeditionsComplete 0x756cf50)
	static bool AreAnyExpeditionsComplete(class UWidget*& Widget); // (Final | Native | Static | Public | BlueprintCallable)
};

