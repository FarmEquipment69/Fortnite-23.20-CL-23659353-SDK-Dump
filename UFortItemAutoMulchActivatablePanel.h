// Class /Script/FortniteUI.FortItemAutoMulchActivatablePanel
// Size: 0x570
class UFortItemAutoMulchActivatablePanel : public UFortActivatablePanel
{
	unsigned char unreflected_570[0x570]; 

	/* Functions */

	// Function /Script/FortniteUI.FortItemAutoMulchActivatablePanel.SetItemManagementScreen (Underlying native function: SetItemManagementScreen 0x7573958)
	void SetItemManagementScreen(class UFortItemManagementScreen*& InItemManagementScreen); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemAutoMulchActivatablePanel.SaveSettings (Underlying native function: SaveSettings 0xa82645c)
	void SaveSettings(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemAutoMulchActivatablePanel.RestoreAutoMulchSettings (Underlying native function: RestoreAutoMulchSettings 0x7572c1c)
	void RestoreAutoMulchSettings(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemAutoMulchActivatablePanel.GetMulchCategoriesForInventoryFilter (Underlying native function: GetMulchCategoriesForInventoryFilter 0xa825c68)
	struct TArray<enum EFortAutoMulchCategory> GetMulchCategoriesForInventoryFilter(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemAutoMulchActivatablePanel.GetFrontendInventoryFilter (Underlying native function: GetFrontendInventoryFilter 0xa825c0c)
	enum EFortFrontendInventoryFilter GetFrontendInventoryFilter(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemAutoMulchActivatablePanel.EnterMulchModeForAutoMulch (Underlying native function: EnterMulchModeForAutoMulch 0xa825918)
	void EnterMulchModeForAutoMulch(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemAutoMulchActivatablePanel.CacheAutoMulchSettings (Underlying native function: CacheAutoMulchSettings 0xa825838)
	void CacheAutoMulchSettings(); // (Final | Native | Protected | BlueprintCallable)
};

