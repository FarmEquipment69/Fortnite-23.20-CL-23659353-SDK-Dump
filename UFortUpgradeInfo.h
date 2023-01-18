// Class /Script/SaveTheWorldUI.FortUpgradeInfo
// Size: 0xb0
class UFortUpgradeInfo : public UObject
{
	unsigned char unreflected_28[0x20]; // 0x28 (0x20) 
	class UFortHomebaseNodeItemDefinition* NodeItemDef; // 0x48 (0x8)
	unsigned char padding_50[0x60]; // 0x50 (0x60)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.IsUpgradeUnlocked (Underlying native function: IsUpgradeUnlocked 0x75cd688)
	bool IsUpgradeUnlocked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.IsPreviewing (Underlying native function: IsPreviewing 0x75cd654)
	bool IsPreviewing(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetVideo (Underlying native function: GetVideo 0x75cd2fc)
	class UMediaSource* GetVideo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetUpgradeUnlockLevel (Underlying native function: GetUpgradeUnlockLevel 0x242f83c)
	int GetUpgradeUnlockLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetTitle (Underlying native function: GetTitle 0x75cce94)
	struct FText GetTitle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetNextLevelTitle (Underlying native function: GetNextLevelTitle 0x75ccfec)
	struct FText GetNextLevelTitle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetNextLevelDescription (Underlying native function: GetNextLevelDescription 0x75ccf70)
	struct FText GetNextLevelDescription(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetNextLevel (Underlying native function: GetNextLevel 0x75ccf3c)
	int GetNextLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetMaxLevel (Underlying native function: GetMaxLevel 0x75ccf24)
	int GetMaxLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetItemName (Underlying native function: GetItemName 0x75cce94)
	struct FText GetItemName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetIcon (Underlying native function: GetIcon 0x75ccd70)
	struct TWeakObjectPtr<class UTexture2D> GetIcon(enum EUpgradeInfoImageSize& ImageSize); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetDisplayAttributes (Underlying native function: GetDisplayAttributes 0x75cccc8)
	bool GetDisplayAttributes(struct TArray<struct FFortDisplayAttribute>& OutDisplayAttributes); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetDescription (Underlying native function: GetDescription 0x75ccc44)
	struct FText GetDescription(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetCurrentLevel (Underlying native function: GetCurrentLevel 0x75ccc2c)
	int GetCurrentLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetCost (Underlying native function: GetCost 0x75ccc08)
	int GetCost(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.ForwardPreview (Underlying native function: ForwardPreview 0x75ccbcc)
	void ForwardPreview(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.CanPreview (Underlying native function: CanPreview 0x75ccb74)
	bool CanPreview(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.CanAffordUpgrade (Underlying native function: CanAffordUpgrade 0x75ccb60)
	bool CanAffordUpgrade(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.BackwardPreview (Underlying native function: BackwardPreview 0x75ccb24)
	void BackwardPreview(); // (Final | Native | Public | BlueprintCallable)
};

