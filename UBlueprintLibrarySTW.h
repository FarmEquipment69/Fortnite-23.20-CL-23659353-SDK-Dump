// Class /Script/FortniteGame.BlueprintLibrarySTW
// Size: 0x28
class UBlueprintLibrarySTW : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.BlueprintLibrarySTW.SwitchHeroType (Underlying native function: SwitchHeroType 0x8e822f4)
	static bool SwitchHeroType(class AFortPlayerController*& FortPC, struct FString& NewHeroName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BlueprintLibrarySTW.SetIdleKickEnabled (Underlying native function: SetIdleKickEnabled 0x8e81970)
	static void SetIdleKickEnabled(class UObject*& WorldContextObject, bool& bEnabled); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BlueprintLibrarySTW.SetCriticalMissionJoinability (Underlying native function: SetCriticalMissionJoinability 0x8e81814)
	static void SetCriticalMissionJoinability(class UObject*& WorldContextObject, bool& bJoinable); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BlueprintLibrarySTW.GetShowHeroHeadAccessoriesForLocalPlayer (Underlying native function: GetShowHeroHeadAccessoriesForLocalPlayer 0x8656b10)
	static bool GetShowHeroHeadAccessoriesForLocalPlayer(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BlueprintLibrarySTW.GetShowHeroBackpackForLocalPlayer (Underlying native function: GetShowHeroBackpackForLocalPlayer 0x8656b10)
	static bool GetShowHeroBackpackForLocalPlayer(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BlueprintLibrarySTW.GetRemovedAbilityKit (Underlying native function: GetRemovedAbilityKit 0x8e7ecfc)
	static class UFortAbilityKit* GetRemovedAbilityKit(struct FFortSpecializationSlot& Slot); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BlueprintLibrarySTW.GetPurchaseCostsRow (Underlying native function: GetPurchaseCostsRow 0x8e7ebc0)
	static bool GetPurchaseCostsRow(struct FDataTableRowHandle& DataTableRowHandle, struct FFortCollectionBookDirectPurchaseData& OutRow); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BlueprintLibrarySTW.GetLocalPlayerHasHeroHeadAccessories (Underlying native function: GetLocalPlayerHasHeroHeadAccessories 0x723ba10)
	static bool GetLocalPlayerHasHeroHeadAccessories(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BlueprintLibrarySTW.GetLocalPlayerHasHeroBackpack (Underlying native function: GetLocalPlayerHasHeroBackpack 0x723ba10)
	static bool GetLocalPlayerHasHeroBackpack(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BlueprintLibrarySTW.GetGrantedAbilityKit (Underlying native function: GetGrantedAbilityKit 0x8e7e6fc)
	static class UFortAbilityKit* GetGrantedAbilityKit(struct FFortSpecializationSlot& Slot); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BlueprintLibrarySTW.GetGameDifficulty (Underlying native function: GetGameDifficulty 0x8e7e6d4)
	static float GetGameDifficulty(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BlueprintLibrarySTW.GetCalculatedGameDifficulty (Underlying native function: GetCalculatedGameDifficulty 0x8e7e2d4)
	static float GetCalculatedGameDifficulty(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BlueprintLibrarySTW.ApplyEncounterOptionOverridesFromWaveDataToEncounterSettings (Underlying native function: ApplyEncounterOptionOverridesFromWaveDataToEncounterSettings 0x8e7d118)
	static struct FFortEncounterSettings ApplyEncounterOptionOverridesFromWaveDataToEncounterSettings(struct FTieredWaveSetData& WaveData, struct FFortEncounterSettings& EncounterSettings); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)
};

