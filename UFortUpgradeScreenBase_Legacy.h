// Class /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy
// Size: 0x5a8
class UFortUpgradeScreenBase_Legacy : public UCommonActivatablePanelLegacy
{
	class UFortTabListWidgetBase_Legacy* UpgradesTabSelector; // 0x4e0 (0x8)
	class UCommonTileView* UpgradesTileView; // 0x4e8 (0x8)
	class UCommonLoadGuard* UpgradeTileViewLoadGuard; // 0x4f0 (0x8)
	class UFortUpgradeDetailsBase* Details; // 0x4f8 (0x8)
	struct TMap<struct FName, enum EHomebaseNodeType> TabToNodeTypeMap; // 0x500 (0x50)
	class UFortItemDefinition* UpgradesRespecToken; // 0x550 (0x8)
	unsigned char padding_558[0x50]; // 0x558 (0x50)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.UseUpgradesRespecToken (Underlying native function: UseUpgradesRespecToken 0x75cd85c)
	void UseUpgradesRespecToken(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.TogglePreview (Underlying native function: TogglePreview 0x75cd7c4)
	void TogglePreview(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.RefreshFocus (Underlying native function: RefreshFocus 0x75cd6b0)
	void RefreshFocus(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnUseUpgradesRespecTokenComplete (Has no native function)
	void OnUseUpgradesRespecTokenComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnUpgradeInfoChanged (Has no native function)
	void OnUpgradeInfoChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnPurchaseNodeComplete (Has no native function)
	void OnPurchaseNodeComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.IsPreviewing (Underlying native function: IsPreviewing 0x75cd668)
	bool IsPreviewing(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.HandleTabSelected (Underlying native function: HandleTabSelected 0x75cd520)
	void HandleTabSelected(struct FName& TabId); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.GetUpgradesRespecTokenCount (Underlying native function: GetUpgradesRespecTokenCount 0x75cd2d8)
	int GetUpgradesRespecTokenCount(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.CanPreview (Underlying native function: CanPreview 0x75ccb94)
	bool CanPreview(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.AreUpgradesRespecTokensAvailable (Underlying native function: AreUpgradesRespecTokensAvailable 0x75ccafc)
	bool AreUpgradesRespecTokensAvailable(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

