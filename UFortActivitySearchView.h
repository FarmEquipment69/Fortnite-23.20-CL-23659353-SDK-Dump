// Class /Script/DiscoveryBrowserUI.FortActivitySearchView
// Size: 0x5e0
class UFortActivitySearchView : public UFortActivityBrowserView
{
	unsigned char unreflected_488[0x8]; // 0x488 (0x8) 
	struct FName TabNameID; // 0x490 (0x4)
	unsigned char unreflected_494[0xc]; // 0x494 (0xc) 
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x4a0 (0xe0)
	class UEditableText* EditableTextIslandLink; // 0x580 (0x8)
	unsigned char padding_588[0x58]; // 0x588 (0x58)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivitySearchView.OnActivityValidated (Has no native function)
	void OnActivityValidated(enum EFortActivityValidationResult& ValidateResult); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivitySearchView.OnActivityClear (Has no native function)
	void OnActivityClear(); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivitySearchView.HandleTextCommitted (Underlying native function: HandleTextCommitted 0x74211f4)
	void HandleTextCommitted(struct FText& InText, struct TEnumAsByte<ETextCommit>& CommitInfo); // (Final | Native | Private | HasOutParms)

	// Function /Script/DiscoveryBrowserUI.FortActivitySearchView.HandleTextChanged (Underlying native function: HandleTextChanged 0x7421138)
	void HandleTextChanged(struct FText& Text); // (Final | Native | Private | HasOutParms)
};

