// Class /Script/FortniteGame.BuildingItemCollectorActor
// Size: 0xc00
class ABuildingItemCollectorActor : public ABuildingGameplayActor
{
	unsigned char unreflected_9d8[0x21]; // 0x9d8 (0x21) 
	enum EFortItemCollectorBehavior ItemCollectorBehavior; // 0x9f9 (0x1)
	unsigned char bRequireAllForInteraction; // 0x9fa (0x1)
	unsigned char bRequireAllForTurnIn; // 0x9fa (0x1)
	unsigned char bHasToHaveSomething; // 0x9fa (0x1)
	unsigned char bIncrementCaptureCountWhenGoalIsReached; // 0x9fa (0x1)
	unsigned char bCurrentInteractionSuccess; // 0x9fa (0x1)
	enum EFortItemCollectorState ItemCollectorState; // 0x9fb (0x1)
	enum EFortItemCollectorTrackingType TrackingType; // 0x9fc (0x1)
	unsigned char unreflected_9fd[0x3]; // 0x9fd (0x3) 
	class AFortPlayerController* ControllingPlayer; // 0xa00 (0x8)
	struct FName DefaultItemLootTierGroupName; // 0xa08 (0x4)
	unsigned char unreflected_a0c[0x4]; // 0xa0c (0x4) 
	struct FDataTableRowHandle ItemCollectorHandle; // 0xa10 (0x10)
	bool bCallOnLocalInteract; // 0xa20 (0x1)
	bool bUseInstanceLootValueOverrides; // 0xa21 (0x1)
	unsigned char unreflected_a22[0x6]; // 0xa22 (0x6) 
	struct TArray<struct FFortItemQuantityPair> OverrideOutputItems; // 0xa28 (0x10)
	int OverrideGoal; // 0xa38 (0x4)
	int NumInteractionsAllowed; // 0xa3c (0x4)
	int NumInteractions; // 0xa40 (0x4)
	unsigned char unreflected_a44[0x4]; // 0xa44 (0x4) 
	struct TArray<struct FCollectorUnitInfo> ItemCollections; // 0xa48 (0x10)
	struct FMulticastInlineDelegate ManualOutputOverride; // 0xa58 (0x10)
	class UFortWorldItemDefinition* ActiveInputItem; // 0xa68 (0x8)
	class UFortWorldItemDefinition* ClientPausedActiveInputItem; // 0xa70 (0x8)
	struct FScalableFloat ActiveItemRotationTime; // 0xa78 (0x28)
	float ItemRotationTime; // 0xaa0 (0x4)
	float ItemRotationTimeVariation; // 0xaa4 (0x4)
	unsigned char unreflected_aa8[0x8]; // 0xaa8 (0x8) 
	struct FGameplayTagContainer AllowedItemRotationDamageTags; // 0xab0 (0x20)
	struct FScalableFloat OutputDespenseDelayTime; // 0xad0 (0x28)
	float DespensingDelayTime; // 0xaf8 (0x4)
	unsigned char unreflected_afc[0x4]; // 0xafc (0x4) 
	struct FVector LootSpawnLocation; // 0xb00 (0x18)
	unsigned char unreflected_b18[0x70]; // 0xb18 (0x70) 
	struct FRotator LootTossDirection; // 0xb88 (0x18)
	float LootTossConeHalfAngle; // 0xba0 (0x4)
	float LootTossSpeed; // 0xba4 (0x4)
	bool bTossOnGround; // 0xba8 (0x1)
	bool bSpawnAmmoOnlyWhenCarryingWeapon; // 0xba9 (0x1)
	unsigned char unreflected_baa[0x2]; // 0xbaa (0x2) 
	int StartingGoalLevel; // 0xbac (0x4)
	int StartingGoalLevelOverride; // 0xbb0 (0x4)
	unsigned char unreflected_bb4[0x4]; // 0xbb4 (0x4) 
	class UTexture* InactiveItemTexture; // 0xbb8 (0x8)
	bool bPickupOwnedByLooter; // 0xbc0 (0x1)
	unsigned char unreflected_bc1[0x7]; // 0xbc1 (0x7) 
	struct FMulticastInlineDelegate PickupSpawned; // 0xbc8 (0x10)
	struct FMulticastInlineDelegate VehicleSpawned; // 0xbd8 (0x10)
	struct TArray<struct FCollectorTrackedData> TrackedInteractionData; // 0xbe8 (0x10)
	unsigned char padding_bf8[0x8]; // 0xbf8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.BuildingItemCollectorActor.UpdateCollectorsActiveItem (Has no native function)
	void UpdateCollectorsActiveItem(int& StartingSeedValue, class UFortWorldItemDefinition*& InputItem, class UTexture*& InputTexture, int& CurrentGoal, int& CurrentCollectedAmount, int& CurrentCaptureCount, class UTexture*& OutputTexture); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.SetLootSpawnWorldTransformOverride (Underlying native function: SetLootSpawnWorldTransformOverride 0x860d358)
	void SetLootSpawnWorldTransformOverride(struct FTransform& Transform); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.SetItemCollectorState (Underlying native function: SetItemCollectorState 0x860d1d4)
	void SetItemCollectorState(enum EFortItemCollectorState& InItemCollectorState); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.ServerSpawnItem (Underlying native function: ServerSpawnItem 0x860cbf0)
	void ServerSpawnItem(struct FFortItemEntry& OutputItem); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.RefreshCollectorsActiveItem (Underlying native function: RefreshCollectorsActiveItem 0x85dd8ec)
	void RefreshCollectorsActiveItem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.OnRep_TrackedInteractionData (Underlying native function: OnRep_TrackedInteractionData 0x85dd8ec)
	void OnRepTrackedInteractionData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.OnRep_ItemCollectorState (Underlying native function: OnRep_ItemCollectorState 0x860c0cc)
	void OnRepItemCollectorState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.OnRep_ControllingPlayer (Underlying native function: OnRep_ControllingPlayer 0x860bff8)
	void OnRepControllingPlayer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.OnRep_ActiveInputItem (Underlying native function: OnRep_ActiveInputItem 0x85dd8ec)
	void OnRepActiveInputItem(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.OnReachedDepositGoal (Has no native function)
	void OnReachedDepositGoal(class AFortPlayerController*& CurrentControllingPlayer, class UFortWorldItemDefinition*& CurrentActiveInputItem); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.OnItemCollectorStateChanged (Has no native function)
	void OnItemCollectorStateChanged(enum EFortItemCollectorState& InItemCollectorState); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.OnForcedCycle (Has no native function)
	void OnForcedCycle(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.HasEnoughDepositItems (Underlying native function: HasEnoughDepositItems 0x860a24c)
	bool HasEnoughDepositItems(class AFortPlayerController*& FortPC, class UFortWorldItemDefinition*& InputItem, bool& bAllOrNothing, struct TEnumAsByte<EInteractionBeingAttempted>& InInteractionBeingAttempted); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.GetTeamReachedGoalCount (Underlying native function: GetTeamReachedGoalCount 0x860960c)
	int GetTeamReachedGoalCount(unsigned char& InTeam); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.GetOverrideRarity (Underlying native function: GetOverrideRarity 0x86094c4)
	bool GetOverrideRarity(enum EFortRarity& Rarity); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.GetNumberOfCaptures (Underlying native function: GetNumberOfCaptures 0x86091cc)
	int GetNumberOfCaptures(class AFortPlayerController*& InFortPC, class UFortWorldItemDefinition*& InInputItem); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.GetDepositGoal (Underlying native function: GetDepositGoal 0x8608bec)
	int GetDepositGoal(class AFortPlayerController*& InFortPC, class UFortWorldItemDefinition*& InInputItem); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.GetDepositAmount (Underlying native function: GetDepositAmount 0x8608b10)
	int GetDepositAmount(class AFortPlayerController*& InFortPC, class UFortWorldItemDefinition*& InInputItem); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.GetCurrentActiveItem (Underlying native function: GetCurrentActiveItem 0x8608a50)
	class UFortWorldItemDefinition* GetCurrentActiveItem(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingItemCollectorActor.ClearLootSpawnWorldTransformOverride (Underlying native function: ClearLootSpawnWorldTransformOverride 0x8607bc0)
	void ClearLootSpawnWorldTransformOverride(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

