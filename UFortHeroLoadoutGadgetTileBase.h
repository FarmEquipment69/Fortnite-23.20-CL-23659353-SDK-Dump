// Class /Script/SaveTheWorldUI.FortHeroLoadoutGadgetTileBase
// Size: 0x2b0
class UFortHeroLoadoutGadgetTileBase : public UCommonUserWidget
{
	class UCommonTextBlock* TextGadgetName; // 0x290 (0x8)
	class UCommonLazyImage* ImageIcon; // 0x298 (0x8)
	class URichTextBlock* RichTextDescription; // 0x2a0 (0x8)
	class UFortGadgetItemDefinition* GadgetToRepresent; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutGadgetTileBase.SetGadgetToRepresent (Underlying native function: SetGadgetToRepresent 0x759a2f0)
	void SetGadgetToRepresent(class UFortGadgetItemDefinition*& GadgetItemDefinition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutGadgetTileBase.OnGadgetUpdated (Has no native function)
	void OnGadgetUpdated(bool& bIsValidGadget); // (Event | Public | BlueprintEvent)
};

