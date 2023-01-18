// Class /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW
// Size: 0x580
class UFortItemManagementCustomFilterModalWidget_STW : public UFortActivatablePanel
{
	struct TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen; // 0x518 (0x8)
	struct TArray<enum EFortInventoryCustomFilter> AvailableFilters; // 0x520 (0x10)
	struct TSet<enum EFortInventoryCustomFilter> LocalCustomFilterSet; // 0x530 (0x50)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.ToggleFilter (Underlying native function: ToggleFilter 0x75740a8)
	void ToggleFilter(enum EFortInventoryCustomFilter& Filter); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnEndCommitCustomFilter (Has no native function)
	void OnEndCommitCustomFilter(bool& bWasSuccessful); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnCustomFilterSetUpdated (Has no native function)
	void OnCustomFilterSetUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnBeginCommitCustomFilter (Has no native function)
	void OnBeginCommitCustomFilter(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.IsCustomFilterEnabled (Underlying native function: IsCustomFilterEnabled 0x756ffa8)
	bool IsCustomFilterEnabled(enum EFortInventoryCustomFilter& Filter); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.EnableAllFilters (Underlying native function: EnableAllFilters 0x756d7c0)
	void EnableAllFilters(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.DisableAllFilters (Underlying native function: DisableAllFilters 0x756d790)
	void DisableAllFilters(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.CommitCustomFilters (Underlying native function: CommitCustomFilters 0x756d6b0)
	void CommitCustomFilters(); // (Final | Native | Protected | BlueprintCallable)
};

