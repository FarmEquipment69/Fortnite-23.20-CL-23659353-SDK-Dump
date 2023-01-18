// Class /Script/FortniteUI.FortDefenderConfigPanel
// Size: 0x508
class UFortDefenderConfigPanel : public UCommonActivatablePanelLegacy
{
	struct TWeakObjectPtr<class UFortItem> SelectedDefenderItem; // 0x4e0 (0x8)
	struct TWeakObjectPtr<class UFortItem> SelectedWeaponItem; // 0x4e8 (0x8)
	struct TWeakObjectPtr<class UFortItem> SelectedAmmoItem; // 0x4f0 (0x8)
	int SelectedAmmoQuantity; // 0x4f8 (0x4)
	struct TWeakObjectPtr<class ABuildingTrapDefender> DefenderTrap; // 0x4fc (0x8)
	unsigned char padding_504[0x4]; // 0x504 (0x4)

	/* Functions */

	// Function /Script/FortniteUI.FortDefenderConfigPanel.UnsummonDefender (Underlying native function: UnsummonDefender 0xa91b418)
	bool UnsummonDefender(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortDefenderConfigPanel.SpawnDefender (Underlying native function: SpawnDefender 0xa91b30c)
	bool SpawnDefender(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortDefenderConfigPanel.IsWeaponSelectionValid (Underlying native function: IsWeaponSelectionValid 0xa919058)
	bool IsWeaponSelectionValid(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortDefenderConfigPanel.HasWeaponForSelectedDefender (Underlying native function: HasWeaponForSelectedDefender 0xa9189b4)
	bool HasWeaponForSelectedDefender(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortDefenderConfigPanel.HasAnyDefenders (Underlying native function: HasAnyDefenders 0xa918990)
	bool HasAnyDefenders(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortDefenderConfigPanel.GetSourceSchematic (Underlying native function: GetSourceSchematic 0xa917780)
	class UFortSchematicItemDefinition* GetSourceSchematic(class UFortWorldItemDefinition*& ItemDefUsedForCrafting); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortDefenderConfigPanel.GetSelectedDefenderPawn (Underlying native function: GetSelectedDefenderPawn 0xa917714)
	class AFortAIPawn* GetSelectedDefenderPawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortDefenderConfigPanel.GetDefenderPawnWeaponItem (Underlying native function: GetDefenderPawnWeaponItem 0xa9165d4)
	class UFortWorldItem* GetDefenderPawnWeaponItem(class AFortAIPawn*& DefenderPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortDefenderConfigPanel.GetCompatibleAmmoDef (Underlying native function: GetCompatibleAmmoDef 0xa916304)
	class UFortWorldItemDefinition* GetCompatibleAmmoDef(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortDefenderConfigPanel.GetCompatibleAmmo (Underlying native function: GetCompatibleAmmo 0xa9162e0)
	class UFortWorldItem* GetCompatibleAmmo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortDefenderConfigPanel.GetAmmoCountFromPlayer (Underlying native function: GetAmmoCountFromPlayer 0xa915fc4)
	int GetAmmoCountFromPlayer(class UFortWorldItemDefinition*& AmmoItemDef); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortDefenderConfigPanel.GetAmmoCountFromDefender (Underlying native function: GetAmmoCountFromDefender 0xa915ee0)
	int GetAmmoCountFromDefender(class UFortWorldItemDefinition*& AmmoItemDef); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

