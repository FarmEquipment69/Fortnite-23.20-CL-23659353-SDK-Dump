// Class /Script/FortniteGame.BuildingProp_CaptureArea
// Size: 0xf50
class ABuildingProp_CaptureArea : public ABuildingProp
{
	struct TArray<struct FCaptureAreaTeamInfo> CaptureAreaTeamsInfo; // 0xee8 (0x10)
	class UCaptureComponent* CaptureComponent; // 0xef8 (0x8)
	struct TMap<class AFortPlayerController*, struct FCaptureHandle*> InventoryChangedHandlesMap; // 0xf00 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.UnregisterPlayerInsideArea (Underlying native function: UnregisterPlayerInsideArea 0x71a663c)
	void UnregisterPlayerInsideArea(class AFortPlayerController*& OldPlayerInside); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.UnregisterAllRegisteredPlayerInsideArea (Underlying native function: UnregisterAllRegisteredPlayerInsideArea 0x26daa0c)
	void UnregisterAllRegisteredPlayerInsideArea(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.UnbindToControllerInventoryChangedEvent (Underlying native function: UnbindToControllerInventoryChangedEvent 0x71a663c)
	void UnbindToControllerInventoryChangedEvent(class AFortPlayerController*& PlayerController); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.UnbindAllControllersToInventoryChangedEvent (Underlying native function: UnbindAllControllersToInventoryChangedEvent 0x26daa0c)
	void UnbindAllControllersToInventoryChangedEvent(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.RemoveItemsFromPlayer (Underlying native function: RemoveItemsFromPlayer 0x860c8fc)
	void RemoveItemsFromPlayer(struct TArray<struct FItemVariantHandle>& ItemsToCapture, class AFortPlayerController*& PlayerController); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.RegisterPlayerInsideArea (Underlying native function: RegisterPlayerInsideArea 0x71a663c)
	void RegisterPlayerInsideArea(class AFortPlayerController*& PlayerInside); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.OnTeamsInfoChanged (Has no native function)
	void OnTeamsInfoChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.OnPlayerLeavesZone (Has no native function)
	void OnPlayerLeavesZone(class AFortPlayerController*& PlayerController, bool& bIsLast); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.OnPlayerEnterZone (Has no native function)
	void OnPlayerEnterZone(class AFortPlayerController*& PlayerController, bool& bIsFirst); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.OnPlayerChangedTeam (Underlying native function: OnPlayerChangedTeam 0x860be80)
	void OnPlayerChangedTeam(class AFortPlayerState*& PlayerState, unsigned char& NewTeam, unsigned char& OldTeam, bool& bTeamChangedWithoutRespawn); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.OnOverlappedPlayerInventoryValidated (Has no native function)
	void OnOverlappedPlayerInventoryValidated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.OnOverlappedPlayerInventoryChanged (Has no native function)
	void OnOverlappedPlayerInventoryChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.OnFortPawnRegisteredInsideAreaDied (Underlying native function: OnFortPawnRegisteredInsideAreaDied 0x860b89c)
	void OnFortPawnRegisteredInsideAreaDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Native | Protected | HasDefaults)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.OnCaptureAreaOwnerChanged (Has no native function)
	void OnCaptureAreaOwnerChanged(class AFortPlayerController*& NewOwner); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.CaptureItemsFromPlayer (Underlying native function: CaptureItemsFromPlayer 0x8607a3c)
	int CaptureItemsFromPlayer(bool& bRemoveOnFound, struct TArray<struct FItemVariantHandle>& ItemsToCapture, class AFortPlayerController*& PlayerController, int& AmountToRemove, int& AddedScore); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.CaptureItemsFromPickup (Underlying native function: CaptureItemsFromPickup 0x860792c)
	int CaptureItemsFromPickup(struct TArray<struct FItemVariantHandle>& ItemsToCapture, class AFortPickup*& PickUp, int& AddedScore); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.BP_OnPlayerTeamReplicated (Has no native function)
	void BPOnPlayerTeamReplicated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.BindToControllerInventoryChangedEvent (Underlying native function: BindToControllerInventoryChangedEvent 0x71a663c)
	void BindToControllerInventoryChangedEvent(class AFortPlayerController*& PlayerController); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.BindOrUnbindOnPlayerTeamReplicated (Underlying native function: BindOrUnbindOnPlayerTeamReplicated 0x86071c4)
	void BindOrUnbindOnPlayerTeamReplicated(class AFortPlayerState*& PlayerState, bool& bBind); // (Final | Native | Protected | BlueprintCallable)
};

