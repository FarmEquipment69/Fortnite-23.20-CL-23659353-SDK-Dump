// Class /Script/FortniteUI.FortSignInWidget
// Size: 0x550
class UFortSignInWidget : public UCommonActivatablePanelLegacy
{
	unsigned char unreflected_4e0[0x10]; // 0x4e0 (0x10) 
	class UClass* NormalBorderStyle; // 0x4f0 (0x8)
	class UClass* HighlightBorderStyle; // 0x4f8 (0x8)
	struct FString ForgotPasswordURL; // 0x500 (0x10)
	unsigned char unreflected_510[0x10]; // 0x510 (0x10) 
	class UEditableText* EditTextEmail; // 0x520 (0x8)
	class UEditableText* EditTextPassword; // 0x528 (0x8)
	class UCommonBorder* BorderEmail; // 0x530 (0x8)
	class UCommonBorder* BorderPassword; // 0x538 (0x8)
	class UCommonButtonLegacy* ButtonSignIn; // 0x540 (0x8)
	class UCommonButtonLegacy* ButtonForgotPassword; // 0x548 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSignInWidget.UpdateSignInButton (Underlying native function: UpdateSignInButton 0x2235640)
	void UpdateSignInButton(struct FText& Text); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortSignInWidget.HandleTextCommitted (Underlying native function: HandleTextCommitted 0x2235148)
	void HandleTextCommitted(struct FText& Text, struct TEnumAsByte<ETextCommit>& CommitMethod); // (Final | Native | Protected | HasOutParms)
};

