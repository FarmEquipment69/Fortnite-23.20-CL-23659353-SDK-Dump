// BlueprintGeneratedClass /Game/UI/Foundation/Environment/Cameras/FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C
// Size: 0xa08
class AFrontendCamera_VaultRotator_C : public AFortCameraBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x9f0 (0x8)
	class UCameraComponent* LoginCamera0; // 0x9f8 (0x8)
	class AVaultRotator_C* ActiveVaultRotator; // 0xa00 (0x8)

	/* Functions */

	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.SetVaultRotatorLighting (Has no native function)
	void SetVaultRotatorLighting(struct FName& ItemRotatorTag, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, struct TArray<class AVaultWorld_C*>& CallFuncGetAllActorsOfClassOutActors, class AVaultWorld_C*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, class AVaultRotator_C*& CallFuncGetVaultRotatorVaultRotator, bool& CallFuncLessIntIntReturnValue, bool& CallFuncActorHasTagReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.BP_OnActivated (Has no native function)
	void BPOnActivated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.BP_OnDeactivated (Has no native function)
	void BPOnDeactivated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.ExecuteUbergraph_FrontendCamera_VaultRotator (Has no native function)
	void ExecuteUbergraphFrontendCameraVaultRotator(int& EntryPoint, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue, int& TempintArrayIndexVariable, class AFortPlayerController*& K2NodeEventPlayerController1, struct TArray<class ATVPostProcessBP_C*>& CallFuncGetAllActorsOfClassOutActors, class AFortPlayerController*& K2NodeEventPlayerController, class ATVPostProcessBP_C*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, int& TempintLoopCounterVariable, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue); // (Final | 0x00008000 | HasDefaults)
};

