// BlueprintGeneratedClass /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Main.FrontendCamera_Main_C
// Size: 0xa00
class AFrontendCamera_Main_C : public AFortCameraBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x9f0 (0x8)
	class UCameraComponent* LoginCamera0; // 0x9f8 (0x8)

	/* Functions */

	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Main.FrontendCamera_Main_C.BP_OnActivated (Has no native function)
	void BPOnActivated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Main.FrontendCamera_Main_C.ExecuteUbergraph_FrontendCamera_Main (Has no native function)
	void ExecuteUbergraphFrontendCameraMain(int& EntryPoint, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue, int& TempintArrayIndexVariable, class AFortPlayerController*& K2NodeEventPlayerController, struct TArray<class ATVPostProcessBP_C*>& CallFuncGetAllActorsOfClassOutActors, int& TempintLoopCounterVariable, class ATVPostProcessBP_C*& CallFuncArrayGetItem, int& CallFuncAddIntIntReturnValue, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue); // (Final | 0x00008000 | HasDefaults)
};

