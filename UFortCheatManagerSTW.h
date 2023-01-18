// Class /Script/FortniteGame.FortCheatManagerSTW
// Size: 0x38
class UFortCheatManagerSTW : public UChildCheatManager
{
	unsigned char unreflected_38[0x38]; 

	/* Functions */

	// Function /Script/FortniteGame.FortCheatManagerSTW.UnlockAllZones (Underlying native function: UnlockAllZones 0x26daa0c)
	void UnlockAllZones(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.TestUpgradeOutpostItem (Underlying native function: TestUpgradeOutpostItem 0x6b13f58)
	void TestUpgradeOutpostItem(struct FString& ItemTemplateID); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.TestSetOutpostDefenseActive (Underlying native function: TestSetOutpostDefenseActive 0x71a6cc4)
	void TestSetOutpostDefenseActive(bool& bActive); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.TestOutpostUI (Underlying native function: TestOutpostUI 0x26daa0c)
	void TestOutpostUI(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.SetWorldLevel (Underlying native function: SetWorldLevel 0x71a7128)
	void SetWorldLevel(float& Level); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.SetHordePlotExpansionSize (Underlying native function: SetHordePlotExpansionSize 0x8d3be68)
	void SetHordePlotExpansionSize(int& XSize, int& YSize, int& ZSize); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.SetHeroLevel (Underlying native function: SetHeroLevel 0x7239740)
	void SetHeroLevel(int& Level); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.SetHeroClass (Underlying native function: SetHeroClass 0x8d3edf8)
	void SetHeroClass(struct FString& NewHeroName, int& Level); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpUpgradeItem (Underlying native function: McpUpgradeItem 0x7291288)
	void McpUpgradeItem(struct FString& ItemToUpgrade); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpStorageTransfer (Underlying native function: McpStorageTransfer 0x8eab6f8)
	void McpStorageTransfer(struct TArray<struct FString>& ItemIdsToMoveToOutpost, struct TArray<struct FString>& ItemIdsToMoveToTheater); // (Final | Exec | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpSlotItem (Underlying native function: McpSlotItem 0x7291288)
	void McpSlotItem(struct FString& ItemToSlot); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpResetPersistence (Underlying native function: McpResetPersistence 0x26daa0c)
	void McpResetPersistence(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpRemoveAllTestProfileMocks (Underlying native function: McpRemoveAllTestProfileMocks 0x26daa0c)
	void McpRemoveAllTestProfileMocks(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpRecycleItem (Underlying native function: McpRecycleItem 0x7291288)
	void McpRecycleItem(struct FString& ItemToRecycle); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpOpenCardPack (Underlying native function: McpOpenCardPack 0x8b0832c)
	void McpOpenCardPack(struct FString& CardPackItemId, int& SelectionIdx); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpHostGetAllPlayerCachedPersistence (Underlying native function: McpHostGetAllPlayerCachedPersistence 0x26daa0c)
	void McpHostGetAllPlayerCachedPersistence(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpGetSchematicXP (Underlying native function: McpGetSchematicXP 0x26daa0c)
	void McpGetSchematicXP(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpGetPersonnelXP (Underlying native function: McpGetPersonnelXP 0x26daa0c)
	void McpGetPersonnelXP(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpGetHexMission (Underlying native function: McpGetHexMission 0x26daa0c)
	void McpGetHexMission(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpGetCachedPersistence (Underlying native function: McpGetCachedPersistence 0x26daa0c)
	void McpGetCachedPersistence(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpConvertItem (Underlying native function: McpConvertItem 0x8b0832c)
	void McpConvertItem(struct FString& ItemToConvert, int& ConversionIdx); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpCompleteHexMission (Underlying native function: McpCompleteHexMission 0x26daa0c)
	void McpCompleteHexMission(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpClaimAllResourceCollectors (Underlying native function: McpClaimAllResourceCollectors 0x71a6cc4)
	void McpClaimAllResourceCollectors(bool& bDebugPrint); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpClaimAllAvailableCollectionBookRewards (Underlying native function: McpClaimAllAvailableCollectionBookRewards 0x26daa0c)
	void McpClaimAllAvailableCollectionBookRewards(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpApplyAlteration (Underlying native function: McpApplyAlteration 0x8d3d800)
	void McpApplyAlteration(struct FString& Schematic, struct FString& Alteration); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.McpAddTestStatsMock (Underlying native function: McpAddTestStatsMock 0x26daa0c)
	void McpAddTestStatsMock(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.IronCityAutoAmplifierPlacement (Underlying native function: IronCityAutoAmplifierPlacement 0x7239740)
	void IronCityAutoAmplifierPlacement(int& Value); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.GiveUsefulThings (Underlying native function: GiveUsefulThings 0x7239740)
	void GiveUsefulThings(int& NumOfUsefulThings); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.GiveDeployablePlotAllIngredients (Underlying native function: GiveDeployablePlotAllIngredients 0x7239740)
	void GiveDeployablePlotAllIngredients(int& NumIngredients); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.GiveCheatInventory (Underlying native function: GiveCheatInventory 0x26daa0c)
	void GiveCheatInventory(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.GiveBluGlo (Underlying native function: GiveBluGlo 0x7239740)
	void GiveBluGlo(int& Amount); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.GetWorldLevel (Underlying native function: GetWorldLevel 0x26daa0c)
	void GetWorldLevel(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.GetWorldDifficulty (Underlying native function: GetWorldDifficulty 0x26daa0c)
	void GetWorldDifficulty(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.ForceUnlockHordeTiers (Underlying native function: ForceUnlockHordeTiers 0x7239740)
	void ForceUnlockHordeTiers(int& MaxTierNumber); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.ForceSetHeroRemoteCharacter (Underlying native function: ForceSetHeroRemoteCharacter 0x8d3c608)
	void ForceSetHeroRemoteCharacter(int& PartyMemberIndex, bool& bEnabled); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.ForceHeroType (Underlying native function: ForceHeroType 0x7291288)
	void ForceHeroType(struct FString& HeroPersistentName); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.EvolveHero (Underlying native function: EvolveHero 0x26daa0c)
	void EvolveHero(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.DumpAppliedHomebaseEffectsWithCoreAttributes (Underlying native function: DumpAppliedHomebaseEffectsWithCoreAttributes 0x145ca48)
	void DumpAppliedHomebaseEffectsWithCoreAttributes(); // (Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.DevSkipTutorial (Underlying native function: DevSkipTutorial 0x26daa0c)
	void DevSkipTutorial(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.ClearKeepSave (Underlying native function: ClearKeepSave 0x26daa0c)
	void ClearKeepSave(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.ChangeHeroClass (Underlying native function: ChangeHeroClass 0x7239740)
	void ChangeHeroClass(int& Index); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerSTW.ApplyWeaponAlteration (Underlying native function: ApplyWeaponAlteration 0x7291288)
	void ApplyWeaponAlteration(struct FString& AlterationName); // (Final | Exec | Native | Public)
};

