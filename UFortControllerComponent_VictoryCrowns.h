// Class /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns
// Size: 0x258
class UFortControllerComponent_VictoryCrowns : public UFortControllerComponent
{
	struct FMulticastInlineDelegate OnVictoryCrownStatusChanged; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnHasWonCrownInMatch; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnHasWonRoyalRoyale; // 0xc0 (0x10)
	unsigned char unreflected_d0[0x18]; // 0xd0 (0x18) 
	struct TWeakObjectPtr<class UFortWorldItemDefinition> CrownInventoryItemClass; // 0xe8 (0x28)
	bool bWonCrownInMatch; // 0x110 (0x1)
	bool bWonRoyalRoyale; // 0x111 (0x1)
	unsigned char unreflected_112[0x6]; // 0x112 (0x6) 
	class UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition; // 0x118 (0x8)
	struct TWeakObjectPtr<class UFortMontageItemDefinitionBase> RoyalRoyaleEmoteItemDefinition; // 0x120 (0x28)
	class UDataTable* VictoryCrownPlaylistData; // 0x148 (0x8)
	struct FGameplayTagContainer SourceTagsForRoyalRoyale; // 0x150 (0x20)
	struct FVictoryCrownAccountData VictoryCrownAccountData; // 0x170 (0x10)
	struct FScalableFloat InitialGrantDelay; // 0x180 (0x28)
	unsigned char unreflected_1a8[0xa8]; // 0x1a8 (0xa8) 
	bool bKillFeedBroadcastReady; // 0x250 (0x1)
	unsigned char padding_251[0x7]; // 0x251 (0x7)

	/* Functions */

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonRoyalRoyale (Underlying native function: OnRep_WonRoyalRoyale 0x77c3400)
	void OnRepWonRoyalRoyale(); // (Final | Native | Private)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonCrownInMatch (Underlying native function: OnRep_WonCrownInMatch 0x77c33cc)
	void OnRepWonCrownInMatch(); // (Final | Native | Private)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnAthenaProfileInitialized (Underlying native function: OnAthenaProfileInitialized 0x26daa0c)
	void OnAthenaProfileInitialized(); // (Final | Native | Private)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.IsCrownInPlayerInventory (Underlying native function: IsCrownInPlayerInventory 0x77c33a0)
	bool IsCrownInPlayerInventory(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonRoyalRoyale (Underlying native function: HasWonRoyalRoyale 0x77c32fc)
	bool HasWonRoyalRoyale(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonCrownInMatch (Underlying native function: HasWonCrownInMatch 0x77c32e4)
	bool HasWonCrownInMatch(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandlePawnChanged (Underlying native function: HandlePawnChanged 0x77c31d0)
	void HandlePawnChanged(class APawn*& OldPawn, class APawn*& NewPawn); // (Final | Native | Protected)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleExitAircraft (Underlying native function: HandleExitAircraft 0x77c3144)
	void HandleExitAircraft(class AController*& ExitingController); // (Final | Native | Protected)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleEnterAircraft (Underlying native function: HandleEnterAircraft 0x77c3130)
	void HandleEnterAircraft(); // (Final | Native | Protected)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetVictoryCrownsBestowedCount (Underlying native function: GetVictoryCrownsBestowedCount 0x2938108)
	int GetVictoryCrownsBestowedCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetRoyalRoyaleAchievedCount (Underlying native function: GetRoyalRoyaleAchievedCount 0x77c2f54)
	int GetRoyalRoyaleAchievedCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetCrownInPlayerInventory (Underlying native function: GetCrownInPlayerInventory 0x77c2f30)
	class UFortWorldItem* GetCrownInPlayerInventory(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.DebugForceSetRoyalRoyaleAchievedCount (Underlying native function: DebugForceSetRoyalRoyaleAchievedCount 0x7239740)
	void DebugForceSetRoyalRoyaleAchievedCount(int& NewRoyalRoyaleCount); // (Final | Exec | Native | Public)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.CacheAccountItemData (Underlying native function: CacheAccountItemData 0x26daa0c)
	void CacheAccountItemData(); // (Final | Native | Private)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthoritySquadHasSeenCrownItem (Underlying native function: AuthoritySquadHasSeenCrownItem 0x77c2e6c)
	bool AuthoritySquadHasSeenCrownItem(class UFortItem*& CrownItem, bool& bDropped); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadHeldCrownItem (Underlying native function: AuthorityHasSquadHeldCrownItem 0x77c2ddc)
	bool AuthorityHasSquadHeldCrownItem(class UFortItem*& CrownItem); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadDroppedCrownItem (Underlying native function: AuthorityHasSquadDroppedCrownItem 0x77c2d4c)
	bool AuthorityHasSquadDroppedCrownItem(class UFortItem*& CrownItem); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasHeldCrownItem (Underlying native function: AuthorityHasHeldCrownItem 0x77c2cbc)
	bool AuthorityHasHeldCrownItem(class UFortItem*& CrownItem); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)

	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasDroppedCrownItem (Underlying native function: AuthorityHasDroppedCrownItem 0x77c2c2c)
	bool AuthorityHasDroppedCrownItem(class UFortItem*& CrownItem); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)
};

