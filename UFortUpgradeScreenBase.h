// Class /Script/SaveTheWorldUI.FortUpgradeScreenBase
// Size: 0x5a8
class UFortUpgradeScreenBase : public UCommonActivatablePanelLegacy
{
	class UFortTabListWidgetBase* UpgradesTabSelector; // 0x4e0 (0x8)
	class UCommonTileView* UpgradesTileView; // 0x4e8 (0x8)
	class UCommonLoadGuard* UpgradeTileViewLoadGuard; // 0x4f0 (0x8)
	class UFortUpgradeDetailsBase* Details; // 0x4f8 (0x8)
	struct TMap<struct FName, enum EHomebaseNodeType> TabToNodeTypeMap; // 0x500 (0x50)
	class UFortItemDefinition* UpgradesRespecToken; // 0x550 (0x8)
	unsigned char padding_558[0x50]; // 0x558 (0x50)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.UseUpgradesRespecToken (Underlying native function: UseUpgradesRespecToken 0x75cd848)
	void UseUpgradesRespecToken(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.TogglePreview (Underlying native function: TogglePreview 0x75cd740)
	void TogglePreview(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.RefreshFocus (Underlying native function: RefreshFocus 0x75cd69c)
	void RefreshFocus(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.OnUseUpgradesRespecTokenComplete (Has no native function)
	void OnUseUpgradesRespecTokenComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.OnUpgradeInfoChanged (Has no native function)
	void OnUpgradeInfoChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.OnPurchaseNodeComplete (Has no native function)
	void OnPurchaseNodeComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.IsPreviewing (Underlying native function: IsPreviewing 0x75cd668)
	bool IsPreviewing(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.HandleTabSelected (Underlying native function: HandleTabSelected 0x75cd520)
	void HandleTabSelected(struct FName& TabId); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.GetUpgradesRespecTokenCount (Underlying native function: GetUpgradesRespecTokenCount 0x75cd2d8)
	int GetUpgradesRespecTokenCount(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.CanPreview (Underlying native function: CanPreview 0x75ccb94)
	bool CanPreview(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.AreUpgradesRespecTokensAvailable (Underlying native function: AreUpgradesRespecTokensAvailable 0x75ccafc)
	bool AreUpgradesRespecTokensAvailable(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

