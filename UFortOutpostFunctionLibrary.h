// Class /Script/FortniteGame.FortOutpostFunctionLibrary
// Size: 0x28
class UFortOutpostFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.TransferItemToStorage (Underlying native function: TransferItemToStorage 0x8efe7a0)
	static void TransferItemToStorage(class AFortPlayerController*& Player, class UFortWorldItem*& Item, int& Count); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.TransferItemFromStorage (Underlying native function: TransferItemFromStorage 0x8efe6a8)
	static void TransferItemFromStorage(class AFortPlayerController*& Player, class UFortWorldItem*& Item, int& Count); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.SetWargameActive (Underlying native function: SetWargameActive 0x8efe5b8)
	static void SetWargameActive(class UObject*& WorldContextObject, bool& bActive); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.SetStormShieldDefenseType (Underlying native function: SetStormShieldDefenseType 0x8efe4ac)
	static void SetStormShieldDefenseType(class UObject*& WorldContextObject, enum EStormShieldDefense& Type); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.SetOutpostGameDifficultyRow (Underlying native function: SetOutpostGameDifficultyRow 0x8efe3bc)
	static void SetOutpostGameDifficultyRow(class UObject*& WorldContextObject, struct FDataTableRowHandle& GameDifficultyInfo); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.SetOutpostDefenseActive (Underlying native function: SetOutpostDefenseActive 0x8efe2e0)
	static void SetOutpostDefenseActive(class UObject*& WorldContextObject, bool& bActive); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.SetIronCityMinMaxPowerLevels (Underlying native function: SetIronCityMinMaxPowerLevels 0x8efe168)
	static void SetIronCityMinMaxPowerLevels(class UObject*& WorldContextObject, float& MinPowerLevel, float& MaxPowerLevel); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.SetEnduranceWaveCompleted (Underlying native function: SetEnduranceWaveCompleted 0x8efe02c)
	static void SetEnduranceWaveCompleted(class UObject*& WorldContextObject, int& WaveNumber, bool& bNewHighest); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.SaveIronCityLowestPlayerAccountLevel (Underlying native function: SaveIronCityLowestPlayerAccountLevel 0x8efd65c)
	static void SaveIronCityLowestPlayerAccountLevel(class UObject*& WorldContextObject, int& AccountLevel); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.SaveIronCityEarlyPlayerInfos (Underlying native function: SaveIronCityEarlyPlayerInfos 0x8efd5ec)
	static void SaveIronCityEarlyPlayerInfos(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.GetPlacementTagFromOutpostBuildingTag (Underlying native function: GetPlacementTagFromOutpostBuildingTag 0x8efca08)
	static struct FGameplayTag GetPlacementTagFromOutpostBuildingTag(class UObject*& WorldContextObject, struct FGameplayTag& BuildingTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.GetOutpostQuestMissionConfigDataFrontEnd (Underlying native function: GetOutpostQuestMissionConfigDataFrontEnd 0x8efc378)
	static class UFortMissionConfigData* GetOutpostQuestMissionConfigDataFrontEnd(class AFortPlayerControllerFrontEnd*& FortPC, struct FGameplayTag& ConfigTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.GetOutpostQuestMissionConfigData (Underlying native function: GetOutpostQuestMissionConfigData 0x8efc2a0)
	static class UFortMissionConfigData* GetOutpostQuestMissionConfigData(class UObject*& WorldContextObject, struct FGameplayTag& ConfigTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.GetOutpostOwner (Underlying native function: GetOutpostOwner 0x8efc220)
	static class AFortPlayerControllerOutpost* GetOutpostOwner(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.GetOutpostBuildingTagFromPlacementTag (Underlying native function: GetOutpostBuildingTagFromPlacementTag 0x8efc0c4)
	static struct FGameplayTag GetOutpostBuildingTagFromPlacementTag(class UObject*& WorldContextObject, struct FGameplayTag& PlacementTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.GetOutpostBuildingItemDefinition (Underlying native function: GetOutpostBuildingItemDefinition 0x8efc000)
	static class UFortOutpostItemDefinition* GetOutpostBuildingItemDefinition(class UObject*& WorldContextObject, enum EOutpostBuildings& Building); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.GetIronCityAveragePlayerAccountLevel (Underlying native function: GetIronCityAveragePlayerAccountLevel 0x8efbcf4)
	static int GetIronCityAveragePlayerAccountLevel(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.GetCachedIronCityDifficultyInfo (Underlying native function: GetCachedIronCityDifficultyInfo 0x8efb590)
	static struct FIronCityDifficultyInfo GetCachedIronCityDifficultyInfo(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.FlushTransferRequests (Underlying native function: FlushTransferRequests 0x8efa8bc)
	static void FlushTransferRequests(class AFortPlayerController*& Player); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.DeployOutpostBuildingTagOnPlacementTag (Underlying native function: DeployOutpostBuildingTagOnPlacementTag 0x8efa4a4)
	static bool DeployOutpostBuildingTagOnPlacementTag(class UObject*& WorldContextObject, struct FGameplayTag& BuildingTag, struct FGameplayTag& PlacementTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.CacheIronCityDifficultyInfo (Underlying native function: CacheIronCityDifficultyInfo 0x8ef9ba8)
	static void CacheIronCityDifficultyInfo(class UObject*& WorldContextObject, int& AccountLevel); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostFunctionLibrary.BuildingActorRecordUpdatesEnabled (Underlying native function: BuildingActorRecordUpdatesEnabled 0x8ef9b08)
	static bool BuildingActorRecordUpdatesEnabled(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)
};

