// Class /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW
// Size: 0x388
class UFortItemManagementItemDetailsPanel_STW : public UFortItemDetailsHostPanel
{
	bool HasItemMarkedForMulching; // 0x368 (0x1)
	unsigned char unreflected_369[0x3]; // 0x369 (0x3) 
	struct TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen; // 0x36c (0x8)
	unsigned char unreflected_374[0xc]; // 0x374 (0xc) 
	class UFortInventoryContext* InventoryContext; // 0x380 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.HandleHostSet (Has no native function)
	void HandleHostSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.HandleHasItemMarkedForMulchingChanged (Has no native function)
	void HandleHasItemMarkedForMulchingChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.GetAmmoTypeItemDefinitions (Underlying native function: GetAmmoTypeItemDefinitions 0x759638c)
	static struct TArray<class UFortAmmoItemDefinition*> GetAmmoTypeItemDefinitions(); // (Final | Native | Static | Protected | BlueprintCallable | BlueprintPure)
};

