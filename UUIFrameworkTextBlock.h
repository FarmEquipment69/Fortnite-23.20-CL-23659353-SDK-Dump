// Class /Script/UIFramework.UIFrameworkTextBlock
// Size: 0xb0
class UUIFrameworkTextBlock : public UUIFrameworkWidget
{
	struct FText Text; // 0x90 (0x18)
	struct TEnumAsByte<ETextJustify> Justification; // 0xa8 (0x1)
	unsigned char padding_a9[0x7]; // 0xa9 (0x7)

	/* Functions */

	// Function /Script/UIFramework.UIFrameworkTextBlock.SetText (Underlying native function: SetText 0x70c5c64)
	void SetText(struct FText& Text); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/UIFramework.UIFrameworkTextBlock.SetJustification (Underlying native function: SetJustification 0x52efb80)
	void SetJustification(struct TEnumAsByte<ETextJustify>& Justification); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/UIFramework.UIFrameworkTextBlock.OnRep_Text (Underlying native function: OnRep_Text 0x70c5810)
	void OnRepText(); // (Final | Native | Private)

	// Function /Script/UIFramework.UIFrameworkTextBlock.OnRep_Justification (Underlying native function: OnRep_Justification 0x52efaa0)
	void OnRepJustification(); // (Final | Native | Private)

	// Function /Script/UIFramework.UIFrameworkTextBlock.GetText (Underlying native function: GetText 0x70c569c)
	struct FText GetText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UIFramework.UIFrameworkTextBlock.GetJustification (Underlying native function: GetJustification 0x52efa40)
	struct TEnumAsByte<ETextJustify> GetJustification(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

