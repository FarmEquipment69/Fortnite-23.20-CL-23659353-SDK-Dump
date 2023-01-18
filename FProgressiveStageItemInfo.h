// ScriptStruct /Script/FortniteUI.ProgressiveStageItemInfo
// Size: 0x70
struct FProgressiveStageItemInfo
{
	struct TArray<class UFortVariantTokenType*> VariantTokens; // 0x0 (0x10)
	unsigned char unreflected_10[0x10]; // 0x10 (0x10) 
	struct FText OverrideName; // 0x20 (0x18)
	struct TWeakObjectPtr<class UMaterialInterface> TileMaterial; // 0x38 (0x28)
	bool bHidden; // 0x60 (0x1)
	bool bAllowPreviewStyles; // 0x61 (0x1)
	bool bIsLocked; // 0x62 (0x1)
	unsigned char unreflected_63[0x1]; // 0x63 (0x1) 
	int AdditionalMonthsRequired; // 0x64 (0x4)
	int StageIndex; // 0x68 (0x4)
	unsigned char padding_6c[0x4]; // 0x6c (0x4)
};

