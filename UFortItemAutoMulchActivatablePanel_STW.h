// Class /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW
// Size: 0x570
class UFortItemAutoMulchActivatablePanel_STW : public UFortActivatablePanel
{
	unsigned char unreflected_570[0x570]; 

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.SetItemManagementScreen (Underlying native function: SetItemManagementScreen 0x7573958)
	void SetItemManagementScreen(class UFortItemManagementScreen_STW*& InItemManagementScreen); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.SaveSettings (Underlying native function: SaveSettings 0x7572c30)
	void SaveSettings(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.RestoreAutoMulchSettings (Underlying native function: RestoreAutoMulchSettings 0x7572c1c)
	void RestoreAutoMulchSettings(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.GetMulchCategoriesForInventoryFilter (Underlying native function: GetMulchCategoriesForInventoryFilter 0x756df38)
	struct TArray<enum EFortAutoMulchCategory> GetMulchCategoriesForInventoryFilter(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.GetFrontendInventoryFilter (Underlying native function: GetFrontendInventoryFilter 0x756dc90)
	enum EFortFrontendInventoryFilter GetFrontendInventoryFilter(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.EnterMulchModeForAutoMulch (Underlying native function: EnterMulchModeForAutoMulch 0x756d828)
	void EnterMulchModeForAutoMulch(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.CacheAutoMulchSettings (Underlying native function: CacheAutoMulchSettings 0x756d144)
	void CacheAutoMulchSettings(); // (Final | Native | Protected | BlueprintCallable)
};

