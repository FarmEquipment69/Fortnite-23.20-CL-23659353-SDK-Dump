// Class /Script/CommonUI.CommonTextStyle
// Size: 0x1a0
class UCommonTextStyle : public UObject
{
	struct FSlateFontInfo Font; // 0x28 (0x58)
	struct FLinearColor Color; // 0x80 (0x10)
	bool bUsesDropShadow; // 0x90 (0x1)
	unsigned char unreflected_91[0x7]; // 0x91 (0x7) 
	struct FVector2D ShadowOffset; // 0x98 (0x10)
	struct FLinearColor ShadowColor; // 0xa8 (0x10)
	struct FMargin Margin; // 0xb8 (0x10)
	unsigned char unreflected_c8[0x8]; // 0xc8 (0x8) 
	struct FSlateBrush StrikeBrush; // 0xd0 (0xc0)
	float LineHeightPercentage; // 0x190 (0x4)
	unsigned char padding_194[0xc]; // 0x194 (0xc)

	/* Functions */

	// Function /Script/CommonUI.CommonTextStyle.GetStrikeBrush (Underlying native function: GetStrikeBrush 0x6a4bbe4)
	void GetStrikeBrush(struct FSlateBrush& OutStrikeBrush); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonTextStyle.GetShadowOffset (Underlying native function: GetShadowOffset 0x6a4bb3c)
	void GetShadowOffset(struct FVector2D& OutShadowOffset); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonTextStyle.GetShadowColor (Underlying native function: GetShadowColor 0x6a4bab0)
	void GetShadowColor(struct FLinearColor& OutColor); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonTextStyle.GetMargin (Underlying native function: GetMargin 0x6a4b470)
	void GetMargin(struct FMargin& OutMargin); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonTextStyle.GetLineHeightPercentage (Underlying native function: GetLineHeightPercentage 0x6a4b3b4)
	float GetLineHeightPercentage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonTextStyle.GetFont (Underlying native function: GetFont 0x6a4b194)
	void GetFont(struct FSlateFontInfo& OutFont); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonTextStyle.GetColor (Underlying native function: GetColor 0x6a4adf0)
	void GetColor(struct FLinearColor& OutColor); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

