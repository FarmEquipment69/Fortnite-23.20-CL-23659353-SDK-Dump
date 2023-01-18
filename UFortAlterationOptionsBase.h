// Class /Script/SaveTheWorldUI.FortAlterationOptionsBase
// Size: 0x338
class UFortAlterationOptionsBase : public UCommonUserWidget
{
	unsigned char unreflected_290[0x10]; // 0x290 (0x10) 
	class UClass* AlterationOptionClass; // 0x2a0 (0x8)
	class UCommonButtonGroupLegacy* AlterationOptionButtons; // 0x2a8 (0x8)
	unsigned char unreflected_2b0[0x20]; // 0x2b0 (0x20) 
	class UFortAlterableItem* Item; // 0x2d0 (0x8)
	int SlotIndex; // 0x2d8 (0x4)
	bool bUpgradeOptionExists; // 0x2dc (0x1)
	unsigned char unreflected_2dd[0x3]; // 0x2dd (0x3) 
	struct FAlterationOption UpgradeOption; // 0x2e0 (0x38)
	struct TArray<struct FAlterationOption> RespecOptions; // 0x318 (0x10)
	unsigned char padding_328[0x10]; // 0x328 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.ProcessAlterationOptions (Underlying native function: ProcessAlterationOptions 0x7599b9c)
	void ProcessAlterationOptions(bool& bIntroAlterations); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.OnItemChanged (Has no native function)
	void OnItemChanged(bool& bIntroAlterations); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.OnGenerateOption (Has no native function)
	void OnGenerateOption(enum EFortAlterationOptionType& OptionType, class UFortAlterationOption*& OptionWidget); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.IsValidAlterationSlot (Underlying native function: IsValidAlterationSlot 0x7599274)
	bool IsValidAlterationSlot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.HandleAlterationsOptionSelected (Underlying native function: HandleAlterationsOptionSelected 0x7597cd0)
	void HandleAlterationsOptionSelected(class UCommonButtonLegacy*& AlterationOptionButton, int& GroupIndex); // (Final | Native | Public)

	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.HandleAlterationsOptionHovered (Underlying native function: HandleAlterationsOptionHovered 0x7597cd0)
	void HandleAlterationsOptionHovered(class UCommonButtonLegacy*& AlterationOptionButton, int& GroupIndex); // (Final | Native | Public)

	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.DoAlterationOptionsExist (Underlying native function: DoAlterationOptionsExist 0x7595af8)
	bool DoAlterationOptionsExist(enum EFortAlterationOptionType& OptionType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

