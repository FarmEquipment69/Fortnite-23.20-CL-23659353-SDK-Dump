// Class /Script/FortniteUI.FortMulchConfirmationModalWidget
// Size: 0x568
class UFortMulchConfirmationModalWidget : public UFortActivatablePanel
{
	struct TScriptInterface<class IFortItemManagementMulchPanel> HostItemManagementMulchPanel; // 0x518 (0x10)
	class UCommonTileView* RecycleItemTileView; // 0x528 (0x8)
	class UFortItemManagementMulchDetailsPanel* RecycleDetailsPanel; // 0x530 (0x8)
	class UCommonLoadGuard* CommonLoadGuardLatentSpinner; // 0x538 (0x8)
	class UHorizontalBox* HorizontalBoxButtons; // 0x540 (0x8)
	unsigned char unreflected_548[0x10]; // 0x548 (0x10) 
	class UFortInventoryContext* InventoryContext; // 0x558 (0x8)
	unsigned char padding_560[0x8]; // 0x560 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortMulchConfirmationModalWidget.UpdateConfirmationModal_BP (Has no native function)
	void UpdateConfirmationModalBP(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortMulchConfirmationModalWidget.UpdateConfirmationModal (Underlying native function: UpdateConfirmationModal 0xa7e8c8c)
	void UpdateConfirmationModal(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortMulchConfirmationModalWidget.GetMulchWarnings (Underlying native function: GetMulchWarnings 0xa7e593c)
	struct TMap<enum EItemRecyclingWarning, int> GetMulchWarnings(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMulchConfirmationModalWidget.CommitMulch (Underlying native function: CommitMulch 0xa7e49bc)
	void CommitMulch(); // (Final | Native | Public | BlueprintCallable)
};

