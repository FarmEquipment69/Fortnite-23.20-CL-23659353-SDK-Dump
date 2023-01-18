// WidgetBlueprintGeneratedClass /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C
// Size: 0x290
class UB_MusicEventInstanceWidget_C : public UUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x268 (0x8)
	class UUEFN_TextBlock_C* Text; // 0x270 (0x8)
	class UMusicEventInstance* EventInstance; // 0x278 (0x8)
	double Distance; // 0x280 (0x8)
	class UB_MusicEventDebugWidget_C* DebugWidget; // 0x288 (0x8)

	/* Functions */

	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.GetTextColor (Has no native function)
	struct FSlateColor GetTextColor(); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.GetFormatText (Has no native function)
	void GetFormatText(struct FText& Result, struct FText& CallFuncConvDoubleToTextReturnValue, float& CallFuncGetDistSqToListenerReturnValue, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData, double& CallFuncSqrtReturnValue, struct FString& CallFuncGetDisplayNameReturnValue, struct FText& CallFuncConvStringToTextReturnValue, int& CallFuncGetPriorityReturnValue, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData1, int64_t& CallFuncConvIntToInt64ReturnValue, class USoundBase*& CallFuncGetAssetReturnValue, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData2, struct FString& CallFuncGetDisplayNameReturnValue1, struct FMusicEventData& CallFuncGetEventDataReturnValue, struct FText& CallFuncConvStringToTextReturnValue1, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData3, struct FString& CallFuncGetDebugStringFromGameplayTagReturnValue, struct FString& CallFuncSplitLeftS, struct FString& CallFuncSplitRightS, bool& CallFuncSplitReturnValue, struct FText& CallFuncConvStringToTextReturnValue2, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData4, struct TArray<struct FFormatArgumentData>& K2NodeMakeArrayArray, struct FText& CallFuncFormatReturnValue, double& CallFuncSqrtAImplicitCast); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.BP_OnEntryReleased (Has no native function)
	void BPOnEntryReleased(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.BP_OnItemExpansionChanged (Has no native function)
	void BPOnItemExpansionChanged(bool& bIsExpanded); // (Event | Protected | BlueprintEvent)

	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.BP_OnItemSelectionChanged (Has no native function)
	void BPOnItemSelectionChanged(bool& bIsSelected); // (Event | Protected | BlueprintEvent)

	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.Tick (Has no native function)
	void Tick(struct FGeometry& MyGeometry, float& InDeltaTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.OnListItemObjectSet (Has no native function)
	void OnListItemObjectSet(class UObject*& ListItemObject); // (Event | Protected | BlueprintEvent)

	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.ExecuteUbergraph_B_MusicEventInstanceWidget (Has no native function)
	void ExecuteUbergraphBMusicEventInstanceWidget(int& EntryPoint, bool& CallFuncIsValidReturnValue, bool& K2NodeEventbIsExpanded, bool& K2NodeEventbIsSelected, struct FGeometry& K2NodeEventMyGeometry, float& K2NodeEventInDeltaTime, class UObject*& K2NodeEventListItemObject, class UMusicEventInstance*& K2NodeDynamicCastAsMusicEventInstance, bool& K2NodeDynamicCastbSuccess, struct FText& CallFuncGetFormatTextResult, struct FSlateColor& CallFuncGetTextColorReturnValue, bool& CallFuncIsValidReturnValue1); // (Final | 0x00008000 | HasDefaults)
};

