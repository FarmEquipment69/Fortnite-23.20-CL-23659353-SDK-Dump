// Class /Script/SaveTheWorldUI.FortSquadStatValueWithIcon
// Size: 0x318
class UFortSquadStatValueWithIcon : public UCommonUserWidget
{
	struct FGameplayAttribute Attribute; // 0x290 (0x38)
	struct FGameplayAttribute TeamAttribute; // 0x2c8 (0x38)
	struct TEnumAsByte<EFortBrushSize> ImageSize; // 0x300 (0x1)
	unsigned char unreflected_301[0x7]; // 0x301 (0x7) 
	class UCommonNumericTextBlock* Value; // 0x308 (0x8)
	class UImage* Icon; // 0x310 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadStatValueWithIcon.HandleDifferentAttributeSetBP (Has no native function)
	void HandleDifferentAttributeSetBP(); // (Event | Protected | BlueprintEvent)
};

