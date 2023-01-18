// Class /Script/FortniteGame.BuildingProp_VendingMachine
// Size: 0xf18
class ABuildingProp_VendingMachine : public ABuildingProp
{
	struct FGameplayTagContainer AllowedItemRotationDamageTags; // 0xee8 (0x20)
	unsigned char unreflected_f08[0x8]; // 0xf08 (0x8) 
	bool bOnlyListenForResourceChangesInPlayerInventory; // 0xf10 (0x1)
	unsigned char padding_f11[0x7]; // 0xf11 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_VendingMachine.OnPlayerInventoryChange (Has no native function)
	void OnPlayerInventoryChange(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_VendingMachine.OnCycleToNextItem (Has no native function)
	void OnCycleToNextItem(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_VendingMachine.BlueprintServerNotifyStartLongUse (Has no native function)
	void BlueprintServerNotifyStartLongUse(class AFortPlayerPawn*& InteractingPawn); // (BlueprintAuthorityOnly | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_VendingMachine.BlueprintServerNotifyEndLongUse (Has no native function)
	void BlueprintServerNotifyEndLongUse(class AFortPlayerPawn*& InteractingPawn); // (BlueprintAuthorityOnly | Event | Protected | BlueprintEvent)
};

