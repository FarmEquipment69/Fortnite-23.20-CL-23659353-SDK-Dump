// Class /Script/FortniteUI.FortHoldableButton
// Size: 0x1480
class UFortHoldableButton : public UCommonButtonBase
{
	bool bIsHoldableButton; // 0x13e0 (0x1)
	bool bBindHoldToAction; // 0x13e1 (0x1)
	bool bIgnoreLongPress; // 0x13e2 (0x1)
	bool bKeybindingTriggersHoldEvents; // 0x13e3 (0x1)
	float HoldTime; // 0x13e4 (0x4)
	float StartingHoldPercentage; // 0x13e8 (0x4)
	float QualifyingHoldTime; // 0x13ec (0x4)
	bool bHoldCancelledFromMovement; // 0x13f0 (0x1)
	unsigned char unreflected_13f1[0x7]; // 0x13f1 (0x7) 
	class UClass* HoldPromptTextStyle; // 0x13f8 (0x8)
	unsigned char padding_1400[0x80]; // 0x1400 (0x80)

	/* Functions */

	// Function /Script/FortniteUI.FortHoldableButton.SetEnableButtonHold (Underlying native function: SetEnableButtonHold 0xa6db0dc)
	void SetEnableButtonHold(bool& bInEnableButtonHold); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHoldableButton.OnHoldRequiredChanged (Has no native function)
	void OnHoldRequiredChanged(bool& bHoldRequired); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHoldableButton.GetIsHoldRequired (Underlying native function: GetIsHoldRequired 0xa6d8654)
	bool GetIsHoldRequired(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHoldableButton.GetHoldPromptTextStyle (Underlying native function: GetHoldPromptTextStyle 0xa6d8630)
	class UCommonTextStyle* GetHoldPromptTextStyle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHoldableButton.BP_OnHoldStarted (Has no native function)
	void BPOnHoldStarted(float& HoldPercentage, bool& bInUseSecondaryHoldAnimation); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHoldableButton.BP_OnHoldReset (Has no native function)
	void BPOnHoldReset(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHoldableButton.BP_OnHoldIncreased (Has no native function)
	void BPOnHoldIncreased(float& HoldPercentage); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHoldableButton.BP_OnHoldEnded (Has no native function)
	void BPOnHoldEnded(float& HoldPercentage, bool& bInUseSecondaryHoldAnimation); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHoldableButton.BP_OnHoldDecreased (Has no native function)
	void BPOnHoldDecreased(float& HoldPercentage); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHoldableButton.BP_OnHoldCompleted (Has no native function)
	void BPOnHoldCompleted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHoldableButton.BP_OnActionProgressIncreased (Has no native function)
	void BPOnActionProgressIncreased(float& HoldPercentage); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHoldableButton.BP_OnActionProgressDecreased (Has no native function)
	void BPOnActionProgressDecreased(float& HoldPercentage); // (Event | Protected | BlueprintEvent)
};

