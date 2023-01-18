// Class /Script/FortniteUI.FortSettingDetailExtension
// Size: 0x270
class UFortSettingDetailExtension : public UUserWidget
{
	class UFortSetting* Setting; // 0x268 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSettingDetailExtension.UseSplitDisabledOptionsVisual (Underlying native function: UseSplitDisabledOptionsVisual 0x27c9608)
	bool UseSplitDisabledOptionsVisual(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingDetailExtension.OnSettingValueChanged (Has no native function)
	void OnSettingValueChanged(class UFortSetting*& InSetting); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSettingDetailExtension.OnSettingAssigned (Has no native function)
	void OnSettingAssigned(class UFortSetting*& InSetting); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSettingDetailExtension.GetOptionsDisabledText (Underlying native function: GetOptionsDisabledText 0xa8c3b78)
	struct FText GetOptionsDisabledText(struct TArray<struct FText>& Reasons); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

