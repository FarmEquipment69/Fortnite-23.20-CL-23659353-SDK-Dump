// Class /Script/SaveTheWorldUI.FortStatIcon
// Size: 0x2d8
class UFortStatIcon : public UCommonUserWidget
{
	struct FGameplayAttribute Attribute; // 0x290 (0x38)
	struct TEnumAsByte<EFortBrushSize> ImageSize; // 0x2c8 (0x1)
	unsigned char unreflected_2c9[0x7]; // 0x2c9 (0x7) 
	class UImage* Icon; // 0x2d0 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortStatIcon.SetAttribute (Underlying native function: SetAttribute 0x75c1578)
	void SetAttribute(struct FGameplayAttribute& InAttribute); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStatIcon.HandleDifferentAttributeSetBP (Has no native function)
	void HandleDifferentAttributeSetBP(); // (Event | Protected | BlueprintEvent)
};

