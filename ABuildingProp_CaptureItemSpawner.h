// Class /Script/FortniteGame.BuildingProp_CaptureItemSpawner
// Size: 0xf00
class ABuildingProp_CaptureItemSpawner : public ABuildingProp
{
	unsigned char unreflected_ee8[0x8]; // 0xee8 (0x8) 
	int ItemRefCount; // 0xef0 (0x4)
	bool bPickupWasClaimed; // 0xef4 (0x1)
	unsigned char unreflected_ef5[0x3]; // 0xef5 (0x3) 
	struct FName SpecialActorID; // 0xef8 (0x4)
	bool bShowCaptureMessages; // 0xefc (0x1)
	unsigned char padding_efd[0x3]; // 0xefd (0x3)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.UnregisterSpecialActor (Underlying native function: UnregisterSpecialActor 0x860ddac)
	void UnregisterSpecialActor(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.SendCaptureItemFeedbackEvent (Underlying native function: SendCaptureItemFeedbackEvent 0x860cacc)
	void SendCaptureItemFeedbackEvent(struct FGameplayFeedbackEventParams& EventParams, struct FItemAndCount& ItemEntry); // (Final | BlueprintAuthorityOnly | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.ResetItemRefCount (Underlying native function: ResetItemRefCount 0x26daa0c)
	void ResetItemRefCount(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.RemoveItemRef (Underlying native function: RemoveItemRef 0x8606d74)
	int RemoveItemRef(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.RegisterSpecialActor (Underlying native function: RegisterSpecialActor 0x860c87c)
	void RegisterSpecialActor(class UFortWorldItemDefinition*& ItemDefinition); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.NetMulticast_NotifyFeedbackEvent (Underlying native function: NetMulticast_NotifyFeedbackEvent 0x860b4c4)
	void NetMulticastNotifyFeedbackEvent(struct FGameplayFeedbackEventParams& EventParams, struct FFortItemQuantityPair& ItemEntry, struct FGuid& ItemVariantGuid); // (Net | Native | Event | NetMulticast | Protected | HasDefaults)

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.K2_NotifyFeedbackEvent (Has no native function)
	void K2NotifyFeedbackEvent(struct FGameplayFeedbackEventParams& EventParams, bool& bFriendlyEvent); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.CanTakeFlag (Underlying native function: CanTakeFlag 0x860772c)
	bool CanTakeFlag(class AFortPawn*& InteractingPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.AddItemRef (Underlying native function: AddItemRef 0x8606d74)
	int AddItemRef(); // (Final | Native | Protected | BlueprintCallable)
};

