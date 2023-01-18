// WidgetBlueprintGeneratedClass /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C
// Size: 0x464
class USubgameSelectScreen_C : public UFortSubgameSelectScreen
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x430 (0x8)
	class UOverlay* ModeSelect; // 0x438 (0x8)
	class UProgressModalWidget_C* LeavingMatchmakingDialog; // 0x440 (0x8)
	class UMaterialInstanceDynamic* MIDKeyart; // 0x448 (0x8)
	struct TArray<class UTexture*> TextureCycle; // 0x450 (0x10)
	int TextureCycleIndex; // 0x460 (0x4)

	/* Functions */

	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.IsMinorShutdownWarningEnabled (Has no native function)
	void IsMinorShutdownWarningEnabled(bool& Enabled, class UFortGlobalUIContext*& CallFuncGetContextReturnValue, enum EFortUIFeatureState& CallFuncGetFeatureStateOutFeatureState, enum EFortUIFeatureStateReason& CallFuncGetFeatureStateOutReason, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmaking (Has no native function)
	bool IsBusyMatchmaking(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.AdvanceTextureCycle (Has no native function)
	void AdvanceTextureCycle(int& NextTextureIndex, int& CurrentTextureIndex, int& CallFuncArrayLengthReturnValue, class UTexture*& CallFuncArrayGetItem, class UTexture*& CallFuncArrayGetItem1, bool& CallFuncGreaterEqualIntIntReturnValue, int& CallFuncAddIntIntReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.InitializeTextureCycle (Has no native function)
	void InitializeTextureCycle(class UTexture*& CallFuncArrayGetItem, int& CallFuncArrayLastIndexReturnValue, class UTexture*& CallFuncArrayGetItem1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.OnEventEnded_57187EC14A536D0960088EB25BDF39E5 (Has no native function)
	void OnEventEnded57187EC14A536D0960088EB25BDF39E5(struct FString& EventName, struct FTimespan*& TimeUntilEnd, struct FTimespan*& TimeSinceBegin, float& TimespanRatio); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.OnEventUpdated_57187EC14A536D0960088EB25BDF39E5 (Has no native function)
	void OnEventUpdated57187EC14A536D0960088EB25BDF39E5(struct FString& EventName, struct FTimespan*& TimeUntilEnd, struct FTimespan*& TimeSinceBegin, float& TimespanRatio); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.OnEventActive_57187EC14A536D0960088EB25BDF39E5 (Has no native function)
	void OnEventActive57187EC14A536D0960088EB25BDF39E5(struct FString& EventName, struct FTimespan*& TimeUntilEnd, struct FTimespan*& TimeSinceBegin, float& TimespanRatio); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.BP_OnActivated (Has no native function)
	void BPOnActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen (Has no native function)
	void ExecuteUbergraphSubgameSelectScreen(int& EntryPoint, struct FString& K2NodeCustomEventEventName2, struct FTimespan*& K2NodeCustomEventTimeUntilEnd2, struct FTimespan*& K2NodeCustomEventTimeSinceBegin2, float& K2NodeCustomEventTimeSpanRatio2, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FString& K2NodeCustomEventEventName1, struct FTimespan*& K2NodeCustomEventTimeUntilEnd1, struct FTimespan*& K2NodeCustomEventTimeSinceBegin1, float& K2NodeCustomEventTimeSpanRatio1, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FString& K2NodeCustomEventEventName, struct FTimespan*& K2NodeCustomEventTimeUntilEnd, struct FTimespan*& K2NodeCustomEventTimeSinceBegin, float& K2NodeCustomEventTimeSpanRatio, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, float& TemprealVariable, struct FTimespan*& TempstructVariable, struct FTimespan*& TempstructVariable1, struct FString& TempstringVariable, class UFortAsyncAction_CalendarEventWatcher*& CallFuncWatchCalendarEventReturnValue, bool& CallFuncIsValidReturnValue); // (Final | 0x00008000)
};

