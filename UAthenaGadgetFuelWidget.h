// Class /Script/FortniteUI.AthenaGadgetFuelWidget
// Size: 0x2b8
class UAthenaGadgetFuelWidget : public UCommonUserWidget
{
	struct TWeakObjectPtr<class UAthenaGadgetItemDefinition> AthenaGadgetItemDefinition; // 0x290 (0x8)
	enum EFortFuelGadgetVisualType FortFuelGadgetVisualType; // 0x298 (0x1)
	unsigned char unreflected_299[0x7]; // 0x299 (0x7) 
	class UFortFuelGaugeIndicator* FuelGaugeIndicatorMain; // 0x2a0 (0x8)
	class UCommonNumericTextBlock* CurrentChargesText; // 0x2a8 (0x8)
	unsigned char padding_2b0[0x8]; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaGadgetFuelWidget.SetItem (Underlying native function: SetItem 0x259a174)
	void SetItem(class UFortWorldItem*& Item); // (Final | Native | Protected | BlueprintCallable)
};

