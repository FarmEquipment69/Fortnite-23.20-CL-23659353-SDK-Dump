// Class /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase
// Size: 0x548
class UFortSquadTypeLandingPageBase : public UFortActivatablePanel
{
	bool bReadOnlyModeWIFE; // 0x518 (0x1)
	enum EFortHomebaseSquadType SquadType; // 0x519 (0x1)
	unsigned char unreflected_51a[0x6]; // 0x51a (0x6) 
	struct FDataTableRowHandle BackInputActionRowHandle; // 0x520 (0x10)
	enum EFortFrontendInventoryFilter ItemManagementScreenFilter; // 0x530 (0x1)
	unsigned char unreflected_531[0x7]; // 0x531 (0x7) 
	struct TArray<struct TWeakObjectPtr<class UFortSquadSelectorButton>> SquadSelectorButtons; // 0x538 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.ShowWarningReadOnlyWIFE (Has no native function)
	void ShowWarningReadOnlyWIFE(bool& Force); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.IsScreenWIFE (Underlying native function: IsScreenWIFE 0x75c0878)
	bool IsScreenWIFE(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.HandlePendingNavigationOp (Underlying native function: HandlePendingNavigationOp 0x75c013c)
	void HandlePendingNavigationOp(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.HandleBackInputAction (Underlying native function: HandleBackInputAction 0x75bf7c0)
	void HandleBackInputAction(bool& bPassThrough); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.CreateAndAddSquadButton (Has no native function)
	class UFortSquadSelectorButton* CreateAndAddSquadButton(struct FName& SquadId); // (Event | Protected | HasOutParms | BlueprintEvent)
};

