// BlueprintGeneratedClass /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C
// Size: 0xaa0
class AStoreCamera_Blueprint_C : public AFortCameraBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x9f0 (0x8)
	class UStaticMeshComponent* MeshDarkenBG; // 0x9f8 (0x8)
	class UCameraComponent* CameraPlaceholderGround; // 0xa00 (0x8)
	float ChoicePackNewTrack0ACA3841D4D5084BE3482FA8EBB7CE9C0; // 0xa08 (0x4)
	struct TEnumAsByte<ETimelineDirection> ChoicePackDirectionACA3841D4D5084BE3482FA8EBB7CE9C0; // 0xa0c (0x1)
	unsigned char unreflected_a0d[0x3]; // 0xa0d (0x3) 
	class UTimelineComponent* ChoicePack; // 0xa10 (0x8)
	float Timeline0NewTrack06555812E4B246E6144D3C99FC49F7FE9; // 0xa18 (0x4)
	struct TEnumAsByte<ETimelineDirection> Timeline0Direction6555812E4B246E6144D3C99FC49F7FE9; // 0xa1c (0x1)
	unsigned char unreflected_a1d[0x3]; // 0xa1d (0x3) 
	class UTimelineComponent* Timeline0; // 0xa20 (0x8)
	struct FVector CameraGroundLoc; // 0xa28 (0x18)
	struct FRotator CameraGroundRot; // 0xa40 (0x18)
	struct FVector CameraOriginalLoc; // 0xa58 (0x18)
	struct FRotator CameraOriginalRot; // 0xa70 (0x18)
	bool CameraInStartPos; // 0xa88 (0x1)
	unsigned char unreflected_a89[0x7]; // 0xa89 (0x7) 
	class AStorePinataMaster_Parent_C* PinataInLevel; // 0xa90 (0x8)
	class AStoreCardReveal_Parent_C* CardRevealInLevel; // 0xa98 (0x8)

	/* Functions */

	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(struct FRotator& CallFuncK2GetComponentRotationReturnValue, struct FRotator& CallFuncK2GetComponentRotationReturnValue1, struct FVector& CallFuncK2GetComponentLocationReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue1); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__FinishedFunc (Has no native function)
	void Timeline0FinishedFunc(); // (BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__UpdateFunc (Has no native function)
	void Timeline0UpdateFunc(); // (BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__FinishedFunc (Has no native function)
	void ChoicePackFinishedFunc(); // (BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__UpdateFunc (Has no native function)
	void ChoicePackUpdateFunc(); // (BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.BP_OnActivated (Has no native function)
	void BPOnActivated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.BP_OnDeactivated (Has no native function)
	void BPOnDeactivated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.OpeningCameraTransition (Has no native function)
	void OpeningCameraTransition(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ResetCamera (Has no native function)
	void ResetCamera(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.DarkenBGVisibility (Has no native function)
	void DarkenBGVisibility(bool& Enable); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-Out (Has no native function)
	void ChoicePackFOVOut(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-In (Has no native function)
	void ChoicePackFOVIn(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ExecuteUbergraph_StoreCamera_Blueprint (Has no native function)
	void ExecuteUbergraphStoreCameraBlueprint(int& EntryPoint, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue, double& CallFuncLerpReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, class AFortPlayerController*& K2NodeEventPlayerController1, class AFortPlayerController*& K2NodeEventPlayerController, double& CallFuncLerpReturnValue1, struct FRotator& CallFuncRLerpReturnValue, struct FVector& CallFuncVLerpReturnValue, struct FHitResult& CallFuncK2SetActorLocationAndRotationSweepHitResult, bool& CallFuncK2SetActorLocationAndRotationReturnValue, int& TempintArrayIndexVariable1, bool& K2NodeCustomEventEnable, struct TArray<class AStorePinataMaster_Parent_C*>& CallFuncGetAllActorsOfClassOutActors, class AStorePinataMaster_Parent_C*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, struct TArray<class AStoreCardReveal_Parent_C*>& CallFuncGetAllActorsOfClassOutActors1, class AStoreCardReveal_Parent_C*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, struct TArray<class ATVPostProcessBP_C*>& CallFuncGetAllActorsOfClassOutActors2, int& TempintLoopCounterVariable1, int& CallFuncArrayLengthReturnValue2, bool& CallFuncLessIntIntReturnValue1, int& CallFuncAddIntIntReturnValue1, int& TempintLoopCounterVariable2, bool& CallFuncLessIntIntReturnValue2, int& CallFuncAddIntIntReturnValue2, int& TempintArrayIndexVariable2, class ATVPostProcessBP_C*& CallFuncArrayGetItem2, bool& CallFuncIsValidReturnValue2, double& CallFuncLerpAlphaImplicitCast, float& K2NodeVariableSetFieldOfViewImplicitCast, double& CallFuncLerpAlphaImplicitCast1, float& K2NodeVariableSetFieldOfViewImplicitCast1); // (Final | 0x00008000 | HasDefaults)
};

