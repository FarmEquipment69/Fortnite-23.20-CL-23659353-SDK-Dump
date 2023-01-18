// Class /Script/EnhancedInput.InputTriggerCombo
// Size: 0x78
class UInputTriggerCombo : public UInputTrigger
{
	int CurrentComboStepIndex; // 0x50 (0x4)
	float CurrentTimeBetweenComboSteps; // 0x54 (0x4)
	struct TArray<struct FInputComboStepData> ComboActions; // 0x58 (0x10)
	struct TArray<class UInputAction*> CancelActions; // 0x68 (0x10)
};

