// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRow
// Size: 0x330
class UFortActivityBrowserRow : public UCommonUserWidget
{
	unsigned char unreflected_290[0x98]; // 0x290 (0x98) 
	class UCommonTextBlock* TextCategoryName; // 0x328 (0x8)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowPeekStateChanged (Has no native function)
	void OnRowPeekStateChanged(bool& bIsInPeekState); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveUp (Has no native function)
	void OnRowMoveUp(bool& bMovingOffscreen); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveDown (Has no native function)
	void OnRowMoveDown(bool& bMovingOffscreen); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsSelectedChanged (Has no native function)
	void OnRowIsSelectedChanged(bool& bIsSelected); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsActiveChanged (Has no native function)
	void OnRowIsActiveChanged(bool& bIsActive); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnCategoryItemChanged (Has no native function)
	void OnCategoryItemChanged(bool& bPlayAnimation); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsSelected (Underlying native function: GetIsSelected 0x7420ed4)
	bool GetIsSelected(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsInPeekState (Underlying native function: GetIsInPeekState 0x7420eac)
	bool GetIsInPeekState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsActive (Underlying native function: GetIsActive 0x7420e94)
	bool GetIsActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

