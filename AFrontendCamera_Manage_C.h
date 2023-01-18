// BlueprintGeneratedClass /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Manage.FrontendCamera_Manage_C
// Size: 0xa00
class AFrontendCamera_Manage_C : public AFortCameraBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x9f0 (0x8)
	class UCameraComponent* LoginCamera0; // 0x9f8 (0x8)

	/* Functions */

	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Manage.FrontendCamera_Manage_C.BP_OnActivated (Has no native function)
	void BPOnActivated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Manage.FrontendCamera_Manage_C.BP_OnDeactivated (Has no native function)
	void BPOnDeactivated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Manage.FrontendCamera_Manage_C.ExecuteUbergraph_FrontendCamera_Manage (Has no native function)
	void ExecuteUbergraphFrontendCameraManage(int& EntryPoint, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue, int& TempintArrayIndexVariable, class AFortPlayerController*& K2NodeEventPlayerController1, struct TArray<class ATVPostProcessBP_C*>& CallFuncGetAllActorsOfClassOutActors, class UFortGlobalUIContext*& CallFuncGetLocalPlayerSubSystemFromPlayerControllerReturnValue, class ATVPostProcessBP_C*& CallFuncArrayGetItem, bool& CallFuncIsInZoneReturnValue, bool& CallFuncNotPreBoolReturnValue, int& CallFuncArrayLengthReturnValue, class AFortPlayerController*& K2NodeEventPlayerController, struct TArray<class AVaultCharacterLightingBP_C*>& CallFuncGetAllActorsOfClassOutActors1, struct TArray<class AVaultCharacterLightingBP_C*>& CallFuncGetAllActorsOfClassOutActors2, class AVaultCharacterLightingBP_C*& CallFuncArrayGetItem1, class AVaultCharacterLightingBP_C*& CallFuncArrayGetItem2, int& TempintLoopCounterVariable, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue); // (Final | 0x00008000 | HasDefaults)
};

