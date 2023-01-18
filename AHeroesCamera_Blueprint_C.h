// BlueprintGeneratedClass /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C
// Size: 0xa08
class AHeroesCamera_Blueprint_C : public AFortCameraBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x9f0 (0x8)
	bool MouseDown; // 0x9f8 (0x1)
	unsigned char unreflected_9f9[0x7]; // 0x9f9 (0x7) 
	class AFortPlayerPawn* CachedPawn; // 0xa00 (0x8)

	/* Functions */

	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.HandleMousePress (Has no native function)
	void HandleMousePress(class UFortFrontEndContext*& CallFuncGetContextReturnValue, class AFortPlayerPawn*& CallFuncGetHeroPlayerPawnByIndexReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.HandleMouseRelease (Has no native function)
	void HandleMouseRelease(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3 (Has no native function)
	void InpActEvtLeftMouseButtonK2NodeInputKeyEvent3(struct FKey& Key); // (BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2 (Has no native function)
	void InpActEvtLeftMouseButtonK2NodeInputKeyEvent2(struct FKey& Key); // (BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1 (Has no native function)
	void InpActEvtRightMouseButtonK2NodeInputKeyEvent1(struct FKey& Key); // (BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0 (Has no native function)
	void InpActEvtRightMouseButtonK2NodeInputKeyEvent0(struct FKey& Key); // (BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.BP_OnActivated (Has no native function)
	void BPOnActivated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.BP_OnDeactivated (Has no native function)
	void BPOnDeactivated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ExecuteUbergraph_HeroesCamera_Blueprint (Has no native function)
	void ExecuteUbergraphHeroesCameraBlueprint(int& EntryPoint, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue, struct FKey& TempstructVariable, struct FKey& K2NodeInputKeyEventKey1, struct FKey& K2NodeInputKeyEventKey, struct FKey& TempstructVariable1, int& TempintArrayIndexVariable, struct FKey& K2NodeInputKeyEventKey2, class AFortPlayerController*& K2NodeEventPlayerController1, class AFortPlayerController*& K2NodeEventPlayerController, class APlayerController*& CallFuncGetPlayerControllerReturnValue, struct FKey& K2NodeInputKeyEventKey3, float& K2NodeEventDeltaSeconds, class APlayerController*& CallFuncGetPlayerControllerReturnValue1, float& CallFuncGetInputMouseDeltaDeltaX, float& CallFuncGetInputMouseDeltaDeltaY, double& CallFuncMultiplyDoubleDoubleReturnValue, struct TArray<class ATVPostProcessBP_C*>& CallFuncGetAllActorsOfClassOutActors, bool& CallFuncIsValidReturnValue, class ATVPostProcessBP_C*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, struct FRotator& CallFuncK2GetActorRotationReturnValue, class APlayerController*& CallFuncGetPlayerControllerReturnValue2, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, double& CallFuncSubtractDoubleDoubleReturnValue, int& TempintLoopCounterVariable, struct FRotator& CallFuncMakeRotatorReturnValue, bool& CallFuncK2SetActorRotationReturnValue, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncSubtractDoubleDoubleAImplicitCast, float& CallFuncMakeRotatorYawImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

