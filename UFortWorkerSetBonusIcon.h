// Class /Script/SaveTheWorldUI.FortWorkerSetBonusIcon
// Size: 0x2a0
class UFortWorkerSetBonusIcon : public UCommonUserWidget
{
	struct FGameplayTag GameplayTag; // 0x290 (0x4)
	struct TEnumAsByte<EFortBrushSize> ImageSize; // 0x294 (0x1)
	unsigned char unreflected_295[0x3]; // 0x295 (0x3) 
	class UImage* Icon; // 0x298 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortWorkerSetBonusIcon.SetGameplayTag (Underlying native function: SetGameplayTag 0x75c1aa8)
	void SetGameplayTag(struct FGameplayTag& InGameplayTag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortWorkerSetBonusIcon.HandleDifferentGameplayTagSetBP (Has no native function)
	void HandleDifferentGameplayTagSetBP(); // (Event | Protected | BlueprintEvent)
};

