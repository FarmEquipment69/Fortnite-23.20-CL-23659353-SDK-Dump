// Class /Script/FortniteUI.FortMultiFactorAuthWidget
// Size: 0x528
class UFortMultiFactorAuthWidget : public UCommonActivatablePanelLegacy
{
	class UCommonButtonLegacy* ButtonContinue; // 0x4e0 (0x8)
	class UCommonButtonLegacy* ButtonCancel; // 0x4e8 (0x8)
	class UCommonTextBlock* TextError; // 0x4f0 (0x8)
	class UEditableText* EditTextMultiFactorCode; // 0x4f8 (0x8)
	class UCommonTextBlock* TextPrompt; // 0x500 (0x8)
	unsigned char padding_508[0x20]; // 0x508 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.FortMultiFactorAuthWidget.HandleTextCommitted (Underlying native function: HandleTextCommitted 0x2236dd8)
	void HandleTextCommitted(struct FText& Text, struct TEnumAsByte<ETextCommit>& CommitMethod); // (Final | Native | Protected | HasOutParms)
};

