// WidgetBlueprintGeneratedClass /Game/UI/Login/QualitySelection/QualityModeSelectTile.QualityModeSelectTile_C
// Size: 0x14e1
class UQualityModeSelectTile_C : public UFortQualityModeTile
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1450 (0x8)
	class UWidgetAnimation* InAnOutro; // 0x1458 (0x8)
	class UWidgetAnimation* ConfirmSeleccion; // 0x1460 (0x8)
	class UWidgetAnimation* GameModeSelection; // 0x1468 (0x8)
	class UCommonBorder* BorderRecommended; // 0x1470 (0x8)
	class UImage* ConfirmSelectionFlash; // 0x1478 (0x8)
	class UImage* ConfirmSelectionShine; // 0x1480 (0x8)
	class UImage* DisabledGray; // 0x1488 (0x8)
	class UImage* Image140; // 0x1490 (0x8)
	class UImage* SelectedIcon; // 0x1498 (0x8)
	class UCommonTextBlock* TRecommended; // 0x14a0 (0x8)
	class UBorder* TagSelected; // 0x14a8 (0x8)
	class UCommonTextBlock* TextBlockAdditionalDownloadSize; // 0x14b0 (0x8)
	class UCommonTextBlock* TextBlockQualityDescription; // 0x14b8 (0x8)
	class UCommonTextBlock* TextBlockQualityLevelName; // 0x14c0 (0x8)
	class UCommonTextBlock* TextBlockTotalBuildSize; // 0x14c8 (0x8)
	class UImage* TileArt; // 0x14d0 (0x8)
	class UImage* UnhoveredVignette; // 0x14d8 (0x8)
	bool bIsRecommendedLevel; // 0x14e0 (0x1)

	/* Functions */

	// Function /Game/UI/Login/QualitySelection/QualityModeSelectTile.QualityModeSelectTile_C.Setup (Has no native function)
	void Setup(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/QualitySelection/QualityModeSelectTile.QualityModeSelectTile_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Login/QualitySelection/QualityModeSelectTile.QualityModeSelectTile_C.OnSelectedStateChanged (Has no native function)
	void OnSelectedStateChanged(bool& bIsSelected); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/QualitySelection/QualityModeSelectTile.QualityModeSelectTile_C.OnSizeInfoReceived (Has no native function)
	void OnSizeInfoReceived(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/QualitySelection/QualityModeSelectTile.QualityModeSelectTile_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Login/QualitySelection/QualityModeSelectTile.QualityModeSelectTile_C.ExecuteUbergraph_QualityModeSelectTile (Has no native function)
	void ExecuteUbergraphQualityModeSelectTile(int& EntryPoint, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, enum ESlateVisibility& K2NodeSelectDefault, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, bool& K2NodeEventbIsSelected, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue3, bool& K2NodeEventIsDesignTime, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue); // (Final | 0x00008000)
};

