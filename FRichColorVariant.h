// ScriptStruct /Script/FortniteGame.RichColorVariant
// Size: 0x68
struct FRichColorVariant
{
	struct FLinearColor DefaultStartingColor; // 0x0 (0x10)
	struct TWeakObjectPtr<class UCustomDynamicColorSwatch> ColorSwatchForChoices; // 0x10 (0x28)
	bool bVariantPickerShouldShowHSV; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct TArray<struct TWeakObjectPtr<class UMaterialInterface>> MaterialsToAlter; // 0x40 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFXSystemAsset>> ParticlesToAlter; // 0x50 (0x10)
	struct FName ColorParamName; // 0x60 (0x4)
	unsigned char padding_64[0x4]; // 0x64 (0x4)
};

