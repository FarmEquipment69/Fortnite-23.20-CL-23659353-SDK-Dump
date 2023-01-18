// Class /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility
// Size: 0xb90
class UFortAugmentSelectionToolAbility : public UFortGameplayAbility
{
	class UInputComponent* SelectionInputComponent; // 0xb20 (0x8)
	struct FScalableFloat InputPriority; // 0xb28 (0x28)
	int NumChoices; // 0xb50 (0x4)
	int HighlightedChoiceIndex; // 0xb54 (0x4)
	unsigned char unreflected_b58[0x10]; // 0xb58 (0x10) 
	struct FScalableFloat RerollHoldInputSeconds; // 0xb68 (0x28)

	/* Functions */

	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.SetHighlightedChoiceIndex (Underlying native function: SetHighlightedChoiceIndex 0x7292464)
	void SetHighlightedChoiceIndex(int& NewChoiceIndex); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnSelectedChoiceIndex (Has no native function)
	void OnSelectedChoiceIndex(int& ChoiceIndex); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnRerollPressedAndCannotAfford (Has no native function)
	void OnRerollPressedAndCannotAfford(); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnHoldRerollInputChanged (Has no native function)
	void OnHoldRerollInputChanged(bool& bIsPressed, bool& bCompletedHold); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility.OnHighlightSelectionUpdated (Has no native function)
	void OnHighlightSelectionUpdated(int& NewHighlightedChoiceIndex); // (Event | Protected | BlueprintEvent)
};

