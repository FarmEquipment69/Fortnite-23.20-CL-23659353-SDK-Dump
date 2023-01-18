// Class /Script/FortniteGame.FortCreativeResourceNodeComponent
// Size: 0xb8
class UFortCreativeResourceNodeComponent : public UActorComponent
{
	int PartialRestockDelay; // 0xa0 (0x4)
	unsigned char padding_a4[0x14]; // 0xa4 (0x14)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeResourceNodeComponent.SetRestockTimer (Underlying native function: SetRestockTimer 0x8784ec4)
	void SetRestockTimer(class ABuildingSMActor*& InPropToRestock, enum EFortCreativeResourceNodeDepletionMode& InDepletionMode, int& RestockDelay, int& RestockAmount); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeResourceNodeComponent.SetResourcesRemainingOnProp (Underlying native function: SetResourcesRemainingOnProp 0x8784dec)
	void SetResourcesRemainingOnProp(class ABuildingSMActor*& InPropToSet, int& InResourcesRemaining); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeResourceNodeComponent.SetResourcesRemainingOnAllProps (Underlying native function: SetResourcesRemainingOnAllProps 0x8784d38)
	void SetResourcesRemainingOnAllProps(int& InResourcesRemaining); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeResourceNodeComponent.SetAffectedProps (Underlying native function: SetAffectedProps 0x8784478)
	void SetAffectedProps(struct TArray<class ABuildingSMActor*>& InAffectedProps); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeResourceNodeComponent.ReportDamagedResourceBuildingOnClient (Underlying native function: ReportDamagedResourceBuildingOnClient 0x87836ac)
	static void ReportDamagedResourceBuildingOnClient(class AFortPlayerController*& InInstigatorController, class ABuildingSMActor*& InBuilding, struct TEnumAsByte<EFortResourceType>& InResourceType, int& InResourcesToDistribute, bool& bIsDestroyed, bool& bJustHitWeakspot); // (Final | Native | Static | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeResourceNodeComponent.ModifyResourcesRemainingOnProp (Underlying native function: ModifyResourcesRemainingOnProp 0x8782780)
	void ModifyResourcesRemainingOnProp(class ABuildingSMActor*& InPropToSet, int& InDeltaChange); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeResourceNodeComponent.ModifyResourcesRemainingOnAllProps (Underlying native function: ModifyResourcesRemainingOnAllProps 0x87826cc)
	void ModifyResourcesRemainingOnAllProps(int& InDeltaChange); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeResourceNodeComponent.GetResourcesRemainingOnProp (Underlying native function: GetResourcesRemainingOnProp 0x8780318)
	int GetResourcesRemainingOnProp(class ABuildingSMActor*& InProp); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeResourceNodeComponent.GetOriginalResourceType (Underlying native function: GetOriginalResourceType 0x877fe68)
	struct TEnumAsByte<EFortResourceType> GetOriginalResourceType(class ABuildingSMActor*& InProp); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeResourceNodeComponent.GetAffectedProps (Underlying native function: GetAffectedProps 0x877efe8)
	struct TArray<class ABuildingSMActor*> GetAffectedProps(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeResourceNodeComponent.ClearAffectedProps (Underlying native function: ClearAffectedProps 0x877e2f4)
	void ClearAffectedProps(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeResourceNodeComponent.BP_OnSetResourcesRemainingOnProp (Has no native function)
	void BPOnSetResourcesRemainingOnProp(class ABuildingSMActor*& InProp, int& InResourcesRemaining); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeResourceNodeComponent.BP_OnRemovedAffectedProp (Has no native function)
	void BPOnRemovedAffectedProp(class ABuildingSMActor*& InRemovedProp); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeResourceNodeComponent.BP_OnModifyResourcesRemainingOnProp (Has no native function)
	void BPOnModifyResourcesRemainingOnProp(class ABuildingSMActor*& InProp, int& InDeltaChange); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeResourceNodeComponent.BP_OnAddedAffectedProp (Has no native function)
	void BPOnAddedAffectedProp(class ABuildingSMActor*& InAddedProp); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeResourceNodeComponent.AddInventoryItemWithoutAnimation (Underlying native function: AddInventoryItemWithoutAnimation 0x877ddf0)
	void AddInventoryItemWithoutAnimation(class AFortPlayerController*& InInstigatorController, struct FFortItemEntry& ItemDescription); // (Final | BlueprintAuthorityOnly | Native | Protected | HasOutParms | BlueprintCallable)
};

