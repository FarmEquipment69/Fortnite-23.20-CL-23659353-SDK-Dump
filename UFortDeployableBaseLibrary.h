// Class /Script/FortniteGame.FortDeployableBaseLibrary
// Size: 0x28
class UFortDeployableBaseLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortDeployableBaseLibrary.UpdateDeployableBaseTierProgressionForPlayers (Underlying native function: UpdateDeployableBaseTierProgressionForPlayers 0x8eace50)
	static void UpdateDeployableBaseTierProgressionForPlayers(class UObject*& WorldContextObject, class UFortTieredCollectionLayout*& CollectionLayout, int& TierDefeated); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseLibrary.SetupDeployableBaseCombatZoneInventoriesOnPlayers (Underlying native function: SetupDeployableBaseCombatZoneInventoriesOnPlayers 0x8eac9bc)
	static void SetupDeployableBaseCombatZoneInventoriesOnPlayers(class UObject*& WorldContextObject, struct TArray<struct FName>& TierGroups, struct TArray<class AFortPlayerController*>& PlayerControllers); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseLibrary.SetDeployableBaseMatchJoinability (Underlying native function: SetDeployableBaseMatchJoinability 0x70dc11c)
	static void SetDeployableBaseMatchJoinability(class UObject*& WorldContextObject, bool& bMatchJoinable); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseLibrary.ResetDeployableBaseHordePlayerInventories (Underlying native function: ResetDeployableBaseHordePlayerInventories 0x71a663c)
	static void ResetDeployableBaseHordePlayerInventories(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseLibrary.OnPreHordeTierStart (Underlying native function: OnPreHordeTierStart 0x8eac248)
	static void OnPreHordeTierStart(class UObject*& WorldContextObject, int& Tier, int& ModifierRRVSeed); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseLibrary.IsWorldItemDefValidToPersistForDeployableBasePlayerInventory (Underlying native function: IsWorldItemDefValidToPersistForDeployableBasePlayerInventory 0x8eab678)
	static bool IsWorldItemDefValidToPersistForDeployableBasePlayerInventory(class UFortWorldItemDefinition*& ItemDefinition); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseLibrary.GrantPlayersCompletedWaveRewards (Underlying native function: GrantPlayersCompletedWaveRewards 0x8eaad64)
	static void GrantPlayersCompletedWaveRewards(class UObject*& WorldContextObject, int& Tier, int& Wave, int& NumberOfPlayers, struct TArray<class ADeployableBaseCore*>& TargetCores, struct TArray<class ADeployableBaseCore*>& AllCores, struct FFortTierCollectionLayoutOutput& CollectionData, struct TArray<struct FName>& TierGroups); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseLibrary.GetTieredModifierSet (Underlying native function: GetTieredModifierSet 0x8b0a678)
	static void GetTieredModifierSet(struct FName& TieredModifierSetName, struct TArray<struct FTieredModifierSetData>& OutModifierSetData); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortDeployableBaseLibrary.GetPrimaryHordeMission (Underlying native function: GetPrimaryHordeMission 0x8eaa54c)
	static class AFortMission* GetPrimaryHordeMission(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortDeployableBaseLibrary.GetHordeTierStartStatus (Underlying native function: GetHordeTierStartStatus 0x8eaa31c)
	static enum EHordeTierStartStatus GetHordeTierStartStatus(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortDeployableBaseLibrary.GetGameDifficultyInfo (Underlying native function: GetGameDifficultyInfo 0x8eaa058)
	static struct FGameDifficultyInfo GetGameDifficultyInfo(struct FName& RowName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseLibrary.ForceRestartDeployableBasePlayers (Underlying native function: ForceRestartDeployableBasePlayers 0x70dc11c)
	static void ForceRestartDeployableBasePlayers(class UObject*& WorldContextObject, bool& bRestartInvulnerable); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseLibrary.ForceDeployableBaseHordePlayersToResetAndRespawn (Underlying native function: ForceDeployableBaseHordePlayersToResetAndRespawn 0x71a663c)
	static void ForceDeployableBaseHordePlayersToResetAndRespawn(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseLibrary.ForceClearAllDefenders (Underlying native function: ForceClearAllDefenders 0x71a663c)
	static void ForceClearAllDefenders(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseLibrary.BroadcastHordeTierComplete (Underlying native function: BroadcastHordeTierComplete 0x8ea8e84)
	static void BroadcastHordeTierComplete(class UObject*& WorldContextObject, enum EFortCompletionResult& Result); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseLibrary.ApplyTieredModifierSet (Underlying native function: ApplyTieredModifierSet 0x8ea89e8)
	static void ApplyTieredModifierSet(class UObject*& WorldContextObject, struct TArray<struct FTieredModifierSetData>& ModifierSetData, int& Tier, int& WaveNum, bool& bDeferTemporaryModifiers, struct TArray<struct FActiveGameplayModifierHandle>& OutAppliedModifiers); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)
};

