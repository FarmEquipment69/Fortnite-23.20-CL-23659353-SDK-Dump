// BlueprintGeneratedClass /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C
// Size: 0xa61
class AFortnitePartyBackdrop_Camera_C : public AFortCameraBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x9f0 (0x8)
	class UArrowComponent* Arrow; // 0x9f8 (0x8)
	struct FTransform SavedTransform; // 0xa00 (0x60)
	bool Active; // 0xa60 (0x1)

	/* Functions */

	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.BP_OnActivated (Has no native function)
	void BPOnActivated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.BP_OnDeactivated (Has no native function)
	void BPOnDeactivated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.Reset Location (Has no native function)
	void ResetLocation(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ManualActivate (Has no native function)
	void ManualActivate(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ExecuteUbergraph_FortnitePartyBackdrop_Camera (Has no native function)
	void ExecuteUbergraphFortnitePartyBackdropCamera(int& EntryPoint, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue, int& CallFuncAddIntIntReturnValue1, int& TempintLoopCounterVariable2, int& CallFuncAddIntIntReturnValue2, int& TempintArrayIndexVariable1, class AFortPlayerController*& K2NodeEventPlayerController1, struct TArray<class ATVPostProcessBP_C*>& CallFuncGetAllActorsOfClassOutActors, int& TempintArrayIndexVariable2, class ATVPostProcessBP_C*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, class AFortPlayerController*& K2NodeEventPlayerController, struct TArray<class ABP_FortniteLobbyLightSwitcher_C*>& CallFuncGetAllActorsOfClassOutActors1, class ABP_FortniteLobbyLightSwitcher_C*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue1, int& CallFuncArrayLengthReturnValue2, bool& CallFuncGreaterIntIntReturnValue, struct TArray<class ABP_FortniteLobbyLightSwitcher_C*>& CallFuncGetAllActorsOfClassOutActors2, class ABP_FortniteLobbyLightSwitcher_C*& CallFuncArrayGetItem2, int& CallFuncArrayLengthReturnValue3, bool& CallFuncLessIntIntReturnValue2, int& CallFuncArrayLengthReturnValue4, bool& CallFuncGreaterIntIntReturnValue1, struct FHitResult& CallFuncK2SetActorTransformSweepHitResult, bool& CallFuncK2SetActorTransformReturnValue); // (Final | 0x00008000 | HasDefaults)
};

