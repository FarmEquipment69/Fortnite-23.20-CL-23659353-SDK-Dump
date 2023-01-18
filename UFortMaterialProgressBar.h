// Class /Script/FortniteUI.FortMaterialProgressBar
// Size: 0x390
class UFortMaterialProgressBar : public UCommonUserWidget
{
	class UClass* style; // 0x290 (0x8)
	struct FName BackgroundColorParamName; // 0x298 (0x4)
	struct FLinearColor BackgroundColor; // 0x29c (0x10)
	enum EFortMaterialProgressBarSectionOverflowBehavior OverflowBehavior; // 0x2ac (0x1)
	unsigned char unreflected_2ad[0x3]; // 0x2ad (0x3) 
	struct FFortMaterialProgressBarSectionInfo BarSectionInfo[0x4]; // 0x2b0 (0x34) (ARRAY) 
	class UCommonBorder* ProgressBar; // 0x380 (0x8)
	class UMaterialInstanceDynamic* ProgressBarMID; // 0x388 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortMaterialProgressBar.SetStyle (Underlying native function: SetStyle 0xa622fa8)
	void SetStyle(class UClass*& BarStyle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMaterialProgressBar.SetProgressBarSectionPercent (Underlying native function: SetProgressBarSectionPercent 0xa622928)
	void SetProgressBarSectionPercent(struct TEnumAsByte<EFortMaterialProgressBarSection>& BarSection, float& Percent); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMaterialProgressBar.SetProgressBarSectionColor (Underlying native function: SetProgressBarSectionColor 0xa622828)
	void SetProgressBarSectionColor(struct TEnumAsByte<EFortMaterialProgressBarSection>& BarSection, struct FLinearColor& Color, enum EFortMaterialProgressBarSectionColorNumber& ColorNumber); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortMaterialProgressBar.SetBackgroundColor (Underlying native function: SetBackgroundColor 0xa621b60)
	void SetBackgroundColor(struct FLinearColor& Color); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

