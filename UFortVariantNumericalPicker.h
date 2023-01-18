// Class /Script/FortniteUI.FortVariantNumericalPicker
// Size: 0x360
class UFortVariantNumericalPicker : public UFortVariantEditorWidgetBase
{
	int MinNum; // 0x318 (0x4)
	int MaxNum; // 0x31c (0x4)
	int NumericDelta; // 0x320 (0x4)
	int CurrentNumber; // 0x324 (0x4)
	class UFortCosmeticNumericalVariant* NumericalVariant; // 0x328 (0x8)
	class UCommonButtonLegacy* ButtonZeroDigitUp; // 0x330 (0x8)
	class UCommonButtonLegacy* ButtonZeroDigitDown; // 0x338 (0x8)
	class UCommonButtonLegacy* ButtonTenDigitUp; // 0x340 (0x8)
	class UCommonButtonLegacy* ButtonTenDigitDown; // 0x348 (0x8)
	class UCommonTextBlock* TextNumericalValue; // 0x350 (0x8)
	class UCommonTextBlock* TextVariantName; // 0x358 (0x8)
};

