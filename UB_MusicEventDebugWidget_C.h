// WidgetBlueprintGeneratedClass /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C
// Size: 0x2a4
class UB_MusicEventDebugWidget_C : public UMusicEventSubsystemDebugWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x268 (0x8)
	class UBackgroundBlur* Background; // 0x270 (0x8)
	class UCommonListView* EventInstances; // 0x278 (0x8)
	struct FString AssetFilter; // 0x280 (0x10)
	struct TArray<class UMusicEventInstance*> Instances; // 0x290 (0x10)
	int FontSize; // 0x2a0 (0x4)

	/* Functions */

	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.FilterInstances (Has no native function)
	void FilterInstances(struct TArray<int>& IndicesToRemove, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable1, int& TempintLoopCounterVariable1, int& CallFuncSubtractIntIntReturnValue, bool& CallFuncGreaterEqualIntIntReturnValue, int& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, int& CallFuncSubtractIntIntReturnValue1, int& CallFuncMaxReturnValue, int& CallFuncArrayAddReturnValue, bool& CallFuncIsEmptyReturnValue, bool& CallFuncNotPreBoolReturnValue, int& CallFuncArrayLengthReturnValue1, class UMusicEventInstance*& CallFuncArrayGetItem1, bool& CallFuncLessIntIntReturnValue, class USoundBase*& CallFuncGetAssetReturnValue, struct FString& CallFuncGetDisplayNameReturnValue, bool& CallFuncContainsReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncBooleanANDReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.SetEventInstances (Has no native function)
	void SetEventInstances(struct TArray<class UMusicEventInstance*>& Instances); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.SetMusicEventPos (Has no native function)
	void SetMusicEventPos(double& X, double& Y); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.SetMusicEventAssetFilter (Has no native function)
	void SetMusicEventAssetFilter(struct FString& Filter); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.SetMusicEventFontSize (Has no native function)
	void SetMusicEventFontSize(int& Size); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.ExecuteUbergraph_B_MusicEventDebugWidget (Has no native function)
	void ExecuteUbergraphBMusicEventDebugWidget(int& EntryPoint, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, struct TArray<class UMusicEventInstance*>& K2NodeEventInstances, double& K2NodeCustomEventX, double& K2NodeCustomEventY, struct FVector2D& CallFuncMakeVector2DReturnValue, struct FString& K2NodeCustomEventFilter, struct FWidgetTransform& K2NodeMakeStructWidgetTransform, int& K2NodeCustomEventSize, struct TArray<class UUserWidget*>& CallFuncGetDisplayedEntryWidgetsReturnValue, int& CallFuncArrayLengthReturnValue, class UUserWidget*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, class UB_MusicEventInstanceWidget_C*& K2NodeDynamicCastAsBMusicEventInstanceWidget, bool& K2NodeDynamicCastbSuccess); // (Final | 0x00008000 | HasDefaults)
};

