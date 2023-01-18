// BlueprintGeneratedClass /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C
// Size: 0xa10
class AFortnitePartyHeroSelect_Camera_C : public AFortCameraBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x9f0 (0x8)
	class UCameraComponent* CameraActor0; // 0x9f8 (0x8)
	bool MouseDown; // 0xa00 (0x1)
	unsigned char unreflected_a01[0x7]; // 0xa01 (0x7) 
	class AFortPlayerPawn* CachedPawn; // 0xa08 (0x8)

	/* Functions */

	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMousePress (Has no native function)
	void HandleMousePress(class UFortFrontEndContext*& CallFuncGetContextReturnValue, class AFortPlayerPawn*& CallFuncGetHeroPlayerPawnByIndexReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMouseRelease (Has no native function)
	void HandleMouseRelease(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3 (Has no native function)
	void InpActEvtLeftMouseButtonK2NodeInputKeyEvent3(struct FKey& Key); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2 (Has no native function)
	void InpActEvtLeftMouseButtonK2NodeInputKeyEvent2(struct FKey& Key); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1 (Has no native function)
	void InpActEvtRightMouseButtonK2NodeInputKeyEvent1(struct FKey& Key); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0 (Has no native function)
	void InpActEvtRightMouseButtonK2NodeInputKeyEvent0(struct FKey& Key); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.BP_OnActivated (Has no native function)
	void BPOnActivated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.BP_OnDeactivated (Has no native function)
	void BPOnDeactivated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ExecuteUbergraph_FortnitePartyHeroSelect_Camera (Has no native function)
	void ExecuteUbergraphFortnitePartyHeroSelectCamera(int& EntryPoint, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue, struct FKey& K2NodeInputKeyEventKey1, struct FKey& K2NodeInputKeyEventKey, struct FKey& TempstructVariable, int& TempintArrayIndexVariable, struct FKey& TempstructVariable1, class AFortPlayerController*& K2NodeEventPlayerController1, class APlayerController*& CallFuncGetPlayerControllerReturnValue, class AFortPlayerController*& K2NodeEventPlayerController, struct FKey& K2NodeInputKeyEventKey3, float& K2NodeEventDeltaSeconds, class APlayerController*& CallFuncGetPlayerControllerReturnValue1, float& CallFuncGetInputMouseDeltaDeltaX, float& CallFuncGetInputMouseDeltaDeltaY, double& CallFuncMultiplyDoubleDoubleReturnValue, bool& CallFuncIsValidReturnValue, struct FRotator& CallFuncK2GetActorRotationReturnValue, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, double& CallFuncSubtractDoubleDoubleReturnValue, struct FRotator& CallFuncMakeRotatorReturnValue, struct FKey& K2NodeInputKeyEventKey2, bool& CallFuncK2SetActorRotationReturnValue, struct TArray<class ATVPostProcessBP_C*>& CallFuncGetAllActorsOfClassOutActors, class ATVPostProcessBP_C*& CallFuncArrayGetItem, struct FHitResult& CallFuncK2SetRelativeRotationSweepHitResult, int& CallFuncArrayLengthReturnValue, int& TempintLoopCounterVariable, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, class APlayerController*& CallFuncGetPlayerControllerReturnValue2, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncSubtractDoubleDoubleAImplicitCast, float& CallFuncMakeRotatorYawImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

